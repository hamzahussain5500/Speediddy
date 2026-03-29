#!/usr/bin/env python3
"""
Racing Analyzer — Real-Time Dashboard Server
=============================================
Streams MCAP bag data frame-by-frame over WebSocket while emitting
structured JSON analysis snapshots.  Open http://localhost:8050 in a browser.

Usage:
    python dashboard_server.py                          # default: wheel_to_wheel bag
    python dashboard_server.py hackathon_fast_laps.mcap
    python dashboard_server.py --bag hackathon_good_lap.mcap
    python dashboard_server.py --speed 10               # 10x playback speed
"""

from __future__ import annotations

import argparse
import asyncio
import json
import sys
import time
from datetime import datetime, timezone
from pathlib import Path
from typing import Optional

import numpy as np
import uvicorn
from fastapi import FastAPI, WebSocket, WebSocketDisconnect
from fastapi.middleware.cors import CORSMiddleware
from fastapi.responses import HTMLResponse

# ── path setup ────────────────────────────────────────────────────────────────
WS_ROOT = Path(__file__).resolve().parent
SRC_DIR = WS_ROOT / "src" / "racing_analyzer"
sys.path.insert(0, str(SRC_DIR))

from app.core.geometry import Raceline, arc_length, series_stats
from app.core.loaders import build_raceline, build_boundaries
from app.core.corner_detection import detect_corners
from app.core.recommendations import generate_recommendations
from app.models.inputs import BoundaryData, Point2D, RacelinePoint
from app.models.outputs import CornerResult
from app.services.analysis_service import _compute_per_point_metrics, _build_corner_result
from mcap_ros2.reader import read_ros2_messages
import pandas as pd

# ── reference data ────────────────────────────────────────────────────────────

def load_raceline(raceline_type: str = "hybrid") -> Raceline:
    path = WS_ROOT / f"raceline_{raceline_type}.csv"
    df = pd.read_csv(path)
    points = [
        RacelinePoint(
            s=float(r["s"]), x=float(r["x"]), y=float(r["y"]),
            psi=float(r["psi"]), kappa=float(r["kappa"]),
            vx=float(r["vx"]), ax=float(r.get("ax", 0.0)),
        )
        for _, r in df.iterrows()
    ]
    return build_raceline(points)


def load_boundaries():
    path = WS_ROOT / "yas_marina_bnd.json"
    with open(path) as f:
        data = json.load(f)
    bd = BoundaryData(
        left=[Point2D(x=p[0], y=p[1]) for p in data["boundaries"]["left_border"]],
        right=[Point2D(x=p[0], y=p[1]) for p in data["boundaries"]["right_border"]],
    )
    return build_boundaries(bd)


def load_optimum_json(path: Path) -> dict:
    """Load the pre-computed corner analysis JSON."""
    with open(path) as f:
        return json.load(f)


def read_bag(mcap_path: Path):
    rows = []
    for m in read_ros2_messages(str(mcap_path), topics=["/constructor0/state_estimation"]):
        r = m.ros_msg
        rows.append((m.log_time.timestamp(), r.x_m, r.y_m, r.yaw_rad, r.v_mps))
    arr = np.array(rows, dtype=float)
    return arr[:, 0], arr[:, 1], arr[:, 2], arr[:, 3], arr[:, 4]


# ── analysis snapshot ─────────────────────────────────────────────────────────

