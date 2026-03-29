#!/usr/bin/env python3
"""Minimal raceline generation pipeline.

Input
-----
A JSON track boundary file with schema:
{
  "boundaries": {
    "left_border": [[x, y], ...],
    "right_border": [[x, y], ...]
  }
}

Output
------
- raceline_shortest_path.csv
- raceline_minimum_curvature.csv
- raceline_hybrid.csv
- hybrid_blend_weights.csv
- reftrack_from_json.csv

Additionally (frontend-friendly JSON):
- raceline_shortest_path.json
- raceline_minimum_curvature.json
- raceline_hybrid.json
- hybrid_blend_weights.json
- reftrack_from_json.json
- trajectories_bundle.json
"""

from __future__ import annotations

import argparse
import json
import os
import sys
from pathlib import Path
from typing import Any

import matplotlib.pyplot as plt
import numpy as np
from scipy.spatial import cKDTree


def _is_git_lfs_pointer(file_path: Path) -> bool:
    if not file_path.exists() or not file_path.is_file():
        return False
    try:
        with file_path.open("r", encoding="utf-8", errors="ignore") as f:
            first_line = f.readline().strip()
        return first_line.startswith("version https://git-lfs.github.com/spec/v1")
    except OSError:
        return False


def _write_fallback_dynamics_files(export_dir: Path) -> tuple[Path, Path]:
    export_dir.mkdir(parents=True, exist_ok=True)

    ggv_fallback = export_dir / "_fallback_ggv.csv"
    ax_fallback = export_dir / "_fallback_ax_max_machines.csv"

    ggv = np.array(
        [
            [0.0, 12.0, 14.0],
            [10.0, 11.0, 13.0],
            [20.0, 10.0, 12.0],
            [30.0, 9.0, 11.0],
            [40.0, 8.0, 10.0],
            [50.0, 7.0, 9.0],
            [60.0, 6.0, 8.0],
            [70.0, 5.0, 7.0],
        ],
        dtype=float,
    )
    ax = np.array(
        [
            [0.0, 8.0],
            [10.0, 7.5],
            [20.0, 7.0],
            [30.0, 6.0],
            [40.0, 5.0],
            [50.0, 4.0],
            [60.0, 3.0],
            [70.0, 2.5],
        ],
        dtype=float,
    )

    np.savetxt(ggv_fallback, ggv, delimiter=",", fmt="%.6f")
    np.savetxt(ax_fallback, ax, delimiter=",", fmt="%.6f")
    return ggv_fallback, ax_fallback


def _resample_closed_polyline(points: np.ndarray, n: int) -> np.ndarray:
    if points.shape[0] < 3:
        raise ValueError("Need at least 3 points for a closed track")

    closed = np.vstack([points, points[0]])
    seg = np.linalg.norm(np.diff(closed, axis=0), axis=1)
    s = np.concatenate([[0.0], np.cumsum(seg)])
    total = float(s[-1])
    if total <= 0.0:
        raise ValueError("Boundary has zero total length")

    target = np.linspace(0.0, total, n + 1)[:-1]
    x = np.interp(target, s, closed[:, 0])
    y = np.interp(target, s, closed[:, 1])
    return np.column_stack([x, y])


def _best_cyclic_shift(reference: np.ndarray, candidate: np.ndarray) -> tuple[int, float]:
    n = reference.shape[0]
    best_shift = 0
    best_cost = float("inf")
    for shift in range(n):
        rolled = np.roll(candidate, shift=shift, axis=0)
        cost = float(np.mean(np.linalg.norm(reference - rolled, axis=1)))
        if cost < best_cost:
            best_cost = cost
            best_shift = shift
    return best_shift, best_cost


def _align_boundaries(left: np.ndarray, right: np.ndarray) -> tuple[np.ndarray, np.ndarray]:
    shift_cw, cost_cw = _best_cyclic_shift(left, right)
    right_cw = np.roll(right, shift=shift_cw, axis=0)

    right_rev = np.flipud(right)
    shift_ccw, cost_ccw = _best_cyclic_shift(left, right_rev)
    right_ccw = np.roll(right_rev, shift=shift_ccw, axis=0)

    if cost_ccw < cost_cw:
        return left, right_ccw
    return left, right_cw


