"""
app/services/analysis_service.py

Orchestration layer: calls core modules and assembles response models.
This is the only place that knows about both the compute core AND the
Pydantic response shapes.  It is intentionally thin.
"""

from __future__ import annotations

import time
from datetime import datetime, timezone
from typing import List, Optional

import numpy as np

from app.core.corner_detection import CornerSegment, detect_corners
from app.core.geometry import Raceline, arc_length, series_stats
from app.core.loaders import build_boundaries, build_raceline, build_trajectory_arrays
from app.core.recommendations import generate_recommendations
from app.models.inputs import (
    AnalyzeCornersRequest,
    AnalyzeTrackRequest,
    CompareTrajectoryRequest,
)
from app.models.outputs import (
    AnalyzeCornersResponse,
    AnalyzeTrackResponse,
    CompareTrajectoryResponse,
    CornerResult,
    DeviationProfile,
    GeometryData,
    MetricsData,
    MetricsSummary,
    PerPointMetrics,
    RecommendationResult,
    SeriesStats,
    SpeedProfile,
    TrackMetadata,
    XY,
)


# ---------------------------------------------------------------------------
# Helpers
# ---------------------------------------------------------------------------

def _now_utc() -> str:
    return datetime.now(timezone.utc).isoformat()


def _to_xy_list(arr: np.ndarray) -> List[XY]:
    """Convert Nx2 array to list of XY models."""
    return [XY(x=float(r[0]), y=float(r[1])) for r in arr]


def _to_xy_list_separate(xs: np.ndarray, ys: np.ndarray) -> List[XY]:
    return [XY(x=float(x), y=float(y)) for x, y in zip(xs, ys)]


def _make_series_stats(values: np.ndarray) -> SeriesStats:
    s = series_stats(values)
    return SeriesStats(**s)


def _compute_per_point_metrics(
    raceline: Raceline,
    traj_xs: np.ndarray,
    traj_ys: np.ndarray,
    traj_yaws: np.ndarray,
    traj_vxs: np.ndarray,
) -> tuple[np.ndarray, np.ndarray, np.ndarray, np.ndarray, np.ndarray]:
    """
    Returns (idxs, distances, lateral_devs, heading_errs, speed_errs).
    All arrays are shape (M,) aligned to trajectory points.
    """
    idxs, distances = raceline.nearest_batch(traj_xs, traj_ys)
    lateral_devs = raceline.signed_lateral_batch(traj_xs, traj_ys, idxs)
    heading_errs = raceline.heading_error_batch(traj_yaws, idxs)
    speed_errs = traj_vxs - raceline.vx[idxs]
    return idxs, distances, lateral_devs, heading_errs, speed_errs


def _coverage_fraction(
    raceline: Raceline,
    ref_s: np.ndarray,
) -> float:
    """Fraction of raceline arc-length covered by matched reference points."""
    if len(ref_s) == 0:
        return 0.0
    covered = float(np.max(ref_s) - np.min(ref_s))
    return round(min(1.0, covered / raceline.total_length), 4)


def _corner_coverage(
    seg: CornerSegment,
    ref_s_values: np.ndarray,
) -> float:
    """Fraction of corner arc-length hit by trajectory."""
    mask = (ref_s_values >= seg.start_s) & (ref_s_values <= seg.end_s)
    if not np.any(mask) or seg.length_m == 0:
        return 0.0
    covered_s = ref_s_values[mask]
    return round(min(1.0, float(np.max(covered_s) - np.min(covered_s)) / seg.length_m), 4)


