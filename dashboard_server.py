#!/usr/bin/env python3
"""
Racing Analyzer — Real-Time Dashboard Server
=============================================
Streams MCAP bag data frame-by-frame over WebSocket while emitting
structured JSON analysis snapshots.  Open http://localhost:8050 in a browser.

Usage:
    python dashboard_server.py                          # auto-loads yas_marina default bag
    python dashboard_server.py hackathon_fast_laps.mcap
    python dashboard_server.py --bag hackathon_good_lap.mcap
    python dashboard_server.py --speed 10               # 10x playback speed

Changes vs original:
    - Fixed quadprog 0.1.7 broken symbol (upgrade to 0.1.13)
    - Auto-activates Yas Marina track on startup — no manual upload required
    - Added POST /api/upload-mcap  — upload .mcap bags from the browser
    - Added POST /api/switch-bag   — switch active bag without CLI restart
    - Added GET  /api/bags          — list available .mcap bags on the server
    - Fixed on_event → lifespan (deprecation)
    - MCAP upload dir created automatically
    - Bag selector added to Track Setup tab in the UI
"""

from __future__ import annotations

import argparse
import asyncio
import json
import os
import sys
import time
import uuid
from contextlib import asynccontextmanager
from datetime import datetime, timezone
from pathlib import Path
from typing import Optional

import numpy as np
import uvicorn
from fastapi import FastAPI, File, HTTPException, UploadFile, WebSocket, WebSocketDisconnect
from fastapi.middleware.cors import CORSMiddleware
from fastapi.responses import HTMLResponse

# ── path setup ────────────────────────────────────────────────────────────────
WS_ROOT = Path(__file__).resolve().parent
SRC_DIR = WS_ROOT / "src" / "racing_analyzer"
PIPELINE_SCRIPT = WS_ROOT / "minimal_raceline_project" / "run_raceline_pipeline.py"
TRACK_UPLOAD_DIR = WS_ROOT / "uploads" / "tracks"
TRACK_JOBS_DIR = WS_ROOT / "uploads" / "track_jobs"
MCAP_UPLOAD_DIR = WS_ROOT / "uploads" / "mcap"

# Known MCAP search paths — checked in order when listing available bags
MCAP_SEARCH_DIRS = [
    WS_ROOT,
    MCAP_UPLOAD_DIR,
    Path.home(),
    Path.home() / "Desktop",
]

sys.path.insert(0, str(SRC_DIR))

from app.core.geometry import Raceline, series_stats
from app.core.loaders import build_raceline, build_boundaries
from app.core.corner_detection import CornerSegment, detect_corners
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

def load_raceline_from_json_payload(path: Path) -> Raceline:
    with open(path, "r", encoding="utf-8") as f:
        payload = json.load(f)

    required = ["s", "x", "y", "psi", "kappa", "vx", "ax"]
    if any(k not in payload for k in required):
        raise ValueError(f"Invalid raceline JSON payload: expected keys {required}")

    n = len(payload["s"])
    points = [
        RacelinePoint(
            s=float(payload["s"][i]),
            x=float(payload["x"][i]),
            y=float(payload["y"][i]),
            psi=float(payload["psi"][i]),
            kappa=float(payload["kappa"][i]),
            vx=float(payload["vx"][i]),
            ax=float(payload["ax"][i]),
        )
        for i in range(n)
    ]
    return build_raceline(points)


def load_boundaries(path: Optional[Path] = None):
    path = path or (WS_ROOT / "yas_marina_bnd.json")
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
    if not rows:
        raise RuntimeError(f"No /constructor0/state_estimation messages found in {mcap_path}")
    arr = np.array(rows, dtype=float)
    return arr[:, 0], arr[:, 1], arr[:, 2], arr[:, 3], arr[:, 4]


def _build_default_optimum_from_raceline(raceline: Raceline) -> dict:
    segs = detect_corners(raceline)
    corners = []
    for seg in segs:
        corners.append(
            {
                "turn_id": f"T{seg.id + 1}",
                "category": seg.corner_type,
                "x_apex": float(raceline.x[seg.apex_idx]),
                "y_apex": float(raceline.y[seg.apex_idx]),
                "vx_apex_mps": float(raceline.vx[seg.apex_idx]),
                "apex_s": float(seg.apex_s),
                "direction": seg.turn_direction,
                "length_m": float(seg.length_m),
            }
        )
    return {
        "properties": {
            "source": "computed_from_active_raceline",
            "corner_count": len(corners),
        },
        "corners": corners,
        "recommendations": [],
    }