def _smooth_closed_polyline(points: np.ndarray, window: int) -> np.ndarray:
    if window <= 1:
        return points
    if window % 2 == 0:
        window += 1
    pad = window // 2
    ext = np.vstack([points[-pad:], points, points[:pad]])
    ker = np.ones(window, dtype=float) / float(window)
    x = np.convolve(ext[:, 0], ker, mode="valid")
    y = np.convolve(ext[:, 1], ker, mode="valid")
    return np.column_stack([x, y])


def _signed_area(poly: np.ndarray) -> float:
    x = poly[:, 0]
    y = poly[:, 1]
    return 0.5 * float(np.sum(x * np.roll(y, -1) - np.roll(x, -1) * y))


def _mean_cross_sign(center: np.ndarray, side: np.ndarray) -> float:
    tangent = np.roll(center, -1, axis=0) - center
    to_side = side - center
    cross_z = tangent[:, 0] * to_side[:, 1] - tangent[:, 1] * to_side[:, 0]
    return float(np.mean(cross_z))


def build_racetrack_from_json(
    json_path: Path,
    n_samples: int,
    race_track_factory: Any,
    race_track_cls: Any,
    centerline_smooth_window: int,
    boundary_margin_m: float,
):
    with json_path.open("r", encoding="utf-8") as f:
        data = json.load(f)

    boundaries = data.get("boundaries", {})
    left_raw = np.asarray(boundaries.get("left_border", []), dtype=float)
    right_raw = np.asarray(boundaries.get("right_border", []), dtype=float)
    if left_raw.size == 0 or right_raw.size == 0:
        raise ValueError("Missing boundaries.left_border / boundaries.right_border")

    left = _resample_closed_polyline(left_raw, n_samples)
    right = _resample_closed_polyline(right_raw, n_samples)
    left, right = _align_boundaries(left, right)

    center = 0.5 * (left + right)
    center = _smooth_closed_polyline(center, centerline_smooth_window)

    # enforce clockwise for planner assumptions
    if not race_track_factory.check_clockwise(center):
        left = np.flipud(left)
        right = np.flipud(right)
        center = np.flipud(center)

    # fallback orientation check (in case check_clockwise behavior changes)
    if _signed_area(center) > 0.0:
        left = np.flipud(left)
        right = np.flipud(right)
        center = np.flipud(center)

    left_sign = _mean_cross_sign(center, left)
    right_sign = _mean_cross_sign(center, right)
    if not (left_sign > 0.0 and right_sign < 0.0):
        left, right = right, left
        center = 0.5 * (left + right)

    w_tr_right = np.linalg.norm(right - center, axis=1)
    w_tr_left = np.linalg.norm(left - center, axis=1)

    if boundary_margin_m > 0.0:
        w_tr_right = w_tr_right - boundary_margin_m
        w_tr_left = w_tr_left - boundary_margin_m
        if np.any(w_tr_right <= 0.0) or np.any(w_tr_left <= 0.0):
            raise ValueError(
                f"Boundary margin too large ({boundary_margin_m:.3f} m) for this track"
            )

    race_track = race_track_cls(
        x_m=center[:, 0],
        y_m=center[:, 1],
        w_tr_right_m=w_tr_right,
        w_tr_left_m=w_tr_left,
    )
    return race_track, left, right, center


def _periodic_interp(data: np.ndarray, n_target: int) -> np.ndarray:
    n_src = data.shape[0]
    if n_src == n_target:
        return data.copy()

    src_idx = np.arange(n_src + 1, dtype=float)
    tgt_idx = np.linspace(0.0, float(n_src), n_target, endpoint=False)

    if data.ndim == 1:
        src_vals = np.concatenate([data, data[:1]])
        return np.interp(tgt_idx, src_idx, src_vals)

    out = np.empty((n_target, data.shape[1]), dtype=float)
    for j in range(data.shape[1]):
        src_vals = np.concatenate([data[:, j], data[:1, j]])
        out[:, j] = np.interp(tgt_idx, src_idx, src_vals)
    return out


