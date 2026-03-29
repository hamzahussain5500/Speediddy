#!/usr/bin/env python3
"""
analyze_bag.py  —  Racing Analyzer: mcap bag → terminal race report

Usage:
    python analyze_bag.py                              # default: wheel_to_wheel bag
    python analyze_bag.py hackathon_fast_laps.mcap
    python analyze_bag.py hackathon_good_lap.mcap
    python analyze_bag.py --all                        # analyse all 3 bags
    python analyze_bag.py --raceline minimum_curvature
"""

from __future__ import annotations

import argparse
import json
import sys
import time
from pathlib import Path

import numpy as np
import pandas as pd
from mcap_ros2.reader import read_ros2_messages

WS_ROOT = Path(__file__).resolve().parents[2]   # hackathon_ws/
sys.path.insert(0, str(Path(__file__).parent))

from app.core.geometry import Raceline, arc_length, series_stats
from app.core.loaders import build_raceline, build_boundaries
from app.core.corner_detection import detect_corners
from app.core.recommendations import generate_recommendations
from app.models.inputs import BoundaryData, Point2D, RacelinePoint
from app.models.outputs import CornerResult
from app.services.analysis_service import (
    _compute_per_point_metrics,
    _build_corner_result,
)

ALL_BAGS = [
    "hackathon_wheel_to_wheel.mcap",
    "hackathon_fast_laps.mcap",
    "hackathon_good_lap.mcap",
]

# ─────────────────────── data loading ───────────────────────────────────────

def load_raceline_csv(path: Path) -> Raceline:
    df = pd.read_csv(path)
    points = [
        RacelinePoint(
            s=float(row["s"]), x=float(row["x"]), y=float(row["y"]),
            psi=float(row["psi"]), kappa=float(row["kappa"]),
            vx=float(row["vx"]), ax=float(row.get("ax", 0.0)),
        )
        for _, row in df.iterrows()
    ]
    return build_raceline(points)


def load_boundaries_json(path: Path):
    with open(path) as f:
        data = json.load(f)
    bd = BoundaryData(
        left=[Point2D(x=p[0], y=p[1]) for p in data["boundaries"]["left_border"]],
        right=[Point2D(x=p[0], y=p[1]) for p in data["boundaries"]["right_border"]],
    )
    return build_boundaries(bd)


def read_bag(mcap_path: Path):
    """Returns (timestamps, xs, ys, yaws, vxs) as float64 arrays."""
    rows = []
    for m in read_ros2_messages(str(mcap_path), topics=["/constructor0/state_estimation"]):
        r = m.ros_msg
        rows.append((m.log_time.timestamp(), r.x_m, r.y_m, r.yaw_rad, r.v_mps))
    arr = np.array(rows, dtype=float)
    return arr[:, 0], arr[:, 1], arr[:, 2], arr[:, 3], arr[:, 4]


# ─────────────────────── lap detection ──────────────────────────────────────

def detect_laps(
    timestamps: np.ndarray,
    xs: np.ndarray,
    ys: np.ndarray,
    sf_x: float,
    sf_y: float,
    radius: float = 20.0,
    min_lap_s: float = 60.0,
) -> list[tuple[int, int, str]]:
    """
    Return list of (start_idx, end_idx, label) for each detected run.

    Strategy:
    - If ≥2 S/F crossings → each pair is a complete timed lap.
    - If exactly 1 crossing → the segment AFTER the crossing is a timed lap
      (bag started before S/F, crossed once, recording ends).
    - If 0 crossings → whole bag treated as one run.

    Labels: "Lap N (complete)", "Timed run", "Full bag"
    """
    dists = np.hypot(xs - sf_x, ys - sf_y)
    in_zone = dists < radius

    crossings: list[int] = []
    was_in = in_zone[0]
    for i in range(1, len(in_zone)):
        if not was_in and in_zone[i]:
            crossings.append(i)
        was_in = in_zone[i]

    n = len(timestamps)

    if len(crossings) == 0:
        # No S/F zone crossed — analyse entire bag
        return [(0, n - 1, "Full bag")]

    if len(crossings) == 1:
        # One crossing: segment before = warm-up / out-lap, segment after = timed lap
        sf_idx = crossings[0]
        runs = []
        before_dur = timestamps[sf_idx] - timestamps[0]
        after_dur  = timestamps[-1] - timestamps[sf_idx]
        if before_dur >= min_lap_s:
            runs.append((0, sf_idx, "Warm-up lap"))
        if after_dur >= min_lap_s:
            runs.append((sf_idx, n - 1, "Timed lap"))
        if not runs:
            # Both segments too short — just use the whole bag
            runs.append((0, n - 1, "Full bag"))
        return runs

    # ≥2 crossings: pair them up into complete laps
    laps: list[tuple[int, int, str]] = []
    lap_num = 1
    for i in range(len(crossings) - 1):
        s, e = crossings[i], crossings[i + 1]
        if timestamps[e] - timestamps[s] >= min_lap_s:
            laps.append((s, e, f"Lap {lap_num} (complete)"))
            lap_num += 1
    if not laps:
        laps.append((0, n - 1, "Full bag"))
    return laps