def _build_corner_result(
    seg: CornerSegment,
    raceline: Raceline,
    ref_s_values: Optional[np.ndarray],
    lateral_devs: Optional[np.ndarray],
    speed_errs: Optional[np.ndarray],
    idxs: Optional[np.ndarray],
    traj_vxs: Optional[np.ndarray],
) -> CornerResult:
    """Assemble a CornerResult from a raw CornerSegment + optional trajectory data."""

    traj_coverage = 0.0
    speed_profile: Optional[SpeedProfile] = None
    dev_profile: Optional[DeviationProfile] = None

    if ref_s_values is not None:
        traj_coverage = _corner_coverage(seg, ref_s_values)

        # Indices into trajectory arrays that fall inside this corner
        mask = (ref_s_values >= seg.start_s) & (ref_s_values <= seg.end_s)
        if np.any(mask) and traj_coverage >= 0.05:  # at least 5% coverage
            seg_lat = lateral_devs[mask]  # type: ignore[index]
            seg_spd = speed_errs[mask]  # type: ignore[index]
            seg_vx = traj_vxs[mask]  # type: ignore[index]

            # Approximate entry/apex/exit by index position
            n = len(seg_lat)
            entry_i = 0
            exit_i = n - 1
            apex_i = n // 2  # approximate; could use arc-length weighting

            dev_profile = DeviationProfile(
                mean_lateral=round(float(np.mean(seg_lat)), 4),
                max_lateral=round(float(np.max(np.abs(seg_lat))), 4),
                rms_lateral=round(float(np.sqrt(np.mean(seg_lat ** 2))), 4),
                entry_lateral=round(float(seg_lat[entry_i]), 4),
                apex_lateral=round(float(seg_lat[apex_i]), 4),
                exit_lateral=round(float(seg_lat[exit_i]), 4),
            )

            # Reference speed at apex
            ref_vx_at_apex = float(raceline.vx[seg.apex_idx])
            speed_profile = SpeedProfile(
                entry_vx=round(float(seg_vx[entry_i]), 3),
                apex_vx=round(float(seg_vx[apex_i]), 3),
                exit_vx=round(float(seg_vx[exit_i]), 3),
                min_vx=round(float(np.min(seg_vx)), 3),
                ref_apex_vx=round(ref_vx_at_apex, 3),
                mean_speed_error=round(float(np.mean(seg_spd)), 3),
            )

    # Severity: combine max deviation and (if available) speed error
    lat_severity = 0.0
    spd_severity = 0.0
    if dev_profile:
        lat_severity = min(1.0, dev_profile.max_lateral / 3.0)
    if speed_profile:
        spd_severity = min(1.0, abs(speed_profile.mean_speed_error) / 10.0)
    severity = round(0.6 * lat_severity + 0.4 * spd_severity, 3)

    return CornerResult(
        id=seg.id,
        label=f"Corner {seg.id + 1}",
        turn_direction=seg.turn_direction,
        corner_type=seg.corner_type,
        start_s=round(seg.start_s, 2),
        end_s=round(seg.end_s, 2),
        apex_s=round(seg.apex_s, 2),
        length_m=round(seg.length_m, 2),
        max_curvature=round(seg.max_curvature, 6),
        mean_curvature=round(seg.mean_curvature, 6),
        speed_profile=speed_profile,
        deviation_profile=dev_profile,
        severity_score=severity,
        trajectory_coverage=traj_coverage,
    )


# ---------------------------------------------------------------------------
# Public service functions
# ---------------------------------------------------------------------------

def analyze_track(req: AnalyzeTrackRequest) -> AnalyzeTrackResponse:
    t0 = time.perf_counter()

    # 1. Build core objects
    raceline = build_raceline(req.raceline)
    left_bnd, right_bnd = build_boundaries(req.boundaries)
    timestamps, traj_xs, traj_ys, traj_yaws, traj_vxs = build_trajectory_arrays(req.trajectory)

    # 2. Per-point metrics
    idxs, distances, lat_devs, hdg_errs, spd_errs = _compute_per_point_metrics(
        raceline, traj_xs, traj_ys, traj_yaws, traj_vxs
    )
    ref_s_values = raceline.s[idxs]
    matched_xs = raceline.x[idxs]
    matched_ys = raceline.y[idxs]

    # 3. Detect corners
    corner_segs = detect_corners(raceline)

    # 4. Build CornerResult list
    corner_results = [
        _build_corner_result(seg, raceline, ref_s_values, lat_devs, spd_errs, idxs, traj_vxs)
        for seg in corner_segs
    ]

    # 5. Recommendations
    recommendations = generate_recommendations(corner_results)

    # 6. Assemble response
    traj_len = arc_length(traj_xs, traj_ys)
    elapsed_ms = (time.perf_counter() - t0) * 1000

    metadata = TrackMetadata(
        track_name=req.track_name,
        raceline_type=req.raceline_type,
        total_length_m=round(raceline.total_length, 2),
        trajectory_length_m=round(traj_len, 2),
        num_raceline_points=raceline.n_points,
        num_trajectory_points=len(req.trajectory),
        num_corners=len(corner_results),
        processing_time_ms=round(elapsed_ms, 2),
        timestamp_utc=_now_utc(),
    )

    geometry = GeometryData(
        raceline=[XY(x=float(x), y=float(y)) for x, y in zip(raceline.x, raceline.y)],
        left_boundary=_to_xy_list(left_bnd),
        right_boundary=_to_xy_list(right_bnd),
        trajectory=_to_xy_list_separate(traj_xs, traj_ys),
        matched_reference=_to_xy_list_separate(matched_xs, matched_ys),
    )

    per_point = PerPointMetrics(
        s_ref=[round(float(v), 3) for v in ref_s_values],
        lateral_deviation=[round(float(v), 4) for v in lat_devs],
        speed_error=[round(float(v), 4) for v in spd_errs],
        heading_error=[round(float(v), 6) for v in hdg_errs],
        distance_to_nearest=[round(float(v), 4) for v in distances],
    )

    metrics_summary = MetricsSummary(
        lateral_deviation=_make_series_stats(lat_devs),
        speed_error=_make_series_stats(spd_errs),
        heading_error=_make_series_stats(hdg_errs),
        coverage_fraction=_coverage_fraction(raceline, ref_s_values),
    )

    return AnalyzeTrackResponse(
        metadata=metadata,
        geometry=geometry,
        metrics=MetricsData(per_point=per_point, summary=metrics_summary),
        corners=corner_results,
        recommendations=recommendations,
    )