def build_snapshot(
    frame_idx: int,
    timestamps: np.ndarray,
    xs: np.ndarray,
    ys: np.ndarray,
    yaws: np.ndarray,
    vxs: np.ndarray,
    raceline: Raceline,
    optimum: dict,
) -> dict:
    """
    Analyse trajectory up to frame_idx and return a structured JSON snapshot.
    """
    tx = xs[: frame_idx + 1]
    ty = ys[: frame_idx + 1]
    tyaw = yaws[: frame_idx + 1]
    tvx = vxs[: frame_idx + 1]

    idxs, distances, lat_devs, hdg_errs, spd_errs = _compute_per_point_metrics(
        raceline, tx, ty, tyaw, tvx
    )
    ref_s = raceline.s[idxs]
    corner_segs = detect_corners(raceline)
    corners: list[CornerResult] = [
        _build_corner_result(seg, raceline, ref_s, lat_devs, spd_errs, idxs, tvx)
        for seg in corner_segs
    ]
    recs = generate_recommendations(corners)

    lat_st = series_stats(lat_devs)
    spd_st = series_stats(spd_errs)
    hdg_st = series_stats(hdg_errs)

    elapsed = float(timestamps[frame_idx] - timestamps[0])

    # Current vehicle state
    current = {
        "frame": int(frame_idx),
        "elapsed_s": round(elapsed, 2),
        "x": round(float(tx[-1]), 3),
        "y": round(float(ty[-1]), 3),
        "speed_mps": round(float(tvx[-1]), 3),
        "speed_kmh": round(float(tvx[-1]) * 3.6, 1),
        "lateral_deviation_m": round(float(lat_devs[-1]), 3),
        "speed_error_mps": round(float(spd_errs[-1]), 3),
        "heading_error_rad": round(float(hdg_errs[-1]), 4),
        "dist_to_raceline_m": round(float(distances[-1]), 3),
    }

    # Running metrics summary
    metrics = {
        "lateral_deviation": {
            "mean_m": round(lat_st["mean"], 4),
            "rms_m": round(lat_st["rms"], 4),
            "max_abs_m": round(lat_st["max_abs"], 4),
            "p95_m": round(lat_st["p95"], 4),
        },
        "speed_error": {
            "mean_mps": round(spd_st["mean"], 4),
            "rms_mps": round(spd_st["rms"], 4),
            "max_abs_mps": round(spd_st["max_abs"], 4),
        },
        "heading_error": {
            "rms_deg": round(float(np.degrees(hdg_st["rms"])), 3),
            "max_abs_deg": round(float(np.degrees(hdg_st["max_abs"])), 3),
        },
        "path_length_m": round(float(arc_length(tx, ty)), 2),
        "points_analysed": len(tx),
    }

    # Corner analysis (only covered corners)
    corners_out = []
    for c in corners:
        co = {
            "id": c.id + 1,
            "label": c.label,
            "type": c.corner_type,
            "direction": c.turn_direction,
            "apex_s_m": c.apex_s,
            "severity_score": c.severity_score,
            "trajectory_coverage_pct": round(c.trajectory_coverage * 100, 1),
        }
        if c.speed_profile:
            co["speed_profile"] = {
                "entry_kmh": round(c.speed_profile.entry_vx * 3.6, 1),
                "apex_kmh": round(c.speed_profile.apex_vx * 3.6, 1),
                "exit_kmh": round(c.speed_profile.exit_vx * 3.6, 1),
                "ref_apex_kmh": round(c.speed_profile.ref_apex_vx * 3.6, 1),
                "mean_speed_error_mps": c.speed_profile.mean_speed_error,
            }
        if c.deviation_profile:
            co["deviation_profile"] = {
                "mean_lateral_m": c.deviation_profile.mean_lateral,
                "max_lateral_m": c.deviation_profile.max_lateral,
                "rms_lateral_m": c.deviation_profile.rms_lateral,
                "entry_lateral_m": c.deviation_profile.entry_lateral,
                "apex_lateral_m": c.deviation_profile.apex_lateral,
                "exit_lateral_m": c.deviation_profile.exit_lateral,
            }
        corners_out.append(co)

    # Recommendations
    recs_out = [
        {
            "corner_id": r.corner_id + 1,
            "corner_label": r.corner_label,
            "issue_type": r.issue_type,
            "priority": r.coaching_priority,
            "confidence": round(r.confidence, 2),
            "severity_score": round(r.severity_score, 3),
            "explanation": r.explanation,
            "recommendation": r.recommendation,
            "supporting_metrics": r.supporting_metrics,
        }
        for r in recs
    ]

    # Optimum reference corners (from pre-computed JSON)
    optimum_corners = optimum.get("corners", [])
    optimum_recs = optimum.get("recommendations", [])

    # Trajectory points for rendering (downsample to keep payload small)
    step = max(1, len(tx) // 500)
    traj_xy = [{"x": round(float(tx[i]), 2), "y": round(float(ty[i]), 2)} for i in range(0, len(tx), step)]

    return {
        "schema_version": 1,
        "timestamp_utc": datetime.now(timezone.utc).isoformat(),
        "source": {
            "bag": "",   # filled by caller
            "raceline": "hybrid",
            "optimum_json": "yas_marina_bnd_hybrid_corner_analysis.json",
        },
        "current_state": current,
        "running_metrics": metrics,
        "corners": corners_out,
        "recommendations": recs_out,
        "optimum_reference": {
            "corners": optimum_corners,
            "recommendations": optimum_recs,
        },
        "trajectory_preview": traj_xy,
    }


# ── FastAPI app ───────────────────────────────────────────────────────────────

app = FastAPI(title="Racing Analyzer Dashboard")
app.add_middleware(CORSMiddleware, allow_origins=["*"], allow_methods=["*"], allow_headers=["*"])

# Shared state (loaded once at startup)
_state: dict = {}


@app.on_event("startup")
async def _startup():
    global _state
    args = _state.get("args", {})
    bag_name = args.get("bag", "hackathon_wheel_to_wheel.mcap")
    bag_override = args.get("bag_override")
    bag_path = Path(bag_override) if bag_override else WS_ROOT / bag_name
    raceline_type = args.get("raceline", "hybrid")
    optimum_path = WS_ROOT / "outputs" / "yas_marina_bnd_hybrid_corner_analysis.json"

    print(f"  Loading raceline ({raceline_type})...", end=" ", flush=True)
    raceline = load_raceline(raceline_type)
    print(f"done — {raceline.n_points} pts, {raceline.total_length:.0f} m")

    print(f"  Loading boundaries...", end=" ", flush=True)
    left_bnd, right_bnd = load_boundaries()
    print("done")

    print(f"  Loading optimum JSON...", end=" ", flush=True)
    optimum = load_optimum_json(optimum_path)
    print("done")

    print(f"  Reading bag: {bag_path.name}...", end=" ", flush=True)
    if not bag_path.exists():
        print(f"\nERROR: {bag_path} not found.")
        sys.exit(1)
    timestamps, xs, ys, yaws, vxs = read_bag(bag_path)
    print(f"done — {len(timestamps)} msgs, {timestamps[-1]-timestamps[0]:.0f} s")

    # Build raceline/boundary geometry for dashboard (send once)
    rl_xy = [{"x": round(float(x), 2), "y": round(float(y), 2)}
             for x, y in zip(raceline.x, raceline.y)]
    lb_xy = [{"x": round(float(p[0]), 2), "y": round(float(p[1]), 2)} for p in left_bnd]
    rb_xy = [{"x": round(float(p[0]), 2), "y": round(float(p[1]), 2)} for p in right_bnd]

    # Corner apex markers from optimum JSON
    corner_markers = [
        {"x": round(c["x_apex"], 2), "y": round(c["y_apex"], 2),
         "label": c["turn_id"], "category": c["category"],
         "vx_apex_kmh": round(c["vx_apex_mps"] * 3.6, 1)}
        for c in optimum.get("corners", [])
    ]

    _state.update({
        "raceline": raceline,
        "left_bnd": lb_xy,
        "right_bnd": rb_xy,
        "raceline_xy": rl_xy,
        "corner_markers": corner_markers,
        "optimum": optimum,
        "timestamps": timestamps,
        "xs": xs, "ys": ys, "yaws": yaws, "vxs": vxs,
        "bag_name": bag_path.name,
        "speed_multiplier": args.get("speed", 5.0),
    })
    print("  Dashboard ready — open http://localhost:8050")


@app.get("/", response_class=HTMLResponse)
async def index():
    return HTMLResponse(DASHBOARD_HTML)


@app.get("/static-data")
async def static_data():
    """Return track geometry (sent once at page load)."""
    return {
        "raceline": _state["raceline_xy"],
        "left_boundary": _state["left_bnd"],
        "right_boundary": _state["right_bnd"],
        "corner_markers": _state["corner_markers"],
        "track_length_m": round(_state["raceline"].total_length, 2),
        "bag_name": _state["bag_name"],
        "optimum_properties": _state["optimum"].get("properties", {}),
    }


@app.websocket("/ws/stream")
async def stream(ws: WebSocket):
    """Stream analysis snapshots frame-by-frame over WebSocket."""
    await ws.accept()
    timestamps = _state["timestamps"]
    xs = _state["xs"]
    ys = _state["ys"]
    yaws = _state["yaws"]
    vxs = _state["vxs"]
    raceline = _state["raceline"]
    optimum = _state["optimum"]
    bag_name = _state["bag_name"]
    speed_mult = _state["speed_multiplier"]

    n = len(timestamps)
    # Adaptive frame step: aim for ~20 fps of analysis frames
    # Analysis every K data points
    analysis_step = max(1, n // 2000)

    try:
        # Send ready signal
        await ws.send_json({"type": "ready", "total_frames": n, "analysis_step": analysis_step})

        frame_idx = 0
        last_send_ts = time.monotonic()

        while frame_idx < n:
            # Compute inter-frame delay based on real timestamps / speed multiplier
            if frame_idx + analysis_step < n:
                real_dt = float(timestamps[frame_idx + analysis_step] - timestamps[frame_idx])
                sleep_dt = max(0.01, real_dt / speed_mult)
            else:
                sleep_dt = 0.05

            await asyncio.sleep(sleep_dt)

            snap = build_snapshot(
                frame_idx, timestamps, xs, ys, yaws, vxs, raceline, optimum
            )
            snap["source"]["bag"] = bag_name
            snap["type"] = "snapshot"

            await ws.send_json(snap)
            frame_idx = min(n - 1, frame_idx + analysis_step)

            if frame_idx == n - 1:
                snap["type"] = "final"
                snap["source"]["bag"] = bag_name
                await ws.send_json(snap)
                break

    except WebSocketDisconnect:
        pass
    except Exception as e:
        try:
            await ws.send_json({"type": "error", "message": str(e)})
        except Exception:
            pass


# ── HTML dashboard ────────────────────────────────────────────────────────────

DASHBOARD_HTML = r"""<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<title>Racing Analyzer — Live Dashboard</title>
<script src="https://cdn.plot.ly/plotly-2.32.0.min.js"></script>
<style>
  * { box-sizing: border-box; margin: 0; padding: 0; }
  body { background: #0d0d0d; color: #e0e0e0; font-family: 'Courier New', monospace; font-size: 13px; }

  #header {
    background: #111; border-bottom: 1px solid #222;
    padding: 8px 16px; display: flex; align-items: center; gap: 16px;
  }
  #header h1 { font-size: 16px; color: #f0c040; letter-spacing: 1px; }
  #status-badge {
    padding: 3px 10px; border-radius: 3px; font-size: 11px; font-weight: bold;
    background: #333; color: #aaa;
  }
  #status-badge.live { background: #1a4a1a; color: #4caf50; }
  #status-badge.done { background: #1a1a4a; color: #64b5f6; }
  #bag-label { color: #aaa; font-size: 11px; }

  #main { display: grid; grid-template-columns: 1fr 420px; height: calc(100vh - 42px); }

  /* Left: track map */
  #map-panel { padding: 8px; display: flex; flex-direction: column; gap: 8px; }
  #track-map { flex: 1; min-height: 0; }

  /* Metric bar below map */
  #metric-bar {
    display: grid; grid-template-columns: repeat(6, 1fr);
    gap: 6px; padding: 6px 0;
  }
  .metric-card {
    background: #181818; border: 1px solid #2a2a2a; border-radius: 4px;
    padding: 6px 8px; text-align: center;
  }
  .metric-card .label { font-size: 10px; color: #888; text-transform: uppercase; }
  .metric-card .value { font-size: 18px; font-weight: bold; color: #f0c040; margin-top: 2px; }
  .metric-card .unit { font-size: 10px; color: #666; }

  /* Right: panels */
  #right-panel {
    border-left: 1px solid #1e1e1e; display: flex; flex-direction: column;
    overflow: hidden;
  }
  .panel-tabs {
    display: flex; background: #111; border-bottom: 1px solid #1e1e1e;
  }
  .tab-btn {
    flex: 1; padding: 7px; cursor: pointer; background: none; border: none;
    color: #888; font-size: 11px; font-family: inherit; text-transform: uppercase;
    letter-spacing: 0.5px; border-bottom: 2px solid transparent;
  }
  .tab-btn.active { color: #f0c040; border-bottom-color: #f0c040; }
  .tab-content { flex: 1; overflow-y: auto; padding: 8px; display: none; }
  .tab-content.active { display: block; }

  /* JSON viewer */
  #json-view {
    background: #111; border-radius: 4px; padding: 8px;
    font-size: 11px; line-height: 1.5; white-space: pre-wrap; word-break: break-all;
    color: #c8e6c9; height: 100%; min-height: 300px;
  }

  /* Recommendations */
  .rec-card {
    background: #181818; border-left: 3px solid #555;
    border-radius: 3px; padding: 8px 10px; margin-bottom: 8px;
  }
  .rec-card.critical { border-left-color: #f44336; }
  .rec-card.high { border-left-color: #ff9800; }
  .rec-card.medium { border-left-color: #ffeb3b; }
  .rec-card.low { border-left-color: #4caf50; }
  .rec-header { display: flex; justify-content: space-between; margin-bottom: 4px; }
  .rec-corner { font-weight: bold; color: #f0c040; }
  .rec-priority { font-size: 10px; font-weight: bold; padding: 1px 6px; border-radius: 2px; }
  .rec-priority.critical { background: #4a1010; color: #f44336; }
  .rec-priority.high { background: #4a2a00; color: #ff9800; }
  .rec-priority.medium { background: #4a4a00; color: #ffeb3b; }
  .rec-priority.low { background: #0a3a0a; color: #4caf50; }
  .rec-issue { color: #aaa; font-size: 11px; text-transform: uppercase; letter-spacing: 0.5px; margin-bottom: 3px; }
  .rec-text { color: #ccc; font-size: 12px; }
  .rec-action { color: #81d4fa; font-size: 12px; margin-top: 3px; }
  .rec-action::before { content: "→ "; }

  /* Corners table */
  .corner-card {
    background: #181818; border: 1px solid #222; border-radius: 3px;
    padding: 8px 10px; margin-bottom: 6px;
  }
  .corner-header { display: flex; gap: 8px; align-items: center; margin-bottom: 5px; }
  .corner-label { font-weight: bold; color: #e0e0e0; }
  .corner-type { font-size: 10px; background: #2a2a2a; padding: 1px 6px; border-radius: 10px; color: #aaa; }
  .corner-dir { font-size: 10px; color: #888; }
  .corner-sev { font-size: 10px; margin-left: auto; }
  .corner-grid { display: grid; grid-template-columns: 1fr 1fr; gap: 3px 10px; font-size: 11px; }
  .corner-grid .k { color: #888; }
  .corner-grid .v { color: #e0e0e0; }
  .no-data { color: #555; font-style: italic; text-align: center; padding: 20px; }

  /* Speed chart */
  #speed-chart { height: 220px; }
  #dev-chart { height: 220px; }

  #progress-bar-wrap { height: 4px; background: #1a1a1a; }
  #progress-bar { height: 4px; background: #f0c040; width: 0%; transition: width 0.3s; }

  ::-webkit-scrollbar { width: 5px; }
  ::-webkit-scrollbar-track { background: #111; }
  ::-webkit-scrollbar-thumb { background: #333; border-radius: 3px; }
</style>
</head>
<body>

<div id="header">
  <h1>RACING ANALYZER</h1>
  <span id="status-badge">CONNECTING</span>
  <span id="bag-label">—</span>
  <span style="margin-left:auto; color:#555; font-size:11px;" id="timestamp-label"></span>
</div>

<div id="progress-bar-wrap"><div id="progress-bar"></div></div>

<div id="main">
  <div id="map-panel">
    <div id="track-map"></div>
    <div id="metric-bar">
      <div class="metric-card">
        <div class="label">Speed</div>
        <div class="value" id="m-speed">—</div>
        <div class="unit">km/h</div>
      </div>
      <div class="metric-card">
        <div class="label">Elapsed</div>
        <div class="value" id="m-elapsed">—</div>
        <div class="unit">s</div>
      </div>
      <div class="metric-card">
        <div class="label">Lat Dev</div>
        <div class="value" id="m-latdev">—</div>
        <div class="unit">m (cur)</div>
      </div>
      <div class="metric-card">
        <div class="label">Lat RMS</div>
        <div class="value" id="m-latrms">—</div>
        <div class="unit">m (avg)</div>
      </div>
      <div class="metric-card">
        <div class="label">Spd Error</div>
        <div class="value" id="m-spderr">—</div>
        <div class="unit">m/s</div>
      </div>
      <div class="metric-card">
        <div class="label">Points</div>
        <div class="value" id="m-pts">—</div>
        <div class="unit">analysed</div>
      </div>
    </div>
  </div>

  <div id="right-panel">
    <div class="panel-tabs">
      <button class="tab-btn active" onclick="switchTab('recs')">Recommendations</button>
      <button class="tab-btn" onclick="switchTab('corners')">Corners</button>
      <button class="tab-btn" onclick="switchTab('charts')">Charts</button>
      <button class="tab-btn" onclick="switchTab('json')">JSON</button>
    </div>
    <div id="tab-recs" class="tab-content active">
      <div id="recs-container"><p class="no-data">Waiting for data…</p></div>
    </div>
    <div id="tab-corners" class="tab-content">
      <div id="corners-container"><p class="no-data">Waiting for data…</p></div>
    </div>
    <div id="tab-charts" class="tab-content">
      <div id="speed-chart"></div>
      <div id="dev-chart"></div>
    </div>
    <div id="tab-json" class="tab-content">
      <pre id="json-view">Connecting…</pre>
    </div>
  </div>
</div>

<script>
// ── globals ──────────────────────────────────────────────────────────────────
let mapInited = false;
let totalFrames = 0;
let speedHistory = [], devHistory = [], timeHistory = [];
let chartsInited = false;
const MAX_HISTORY = 600;

// ── tab switching ─────────────────────────────────────────────────────────────
function switchTab(name) {
  document.querySelectorAll('.tab-btn').forEach((b,i) => {
    const names = ['recs','corners','charts','json'];
    b.classList.toggle('active', names[i] === name);
  });
  document.querySelectorAll('.tab-content').forEach(el => el.classList.remove('active'));
  document.getElementById('tab-' + name).classList.add('active');
  if (name === 'charts' && chartsInited) { Plotly.Plots.resize('speed-chart'); Plotly.Plots.resize('dev-chart'); }
}

// ── init track map ─────────────────────────────────────────────────────────
async function initMap() {
  const res = await fetch('/static-data');
  const d = await res.json();

  document.getElementById('bag-label').textContent = d.bag_name;

  const rl = d.raceline, lb = d.left_boundary, rb = d.right_boundary;
  const cm = d.corner_markers || [];

  const traces = [
    { name: 'Left boundary',  x: lb.map(p=>p.x), y: lb.map(p=>p.y), mode:'lines', line:{color:'#444',width:1.5}, hoverinfo:'none' },
    { name: 'Right boundary', x: rb.map(p=>p.x), y: rb.map(p=>p.y), mode:'lines', line:{color:'#444',width:1.5}, hoverinfo:'none' },
    { name: 'Optimal raceline', x: rl.map(p=>p.x), y: rl.map(p=>p.y), mode:'lines', line:{color:'#f0c04066',width:1.5,dash:'dot'}, hoverinfo:'name' },
    { name: 'Trajectory', x: [], y: [], mode:'lines', line:{color:'#00e5ff',width:2}, hoverinfo:'none' },
    { name: 'Current pos', x: [], y: [], mode:'markers', marker:{color:'#ff1744',size:8,symbol:'circle'}, hoverinfo:'none' },
    {
      name: 'Apex markers',
      x: cm.map(c=>c.x), y: cm.map(c=>c.y),
      text: cm.map(c=>`${c.label}<br>${c.category}<br>${c.vx_apex_kmh} km/h`),
      mode:'markers+text', textposition:'top center', textfont:{size:9,color:'#ffeb3b'},
      marker:{color:'#ffeb3b',size:7,symbol:'diamond'}, hovertemplate:'%{text}<extra></extra>'
    },
  ];

  const layout = {
    paper_bgcolor:'#0d0d0d', plot_bgcolor:'#111',
    margin:{t:4,b:4,l:4,r:4},
    xaxis:{showgrid:false, zeroline:false, showticklabels:false, color:'#333'},
    yaxis:{showgrid:false, zeroline:false, showticklabels:false, scaleanchor:'x', color:'#333'},
    legend:{x:0,y:1,bgcolor:'rgba(0,0,0,0.5)',font:{color:'#aaa',size:10}},
    showlegend: true,
    autosize: true,
    uirevision: 'track',
  };

  Plotly.newPlot('track-map', traces, layout, {responsive:true, displayModeBar:false});
  mapInited = true;
}

// ── update map with new trajectory ───────────────────────────────────────────
function updateMap(snap) {
  if (!mapInited) return;
  const traj = snap.trajectory_preview || [];
  const cur = snap.current_state;
  Plotly.restyle('track-map', {
    x: [traj.map(p=>p.x)],
    y: [traj.map(p=>p.y)],
  }, [3]);
  Plotly.restyle('track-map', {
    x: [[cur.x]],
    y: [[cur.y]],
  }, [4]);
}

// ── init charts ───────────────────────────────────────────────────────────────
function initCharts() {
  const layout = (title, yaxis) => ({
    paper_bgcolor:'#0d0d0d', plot_bgcolor:'#111',
    margin:{t:24,b:28,l:44,r:8},
    title:{text:title,font:{color:'#888',size:11},x:0.02},
    xaxis:{color:'#444',gridcolor:'#1a1a1a',title:{text:'elapsed s',font:{color:'#555',size:10}}},
    yaxis:{color:'#444',gridcolor:'#1a1a1a',title:{text:yaxis,font:{color:'#555',size:10}}},
    showlegend:false, autosize:true, uirevision:'chart',
  });
  Plotly.newPlot('speed-chart', [{x:[],y:[],mode:'lines',line:{color:'#f0c040',width:1.5}}],
    layout('Speed (km/h)','km/h'), {responsive:true,displayModeBar:false});
  Plotly.newPlot('dev-chart',
    [{x:[],y:[],mode:'lines',line:{color:'#00e5ff',width:1.5},name:'lateral'},
     {x:[],y:[],mode:'lines',line:{color:'#ff9800',width:1.5,dash:'dot'},name:'spd err'}],
    layout('Lateral Dev (m) & Speed Error (m/s)','m / m/s'), {responsive:true,displayModeBar:false});
  chartsInited = true;
}

function updateCharts(snap) {
  if (!chartsInited) return;
  const t = snap.current_state.elapsed_s;
  const spd = snap.current_state.speed_kmh;
  const ld  = snap.current_state.lateral_deviation_m;
  const se  = snap.current_state.speed_error_mps;

  speedHistory.push(spd); devHistory.push(ld); timeHistory.push(t);
  const se_hist = (window._seHist = window._seHist || []);
  se_hist.push(se);

  if (speedHistory.length > MAX_HISTORY) { speedHistory.shift(); devHistory.shift(); timeHistory.shift(); se_hist.shift(); }

  Plotly.restyle('speed-chart', {x:[timeHistory], y:[speedHistory]}, [0]);
  Plotly.restyle('dev-chart', {x:[timeHistory,timeHistory], y:[devHistory, se_hist]}, [0,1]);
}

// ── update metric bar ─────────────────────────────────────────────────────────
function updateMetrics(snap) {
  const c = snap.current_state, m = snap.running_metrics;
  document.getElementById('m-speed').textContent   = c.speed_kmh.toFixed(0);
  document.getElementById('m-elapsed').textContent = c.elapsed_s.toFixed(1);
  const ld = c.lateral_deviation_m;
  const ldEl = document.getElementById('m-latdev');
  ldEl.textContent = (ld >= 0 ? '+' : '') + ld.toFixed(2);
  ldEl.style.color = Math.abs(ld) > 1.5 ? '#f44336' : Math.abs(ld) > 0.8 ? '#ff9800' : '#4caf50';
  document.getElementById('m-latrms').textContent  = m.lateral_deviation.rms_m.toFixed(2);
  const se = c.speed_error_mps;
  const seEl = document.getElementById('m-spderr');
  seEl.textContent = (se >= 0 ? '+' : '') + se.toFixed(2);
  seEl.style.color = Math.abs(se) > 5 ? '#f44336' : Math.abs(se) > 2 ? '#ff9800' : '#4caf50';
  document.getElementById('m-pts').textContent     = m.points_analysed;
}

// ── update recommendations ────────────────────────────────────────────────────
function updateRecs(snap) {
  const recs = snap.recommendations || [];
  const el = document.getElementById('recs-container');
  if (recs.length === 0) {
    el.innerHTML = '<p class="no-data">No significant issues detected yet.</p>'; return;
  }
  el.innerHTML = recs.map(r => `
    <div class="rec-card ${r.priority}">
      <div class="rec-header">
        <span class="rec-corner">${r.corner_label}</span>
        <span class="rec-priority ${r.priority}">${r.priority.toUpperCase()}</span>
      </div>
      <div class="rec-issue">${r.issue_type.replace(/_/g,' ')}</div>
      <div class="rec-text">${r.explanation}</div>
      <div class="rec-action">${r.recommendation}</div>
    </div>
  `).join('');
}

// ── update corners ────────────────────────────────────────────────────────────
function updateCorners(snap) {
  const corners = (snap.corners || []).filter(c => c.trajectory_coverage_pct > 5);
  const el = document.getElementById('corners-container');
  if (corners.length === 0) {
    el.innerHTML = '<p class="no-data">No corners covered yet.</p>'; return;
  }
  const sevColor = s => s > 0.6 ? '#f44336' : s > 0.3 ? '#ff9800' : '#4caf50';
  el.innerHTML = corners.map(c => {
    const sp = c.speed_profile, dp = c.deviation_profile;
    const grid = sp ? `
      <div class="corner-grid">
        <span class="k">Entry</span><span class="v">${sp.entry_kmh} km/h</span>
        <span class="k">Apex</span><span class="v">${sp.apex_kmh} km/h (ref ${sp.ref_apex_kmh})</span>
        <span class="k">Exit</span><span class="v">${sp.exit_kmh} km/h</span>
        <span class="k">Spd err</span><span class="v">${sp.mean_speed_error_mps > 0 ? '+' : ''}${sp.mean_speed_error_mps} m/s</span>
        ${dp ? `<span class="k">Lat RMS</span><span class="v">${dp.rms_lateral_m} m</span>` : ''}
        ${dp ? `<span class="k">Lat max</span><span class="v">${dp.max_lateral_m} m</span>` : ''}
      </div>` : '<span style="color:#555;font-size:11px">Insufficient data</span>';
    return `
    <div class="corner-card">
      <div class="corner-header">
        <span class="corner-label">${c.label}</span>
        <span class="corner-type">${c.type}</span>
        <span class="corner-dir">${c.direction}</span>
        <span class="corner-sev" style="color:${sevColor(c.severity_score)}">sev ${c.severity_score.toFixed(2)}</span>
      </div>
      ${grid}
    </div>`;
  }).join('');
}

// ── update JSON view ──────────────────────────────────────────────────────────
function updateJson(snap) {
  // Show only the structured output (no trajectory preview for readability)
  const out = {
    schema_version: snap.schema_version,
    timestamp_utc: snap.timestamp_utc,
    source: snap.source,
    current_state: snap.current_state,
    running_metrics: snap.running_metrics,
    corners: snap.corners,
    recommendations: snap.recommendations,
    optimum_reference: { corners: snap.optimum_reference?.corners?.length + ' corners', recommendations: snap.optimum_reference?.recommendations },
  };
  document.getElementById('json-view').textContent = JSON.stringify(out, null, 2);
}

// ── WebSocket stream ──────────────────────────────────────────────────────────
function connect() {
  const badge = document.getElementById('status-badge');
  badge.textContent = 'CONNECTING'; badge.className = '';

  const ws = new WebSocket('ws://' + location.host + '/ws/stream');

  ws.onopen = () => {
    badge.textContent = 'LIVE'; badge.className = 'live';
  };

  ws.onmessage = (ev) => {
    const msg = JSON.parse(ev.data);

    if (msg.type === 'ready') {
      totalFrames = msg.total_frames;
      initCharts();
      return;
    }

    if (msg.type === 'error') {
      badge.textContent = 'ERROR'; badge.className = '';
      document.getElementById('json-view').textContent = 'Error: ' + msg.message;
      return;
    }

    if (msg.type === 'snapshot' || msg.type === 'final') {
      const pct = totalFrames > 0 ? (msg.current_state.frame / totalFrames * 100) : 0;
      document.getElementById('progress-bar').style.width = pct + '%';
      document.getElementById('timestamp-label').textContent = msg.timestamp_utc.replace('T',' ').replace(/\..+/,'') + ' UTC';

      updateMap(msg);
      updateMetrics(msg);
      updateCharts(msg);
      updateRecs(msg);
      updateCorners(msg);
      updateJson(msg);

      if (msg.type === 'final') {
        badge.textContent = 'DONE'; badge.className = 'done';
        document.getElementById('progress-bar').style.width = '100%';
      }
    }
  };

  ws.onclose = () => {
    if (badge.className !== 'done') {
      badge.textContent = 'DISCONNECTED'; badge.className = '';
      setTimeout(connect, 3000);
    }
  };
}

// ── boot ──────────────────────────────────────────────────────────────────────
initMap().then(() => connect());
</script>
</body>
</html>
"""


# ── CLI entry point ───────────────────────────────────────────────────────────

def main():
    parser = argparse.ArgumentParser(description="Racing Analyzer — Real-Time Dashboard")
    parser.add_argument("--bag", default="hackathon_wheel_to_wheel.mcap",
                        help="MCAP bag filename (relative to workspace root)")
    parser.add_argument("--raceline", choices=["hybrid", "minimum_curvature"], default="hybrid")
    parser.add_argument("--speed", type=float, default=5.0,
                        help="Playback speed multiplier (default 5x)")
    parser.add_argument("--port", type=int, default=8050)
    parser.add_argument("--host", default="0.0.0.0")
    # Also accept positional bag path for convenience
    parser.add_argument("mcap_pos", nargs="?", default=None,
                        help="Positional: .mcap bag path (overrides --bag)")
    args = parser.parse_args()

    bag = args.mcap_pos or args.bag
    # If it's an absolute path just use the filename for lookup in WS_ROOT
    bag_path = Path(bag)
    if not bag_path.is_absolute():
        bag_path = WS_ROOT / bag

    _state["args"] = {
        "bag": bag_path.name if bag_path.parent == WS_ROOT else str(bag_path),
        "raceline": args.raceline,
        "speed": args.speed,
    }
    # Patch startup to use absolute path if provided
    if bag_path.parent != WS_ROOT:
        _state["args"]["bag_override"] = str(bag_path)

    print(f"\n  Racing Analyzer — Dashboard")
    print(f"  Bag    : {bag}")
    print(f"  Speed  : {args.speed}x")
    print(f"  URL    : http://localhost:{args.port}")
    print()

    uvicorn.run(app, host=args.host, port=args.port, log_level="warning")


if __name__ == "__main__":
    main()
