"""
tests/test_corner_detection.py
"""

import numpy as np
import pytest

from app.core.corner_detection import detect_corners
from app.core.geometry import Raceline


def _make_raceline_with_corner() -> Raceline:
    """
    Straight → corner (high curvature) → straight.
    s: 0..50 straight, 50..80 corner, 80..130 straight
    """
    n_straight1, n_corner, n_straight2 = 50, 30, 50
    n = n_straight1 + n_corner + n_straight2

    s = np.linspace(0, 130, n)
    x = s.copy()
    y = np.zeros(n)
    psi = np.zeros(n)

    kappa = np.zeros(n)
    # Inject corner: positive curvature between index 50 and 79
    kappa[n_straight1 : n_straight1 + n_corner] = 0.05

    vx = np.full(n, 30.0)
    ax = np.zeros(n)

    return Raceline(s=s, x=x, y=y, psi=psi, kappa=kappa, vx=vx, ax=ax)


class TestDetectCorners:
    def test_single_corner_detected(self):
        rl = _make_raceline_with_corner()
        corners = detect_corners(rl, curvature_threshold=0.02, min_corner_length_m=5.0)
        assert len(corners) == 1

    def test_corner_attributes(self):
        rl = _make_raceline_with_corner()
        corners = detect_corners(rl, curvature_threshold=0.02, min_corner_length_m=5.0)
        c = corners[0]
        assert c.id == 0
        assert c.max_curvature == pytest.approx(0.05, abs=1e-6)
        assert c.turn_direction == "left"  # positive kappa → left
        assert c.length_m > 0

    def test_no_corners_on_straight(self):
        n = 100
        s = np.linspace(0, 200, n)
        x = s.copy()
        y = np.zeros(n)
        psi = np.zeros(n)
        kappa = np.zeros(n)
        vx = np.full(n, 30.0)
        ax = np.zeros(n)
        rl = Raceline(s=s, x=x, y=y, psi=psi, kappa=kappa, vx=vx, ax=ax)
        corners = detect_corners(rl)
        assert len(corners) == 0

    def test_min_length_filter(self):
        rl = _make_raceline_with_corner()
        # Very large min length should filter out our corner
        corners = detect_corners(rl, curvature_threshold=0.02, min_corner_length_m=999.0)
        assert len(corners) == 0