# ─────────────────────── analysis helpers ───────────────────────────────────

def analyse_segment(
    raceline: Raceline,
    xs: np.ndarray,
    ys: np.ndarray,
    yaws: np.ndarray,
    vxs: np.ndarray,
):
    """Run full analysis on a trajectory segment. Returns metrics dict."""
    idxs, distances, lat_devs, hdg_errs, spd_errs = _compute_per_point_metrics(
        raceline, xs, ys, yaws, vxs
    )
    ref_s = raceline.s[idxs]

    corner_segs = detect_corners(raceline)
    corners: list[CornerResult] = [
        _build_corner_result(seg, raceline, ref_s, lat_devs, spd_errs, idxs, vxs)
        for seg in corner_segs
    ]
    recs = generate_recommendations(corners)

    return dict(
        idxs=idxs,
        lat_devs=lat_devs,
        spd_errs=spd_errs,
        hdg_errs=hdg_errs,
        distances=distances,
        ref_s=ref_s,
        corners=corners,
        recs=recs,
        path_len=arc_length(xs, ys),
        lat_stats=series_stats(lat_devs),
        spd_stats=series_stats(spd_errs),
        hdg_stats=series_stats(hdg_errs),
    )


# ─────────────────────── printing ───────────────────────────────────────────

W = 70

def _bar(title: str = "") -> str:
    if not title:
        return "═" * W
    pad = (W - len(title) - 2) // 2
    right = W - pad - len(title) - 2
    return "═" * pad + f" {title} " + "═" * right

def _row(label: str, value: str, unit: str = "") -> str:
    return f"  {label:<36}{value} {unit}".rstrip()

def _mini(label: str, value: float, unit: str = "", sign: bool = False) -> str:
    fmt = f"{value:+.2f}" if sign else f"{value:.2f}"
    return f"  {label:<28}{fmt} {unit}".rstrip()


def print_lap(
    lap_num: int,
    lap_time: float,
    m: dict,
    raceline: Raceline,
    label: str = "",
) -> None:
    title = label or f"Run {lap_num}"
    print(f"\n{_bar(f'{title}  —  {lap_time:.1f} s')}")
    print(_row("Path length",     f"{m['path_len']:.0f} m"))
    print(_row("Raceline length", f"{raceline.total_length:.0f} m"))

    print("\n  Lateral deviation (signed, +left / −right of raceline)")
    print(_mini("  Mean",    m['lat_stats']['mean'],    "m", sign=True))
    print(_mini("  RMS",     m['lat_stats']['rms'],     "m"))
    print(_mini("  Max |dev|",m['lat_stats']['max_abs'], "m"))
    print(_mini("  95th pct |dev|", m['lat_stats']['p95'], "m"))

    print("\n  Speed error  (actual − reference)")
    print(_mini("  Mean",     m['spd_stats']['mean'],    "m/s", sign=True))
    print(_mini("  RMS",      m['spd_stats']['rms'],     "m/s"))
    print(_mini("  Max |err|",m['spd_stats']['max_abs'], "m/s"))

    print("\n  Heading error")
    print(_mini("  RMS",     np.degrees(m['hdg_stats']['rms']),     "deg"))
    print(_mini("  Max |err|",np.degrees(m['hdg_stats']['max_abs']), "deg"))

    covered = [c for c in m['corners'] if c.trajectory_coverage >= 0.05]
    print(f"\n  Corners  ({len(covered)}/{len(m['corners'])} covered by trajectory)")
    if covered:
        print(f"  {'#':<4} {'Type':<10} {'Dir':<7} {'Apex s':>8} {'MaxLat m':>10} {'SpdErr':>8} {'Sev':>6}")
        print("  " + "─" * 55)
        for c in covered:
            lat = f"{c.deviation_profile.max_lateral:+.2f}" if c.deviation_profile else "  —"
            spd = f"{c.speed_profile.mean_speed_error:+.2f}" if c.speed_profile else "  —"
            print(
                f"  {c.id+1:<4} {c.corner_type:<10} {c.turn_direction:<7} "
                f"{c.apex_s:>8.0f} {lat:>10} {spd:>8} {c.severity_score:>6.2f}"
            )

    if m['recs']:
        print(f"\n  Top Recommendations  ({len(m['recs'])} total)")
        for i, r in enumerate(m['recs'][:4], 1):
            pri = r.coaching_priority.upper()
            print(f"\n  [{i}] {r.corner_label}  [{pri}]  {r.issue_type.replace('_', ' ')}")
            print(f"      {r.explanation}")
            print(f"      → {r.recommendation}")
    else:
        print("\n  No significant issues detected.")


