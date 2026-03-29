"""
tests/test_geometry.py

Unit tests for the pure-Python geometry core.
No ROS, no network, no files.
"""

import math
import numpy as np
import pytest

from app.core.geometry import Raceline, arc_length, series_stats


def _make_straight_raceline(n: int = 100, length: float = 200.0) -> Raceline:
    """A straight raceline along the X axis."""
    s = np.linspace(0, length, n)
    x = s.copy()
    y = np.zeros(n)
    psi = np.zeros(n)
    kappa = np.zeros(n)
    vx = np.full(n, 30.0)
    ax = np.zeros(n)
    return Raceline(s=s, x=x, y=y, psi=psi, kappa=kappa, vx=vx, ax=ax)


def _make_circle_raceline(n: int = 360, radius: float = 50.0) -> Raceline:
    """A circular raceline."""
    theta = np.linspace(0, 2 * math.pi, n, endpoint=False)
    x = radius * np.cos(theta)
    y = radius * np.sin(theta)
    s = np.linspace(0, 2 * math.pi * radius, n)
    psi = theta + math.pi / 2
    kappa = np.full(n, 1.0 / radius)
    vx = np.full(n, 20.0)
    ax = np.zeros(n)
    return Raceline(s=s, x=x, y=y, psi=psi, kappa=kappa, vx=vx, ax=ax)


# ---------------------------------------------------------------------------
# nearest / nearest_batch
# ---------------------------------------------------------------------------

class TestNearest:
    def test_nearest_exact_point(self):
        rl = _make_straight_raceline()
        idx, dist = rl.nearest(0.0, 0.0)
        assert idx == 0
        assert dist < 0.01

    def test_nearest_batch_shape(self):
        rl = _make_straight_raceline()
        xs = np.array([0.0, 50.0, 100.0])
        ys = np.array([0.0, 0.0, 0.0])
        idxs, dists = rl.nearest_batch(xs, ys)
        assert len(idxs) == 3
        assert len(dists) == 3
        assert all(d < 2.0 for d in dists)  # close to raceline

    def test_nearest_off_track(self):
        rl = _make_straight_raceline()
        # Point 5 m above X axis at x=100
        idx, dist = rl.nearest(100.0, 5.0)
        assert abs(dist - 5.0) < 0.5


# ---------------------------------------------------------------------------
# signed_lateral
# ---------------------------------------------------------------------------

class TestSignedLateral:
    def test_on_line_is_zero(self):
        rl = _make_straight_raceline()
        # Point exactly on raceline at s=50 (x=50, y=0)
        idx, _ = rl.nearest(50.0, 0.0)
        lat = rl.signed_lateral(50.0, 0.0, idx)
        assert abs(lat) < 1e-9

    def test_left_is_positive(self):
        """For travel in +X direction, a point above (y>0) is on the left."""
        rl = _make_straight_raceline()
        idx, _ = rl.nearest(100.0, 0.0)
        lat = rl.signed_lateral(100.0, 2.0, idx)
        assert lat > 0

    def test_right_is_negative(self):
        """For travel in +X direction, a point below (y<0) is on the right."""
        rl = _make_straight_raceline()
        idx, _ = rl.nearest(100.0, 0.0)
        lat = rl.signed_lateral(100.0, -2.0, idx)
        assert lat < 0

    def test_magnitude_approx_correct(self):
        rl = _make_straight_raceline()
        offset = 3.0
        idx, _ = rl.nearest(100.0, 0.0)
        lat = rl.signed_lateral(100.0, offset, idx)
        assert abs(lat - offset) < 0.1


# ---------------------------------------------------------------------------
# heading_error_batch
# ---------------------------------------------------------------------------

class TestHeadingError:
    def test_zero_error_on_raceline_heading(self):
        rl = _make_straight_raceline()
        # Heading 0 matches psi=0 of straight raceline
        idxs = np.array([50])
        yaws = np.array([0.0])
        errs = rl.heading_error_batch(yaws, idxs)
        assert abs(errs[0]) < 1e-9

    def test_wrap_at_pi(self):
        rl = _make_straight_raceline()
        idxs = np.array([50])
        # 180 deg error
        yaws = np.array([math.pi])
        errs = rl.heading_error_batch(yaws, idxs)
        assert abs(abs(errs[0]) - math.pi) < 1e-9


# ---------------------------------------------------------------------------
# arc_length
# ---------------------------------------------------------------------------

class TestArcLength:
    def test_straight(self):
        xs = np.array([0.0, 10.0])
        ys = np.array([0.0, 0.0])
        assert abs(arc_length(xs, ys) - 10.0) < 1e-9

    def test_diagonal(self):
        xs = np.array([0.0, 3.0])
        ys = np.array([0.0, 4.0])
        assert abs(arc_length(xs, ys) - 5.0) < 1e-9


# ---------------------------------------------------------------------------
# series_stats
# ---------------------------------------------------------------------------

class TestSeriesStats:
    def test_zeros(self):
        s = series_stats(np.zeros(100))
        assert s["mean"] == 0.0
        assert s["rms"] == 0.0
        assert s["max_abs"] == 0.0

    def test_known_values(self):
        arr = np.array([1.0, -1.0, 2.0, -2.0])
        s = series_stats(arr)
        assert abs(s["mean"] - 0.0) < 1e-9
        assert abs(s["max_abs"] - 2.0) < 1e-9
        assert abs(s["rms"] - math.sqrt(2.5)) < 1e-9
