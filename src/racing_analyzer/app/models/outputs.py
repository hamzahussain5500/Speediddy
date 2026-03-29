"""
app/models/outputs.py

Pydantic response models.  Every field has a description so the OpenAPI
docs are self-documenting and the frontend knows exactly what each field means.
"""

from __future__ import annotations

from typing import List, Optional, Literal
from pydantic import BaseModel, Field


# ---------------------------------------------------------------------------
# Shared sub-models
# ---------------------------------------------------------------------------

class XY(BaseModel):
    x: float
    y: float


class SeriesStats(BaseModel):
    mean: float = Field(..., description="Arithmetic mean")
    rms: float = Field(..., description="Root-mean-square")
    max_abs: float = Field(..., description="Maximum absolute value")
    p95: float = Field(..., description="95th percentile absolute value")
    std: float = Field(..., description="Standard deviation")


# ---------------------------------------------------------------------------
# A. Metadata
# ---------------------------------------------------------------------------

class TrackMetadata(BaseModel):
    track_name: str
    raceline_type: str
    total_length_m: float = Field(..., description="Total arc-length of reference raceline (m)")
    trajectory_length_m: float = Field(..., description="Total arc-length of actual driven path (m)")
    num_raceline_points: int
    num_trajectory_points: int
    num_corners: int
    processing_time_ms: float = Field(..., description="Backend processing time (ms)")
    timestamp_utc: str = Field(..., description="ISO-8601 UTC timestamp of analysis")


# ---------------------------------------------------------------------------
# B. Geometry (frontend uses this to draw lines / paths)
# ---------------------------------------------------------------------------

class GeometryData(BaseModel):
    raceline: List[XY] = Field(..., description="Reference raceline points")
    left_boundary: List[XY] = Field(..., description="Left track boundary")
    right_boundary: List[XY] = Field(..., description="Right track boundary")
    trajectory: List[XY] = Field(..., description="Actual driven path")
    matched_reference: List[XY] = Field(
        ...,
        description="Nearest raceline point for each trajectory point (same length as trajectory)",
    )


# ---------------------------------------------------------------------------
# C. Metrics  (time-series arrays, index-aligned with trajectory)
# ---------------------------------------------------------------------------

class PerPointMetrics(BaseModel):
    """Arrays aligned to the trajectory points array."""
    s_ref: List[float] = Field(..., description="Arc-length on raceline of nearest reference point (m)")
    lateral_deviation: List[float] = Field(
        ...,
        description="Signed lateral deviation (m). Positive = left of raceline, negative = right.",
    )
    speed_error: List[float] = Field(
        ...,
        description="Speed error (m/s). Positive = faster than reference, negative = slower.",
    )
    heading_error: List[float] = Field(
        ...,
        description="Heading error (rad). Signed difference actual_yaw - reference_yaw.",
    )
    distance_to_nearest: List[float] = Field(
        ...,
        description="Euclidean distance to nearest raceline point (m). Always >= 0.",
    )


class MetricsSummary(BaseModel):
    lateral_deviation: SeriesStats
    speed_error: SeriesStats
    heading_error: SeriesStats
    coverage_fraction: float = Field(
        ...,
        description="Fraction of raceline arc-length covered by the trajectory [0, 1]",
    )


class MetricsData(BaseModel):
    per_point: PerPointMetrics
    summary: MetricsSummary


# ---------------------------------------------------------------------------
# D. Corner / segment analysis
# ---------------------------------------------------------------------------

class SpeedProfile(BaseModel):
    entry_vx: float = Field(..., description="Speed at corner entry (m/s)")
    apex_vx: float = Field(..., description="Speed at apex (m/s)")
    exit_vx: float = Field(..., description="Speed at corner exit (m/s)")
    min_vx: float = Field(..., description="Minimum actual speed through corner (m/s)")
    ref_apex_vx: float = Field(..., description="Reference speed at apex (m/s)")
    mean_speed_error: float = Field(..., description="Mean speed error through corner (m/s)")