def _compute_path_curvature(points: np.ndarray) -> np.ndarray:
    x = points[:, 0]
    y = points[:, 1]
    x_prev = np.roll(x, 1)
    x_next = np.roll(x, -1)
    y_prev = np.roll(y, 1)
    y_next = np.roll(y, -1)

    dx = 0.5 * (x_next - x_prev)
    dy = 0.5 * (y_next - y_prev)
    ddx = x_next - 2.0 * x + x_prev
    ddy = y_next - 2.0 * y + y_prev

    den = (dx * dx + dy * dy) ** 1.5
    den = np.where(den < 1e-9, 1e-9, den)
    return (dx * ddy - dy * ddx) / den


def _circular_smooth(arr: np.ndarray, window: int) -> np.ndarray:
    if window <= 1:
        return arr
    if window % 2 == 0:
        window += 1
    pad = window // 2
    ext = np.concatenate([arr[-pad:], arr, arr[:pad]])
    ker = np.ones(window, dtype=float) / float(window)
    return np.convolve(ext, ker, mode="valid")


def _blend_angles(a: np.ndarray, b: np.ndarray, w: np.ndarray) -> np.ndarray:
    au = np.unwrap(a)
    bu = np.unwrap(b)
    mixed = (1.0 - w) * au + w * bu
    return (mixed + np.pi) % (2.0 * np.pi) - np.pi


def _compute_s(points: np.ndarray) -> np.ndarray:
    seg = np.linalg.norm(np.roll(points, -1, axis=0) - points, axis=1)
    s = np.zeros(points.shape[0], dtype=float)
    if points.shape[0] > 1:
        s[1:] = np.cumsum(seg[:-1])
    return s


def _extend_weights_forward(weights: np.ndarray, hold_steps: int) -> np.ndarray:
    out = weights.copy()
    for k in range(1, max(0, hold_steps) + 1):
        out = np.maximum(out, np.roll(weights, k))
    return out


def _extend_weights_backward(weights: np.ndarray, lead_steps: int) -> np.ndarray:
    out = weights.copy()
    for k in range(1, max(0, lead_steps) + 1):
        out = np.maximum(out, np.roll(weights, -k))
    return out


def _fuse_racelines(
    race_track: Any,
    raceline_sp: Any,
    raceline_mc: Any,
    kappa_low: float,
    kappa_high: float,
    kappa_gamma: float,
    blend_window: int,
    curve_lead_m: float,
    curve_hold_m: float,
    curve_exit_smooth_window: int,
) -> dict[str, np.ndarray]:
    sp_pts = np.asarray(raceline_sp.points, dtype=float)
    mc_pts = np.asarray(raceline_mc.points, dtype=float)

    n = max(sp_pts.shape[0], mc_pts.shape[0])
    sp_pts = _periodic_interp(sp_pts, n)
    mc_pts = _periodic_interp(mc_pts, n)

    sp_psi = _periodic_interp(np.asarray(raceline_sp.heading_per_point, dtype=float), n)
    mc_psi = _periodic_interp(np.asarray(raceline_mc.heading_per_point, dtype=float), n)
    sp_kappa = _periodic_interp(np.asarray(raceline_sp.curvature_per_point, dtype=float), n)
    mc_kappa = _periodic_interp(np.asarray(raceline_mc.curvature_per_point, dtype=float), n)
    sp_vx = _periodic_interp(np.asarray(raceline_sp.velocity_long_per_point, dtype=float), n)
    mc_vx = _periodic_interp(np.asarray(raceline_mc.velocity_long_per_point, dtype=float), n)
    sp_ax = _periodic_interp(np.asarray(raceline_sp.acceleration_long_per_point, dtype=float), n)
    mc_ax = _periodic_interp(np.asarray(raceline_mc.acceleration_long_per_point, dtype=float), n)

    center = np.column_stack([race_track.x_m, race_track.y_m])
    kappa_center = np.abs(_compute_path_curvature(center))
    ds_center = np.linalg.norm(np.roll(center, -1, axis=0) - center, axis=1)
    mean_ds = float(np.mean(ds_center)) if ds_center.size > 0 else 1.0

    denom = max(kappa_high - kappa_low, 1e-9)
    kappa_norm = np.clip((kappa_center - kappa_low) / denom, 0.0, 1.0)
    gamma = max(float(kappa_gamma), 1e-6)
    w_center = kappa_norm**gamma

    lead_steps = int(round(max(curve_lead_m, 0.0) / max(mean_ds, 1e-6)))
    hold_steps = int(round(max(curve_hold_m, 0.0) / max(mean_ds, 1e-6)))
    w_center = _extend_weights_backward(w_center, lead_steps)
    w_center = _extend_weights_forward(w_center, hold_steps)

    if curve_exit_smooth_window > 1:
        w_center = _circular_smooth(w_center, curve_exit_smooth_window)
    w_center = _circular_smooth(w_center, blend_window)

    mids = 0.5 * (sp_pts + mc_pts)
    idx_center = cKDTree(center).query(mids, k=1)[1]
    w = w_center[idx_center]

    hybrid_pts = (1.0 - w[:, None]) * sp_pts + w[:, None] * mc_pts
    hybrid_psi = _blend_angles(sp_psi, mc_psi, w)
    hybrid_kappa = (1.0 - w) * sp_kappa + w * mc_kappa
    hybrid_vx = (1.0 - w) * sp_vx + w * mc_vx
    hybrid_ax = (1.0 - w) * sp_ax + w * mc_ax
    hybrid_s = _compute_s(hybrid_pts)

    return {
        "w": w,
        "points": hybrid_pts,
        "psi": hybrid_psi,
        "kappa": hybrid_kappa,
        "vx": hybrid_vx,
        "ax": hybrid_ax,
        "s": hybrid_s,
    }


