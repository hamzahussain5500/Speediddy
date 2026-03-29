"""
app/main.py

FastAPI application factory.
"""

from __future__ import annotations

from fastapi import FastAPI
from fastapi.middleware.cors import CORSMiddleware

from app.api.routes.analysis import router as analysis_router
from app.api.routes.health import router as health_router

# ---------------------------------------------------------------------------
# App factory
# ---------------------------------------------------------------------------

def create_app() -> FastAPI:
    app = FastAPI(
        title="Racing Analyzer API",
        description=(
            "Backend service for lap telemetry analysis. "
            "Accepts raceline, boundary and trajectory data, returns deviation metrics, "
            "corner analysis, and coaching recommendations."
        ),
        version="1.0.0",
        docs_url="/docs",
        redoc_url="/redoc",
    )

    # Allow all origins in development; tighten in production via env var
    app.add_middleware(
        CORSMiddleware,
        allow_origins=["*"],
        allow_credentials=True,
        allow_methods=["*"],
        allow_headers=["*"],
    )

    app.include_router(health_router)
    app.include_router(analysis_router)

    return app


app = create_app()