class DeviationProfile(BaseModel):
    mean_lateral: float = Field(..., description="Mean lateral deviation through corner (m)")
    max_lateral: float = Field(..., description="Max |lateral deviation| through corner (m)")
    rms_lateral: float = Field(..., description="RMS lateral deviation through corner (m)")
    entry_lateral: float = Field(..., description="Lateral deviation at entry point (m)")
    apex_lateral: float = Field(..., description="Lateral deviation at apex point (m)")
    exit_lateral: float = Field(..., description="Lateral deviation at exit point (m)")


class CornerResult(BaseModel):
    id: int = Field(..., description="Zero-based corner index")
    label: str = Field(..., description="Human-readable label e.g. 'Corner 1'")
    turn_direction: Literal["left", "right", "unknown"] = Field(
        ..., description="Turn direction based on curvature sign"
    )
    corner_type: Literal["hairpin", "medium", "fast", "chicane"] = Field(
        ..., description="Corner classification by curvature magnitude"
    )
    start_s: float = Field(..., description="Arc-length at corner entry (m)")
    end_s: float = Field(..., description="Arc-length at corner exit (m)")
    apex_s: float = Field(..., description="Arc-length at corner apex (m)")
    length_m: float = Field(..., description="Corner arc-length (m)")
    max_curvature: float = Field(..., description="Peak curvature magnitude (1/m)")
    mean_curvature: float = Field(..., description="Mean curvature magnitude (1/m)")
    speed_profile: Optional[SpeedProfile] = Field(
        None,
        description="Speed metrics. None if trajectory does not cover this corner.",
    )
    deviation_profile: Optional[DeviationProfile] = Field(
        None,
        description="Deviation metrics. None if trajectory does not cover this corner.",
    )
    severity_score: float = Field(
        ...,
        ge=0.0,
        le=1.0,
        description="Combined severity [0–1]. Higher = more problematic.",
    )
    trajectory_coverage: float = Field(
        ...,
        ge=0.0,
        le=1.0,
        description="Fraction of this corner's arc covered by the trajectory.",
    )


# ---------------------------------------------------------------------------
# E. Recommendations / weak-point analysis
# ---------------------------------------------------------------------------

IssueType = Literal[
    "late_braking",
    "early_braking",
    "understeer_entry",
    "oversteer_exit",
    "wide_entry",
    "wide_exit",
    "apex_miss",
    "low_speed",
    "high_speed_deviation",
    "inconsistent_line",
]

Priority = Literal["critical", "high", "medium", "low"]


class RecommendationResult(BaseModel):
    corner_id: int = Field(..., description="References CornerResult.id")
    corner_label: str
    issue_type: IssueType
    confidence: float = Field(..., ge=0.0, le=1.0, description="Confidence in this recommendation [0–1]")
    explanation: str = Field(..., description="Human-readable explanation of the detected issue")
    recommendation: str = Field(..., description="Actionable coaching instruction")
    coaching_priority: Priority
    severity_score: float = Field(..., ge=0.0, le=1.0)
    supporting_metrics: dict = Field(
        default_factory=dict,
        description="Key numeric values that triggered this recommendation",
    )


# ---------------------------------------------------------------------------
# Top-level response envelopes
# ---------------------------------------------------------------------------

class AnalyzeTrackResponse(BaseModel):
    """Full analysis response for POST /analyze-track."""
    metadata: TrackMetadata
    geometry: GeometryData
    metrics: MetricsData
    corners: List[CornerResult]
    recommendations: List[RecommendationResult]


class CompareTrajectoryResponse(BaseModel):
    """Lightweight deviation response for POST /compare-trajectory."""
    metadata: TrackMetadata
    geometry: GeometryData
    metrics: MetricsData


class AnalyzeCornersResponse(BaseModel):
    """Corner-only response for POST /analyze-corners."""
    track_name: str
    total_length_m: float
    num_corners: int
    corners: List[CornerResult]
    processing_time_ms: float
    timestamp_utc: str


class HealthResponse(BaseModel):
    status: Literal["ok"] = "ok"
    version: str