def _import_planner_modules(planner_repo: Path | None):
    if planner_repo is not None:
        sys.path.insert(0, str(planner_repo.resolve()))

    from commonroad_raceline_planner.configuration.ftm_config.ftm_config import FTMConfigFactory  # type: ignore
    from commonroad_raceline_planner.configuration.ftm_config.optimization_config import OptimizationType  # type: ignore
    from commonroad_raceline_planner.planner.ftm_planner.ftm_mc_planner import MinimumCurvaturePlanner  # type: ignore
    from commonroad_raceline_planner.planner.ftm_planner.ftm_sp_planner import ShortestPathPlanner  # type: ignore
    from commonroad_raceline_planner.racetrack import RaceTrack, RaceTrackFactory  # type: ignore

    return FTMConfigFactory, OptimizationType, MinimumCurvaturePlanner, ShortestPathPlanner, RaceTrack, RaceTrackFactory


def _looks_like_planner_repo(path: Path) -> bool:
    return (
        path.exists()
        and path.is_dir()
        and (path / "commonroad_raceline_planner").exists()
        and (path / "scenarios" / "params" / "racecar.ini").exists()
    )


def _resolve_planner_repo(cli_value: Path | None) -> Path:
    """Resolve planner repository path from CLI, env var, or common local paths."""
    candidates: list[Path] = []

    if cli_value is not None:
        candidates.append(cli_value)

    env_value = os.environ.get("COMMONROAD_PLANNER_REPO")
    if env_value:
        candidates.append(Path(env_value))

    script_dir = Path(__file__).resolve().parent
    candidates.extend(
        [
            script_dir / "vendor",
            script_dir / "commonroad-raceline-planner",
            script_dir.parent / "commonroad-raceline-planner",
            script_dir.parent / "hackathon" / "commonroad-raceline-planner",
        ]
    )

    for c in candidates:
        p = c.expanduser().resolve()
        if _looks_like_planner_repo(p):
            return p

    searched = "\n  - ".join(str(c.expanduser().resolve()) for c in candidates)
    raise FileNotFoundError(
        "Could not locate the CommonRoad planner repository.\n"
        "Provide --planner-repo or set COMMONROAD_PLANNER_REPO.\n"
        "Expected repo layout must contain: commonroad_raceline_planner/ and scenarios/params/racecar.ini\n"
        f"Searched:\n  - {searched}"
    )