def _segments_from_optimum(raceline: Raceline, optimum: dict) -> list[CornerSegment]:
    corners = optimum.get("corners", [])
    out: list[CornerSegment] = []

    category_map = {
        "HAIRPIN": "hairpin",
        "NINETY": "medium",
        "SIMPLE": "fast",
        "DOUBLE_APEX": "chicane",
        "CHICANE": "chicane",
    }

    n = raceline.n_points
    for i, c in enumerate(corners):
        idx_range = c.get("index_range")
        if isinstance(idx_range, list) and len(idx_range) == 2:
            start_idx = int(max(0, min(n - 1, idx_range[0])))
            end_idx = int(max(0, min(n - 1, idx_range[1])))
            if end_idx < start_idx:
                start_idx, end_idx = end_idx, start_idx
            apex_idx = int(np.clip((start_idx + end_idx) // 2, 0, n - 1))
        else:
            apex_s = float(c.get("s_apex", c.get("apex_s", 0.0)))
            apex_idx = int(np.argmin(np.abs(raceline.s - apex_s)))
            start_idx = int(np.clip(apex_idx - 20, 0, n - 1))
            end_idx = int(np.clip(apex_idx + 20, 0, n - 1))

        seg_kappa = raceline.kappa[start_idx : end_idx + 1]
        if seg_kappa.size == 0:
            continue

        mean_signed = float(np.mean(seg_kappa))
        if mean_signed > 0:
            turn_dir = "left"
        elif mean_signed < 0:
            turn_dir = "right"
        else:
            turn_dir = "unknown"

        category_raw = str(c.get("category", "")).upper()
        corner_type = category_map.get(category_raw, "medium")

        out.append(
            CornerSegment(
                id=i,
                start_idx=start_idx,
                end_idx=end_idx,
                apex_idx=apex_idx,
                start_s=float(raceline.s[start_idx]),
                end_s=float(raceline.s[end_idx]),
                apex_s=float(raceline.s[apex_idx]),
                length_m=float(max(0.0, raceline.s[end_idx] - raceline.s[start_idx])),
                max_curvature=float(np.max(np.abs(seg_kappa))),
                mean_curvature=float(np.mean(np.abs(seg_kappa))),
                turn_direction=turn_dir,
                corner_type=corner_type,
            )
        )

    return out


def _corner_reference_from_optimum(optimum: dict) -> list[dict]:
    ref = []
    for i, c in enumerate(optimum.get("corners", [])):
        ref.append(
            {
                "id": i,
                "turn_id": c.get("turn_id", f"T{i + 1}"),
                "category": c.get("category", ""),
                "label": c.get("label", f"Corner {i + 1}"),
                "s_apex": float(c.get("s_apex", c.get("apex_s", 0.0))),
                "x_apex": c.get("x_apex"),
                "y_apex": c.get("y_apex"),
                "segment_xy": c.get("segment_xy", []),
                "index_range": c.get("index_range", []),
            }
        )
    return ref


def _build_corner_markers(optimum: dict, raceline: Raceline) -> list[dict]:
    markers = []
    for c in optimum.get("corners", []):
        if "x_apex" in c and "y_apex" in c:
            x_apex = c["x_apex"]
            y_apex = c["y_apex"]
            vx_apex = c.get("vx_apex_mps", 0.0)
            label = c.get("turn_id", c.get("label", "corner"))
            category = c.get("category", c.get("corner_type", ""))
        else:
            apex_s = float(c.get("s_apex", c.get("apex_s", 0.0)))
            apex_idx = int(np.argmin(np.abs(raceline.s - apex_s)))
            x_apex = float(raceline.x[apex_idx])
            y_apex = float(raceline.y[apex_idx])
            vx_apex = float(raceline.vx[apex_idx])
            label = c.get("turn_id", f"T{len(markers) + 1}")
            category = c.get("category", "")

        markers.append(
            {
                "x": round(float(x_apex), 2),
                "y": round(float(y_apex), 2),
                "label": str(label),
                "category": str(category),
                "vx_apex_kmh": round(float(vx_apex) * 3.6, 1),
            }
        )
    return markers


def _prepare_live_cache(
    raceline: Raceline,
    bag_path: Path,
    boundaries_path: Path,
    optimum: Optional[dict],
    speed_multiplier: float,
    source_track_name: str,
) -> dict:
    timestamps, xs, ys, yaws, vxs = read_bag(bag_path)

    idxs, distances, lat_devs, hdg_errs, spd_errs = _compute_per_point_metrics(
        raceline, xs, ys, yaws, vxs
    )
    ref_s = raceline.s[idxs]

    seg = np.sqrt(np.diff(xs) ** 2 + np.diff(ys) ** 2)
    cum_path_m = np.concatenate(([0.0], np.cumsum(seg)))

    left_bnd, right_bnd = load_boundaries(boundaries_path)
    rl_xy = [{"x": round(float(x), 2), "y": round(float(y), 2)} for x, y in zip(raceline.x, raceline.y)]
    lb_xy = [{"x": round(float(p[0]), 2), "y": round(float(p[1]), 2)} for p in left_bnd]
    rb_xy = [{"x": round(float(p[0]), 2), "y": round(float(p[1]), 2)} for p in right_bnd]

    optimum = optimum or _build_default_optimum_from_raceline(raceline)
    corner_segs = _segments_from_optimum(raceline, optimum)
    if not corner_segs:
        corner_segs = detect_corners(raceline)
    corner_reference = _corner_reference_from_optimum(optimum)
    corner_markers = _build_corner_markers(optimum, raceline)

    return {
        "raceline": raceline,
        "bag_path": str(bag_path),
        "bag_name": bag_path.name,
        "boundaries_path": str(boundaries_path),
        "source_track_name": source_track_name,
        "speed_multiplier": speed_multiplier,
        "timestamps": timestamps,
        "xs": xs,
        "ys": ys,
        "yaws": yaws,
        "vxs": vxs,
        "idxs": idxs,
        "distances": distances,
        "lat_devs": lat_devs,
        "hdg_errs": hdg_errs,
        "spd_errs": spd_errs,
        "ref_s": ref_s,
        "cum_path_m": cum_path_m,
        "corner_segs": corner_segs,
        "corner_reference": corner_reference,
        "raceline_xy": rl_xy,
        "left_bnd": lb_xy,
        "right_bnd": rb_xy,
        "corner_markers": corner_markers,
        "optimum": optimum,
    }


# ── analysis snapshot ─────────────────────────────────────────────────────────

def build_snapshot(
    frame_idx: int,
    live: dict,
    optimum: dict,
) -> dict:
    """
    Analyse trajectory up to frame_idx and return a structured JSON snapshot.
    """
    t0 = time.perf_counter()

    timestamps = live["timestamps"]
    tx = live["xs"][: frame_idx + 1]
    ty = live["ys"][: frame_idx + 1]
    tvx = live["vxs"][: frame_idx + 1]
    idxs = live["idxs"][: frame_idx + 1]
    distances = live["distances"][: frame_idx + 1]
    lat_devs = live["lat_devs"][: frame_idx + 1]
    hdg_errs = live["hdg_errs"][: frame_idx + 1]
    spd_errs = live["spd_errs"][: frame_idx + 1]
    ref_s = live["ref_s"][: frame_idx + 1]
    raceline = live["raceline"]
    corner_segs = live["corner_segs"]

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
        "path_length_m": round(float(live["cum_path_m"][frame_idx]), 2),
        "points_analysed": len(tx),
    }

    # Corner analysis (only covered corners)
    corner_ref_map = {
        int(c.get("id", i)): c for i, c in enumerate(live.get("corner_reference", []))
    }
    corners_out = []
    for c in corners:
        cref = corner_ref_map.get(c.id, {})
        corner_label = str(cref.get("turn_id", c.label))
        corner_type = str(cref.get("category", c.corner_type)).lower()
        co = {
            "id": c.id + 1,
            "label": corner_label,
            "type": corner_type,
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
            "corner_label": str(corner_ref_map.get(r.corner_id, {}).get("turn_id", r.corner_label)),
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

    compute_ms = (time.perf_counter() - t0) * 1000.0

    return {
        "schema_version": 1,
        "timestamp_utc": datetime.now(timezone.utc).isoformat(),
        "source": {
            "bag": "",   # filled by caller
            "raceline": live.get("source_track_name", "hybrid"),
            "optimum_json": "yas_marina_bnd_hybrid_corner_analysis.json",
        },
        "analytics_perf": {
            "snapshot_compute_ms": round(compute_ms, 3),
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


# ── helpers ───────────────────────────────────────────────────────────────────

def _find_mcap_files() -> list[dict]:
    """Scan known directories for .mcap files and return metadata list."""
    seen: set[str] = set()
    result = []
    for search_dir in MCAP_SEARCH_DIRS:
        if not search_dir.exists():
            continue
        for p in sorted(search_dir.glob("*.mcap")):
            key = str(p.resolve())
            if key in seen:
                continue
            seen.add(key)
            stat = p.stat()
            result.append({
                "name": p.name,
                "path": str(p),
                "size_mb": round(stat.st_size / 1024 / 1024, 1),
                "location": str(p.parent),
            })
    return result


def _auto_activate_yas_marina(bag_path: Path, speed_multiplier: float) -> bool:
    """
    Try to activate the Yas Marina track from pre-built local files.
    Returns True on success, False if files are missing.
    """
    hybrid_csv = WS_ROOT / "raceline_hybrid.csv"
    bnd_json = WS_ROOT / "yas_marina_bnd.json"
    if not hybrid_csv.exists() or not bnd_json.exists():
        return False

    try:
        raceline = load_raceline("hybrid")
        ref_optimum_path = WS_ROOT / "outputs" / "yas_marina_bnd_hybrid_corner_analysis.json"
        optimum = load_optimum_json(ref_optimum_path) if ref_optimum_path.exists() else _build_default_optimum_from_raceline(raceline)

        live = _prepare_live_cache(
            raceline=raceline,
            bag_path=bag_path,
            boundaries_path=bnd_json,
            optimum=optimum,
            speed_multiplier=speed_multiplier,
            source_track_name="yas_marina:hybrid",
        )
        live["track_ready"] = True
        live["segmented_curves"] = []
        _state.update(live)
        print("  [OK] Yas Marina track auto-activated.")
        return True
    except Exception as exc:
        print(f"  [WARN] Auto-activate failed: {exc}")
        return False


# ── FastAPI app ───────────────────────────────────────────────────────────────

_state: dict = {}
_jobs: dict[str, dict] = {}


@asynccontextmanager
async def lifespan(app: FastAPI):
    # ── startup ────────────────────────────────────────────────────────────────
    global _state
    TRACK_UPLOAD_DIR.mkdir(parents=True, exist_ok=True)
    TRACK_JOBS_DIR.mkdir(parents=True, exist_ok=True)
    MCAP_UPLOAD_DIR.mkdir(parents=True, exist_ok=True)

    args = _state.get("args", {})
    bag_name = args.get("bag", "hackathon_wheel_to_wheel.mcap")
    bag_override = args.get("bag_override")
    bag_path = Path(bag_override) if bag_override else WS_ROOT / bag_name
    if not bag_path.exists():
        # Search in known locations before giving up
        found = next(
            (p for d in MCAP_SEARCH_DIRS for p in [d / bag_name] if p.exists()),
            None
        )
        if found:
            bag_path = found
        else:
            print(f"\nERROR: {bag_path} not found. Upload an MCAP via the UI or pass a valid path.")
            # Don't sys.exit — let the server start so uploads can work
            bag_path = None

    speed_mult = float(args.get("speed", 5.0))
    port = int(args.get("port", 8050))

    _state.update(
        {
            "bag_path": str(bag_path) if bag_path else None,
            "bag_name": bag_path.name if bag_path else "(none)",
            "speed_multiplier": speed_mult,
            "track_ready": False,
            "source_track_name": None,
            "raceline_xy": [],
            "left_bnd": [],
            "right_bnd": [],
            "corner_markers": [],
            "segmented_curves": [],
            "optimum": {"properties": {}, "corners": [], "recommendations": []},
        }
    )

    if bag_path and bag_path.exists():
        print("  Loading bag + activating Yas Marina track (this takes ~10s)...")
        _auto_activate_yas_marina(bag_path, speed_mult)
    else:
        print(f"  Dashboard ready — upload an MCAP file and track JSON at http://localhost:{port}")

    yield  # ── server runs ────────────────────────────────────────────────────
    # (shutdown hook — nothing needed)


app = FastAPI(title="Racing Analyzer Dashboard", lifespan=lifespan)
app.add_middleware(CORSMiddleware, allow_origins=["*"], allow_methods=["*"], allow_headers=["*"])


@app.get("/", response_class=HTMLResponse)
async def index():
    return HTMLResponse(DASHBOARD_HTML)


@app.get("/static-data")
async def static_data():
    """Return track geometry (sent once at page load)."""
    if not _state.get("track_ready", False):
        return {
            "setup_required": True,
            "bag_name": _state.get("bag_name", ""),
            "active_track": None,
            "raceline": [],
            "left_boundary": [],
            "right_boundary": [],
            "corner_markers": [],
            "corner_reference": [],
            "segmented_curves": [],
            "track_length_m": 0.0,
            "optimum_properties": {},
        }

    return {
        "setup_required": False,
        "raceline": _state["raceline_xy"],
        "left_boundary": _state["left_bnd"],
        "right_boundary": _state["right_bnd"],
        "corner_markers": _state["corner_markers"],
        "corner_reference": _state.get("corner_reference", []),
        "segmented_curves": _state.get("segmented_curves", []),
        "track_length_m": round(_state["raceline"].total_length, 2),
        "bag_name": _state["bag_name"],
        "active_track": _state.get("source_track_name"),
        "optimum_properties": _state["optimum"].get("properties", {}),
    }


# ── MCAP file management ──────────────────────────────────────────────────────

@app.get("/api/bags")
async def list_bags():
    """List all .mcap files the server can find."""
    bags = _find_mcap_files()
    return {
        "count": len(bags),
        "bags": bags,
        "active_bag": _state.get("bag_name"),
    }


@app.post("/api/upload-mcap")
async def upload_mcap(file: UploadFile = File(...)):
    """Upload an .mcap bag file to the server."""
    if not file.filename:
        raise HTTPException(status_code=400, detail="Missing file name")
    if not file.filename.lower().endswith(".mcap"):
        raise HTTPException(status_code=400, detail="Only .mcap files are supported")

    MCAP_UPLOAD_DIR.mkdir(parents=True, exist_ok=True)
    dest = MCAP_UPLOAD_DIR / file.filename
    content = await file.read()
    with open(dest, "wb") as f:
        f.write(content)

    size_mb = round(len(content) / 1024 / 1024, 1)
    return {
        "status": "ok",
        "filename": file.filename,
        "path": str(dest),
        "size_mb": size_mb,
        "message": f"Uploaded {file.filename} ({size_mb} MB). Use /api/switch-bag to activate it.",
    }


@app.post("/api/switch-bag")
async def switch_bag(body: dict):
    """
    Switch the active MCAP bag (re-processes metrics against current track).
    Body: { "bag_name": "hackathon_good_lap.mcap" }
          or { "bag_path": "/absolute/path/to/file.mcap" }
    """
    if not _state.get("track_ready"):
        raise HTTPException(status_code=409, detail="No track active. Upload and activate a track first.")

    bag_path_str = body.get("bag_path")
    bag_name = body.get("bag_name")

    if bag_path_str:
        bag_path = Path(bag_path_str)
    elif bag_name:
        bag_path = next(
            (d / bag_name for d in MCAP_SEARCH_DIRS if (d / bag_name).exists()),
            None
        )
        if bag_path is None:
            raise HTTPException(status_code=404, detail=f"Bag '{bag_name}' not found in search paths")
    else:
        raise HTTPException(status_code=400, detail="Provide 'bag_name' or 'bag_path'")

    if not bag_path.exists():
        raise HTTPException(status_code=404, detail=f"Bag file not found: {bag_path}")

    try:
        raceline = _state["raceline"]
        boundaries_path = Path(_state["boundaries_path"])
        optimum = _state["optimum"]
        speed_mult = float(_state.get("speed_multiplier", 5.0))
        source_track = _state.get("source_track_name", "yas_marina:hybrid")

        live = _prepare_live_cache(
            raceline=raceline,
            bag_path=bag_path,
            boundaries_path=boundaries_path,
            optimum=optimum,
            speed_multiplier=speed_mult,
            source_track_name=source_track,
        )
        live["track_ready"] = True
        live["segmented_curves"] = _state.get("segmented_curves", [])
        _state.update(live)
    except Exception as exc:
        raise HTTPException(status_code=500, detail=f"Failed to load bag: {exc}")

    return {
        "status": "ok",
        "bag_name": bag_path.name,
        "bag_path": str(bag_path),
        "frames": len(_state["timestamps"]),
    }


# ── track pipeline ────────────────────────────────────────────────────────────

async def _run_track_pipeline_job(job_id: str) -> None:
    job = _jobs[job_id]
    job["status"] = "running"
    job["started_at"] = datetime.now(timezone.utc).isoformat()

    input_path = Path(job["input_path"])
    out_dir = Path(job["output_dir"])
    out_dir.mkdir(parents=True, exist_ok=True)

    cmd = [
        sys.executable,
        str(PIPELINE_SCRIPT),
        "--track-json",
        str(input_path),
        "--output-dir",
        str(out_dir),
        "--json-indent",
        "2",
    ]

    try:
        proc = await asyncio.create_subprocess_exec(
            *cmd,
            stdout=asyncio.subprocess.PIPE,
            stderr=asyncio.subprocess.PIPE,
            cwd=str(WS_ROOT),
            env=os.environ.copy(),
        )
        stdout_b, stderr_b = await proc.communicate()
        stdout = stdout_b.decode("utf-8", errors="replace")
        stderr = stderr_b.decode("utf-8", errors="replace")

        if proc.returncode != 0:
            job["status"] = "failed"
            job["error"] = f"Pipeline failed with exit code {proc.returncode}"
            job["stderr_tail"] = "\n".join(stderr.splitlines()[-30:])
            job["stdout_tail"] = "\n".join(stdout.splitlines()[-30:])
            job["finished_at"] = datetime.now(timezone.utc).isoformat()
            return

        hybrid_json = out_dir / "raceline_hybrid.json"
        bundle_json = out_dir / "trajectories_bundle.json"
        if not hybrid_json.exists() or not bundle_json.exists():
            job["status"] = "failed"
            job["error"] = "Pipeline completed but expected JSON outputs are missing"
            job["finished_at"] = datetime.now(timezone.utc).isoformat()
            return

        raceline = load_raceline_from_json_payload(hybrid_json)
        segs = detect_corners(raceline)
        segmented = [
            {
                "id": seg.id + 1,
                "label": f"Corner {seg.id + 1}",
                "type": seg.corner_type,
                "direction": seg.turn_direction,
                "start_s": round(float(seg.start_s), 3),
                "end_s": round(float(seg.end_s), 3),
                "apex_s": round(float(seg.apex_s), 3),
                "length_m": round(float(seg.length_m), 3),
                "max_curvature": round(float(seg.max_curvature), 6),
            }
            for seg in segs
        ]

        with open(bundle_json, "r", encoding="utf-8") as f:
            bundle_payload = json.load(f)

        job["status"] = "succeeded"
        job["result"] = {
            "optimum_trajectory": {
                "hybrid_raceline_json": str(hybrid_json),
                "bundle_json": str(bundle_json),
                "n_points": int(raceline.n_points),
                "track_length_m": round(float(raceline.total_length), 3),
            },
            "segmented_curves": segmented,
            "bundle_preview": {
                "schema_version": bundle_payload.get("schema_version"),
                "source_track_json": bundle_payload.get("source_track_json"),
                "settings": bundle_payload.get("settings", {}),
            },
        }
        job["stdout_tail"] = "\n".join(stdout.splitlines()[-20:])
        job["finished_at"] = datetime.now(timezone.utc).isoformat()
    except Exception as exc:
        job["status"] = "failed"
        job["error"] = str(exc)
        job["finished_at"] = datetime.now(timezone.utc).isoformat()


@app.post("/api/upload-track")
async def upload_track_json(file: UploadFile = File(...)):
    if not file.filename:
        raise HTTPException(status_code=400, detail="Missing file name")
    if not file.filename.lower().endswith(".json"):
        raise HTTPException(status_code=400, detail="Only .json files are supported")

    content = await file.read()
    if len(content) > 8 * 1024 * 1024:
        raise HTTPException(status_code=400, detail="Track JSON must be <= 8 MB")

    try:
        payload = json.loads(content.decode("utf-8"))
    except Exception:
        raise HTTPException(status_code=400, detail="Invalid JSON file")

    b = payload.get("boundaries", {})
    if not isinstance(b.get("left_border"), list) or not isinstance(b.get("right_border"), list):
        raise HTTPException(status_code=400, detail="JSON must include boundaries.left_border/right_border arrays")

    job_id = uuid.uuid4().hex[:12]
    job_dir = TRACK_JOBS_DIR / job_id
    input_path = TRACK_UPLOAD_DIR / f"{job_id}_{Path(file.filename).name}"
    output_dir = job_dir / "outputs"

    TRACK_UPLOAD_DIR.mkdir(parents=True, exist_ok=True)
    job_dir.mkdir(parents=True, exist_ok=True)

    with open(input_path, "wb") as f:
        f.write(content)

    _jobs[job_id] = {
        "job_id": job_id,
        "status": "queued",
        "created_at": datetime.now(timezone.utc).isoformat(),
        "input_filename": file.filename,
        "input_path": str(input_path),
        "output_dir": str(output_dir),
        "error": None,
        "result": None,
    }

    asyncio.create_task(_run_track_pipeline_job(job_id))

    return {
        "job_id": job_id,
        "status": "queued",
        "message": "Track uploaded. Raceline pipeline started.",
        "status_endpoint": f"/api/jobs/{job_id}",
        "activate_endpoint": f"/api/jobs/{job_id}/activate",
    }


@app.get("/api/jobs")
async def list_track_jobs():
    jobs = sorted(_jobs.values(), key=lambda j: j.get("created_at", ""), reverse=True)
    return {"count": len(jobs), "jobs": jobs[:20]}


@app.get("/api/jobs/{job_id}")
async def get_track_job(job_id: str):
    job = _jobs.get(job_id)
    if not job:
        raise HTTPException(status_code=404, detail="Job not found")
    return job


@app.post("/api/jobs/{job_id}/activate")
async def activate_track_job(job_id: str):
    job = _jobs.get(job_id)
    if not job:
        raise HTTPException(status_code=404, detail="Job not found")
    if job.get("status") != "succeeded":
        raise HTTPException(status_code=409, detail="Job is not completed successfully")

    out_dir = Path(job["output_dir"])
    hybrid_json = out_dir / "raceline_hybrid.json"
    input_json = Path(job["input_path"])
    if not hybrid_json.exists():
        raise HTTPException(status_code=404, detail="hybrid raceline output missing")

    try:
        raceline = load_raceline_from_json_payload(hybrid_json)
        ref_optimum_path = WS_ROOT / "outputs" / "yas_marina_bnd_hybrid_corner_analysis.json"
        filename = str(job.get("input_filename", "")).lower()
        if "yas" in filename and ref_optimum_path.exists():
            optimum = load_optimum_json(ref_optimum_path)
        else:
            optimum = _build_default_optimum_from_raceline(raceline)

        bag_path = Path(_state.get("bag_path") or "")
        if not bag_path.exists():
            raise HTTPException(status_code=409, detail="No MCAP bag loaded. Upload a bag first.")

        live = _prepare_live_cache(
            raceline=raceline,
            bag_path=bag_path,
            boundaries_path=input_json,
            optimum=optimum,
            speed_multiplier=float(_state.get("speed_multiplier", 5.0)),
            source_track_name=f"uploaded:{job.get('input_filename', job_id)}",
        )
        live["track_ready"] = True
        live["segmented_curves"] = job.get("result", {}).get("segmented_curves", [])
        _state.update(live)
        job["activated"] = True
        job["activated_at"] = datetime.now(timezone.utc).isoformat()
    except HTTPException:
        raise
    except Exception as exc:
        raise HTTPException(status_code=500, detail=f"Failed to activate uploaded track: {exc}")

    return {
        "status": "ok",
        "job_id": job_id,
        "active_track": _state.get("source_track_name"),
        "track_length_m": round(_state["raceline"].total_length, 3),
        "corner_count": len(_state.get("corner_segs", [])),
    }


# ── WebSocket stream ──────────────────────────────────────────────────────────

@app.websocket("/ws/stream")
async def stream(ws: WebSocket):
    """Stream analysis snapshots frame-by-frame over WebSocket."""
    await ws.accept()
    if not _state.get("track_ready", False):
        await ws.send_json(
            {
                "type": "error",
                "message": "Track setup required: upload track JSON and wait for raceline pipeline before starting live stream.",
            }
        )
        await ws.close()
        return

    timestamps = _state["timestamps"]
    optimum = _state["optimum"]
    bag_name = _state["bag_name"]
    speed_mult = float(_state.get("speed_multiplier", 5.0))

    n = len(timestamps)
    # Adaptive frame step: cap snapshots to ~1200 frames for lighter browser load
    analysis_step = max(1, n // 1200)

    try:
        # Send ready signal
        await ws.send_json({"type": "ready", "total_frames": n, "analysis_step": analysis_step})

        frame_idx = 0

        while frame_idx < n:
            # Compute inter-frame delay based on real timestamps / speed multiplier
            if frame_idx + analysis_step < n:
                real_dt = float(timestamps[frame_idx + analysis_step] - timestamps[frame_idx])
                sleep_dt = max(0.01, real_dt / speed_mult)
            else:
                sleep_dt = 0.05

            await asyncio.sleep(sleep_dt)

            snap = build_snapshot(frame_idx, _state, optimum)
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
  body { background: #0a0b10; color: #e8e8ec; font-family: Inter, 'Segoe UI', Roboto, sans-serif; font-size: 13px; }

  #header {
    background: #111; border-bottom: 1px solid #222;
    padding: 8px 16px; display: flex; align-items: center; gap: 16px;
  }
  #header h1 { font-size: 16px; color: #f0c040; letter-spacing: 1px; font-weight: 700; }
  #status-badge {
    padding: 3px 10px; border-radius: 3px; font-size: 11px; font-weight: bold;
    background: #333; color: #aaa;
  }
  #status-badge.live { background: #1a4a1a; color: #4caf50; }
  #status-badge.done { background: #1a1a4a; color: #64b5f6; }
  #bag-label { color: #aaa; font-size: 11px; }
  #active-track-label { color: #89c2ff; font-size: 11px; }

  #main { display: grid; grid-template-columns: 1fr 420px; height: calc(100vh - 42px); }

  /* Left: track map */
  #map-panel { padding: 8px; display: flex; flex-direction: column; gap: 8px; }
  #track-map { flex: 1; min-height: 0; }

  /* Metric bar below map */
  #metric-bar {
    display: grid; grid-template-columns: repeat(8, 1fr);
    gap: 6px; padding: 6px 0;
  }
  .metric-card {
    background: #181818; border: 1px solid #2a2a2a; border-radius: 4px;
    padding: 7px 8px; text-align: center;
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

  .builder-panel {
    background: #13141d;
    border: 1px solid #23263a;
    border-radius: 8px;
    padding: 12px;
    margin-bottom: 10px;
  }
  .builder-title { font-size: 12px; color: #9ecbff; text-transform: uppercase; margin-bottom: 8px; letter-spacing: 0.5px; }
  .builder-row { display: flex; gap: 8px; align-items: center; flex-wrap: wrap; }
  .builder-input {
    background: #0f1017; border: 1px solid #2a2d42; color: #d5d8e3; border-radius: 6px;
    padding: 8px; font-size: 12px; min-width: 220px;
  }
  .btn {
    border: 1px solid #2f3550; background: #181b2a; color: #d5d8e3;
    border-radius: 6px; padding: 8px 10px; font-size: 12px; cursor: pointer;
  }
  .btn.primary { border-color: #f0c040; color: #f0c040; }
  .btn.danger { border-color: #f44336; color: #f44336; }
  .btn:disabled { opacity: 0.5; cursor: not-allowed; }
  .builder-msg { margin-top: 8px; color: #9aa0b7; font-size: 12px; }
  .job-card {
    background: #10121a;
    border: 1px solid #22283d;
    border-radius: 6px;
    padding: 10px;
    margin-bottom: 8px;
  }
  .job-head { display:flex; justify-content:space-between; gap:8px; margin-bottom:6px; }
  .pill { font-size: 10px; padding: 2px 8px; border-radius: 999px; text-transform: uppercase; }
  .pill.queued { background:#2c2f40; color:#c0c6e0; }
  .pill.running { background:#2e3d5e; color:#9ecbff; }
  .pill.succeeded { background:#24422f; color:#7de2a8; }
  .pill.failed { background:#4a2024; color:#ff9a9a; }

  /* Bag list */
  .bag-item {
    background: #10121a; border: 1px solid #22283d; border-radius: 6px;
    padding: 8px 10px; margin-bottom: 6px; display: flex; justify-content: space-between; align-items: center;
  }
  .bag-item.active-bag { border-color: #f0c040; }
  .bag-name { font-weight: bold; color: #e0e0e0; font-size: 12px; }
  .bag-meta { font-size: 11px; color: #666; }

  /* Speed chart */
  #speed-chart { height: 220px; }
  #dev-chart { height: 220px; }

  #progress-bar-wrap { height: 4px; background: #1a1a1a; }
  #progress-bar { height: 4px; background: #f0c040; width: 0%; transition: width 0.3s; }

  /* Upload progress */
  #mcap-upload-progress {
    display: none; margin-top: 8px; height: 4px; background: #1a1a1a; border-radius: 2px;
  }
  #mcap-upload-bar { height: 4px; background: #4caf50; border-radius: 2px; width: 0%; transition: width 0.2s; }

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
  <span id="active-track-label">track: loading…</span>
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
      <div class="metric-card">
        <div class="label">Snapshot</div>
        <div class="value" id="m-compute">—</div>
        <div class="unit">ms</div>
      </div>
      <div class="metric-card">
        <div class="label">Recs</div>
        <div class="value" id="m-recs">—</div>
        <div class="unit">active</div>
      </div>
    </div>
  </div>

  <div id="right-panel">
    <div class="panel-tabs">
      <button class="tab-btn" onclick="switchTab('recs')">Recommendations</button>
      <button class="tab-btn" onclick="switchTab('corners')">Corners</button>
      <button class="tab-btn" onclick="switchTab('charts')">Charts</button>
      <button class="tab-btn active" onclick="switchTab('track')">Track Setup</button>
      <button class="tab-btn" onclick="switchTab('json')">JSON</button>
    </div>
    <div id="tab-recs" class="tab-content">
      <div id="recs-container"><p class="no-data">Waiting for data…</p></div>
    </div>
    <div id="tab-corners" class="tab-content">
      <div id="corners-container"><p class="no-data">Waiting for data…</p></div>
    </div>
    <div id="tab-charts" class="tab-content">
      <div id="speed-chart"></div>
      <div id="dev-chart"></div>
    </div>
    <div id="tab-track" class="tab-content active">

      <!-- ── MCAP Bag selector ─────────────────────────────────────────── -->
      <div class="builder-panel">
        <div class="builder-title">MCAP Bag — Select or Upload</div>
        <div id="bags-list"><p class="no-data">Loading bags…</p></div>
        <div style="margin-top:10px;">
          <div class="builder-row">
            <input id="mcap-file" class="builder-input" type="file" accept=".mcap" />
            <button id="mcap-upload-btn" class="btn primary" onclick="uploadMcap()">Upload MCAP</button>
          </div>
          <div id="mcap-upload-progress"><div id="mcap-upload-bar"></div></div>
          <div class="builder-msg" id="mcap-upload-msg">Upload an .mcap file to the server, then click it to activate.</div>
        </div>
      </div>

      <!-- ── Track JSON pipeline ───────────────────────────────────────── -->
      <div class="builder-panel">
        <div class="builder-title">Track Boundary JSON (optional — Yas Marina auto-loaded)</div>
        <div class="builder-row">
          <input id="track-file" class="builder-input" type="file" accept=".json,application/json" />
          <button id="track-upload-btn" class="btn primary" onclick="uploadTrackJson()">Run pipeline</button>
        </div>
        <div class="builder-msg" id="track-upload-msg">Upload a custom track boundary JSON to override the active raceline.</div>
      </div>

      <!-- ── Live stream ───────────────────────────────────────────────── -->
      <div class="builder-panel">
        <div class="builder-title">Live Bag Analysis</div>
        <div class="builder-row">
          <button id="live-start-btn" class="btn primary" onclick="startLivePlayback()" disabled>Start live dashboard</button>
          <button id="live-stop-btn" class="btn danger" onclick="stopLivePlayback()" disabled>Stop</button>
        </div>
        <div class="builder-msg" id="live-start-msg">Waiting for track to be ready…</div>
      </div>

      <!-- ── Pipeline jobs ─────────────────────────────────────────────── -->
      <div class="builder-panel">
        <div class="builder-title">Track pipeline status</div>
        <div id="jobs-container"><p class="no-data">No jobs yet.</p></div>
      </div>
      <div class="builder-panel">
        <div class="builder-title">Segmented corners preview</div>
        <div id="segmented-curves-container"><p class="no-data">Upload a track to see segmented corners.</p></div>
      </div>
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
let jobsPollTimer = null;
let bagsPollTimer = null;
let trackReady = false;
let streamStarted = false;
let allowReconnect = false;
let activeWs = null;
const TAB_NAMES = ['recs','corners','charts','track','json'];
const MAX_HISTORY = 600;

function setTrackReady(ready) {
  trackReady = !!ready;
  document.getElementById('live-start-btn').disabled = !trackReady || streamStarted;
  document.getElementById('live-start-msg').textContent = trackReady
    ? 'Track ready. Start live analysis to stream car position and recommendations.'
    : 'Waiting for track to be ready…';

  document.querySelectorAll('.tab-btn').forEach((b, i) => {
    const name = TAB_NAMES[i];
    if (name === 'track') { b.disabled = false; b.style.opacity = '1'; return; }
    b.disabled = !trackReady;
    b.style.opacity = trackReady ? '1' : '0.45';
  });
}

function renderSegmentedCurves(curves) {
  const el = document.getElementById('segmented-curves-container');
  if (!curves || curves.length === 0) {
    el.innerHTML = '<p class="no-data">Upload a track to see segmented corners.</p>';
    return;
  }
  el.innerHTML = curves.map(c => `
    <div class="corner-card" style="margin-bottom:8px;">
      <div class="corner-header">
        <span class="corner-label">${c.label}</span>
        <span class="corner-type">${c.type}</span>
        <span class="corner-dir">${c.direction}</span>
      </div>
      <div class="corner-grid">
        <span class="k">Start s</span><span class="v">${c.start_s} m</span>
        <span class="k">Apex s</span><span class="v">${c.apex_s} m</span>
        <span class="k">End s</span><span class="v">${c.end_s} m</span>
        <span class="k">Length</span><span class="v">${c.length_m} m</span>
      </div>
    </div>
  `).join('');
}

function cornerCategoryColor(category) {
  const c = String(category || '').toUpperCase();
  if (c === 'HAIRPIN') return '#ff3b30';
  if (c === 'NINETY') return '#ff9800';
  if (c === 'SIMPLE') return '#ffd400';
  if (c === 'DOUBLE_APEX') return '#66d96b';
  if (c === 'CHICANE') return '#c061ff';
  return '#7fb3ff';
}

function buildCornerSegmentTraces(cornerRef) {
  const traces = [];
  (cornerRef || []).forEach(c => {
    const seg = c.segment_xy || [];
    if (!Array.isArray(seg) || seg.length < 2) return;
    traces.push({
      name: `${c.turn_id || 'T?'} ${c.category || ''}`,
      x: seg.map(p => p[0]),
      y: seg.map(p => p[1]),
      mode: 'lines',
      line: { color: cornerCategoryColor(c.category), width: 4 },
      opacity: 0.9,
      hovertemplate: `${c.turn_id || 'Turn'} · ${c.category || 'corner'}<extra></extra>`,
      showlegend: false,
    });
  });
  return traces;
}

// ── tab switching ─────────────────────────────────────────────────────────────
function switchTab(name) {
  if (!trackReady && name !== 'track') return;
  document.querySelectorAll('.tab-btn').forEach((b,i) => {
    b.classList.toggle('active', TAB_NAMES[i] === name);
  });
  document.querySelectorAll('.tab-content').forEach(el => el.classList.remove('active'));
  document.getElementById('tab-' + name).classList.add('active');
  if (name === 'charts' && chartsInited) { Plotly.Plots.resize('speed-chart'); Plotly.Plots.resize('dev-chart'); }
  if (name === 'track') { loadJobs(); loadBags(); }
}

// ── init track map ─────────────────────────────────────────────────────────
async function initMap() {
  const res = await fetch('/static-data');
  const d = await res.json();

  document.getElementById('bag-label').textContent = d.bag_name || '—';
  document.getElementById('active-track-label').textContent = 'track: ' + (d.active_track || 'pending upload');
  setTrackReady(!d.setup_required);

  const rl = d.raceline || [], lb = d.left_boundary || [], rb = d.right_boundary || [];
  const cm = d.corner_markers || [];
  const cornerRef = d.corner_reference || [];
  renderSegmentedCurves(d.segmented_curves || []);

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
    ...buildCornerSegmentTraces(cornerRef),
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

async function refreshStaticTrack() {
  if (!mapInited) return;
  const res = await fetch('/static-data');
  const d = await res.json();
  document.getElementById('bag-label').textContent = d.bag_name || '—';
  document.getElementById('active-track-label').textContent = 'track: ' + (d.active_track || 'pending upload');
  setTrackReady(!d.setup_required);

  const rl = d.raceline || [];
  const lb = d.left_boundary || [];
  const rb = d.right_boundary || [];
  const cm = d.corner_markers || [];
  const cornerRef = d.corner_reference || [];
  renderSegmentedCurves(d.segmented_curves || []);

  Plotly.restyle('track-map', { x: [lb.map(p=>p.x)], y: [lb.map(p=>p.y)] }, [0]);
  Plotly.restyle('track-map', { x: [rb.map(p=>p.x)], y: [rb.map(p=>p.y)] }, [1]);
  Plotly.restyle('track-map', { x: [rl.map(p=>p.x)], y: [rl.map(p=>p.y)] }, [2]);
  Plotly.restyle('track-map', {
    x: [cm.map(c=>c.x)],
    y: [cm.map(c=>c.y)],
    text: [cm.map(c=>`${c.label}<br>${c.category}<br>${c.vx_apex_kmh} km/h`)],
  }, [5]);

  // Rebuild figure if number of segment traces changed
  const segTraces = buildCornerSegmentTraces(cornerRef);
  const totalExpected = 6 + segTraces.length;
  const currentLen = document.getElementById('track-map').data?.length || 0;
  if (currentLen !== totalExpected) {
    await initMap();
  } else {
    segTraces.forEach((t, i) => {
      Plotly.restyle('track-map', { x: [t.x], y: [t.y], line: [t.line] }, [6 + i]);
    });
  }
}

// ── update map with new trajectory ───────────────────────────────────────────
function updateMap(snap) {
  if (!mapInited) return;
  const traj = snap.trajectory_preview || [];
  const cur = snap.current_state;
  Plotly.restyle('track-map', { x: [traj.map(p=>p.x)], y: [traj.map(p=>p.y)] }, [3]);
  Plotly.restyle('track-map', { x: [[cur.x]], y: [[cur.y]] }, [4]);
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
  document.getElementById('m-compute').textContent = (snap.analytics_perf?.snapshot_compute_ms ?? 0).toFixed(2);
  document.getElementById('m-recs').textContent    = (snap.recommendations || []).length;
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
  const corners = (snap.corners || []).filter(c => c.trajectory_coverage_pct > 1.0);
  const el = document.getElementById('corners-container');
  if (corners.length === 0) {
    el.innerHTML = '<p class="no-data">No corners covered yet.</p>'; return;
  }
  const sevColor = s => s > 0.6 ? '#f44336' : s > 0.3 ? '#ff9800' : '#4caf50';
  const typeColor = t => cornerCategoryColor(t);
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
        <span class="corner-type" style="background:${typeColor(c.type)}33;color:${typeColor(c.type)}">${String(c.type).toUpperCase()}</span>
        <span class="corner-dir">${c.direction}</span>
        <span class="corner-sev" style="color:${sevColor(c.severity_score)}">sev ${c.severity_score.toFixed(2)} · cov ${c.trajectory_coverage_pct.toFixed(1)}%</span>
      </div>
      ${grid}
    </div>`;
  }).join('');
}

// ── update JSON view ──────────────────────────────────────────────────────────
function updateJson(snap) {
  const out = {
    schema_version: snap.schema_version,
    timestamp_utc: snap.timestamp_utc,
    source: snap.source,
    analytics_perf: snap.analytics_perf,
    current_state: snap.current_state,
    running_metrics: snap.running_metrics,
    corners: snap.corners,
    recommendations: snap.recommendations,
    optimum_reference: { corners: snap.optimum_reference?.corners?.length + ' corners', recommendations: snap.optimum_reference?.recommendations },
  };
  document.getElementById('json-view').textContent = JSON.stringify(out, null, 2);
}

// ── bag list ──────────────────────────────────────────────────────────────────
async function loadBags() {
  try {
    const r = await fetch('/api/bags');
    const d = await r.json();
    renderBags(d.bags || [], d.active_bag);
  } catch (err) {
    document.getElementById('bags-list').innerHTML = '<p class="no-data">Failed to load bags.</p>';
  }
}

function renderBags(bags, activeBag) {
  const el = document.getElementById('bags-list');
  if (!bags || bags.length === 0) {
    el.innerHTML = '<p class="no-data">No .mcap files found. Upload one above.</p>';
    return;
  }
  el.innerHTML = bags.map(b => {
    const isActive = b.name === activeBag;
    return `
    <div class="bag-item ${isActive ? 'active-bag' : ''}">
      <div>
        <div class="bag-name">${b.name} ${isActive ? '✓' : ''}</div>
        <div class="bag-meta">${b.size_mb} MB · ${b.location}</div>
      </div>
      ${!isActive ? `<button class="btn" onclick="switchBag('${b.name}', '${b.path}')">Use</button>` : '<span style="color:#f0c040;font-size:11px">ACTIVE</span>'}
    </div>`;
  }).join('');
}

async function switchBag(bagName, bagPath) {
  const msgEl = document.getElementById('mcap-upload-msg');
  msgEl.textContent = `Switching to ${bagName}…`;
  try {
    const r = await fetch('/api/switch-bag', {
      method: 'POST',
      headers: {'Content-Type': 'application/json'},
      body: JSON.stringify({ bag_name: bagName, bag_path: bagPath }),
    });
    const d = await r.json();
    if (!r.ok) {
      msgEl.textContent = d.detail || 'Switch failed.';
      return;
    }
    msgEl.textContent = `Active bag: ${d.bag_name} (${d.frames} frames)`;
    await loadBags();
    await refreshStaticTrack();
    // Reset stream so user re-starts with new bag
    streamStarted = false;
    allowReconnect = false;
    if (activeWs) { activeWs.close(); activeWs = null; }
    document.getElementById('live-start-btn').disabled = !trackReady;
    document.getElementById('live-stop-btn').disabled = true;
    document.getElementById('live-start-msg').textContent = 'Bag switched. Start live analysis.';
    document.getElementById('status-badge').textContent = 'READY';
    document.getElementById('status-badge').className = '';
    document.getElementById('progress-bar').style.width = '0%';
    speedHistory = []; devHistory = []; timeHistory = []; window._seHist = [];
  } catch (err) {
    msgEl.textContent = 'Switch failed: ' + err;
  }
}

async function uploadMcap() {
  const fileEl = document.getElementById('mcap-file');
  const msgEl = document.getElementById('mcap-upload-msg');
  const btn = document.getElementById('mcap-upload-btn');
  const file = fileEl.files && fileEl.files[0];
  if (!file) { msgEl.textContent = 'Choose an .mcap file first.'; return; }

  btn.disabled = true;
  msgEl.textContent = `Uploading ${file.name} (${(file.size/1024/1024).toFixed(0)} MB)…`;

  const progressWrap = document.getElementById('mcap-upload-progress');
  const progressBar  = document.getElementById('mcap-upload-bar');
  progressWrap.style.display = 'block';
  progressBar.style.width = '0%';

  // Use XHR for upload progress reporting
  await new Promise((resolve) => {
    const xhr = new XMLHttpRequest();
    xhr.open('POST', '/api/upload-mcap');
    xhr.upload.onprogress = (e) => {
      if (e.lengthComputable) {
        progressBar.style.width = Math.round(e.loaded / e.total * 100) + '%';
      }
    };
    xhr.onload = () => {
      progressBar.style.width = '100%';
      const d = JSON.parse(xhr.responseText);
      if (xhr.status === 200) {
        msgEl.textContent = `Uploaded ${d.filename} (${d.size_mb} MB). Click "Use" to activate it.`;
      } else {
        msgEl.textContent = d.detail || 'Upload failed.';
      }
      progressWrap.style.display = 'none';
      btn.disabled = false;
      fileEl.value = '';
      loadBags();
      resolve();
    };
    xhr.onerror = () => {
      msgEl.textContent = 'Upload error (network).';
      progressWrap.style.display = 'none';
      btn.disabled = false;
      resolve();
    };
    const fd = new FormData();
    fd.append('file', file);
    xhr.send(fd);
  });
}

function renderJobs(jobs) {
  const el = document.getElementById('jobs-container');
  if (!jobs || jobs.length === 0) {
    el.innerHTML = '<p class="no-data">No jobs yet.</p>';
    return;
  }
  el.innerHTML = jobs.map(j => {
    const status = j.status || 'queued';
    const corners = j.result?.segmented_curves?.length;
    const infoLine = j.result
      ? `Track ${j.result.optimum_trajectory.track_length_m} m • ${corners} curves`
      : (j.error ? `Error: ${j.error}` : 'Processing...');
    return `
      <div class="job-card">
        <div class="job-head">
          <div><strong>${j.input_filename || j.job_id}</strong></div>
          <span class="pill ${status}">${status}</span>
        </div>
        <div style="font-size:12px;color:#a9afc7;line-height:1.5;">${infoLine}</div>
        <div style="margin-top:8px;display:flex;justify-content:space-between;align-items:center;gap:8px;">
          <span style="font-size:11px;color:#7b829d;">${j.created_at || ''}</span>
          <span style="font-size:11px;color:#7b829d;">${status === 'succeeded' ? 'auto-activated on completion' : ''}</span>
        </div>
      </div>`;
  }).join('');
}

async function loadJobs() {
  try {
    const r = await fetch('/api/jobs');
    const d = await r.json();
    renderJobs(d.jobs || []);
  } catch (err) {
    document.getElementById('jobs-container').innerHTML = '<p class="no-data">Failed to load jobs.</p>';
  }
}

async function uploadTrackJson() {
  const fileEl = document.getElementById('track-file');
  const msgEl = document.getElementById('track-upload-msg');
  const btn = document.getElementById('track-upload-btn');
  const file = fileEl.files && fileEl.files[0];
  if (!file) { msgEl.textContent = 'Please choose a JSON file first.'; return; }

  btn.disabled = true;
  msgEl.textContent = 'Uploading and starting raceline pipeline...';
  try {
    const fd = new FormData();
    fd.append('file', file);
    const r = await fetch('/api/upload-track', { method: 'POST', body: fd });
    const d = await r.json();
    if (!r.ok) { msgEl.textContent = d.detail || 'Upload failed.'; return; }
    msgEl.textContent = `Job ${d.job_id} started. Waiting for completion...`;
    await pollJob(d.job_id);
  } catch (err) {
    msgEl.textContent = 'Upload failed: ' + err;
  } finally {
    btn.disabled = false;
    fileEl.value = '';
    loadJobs();
  }
}

async function pollJob(jobId) {
  const msgEl = document.getElementById('track-upload-msg');
  for (let i = 0; i < 120; i++) {
    const r = await fetch('/api/jobs/' + jobId);
    const d = await r.json();
    if (d.status === 'succeeded') {
      msgEl.textContent = `Job ${jobId} complete. Activating generated optimum track...`;
      await activateJob(jobId);
      return;
    }
    if (d.status === 'failed') {
      msgEl.textContent = `Job ${jobId} failed: ${d.error || 'unknown error'}`;
      return;
    }
    await new Promise(res => setTimeout(res, 1500));
  }
  msgEl.textContent = `Job ${jobId} still running. Refresh jobs to continue monitoring.`;
}

async function activateJob(jobId) {
  const msgEl = document.getElementById('track-upload-msg');
  msgEl.textContent = `Activating track job ${jobId}...`;
  try {
    const r = await fetch('/api/jobs/' + jobId + '/activate', { method: 'POST' });
    const d = await r.json();
    if (!r.ok) { msgEl.textContent = d.detail || 'Activation failed.'; return; }
    msgEl.textContent = `Track ready: ${d.active_track} (${d.corner_count} curves). You can now start live analysis.`;
    await refreshStaticTrack();
    loadJobs();
    switchTab('track');
  } catch (err) {
    msgEl.textContent = 'Activation failed: ' + err;
  }
}

function stopLivePlayback() {
  allowReconnect = false;
  streamStarted = false;
  if (activeWs) { try { activeWs.close(); } catch(e){} activeWs = null; }
  document.getElementById('status-badge').textContent = 'STOPPED';
  document.getElementById('status-badge').className = '';
  document.getElementById('live-start-btn').disabled = !trackReady;
  document.getElementById('live-stop-btn').disabled = true;
  document.getElementById('live-start-msg').textContent = 'Stream stopped. Click Start to replay.';
  speedHistory = []; devHistory = []; timeHistory = []; window._seHist = [];
  document.getElementById('progress-bar').style.width = '0%';
}

function startLivePlayback() {
  if (!trackReady) {
    document.getElementById('live-start-msg').textContent = 'Upload and process a track first.';
    return;
  }
  if (streamStarted) return;
  streamStarted = true;
  allowReconnect = true;
  document.getElementById('live-start-btn').disabled = true;
  document.getElementById('live-stop-btn').disabled = false;
  document.getElementById('live-start-msg').textContent = 'Live stream running...';
  switchTab('recs');
  connect();
}

// ── WebSocket stream ──────────────────────────────────────────────────────────
function connect() {
  const badge = document.getElementById('status-badge');
  badge.textContent = 'CONNECTING'; badge.className = '';

  const ws = new WebSocket('ws://' + location.host + '/ws/stream');
  activeWs = ws;

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
      if ((msg.message || '').toLowerCase().includes('track setup required')) {
        allowReconnect = false;
        streamStarted = false;
        document.getElementById('live-start-btn').disabled = !trackReady;
        document.getElementById('live-stop-btn').disabled = true;
        setTrackReady(false);
        switchTab('track');
      }
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
        document.getElementById('live-start-btn').disabled = false;
        document.getElementById('live-stop-btn').disabled = true;
        streamStarted = false;
        allowReconnect = false;
        document.getElementById('live-start-msg').textContent = 'Playback complete. Click Start to replay.';
      }
    }
  };

  ws.onclose = () => {
    if (badge.className !== 'done' && allowReconnect) {
      badge.textContent = 'RECONNECTING'; badge.className = '';
      setTimeout(connect, 3000);
    }
  };
}

// ── boot ──────────────────────────────────────────────────────────────────────
initMap().then(() => {
  loadJobs();
  loadBags();
  if (jobsPollTimer) clearInterval(jobsPollTimer);
  jobsPollTimer = setInterval(loadJobs, 5000);
  if (bagsPollTimer) clearInterval(bagsPollTimer);
  bagsPollTimer = setInterval(loadBags, 10000);
  switchTab('track');

  // If track is already ready on load (auto-activated), enable tabs
  if (trackReady) {
    setTrackReady(true);
  }
});
</script>
</body>
</html>
"""


# ── CLI entry point ───────────────────────────────────────────────────────────

def main():
    parser = argparse.ArgumentParser(description="Racing Analyzer — Real-Time Dashboard")
    parser.add_argument("--bag", default="hackathon_wheel_to_wheel.mcap",
                        help="MCAP bag filename (relative to workspace root or absolute path)")
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
    bag_path = Path(bag)
    if not bag_path.is_absolute():
        bag_path = WS_ROOT / bag

    _state["args"] = {
        "bag": bag_path.name if bag_path.parent == WS_ROOT else str(bag_path),
        "raceline": args.raceline,
        "speed": args.speed,
        "port": args.port,
    }
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