def compare_trajectory(req: CompareTrajectoryRequest) -> CompareTrajectoryResponse:
    t0 = time.perf_counter()

    raceline = build_raceline(req.raceline)
    timestamps, traj_xs, traj_ys, traj_yaws, traj_vxs = build_trajectory_arrays(req.trajectory)

    idxs, distances, lat_devs, hdg_errs, spd_errs = _compute_per_point_metrics(
        raceline, traj_xs, traj_ys, traj_yaws, traj_vxs
    )
    ref_s_values = raceline.s[idxs]
    matched_xs = raceline.x[idxs]
    matched_ys = raceline.y[idxs]

    traj_len = arc_length(traj_xs, traj_ys)
    elapsed_ms = (time.perf_counter() - t0) * 1000

    metadata = TrackMetadata(
        track_name=req.track_name,
        raceline_type="reference",
        total_length_m=round(raceline.total_length, 2),
        trajectory_length_m=round(traj_len, 2),
        num_raceline_points=raceline.n_points,
        num_trajectory_points=len(req.trajectory),
        num_corners=0,
        processing_time_ms=round(elapsed_ms, 2),
        timestamp_utc=_now_utc(),
    )

    geometry = GeometryData(
        raceline=[XY(x=float(x), y=float(y)) for x, y in zip(raceline.x, raceline.y)],
        left_boundary=[],
        right_boundary=[],
        trajectory=_to_xy_list_separate(traj_xs, traj_ys),
        matched_reference=_to_xy_list_separate(matched_xs, matched_ys),
    )

    per_point = PerPointMetrics(
        s_ref=[round(float(v), 3) for v in ref_s_values],
        lateral_deviation=[round(float(v), 4) for v in lat_devs],
        speed_error=[round(float(v), 4) for v in spd_errs],
        heading_error=[round(float(v), 6) for v in hdg_errs],
        distance_to_nearest=[round(float(v), 4) for v in distances],
    )

    metrics_summary = MetricsSummary(
        lateral_deviation=_make_series_stats(lat_devs),
        speed_error=_make_series_stats(spd_errs),
        heading_error=_make_series_stats(hdg_errs),
        coverage_fraction=_coverage_fraction(raceline, ref_s_values),
    )

    return CompareTrajectoryResponse(
        metadata=metadata,
        geometry=geometry,
        metrics=MetricsData(per_point=per_point, summary=metrics_summary),
    )


def analyze_corners(req: AnalyzeCornersRequest) -> AnalyzeCornersResponse:
    t0 = time.perf_counter()

    raceline = build_raceline(req.raceline)
    corner_segs = detect_corners(
        raceline,
        curvature_threshold=req.curvature_threshold,
        min_corner_length_m=req.min_corner_length,
    )
    corner_results = [
        _build_corner_result(seg, raceline, None, None, None, None, None)
        for seg in corner_segs
    ]
    elapsed_ms = (time.perf_counter() - t0) * 1000

    return AnalyzeCornersResponse(
        track_name=req.track_name,
        total_length_m=round(raceline.total_length, 2),
        num_corners=len(corner_results),
        corners=corner_results,
        processing_time_ms=round(elapsed_ms, 2),
        timestamp_utc=_now_utc(),
    )