def _save_raceline_plot(
    left: np.ndarray,
    right: np.ndarray,
    points: np.ndarray,
    title: str,
    out_path: Path,
    line_color: str,
) -> None:
    fig, ax = plt.subplots(figsize=(10, 6.5))
    ax.plot(left[:, 0], left[:, 1], color="0.6", linewidth=1.3, label="Left boundary")
    ax.plot(right[:, 0], right[:, 1], color="0.6", linewidth=1.3, label="Right boundary")
    ax.plot(points[:, 0], points[:, 1], color=line_color, linewidth=2.0, label="Raceline")

    ax.set_title(title)
    ax.set_xlabel("x [m]")
    ax.set_ylabel("y [m]")
    ax.set_aspect("equal", adjustable="box")
    ax.grid(alpha=0.25)
    ax.legend(loc="best")
    fig.tight_layout()

    out_path.parent.mkdir(parents=True, exist_ok=True)
    fig.savefig(out_path, dpi=180)
    plt.close(fig)


def _trajectory_json_payload(name: str, data_7d: np.ndarray) -> dict[str, Any]:
    """Convert a 7D raceline array [s,x,y,psi,kappa,vx,ax] to JSON-ready payload."""
    if data_7d.ndim != 2 or data_7d.shape[1] != 7:
        raise ValueError(f"Expected (N,7) for trajectory '{name}', got {data_7d.shape}")

    return {
        "name": name,
        "columns": ["s", "x", "y", "psi", "kappa", "vx", "ax"],
        "size": int(data_7d.shape[0]),
        "s": data_7d[:, 0].tolist(),
        "x": data_7d[:, 1].tolist(),
        "y": data_7d[:, 2].tolist(),
        "psi": data_7d[:, 3].tolist(),
        "kappa": data_7d[:, 4].tolist(),
        "vx": data_7d[:, 5].tolist(),
        "ax": data_7d[:, 6].tolist(),
        "points_xy": data_7d[:, 1:3].tolist(),
    }


def _write_json(path: Path, payload: dict[str, Any], indent: int = 2) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("w", encoding="utf-8") as f:
        json.dump(payload, f, indent=indent)


def _write_json_outputs(
    output_dir: Path,
    track_json_path: Path,
    left: np.ndarray,
    right: np.ndarray,
    center: np.ndarray,
    reftrack: np.ndarray,
    sp_7d: np.ndarray,
    mc_7d: np.ndarray,
    hybrid_7d: np.ndarray,
    blend_weights: np.ndarray,
    args: argparse.Namespace,
    json_indent: int,
) -> list[Path]:
    payload_sp = _trajectory_json_payload("shortest_path", sp_7d)
    payload_mc = _trajectory_json_payload("minimum_curvature", mc_7d)
    payload_hy = _trajectory_json_payload("hybrid", hybrid_7d)

    reftrack_payload = {
        "columns": ["x_m", "y_m", "w_tr_right_m", "w_tr_left_m"],
        "size": int(reftrack.shape[0]),
        "x_m": reftrack[:, 0].tolist(),
        "y_m": reftrack[:, 1].tolist(),
        "w_tr_right_m": reftrack[:, 2].tolist(),
        "w_tr_left_m": reftrack[:, 3].tolist(),
    }

    bundle = {
        "schema_version": 1,
        "source_track_json": str(track_json_path.resolve()),
        "settings": {
            "samples": int(args.samples),
            "s_reg": float(args.s_reg),
            "centerline_smooth_window": int(args.centerline_smooth_window),
            "boundary_margin": float(args.boundary_margin),
            "kappa_low": float(args.kappa_low),
            "kappa_high": float(args.kappa_high),
            "kappa_gamma": float(args.kappa_gamma),
            "blend_window": int(args.blend_window),
            "curve_lead_m": float(args.curve_lead_m),
            "curve_hold_m": float(args.curve_hold_m),
            "curve_exit_smooth_window": int(args.curve_exit_smooth_window),
        },
        "boundaries": {
            "left_border": left.tolist(),
            "right_border": right.tolist(),
            "centerline": center.tolist(),
        },
        "reftrack": reftrack_payload,
        "blend_weights": {
            "size": int(blend_weights.shape[0]),
            "w": blend_weights.tolist(),
        },
        "trajectories": {
            "shortest_path": payload_sp,
            "minimum_curvature": payload_mc,
            "hybrid": payload_hy,
        },
    }

    out_sp = output_dir / "raceline_shortest_path.json"
    out_mc = output_dir / "raceline_minimum_curvature.json"
    out_hy = output_dir / "raceline_hybrid.json"
    out_bw = output_dir / "hybrid_blend_weights.json"
    out_rf = output_dir / "reftrack_from_json.json"
    out_bd = output_dir / "trajectories_bundle.json"

    _write_json(out_sp, payload_sp, indent=json_indent)
    _write_json(out_mc, payload_mc, indent=json_indent)
    _write_json(out_hy, payload_hy, indent=json_indent)
    _write_json(out_bw, {"size": int(blend_weights.shape[0]), "w": blend_weights.tolist()}, indent=json_indent)
    _write_json(out_rf, reftrack_payload, indent=json_indent)
    _write_json(out_bd, bundle, indent=json_indent)

    return [out_sp, out_mc, out_hy, out_bw, out_rf, out_bd]


