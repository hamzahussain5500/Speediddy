"""
app/api/routes/health.py
"""

from __future__ import annotations

from fastapi import APIRouter

from app.models.outputs import HealthResponse

router = APIRouter(tags=["health"])

VERSION = "1.0.0"


@router.get("/health", response_model=HealthResponse, summary="Health check")
def get_health() -> HealthResponse:
    return HealthResponse(status="ok", version=VERSION)