def print_bag_summary(
    bag_name: str,
    laps: list[dict],   # each dict: lap_time, m (analysis)
) -> None:
    print(f"\n{_bar(f'SUMMARY — {bag_name}')}")
    if not laps:
        print("  No complete laps detected.")
        return
    times = [l['lap_time'] for l in laps]
    best_idx = int(np.argmin(times))
    print(_row("Complete laps",  str(len(laps))))
    print(_row("Best lap",       f"{min(times):.1f} s"))
    print(_row("Worst lap",      f"{max(times):.1f} s"))
    if len(times) > 1:
        print(_row("Consistency (range)", f"{max(times)-min(times):.1f} s"))

    # Best-lap corner summary
    bm = laps[best_idx]['m']
    covered = [c for c in bm['corners'] if c.trajectory_coverage >= 0.05]
    if covered:
        print(f"\n  Best-lap corner performance:")
        for c in covered:
            spd = f"{c.speed_profile.mean_speed_error:+.2f} m/s" if c.speed_profile else "—"
            lat = f"{c.deviation_profile.rms_lateral:.2f} m" if c.deviation_profile else "—"
            print(f"    Corner {c.id+1} ({c.corner_type:<8}) "
                  f"spd_err={spd:>10}  lat_rms={lat}")


# ─────────────────────── main ───────────────────────────────────────────────

def analyse_bag(
    mcap_path: Path,
    raceline: Raceline,
    sf_x: float,
    sf_y: float,
    verbose: bool = True,
) -> list[dict]:
    """Load bag, detect laps, analyse each. Returns list of lap result dicts."""
    timestamps, xs, ys, yaws, vxs = read_bag(mcap_path)
    duration = timestamps[-1] - timestamps[0]
    if verbose:
        print(f"  {len(timestamps)} msgs  |  {duration:.0f} s  |  "
              f"{xs.min():.0f}–{xs.max():.0f} x,  {ys.min():.0f}–{ys.max():.0f} y")

    runs = detect_laps(timestamps, xs, ys, sf_x, sf_y)
    if verbose:
        print(f"  Detected {len(runs)} run(s)")

    results = []
    for run_num, (s_idx, e_idx, label) in enumerate(runs, 1):
        lap_time = float(timestamps[e_idx] - timestamps[s_idx])
        m = analyse_segment(
            raceline,
            xs[s_idx : e_idx + 1],
            ys[s_idx : e_idx + 1],
            yaws[s_idx : e_idx + 1],
            vxs[s_idx : e_idx + 1],
        )
        results.append({"lap_num": run_num, "label": label, "lap_time": lap_time, "m": m})
        if verbose:
            print_lap(run_num, lap_time, m, raceline, label=label)

    return results


def main() -> None:
    parser = argparse.ArgumentParser(description="Racing Analyzer — mcap → report")
    parser.add_argument("mcap", nargs="?", default=None, help=".mcap file path")
    parser.add_argument("--all", action="store_true", help="Analyse all 3 bags")
    parser.add_argument(
        "--raceline", choices=["hybrid", "minimum_curvature"], default="hybrid"
    )
    args = parser.parse_args()

    raceline_csv = WS_ROOT / f"raceline_{args.raceline}.csv"
    boundaries_json = WS_ROOT / "yas_marina_bnd.json"

    t_start = time.perf_counter()

    print(f"\n{_bar('RACING ANALYZER — Yas Marina')}")
    print(_row("Raceline", args.raceline))

    # Load reference data once
    print("\nLoading reference data...", end=" ", flush=True)
    raceline = load_raceline_csv(raceline_csv)
    print(f"done  ({raceline.n_points} pts, {raceline.total_length:.0f} m)")

    # S/F reference point: raceline index 0
    sf_x, sf_y = float(raceline.x[0]), float(raceline.y[0])
    print(_row("S/F zone", f"({sf_x:.0f}, {sf_y:.0f})  r=20 m"))

    # Which bags to process
    if args.all:
        bags = [WS_ROOT / b for b in ALL_BAGS]
    elif args.mcap:
        bags = [Path(args.mcap)]
    else:
        bags = [WS_ROOT / "hackathon_wheel_to_wheel.mcap"]

    all_lap_results: dict[str, list[dict]] = {}

    for bag_path in bags:
        if not bag_path.exists():
            print(f"\nWARNING: {bag_path} not found, skipping.")
            continue
        print(f"\n{'─'*W}")
        print(f"  Bag: {bag_path.name}")
        lap_results = analyse_bag(bag_path, raceline, sf_x, sf_y, verbose=True)
        all_lap_results[bag_path.name] = lap_results
        print_bag_summary(bag_path.name, lap_results)

    # Cross-bag comparison if multiple bags
    if len(all_lap_results) > 1:
        print(f"\n{_bar('CROSS-BAG COMPARISON')}")
        all_best: list[tuple[str, float]] = []
        for bag_name, laps in all_lap_results.items():
            if laps:
                best = min(l['lap_time'] for l in laps)
                all_best.append((bag_name, best))
        if all_best:
            all_best.sort(key=lambda x: x[1])
            print("  Best lap per bag (fastest first):")
            for rank, (name, t) in enumerate(all_best, 1):
                delta = f"  (+{t - all_best[0][1]:.2f}s)" if rank > 1 else "  ← FASTEST"
                print(f"    {rank}. {name:<40} {t:.2f} s{delta}")

    elapsed = time.perf_counter() - t_start
    print(f"\n{_bar()}")
    print(f"  Analysis complete in {elapsed:.2f} s")
    print(_bar())
    print()


if __name__ == "__main__":
    main()