def main() -> None:
    parser = argparse.ArgumentParser(description="Minimal pipeline: JSON -> SP + MC + Hybrid racelines")
    parser.add_argument("--track-json", type=Path, required=True)
    parser.add_argument("--output-dir", type=Path, default=Path("./outputs"))
    parser.add_argument(
        "--planner-repo",
        type=Path,
        default=None,
        help=(
            "Path to commonroad-raceline-planner repo. "
            "If omitted, script tries COMMONROAD_PLANNER_REPO env var and nearby default locations."
        ),
    )

    parser.add_argument("--samples", type=int, default=1600)
    parser.add_argument("--s-reg", type=float, default=40.0)
    parser.add_argument("--centerline-smooth-window", type=int, default=7)
    parser.add_argument("--boundary-margin", type=float, default=0.5)
    parser.add_argument("--min-track-width", type=float, default=None)

    parser.add_argument("--kappa-low", type=float, default=0.003)
    parser.add_argument("--kappa-high", type=float, default=0.02)
    parser.add_argument("--kappa-gamma", type=float, default=1.0)
    parser.add_argument("--blend-window", type=int, default=31)
    parser.add_argument("--curve-lead-m", type=float, default=15.0)
    parser.add_argument("--curve-hold-m", type=float, default=20.0)
    parser.add_argument("--curve-exit-smooth-window", type=int, default=41)

    parser.add_argument("--strict-dynamics", action="store_true")
    parser.add_argument(
        "--json-only",
        action="store_true",
        help="Write JSON outputs only (skip CSV exports).",
    )
    parser.add_argument(
        "--json-indent",
        type=int,
        default=2,
        help="Indentation spaces for output JSON files.",
    )
    args = parser.parse_args()

    planner_repo = _resolve_planner_repo(args.planner_repo)

    (
        FTMConfigFactory,
        OptimizationType,
        MinimumCurvaturePlanner,
        ShortestPathPlanner,
        RaceTrack,
        RaceTrackFactory,
    ) = _import_planner_modules(planner_repo)

    output_dir = args.output_dir.resolve()
    output_dir.mkdir(parents=True, exist_ok=True)

    ini = planner_repo / "scenarios" / "params" / "racecar.ini"
    ggv = planner_repo / "scenarios" / "veh_dyn_info" / "ggv.csv"
    ax = planner_repo / "scenarios" / "veh_dyn_info" / "ax_max_machines.csv"

    if _is_git_lfs_pointer(ggv) or _is_git_lfs_pointer(ax):
        if args.strict_dynamics:
            raise RuntimeError("Dynamics files are Git LFS pointers. Run git lfs pull in planner repo.")
        print("[WARN] Using fallback dynamics tables because planner dynamics files are Git LFS pointers")
        ggv, ax = _write_fallback_dynamics_files(output_dir)

    cfg = FTMConfigFactory.generate_from_files(
        path_to_ini=ini,
        ggv_file=ggv,
        ax_max_machines_file=ax,
        min_track_width=args.min_track_width,
        optimization_type=OptimizationType.MINIMUM_CURVATURE,
    )

    cfg.computation_config.general_config.smoothing_config.s_reg = float(args.s_reg)

    race_track, left, right, center = build_racetrack_from_json(
        json_path=args.track_json,
        n_samples=int(args.samples),
        race_track_factory=RaceTrackFactory,
        race_track_cls=RaceTrack,
        centerline_smooth_window=int(args.centerline_smooth_window),
        boundary_margin_m=float(args.boundary_margin),
    )

    reftrack = np.column_stack([center[:, 0], center[:, 1], race_track.w_tr_right_m, race_track.w_tr_left_m])
    if not args.json_only:
        np.savetxt(
            output_dir / "reftrack_from_json.csv",
            reftrack,
            delimiter=",",
            header="x_m,y_m,w_tr_right_m,w_tr_left_m",
            comments="",
        )

    sp = ShortestPathPlanner(race_track=race_track, config=cfg)
    raceline_sp = sp.plan()
    sp_7d = raceline_sp.to_7d_np_array()
    if not args.json_only:
        np.savetxt(
            output_dir / "raceline_shortest_path.csv",
            sp_7d,
            delimiter=",",
            header="s,x,y,psi,kappa,vx,ax",
            comments="",
        )

    mc = MinimumCurvaturePlanner(race_track=race_track, config=cfg)
    raceline_mc = mc.plan()
    mc_7d = raceline_mc.to_7d_np_array()
    if not args.json_only:
        np.savetxt(
            output_dir / "raceline_minimum_curvature.csv",
            mc_7d,
            delimiter=",",
            header="s,x,y,psi,kappa,vx,ax",
            comments="",
        )

    fused = _fuse_racelines(
        race_track=race_track,
        raceline_sp=raceline_sp,
        raceline_mc=raceline_mc,
        kappa_low=float(args.kappa_low),
        kappa_high=float(args.kappa_high),
        kappa_gamma=float(args.kappa_gamma),
        blend_window=int(args.blend_window),
        curve_lead_m=float(args.curve_lead_m),
        curve_hold_m=float(args.curve_hold_m),
        curve_exit_smooth_window=int(args.curve_exit_smooth_window),
    )

    hybrid_7d = np.column_stack([
        fused["s"],
        fused["points"][:, 0],
        fused["points"][:, 1],
        fused["psi"],
        fused["kappa"],
        fused["vx"],
        fused["ax"],
    ])
    if not args.json_only:
        np.savetxt(
            output_dir / "raceline_hybrid.csv",
            hybrid_7d,
            delimiter=",",
            header="s,x,y,psi,kappa,vx,ax",
            comments="",
        )

        np.savetxt(
            output_dir / "hybrid_blend_weights.csv",
            fused["w"],
            delimiter=",",
            header="w",
            comments="",
        )

    json_paths = _write_json_outputs(
        output_dir=output_dir,
        track_json_path=args.track_json,
        left=left,
        right=right,
        center=center,
        reftrack=reftrack,
        sp_7d=sp_7d,
        mc_7d=mc_7d,
        hybrid_7d=hybrid_7d,
        blend_weights=fused["w"],
        args=args,
        json_indent=max(0, int(args.json_indent)),
    )

    # Save three raceline plots in output folder
    _save_raceline_plot(
        left=left,
        right=right,
        points=np.asarray(raceline_sp.points, dtype=float),
        title="Shortest Path Raceline",
        out_path=output_dir / "plot_raceline_shortest_path.png",
        line_color="tab:blue",
    )
    _save_raceline_plot(
        left=left,
        right=right,
        points=np.asarray(raceline_mc.points, dtype=float),
        title="Minimum Curvature Raceline",
        out_path=output_dir / "plot_raceline_minimum_curvature.png",
        line_color="tab:green",
    )
    _save_raceline_plot(
        left=left,
        right=right,
        points=fused["points"],
        title="Hybrid Raceline",
        out_path=output_dir / "plot_raceline_hybrid.png",
        line_color="tab:red",
    )

    print("[OK] Wrote:")
    if not args.json_only:
        print(f"  - {output_dir / 'raceline_shortest_path.csv'}")
        print(f"  - {output_dir / 'raceline_minimum_curvature.csv'}")
        print(f"  - {output_dir / 'raceline_hybrid.csv'}")
        print(f"  - {output_dir / 'hybrid_blend_weights.csv'}")
        print(f"  - {output_dir / 'reftrack_from_json.csv'}")
    for p in json_paths:
        print(f"  - {p}")
    print(f"  - {output_dir / 'plot_raceline_shortest_path.png'}")
    print(f"  - {output_dir / 'plot_raceline_minimum_curvature.png'}")
    print(f"  - {output_dir / 'plot_raceline_hybrid.png'}")


if __name__ == "__main__":
    main()
