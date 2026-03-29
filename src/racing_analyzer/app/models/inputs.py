"""
app/models/inputs.py

Pydantic request models for all API endpoints.
These define what the frontend / client sends to the backend.
"""

from __future__ import annotations

from typing import List, Optional
from pydantic import BaseModel, Field, model_validator


# ---------------------------------------------------------------------------
# Primitives
# ---------------------------------------------------------------------------

class Point2D(BaseModel):
    x: float = Field(..., description="X coordinate in map frame (m)")
    y: float = Field(..., description="Y coordinate in map frame (m)")


class RacelinePoint(BaseModel):
    s: float = Field(..., description="Arc-length along path (m)")
    x: float = Field(..., description="X coordinate (m)")
    y: float = Field(..., description="Y coordinate (m)")
    psi: float = Field(..., description="Heading angle (rad)")
    kappa: float = Field(..., description="Curvature (1/m)")
    vx: float = Field(..., description="Reference longitudinal velocity (m/s)")
    ax: float = Field(0.0, description="Reference longitudinal acceleration (m/s²)")


class TrajectoryPoint(BaseModel):
    """A single sampled state-estimation point from the vehicle."""
    timestamp: float = Field(..., description="Unix timestamp (s) or relative time (s)")
    x: float = Field(..., description="X position in map frame (m)")
    y: float = Field(..., description="Y position in map frame (m)")
    yaw: float = Field(0.0, description="Heading angle (rad)")
    vx: float = Field(0.0, description="Longitudinal velocity (m/s)")


class BoundaryData(BaseModel):
    left: List[Point2D] = Field(..., description="Left boundary points")
    right: List[Point2D] = Field(..., description="Right boundary points")


# ---------------------------------------------------------------------------
# Request bodies
# ---------------------------------------------------------------------------

class AnalyzeTrackRequest(BaseModel):
    """
    POST /analyze-track
    Full analysis: raceline + boundaries + actual driven trajectory.
    """
    track_name: str = Field("unknown", description="Human-readable track name")
    raceline_type: str = Field("hybrid", description="Label for the reference raceline (e.g. 'hybrid', 'minimum_curvature')")
    raceline: List[RacelinePoint] = Field(..., min_length=10, description="Reference raceline points")
    boundaries: BoundaryData = Field(..., description="Track boundary polygons")
    trajectory: List[TrajectoryPoint] = Field(..., min_length=2, description="Actual driven trajectory points")

    @model_validator(mode="after")
    def check_minimum_points(self) -> "AnalyzeTrackRequest":
        if len(self.raceline) < 10:
            raise ValueError("raceline must have at least 10 points")
        if len(self.trajectory) < 2:
            raise ValueError("trajectory must have at least 2 points")
        return self


class CompareTrajectoryRequest(BaseModel):
    """
    POST /compare-trajectory
    Lightweight deviation-only analysis (no corner detection).
    Useful for quick lap comparison without full analysis overhead.
    """
    track_name: str = Field("unknown")
    raceline: List[RacelinePoint] = Field(..., min_length=10)
    trajectory: List[TrajectoryPoint] = Field(..., min_length=2)


class AnalyzeCornersRequest(BaseModel):
    """
    POST /analyze-corners
    Corner-only analysis from a full raceline (no trajectory required).
    Returns corner metadata for track familiarisation.
    """
    track_name: str = Field("unknown")
    raceline: List[RacelinePoint] = Field(..., min_length=10)
    curvature_threshold: float = Field(
        0.02,
        ge=0.001,
        le=1.0,
        description="Minimum |kappa| (1/m) to classify a point as cornering",
    )
    min_corner_length: float = Field(
        10.0,
        ge=1.0,
        description="Minimum arc-length (m) for a segment to be a corner",
    )
