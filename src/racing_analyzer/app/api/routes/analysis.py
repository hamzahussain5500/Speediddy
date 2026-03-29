"""
app/api/routes/analysis.py

FastAPI router for all analysis endpoints.
"""

from __future__ import annotations

from fastapi import APIRouter, HTTPException, status

from app.models.inputs import (
    AnalyzeCornersRequest,
    AnalyzeTrackRequest,
    CompareTrajectoryRequest,
)
from app.models.outputs import (
    AnalyzeCornersResponse,
    AnalyzeTrackResponse,
    CompareTrajectoryResponse,
)
from app.services.analysis_service import (
    analyze_corners,
    analyze_track,
    compare_trajectory,
)

router = APIRouter(prefix="/api/v1", tags=["analysis"])


@router.post(
    "/analyze-track",
    response_model=AnalyzeTrackResponse,
    summary="Full lap analysis",
    description=(
        "Accepts a reference raceline, track boundaries, and an actual driven trajectory. "
        "Returns per-point deviation metrics, corner analysis, and coaching recommendations."
    ),
)
def post_analyze_track(req: AnalyzeTrackRequest) -> AnalyzeTrackResponse:
    try:
        return analyze_track(req)
    except ValueError as exc:
        raise HTTPException(status_code=status.HTTP_422_UNPROCESSABLE_ENTITY, detail=str(exc))
    except Exception as exc:
        raise HTTPException(
            status_code=status.HTTP_500_INTERNAL_SERVER_ERROR,
            detail=f"Analysis failed: {exc}",
        )


@router.post(
    "/compare-trajectory",
    response_model=CompareTrajectoryResponse,
    summary="Lightweight trajectory comparison",
    description=(
        "Compare an actual trajectory against a reference raceline. "
        "Returns deviation series and summary stats — no corner or recommendation analysis."
    ),
)
def post_compare_trajectory(req: CompareTrajectoryRequest) -> CompareTrajectoryResponse:
    try:
        return compare_trajectory(req)
    except ValueError as exc:
        raise HTTPException(status_code=status.HTTP_422_UNPROCESSABLE_ENTITY, detail=str(exc))
    except Exception as exc:
        raise HTTPException(
            status_code=status.HTTP_500_INTERNAL_SERVER_ERROR,
            detail=f"Comparison failed: {exc}",
        )


@router.post(
    "/analyze-corners",
    response_model=AnalyzeCornersResponse,
    summary="Corner detection from raceline",
    description=(
        "Detect and classify corners from a raceline's curvature profile. "
        "No trajectory required — useful for track familiarisation."
    ),
)
def post_analyze_corners(req: AnalyzeCornersRequest) -> AnalyzeCornersResponse:
    try:
        return analyze_corners(req)
    except ValueError as exc:
        raise HTTPException(status_code=status.HTTP_422_UNPROCESSABLE_ENTITY, detail=str(exc))
    except Exception as exc:
        raise HTTPException(
            status_code=status.HTTP_500_INTERNAL_SERVER_ERROR,
            detail=f"Corner analysis failed: {exc}",
        )
