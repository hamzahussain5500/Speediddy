"""
tests/test_api.py

Integration tests for the FastAPI endpoints.
Uses TestClient — no network required.
"""

import json
import math

import pytest
from fastapi.testclient import TestClient

from app.main import app

client = TestClient(app)


# ---------------------------------------------------------------------------
# Helpers
# ---------------------------------------------------------------------------

def _make_raceline(n: int = 50, length: float = 100.0) -> list[dict]:
    """Straight raceline along X axis."""
    s_vals = [i * length / (n - 1) for i in range(n)]
    return [
        {
            "s": s,
            "x": s,
            "y": 0.0,
            "psi": 0.0,
            "kappa": 0.0,
            "vx": 30.0,
            "ax": 0.0,
        }
        for s in s_vals
    ]


def _make_trajectory(n: int = 20, length: float = 80.0, y_offset: float = 0.5) -> list[dict]:
    return [
        {
            "timestamp": float(i),
            "x": i * length / (n - 1),
            "y": y_offset,
            "yaw": 0.0,
            "vx": 28.0,
        }
        for i in range(n)
    ]


def _make_boundaries() -> dict:
    return {
        "left": [{"x": float(x), "y": 5.0} for x in range(0, 101, 5)],
        "right": [{"x": float(x), "y": -5.0} for x in range(0, 101, 5)],
    }


# ---------------------------------------------------------------------------
# Health
# ---------------------------------------------------------------------------

class TestHealth:
    def test_health_ok(self):
        r = client.get("/health")
        assert r.status_code == 200
        data = r.json()
        assert data["status"] == "ok"
        assert "version" in data


# ---------------------------------------------------------------------------
# /api/v1/compare-trajectory
# ---------------------------------------------------------------------------

class TestCompareTrajectory:
    def test_basic_response_shape(self):
        payload = {
            "track_name": "test_track",
            "raceline": _make_raceline(),
            "trajectory": _make_trajectory(),
        }
        r = client.post("/api/v1/compare-trajectory", json=payload)
        assert r.status_code == 200, r.text
        data = r.json()
        assert "metadata" in data
        assert "geometry" in data
        assert "metrics" in data

    def test_metrics_length_matches_trajectory(self):
        n_traj = 20
        payload = {
            "track_name": "test",
            "raceline": _make_raceline(),
            "trajectory": _make_trajectory(n=n_traj),
        }
        r = client.post("/api/v1/compare-trajectory", json=payload)
        assert r.status_code == 200
        metrics = r.json()["metrics"]["per_point"]
        assert len(metrics["lateral_deviation"]) == n_traj
        assert len(metrics["speed_error"]) == n_traj

    def test_lateral_deviation_sign(self):
        """Car driving 2 m above (left of) a +X raceline → positive lateral dev."""
        payload = {
            "track_name": "sign_test",
            "raceline": _make_raceline(),
            "trajectory": _make_trajectory(y_offset=2.0),
        }
        r = client.post("/api/v1/compare-trajectory", json=payload)
        assert r.status_code == 200
        lat_devs = r.json()["metrics"]["per_point"]["lateral_deviation"]
        assert all(v > 0 for v in lat_devs)

    def test_too_few_trajectory_points_returns_422(self):
        payload = {
            "track_name": "test",
            "raceline": _make_raceline(),
            "trajectory": [_make_trajectory(n=20)[0]],  # only 1 point
        }
        r = client.post("/api/v1/compare-trajectory", json=payload)
        assert r.status_code == 422


# ---------------------------------------------------------------------------
# /api/v1/analyze-corners
# ---------------------------------------------------------------------------

class TestAnalyzeCorners:
    def test_straight_has_no_corners(self):
        payload = {
            "track_name": "straight",
            "raceline": _make_raceline(),
        }
        r = client.post("/api/v1/analyze-corners", json=payload)
        assert r.status_code == 200
        assert r.json()["num_corners"] == 0

    def test_response_shape(self):
        payload = {
            "track_name": "straight",
            "raceline": _make_raceline(),
        }
        r = client.post("/api/v1/analyze-corners", json=payload)
        assert r.status_code == 200
        data = r.json()
        for key in ("track_name", "total_length_m", "num_corners", "corners", "processing_time_ms"):
            assert key in data


# ---------------------------------------------------------------------------
# /api/v1/analyze-track
# ---------------------------------------------------------------------------

class TestAnalyzeTrack:
    def test_full_response_shape(self):
        payload = {
            "track_name": "test",
            "raceline_type": "hybrid",
            "raceline": _make_raceline(),
            "boundaries": _make_boundaries(),
            "trajectory": _make_trajectory(),
        }
        r = client.post("/api/v1/analyze-track", json=payload)
        assert r.status_code == 200, r.text
        data = r.json()
        for key in ("metadata", "geometry", "metrics", "corners", "recommendations"):
            assert key in data

    def test_geometry_fields(self):
        payload = {
            "track_name": "geo_test",
            "raceline_type": "hybrid",
            "raceline": _make_raceline(n=50),
            "boundaries": _make_boundaries(),
            "trajectory": _make_trajectory(n=20),
        }
        r = client.post("/api/v1/analyze-track", json=payload)
        assert r.status_code == 200
        geo = r.json()["geometry"]
        assert len(geo["raceline"]) == 50
        assert len(geo["trajectory"]) == 20
        assert len(geo["matched_reference"]) == 20
        assert len(geo["left_boundary"]) > 0
        assert len(geo["right_boundary"]) > 0
