"""
app/core/geometry.py

Pure-Python / NumPy geometry primitives.
No ROS, no I/O — only math.  Fully reusable by a ROS 2 adapter.
"""

from __future__ import annotations

import math
from dataclasses import dataclass, field
from typing import Tuple

import numpy as np
from scipy.spatial import KDTree


@dataclass
class Raceline:
    """Pre-processed reference raceline with fast nearest-point lookup."""

    s: np.ndarray       # arc-length (m), shape (N,)
    x: np.ndarray       # X positions (m), shape (N,)
    y: np.ndarray       # Y positions (m), shape (N,)
    psi: np.ndarray     # heading (rad), shape (N,)
    kappa: np.ndarray   # curvature (1/m), shape (N,)
    vx: np.ndarray      # reference speed (m/s), shape (N,)
    ax: np.ndarray      # reference acceleration (m/s²), shape (N,)

    # Derived — built in __post_init__
    _tx: np.ndarray = field(init=False, repr=False)  # unit tangent x
    _ty: np.ndarray = field(init=False, repr=False)  # unit tangent y
    _tree: KDTree = field(init=False, repr=False)

    def __post_init__(self) -> None:
        # Unit tangent vectors via finite differences
        dx = np.diff(self.x, append=self.x[-1] - self.x[-2])
        dy = np.diff(self.y, append=self.y[-1] - self.y[-2])
        norms = np.hypot(dx, dy) + 1e-12
        self._tx = dx / norms
        self._ty = dy / norms
        # KDTree for O(log N) queries
        self._tree = KDTree(np.column_stack([self.x, self.y]))

    @property
    def total_length(self) -> float:
        return float(self.s[-1])

    @property
    def n_points(self) -> int:
        return len(self.s)

    def nearest(self, px: float, py: float) -> Tuple[int, float]:
        """Return (index, euclidean_distance) of nearest raceline point."""
        dist, idx = self._tree.query([px, py])
        return int(idx), float(dist)

    def nearest_batch(self, xs: np.ndarray, ys: np.ndarray) -> Tuple[np.ndarray, np.ndarray]:
        """Vectorised nearest for arrays of shape (M,). Returns (indices, distances)."""
        pts = np.column_stack([xs, ys])
        dists, idxs = self._tree.query(pts)
        return idxs.astype(int), dists.astype(float)

    def signed_lateral(self, px: float, py: float, idx: int) -> float:
        """
        Signed lateral deviation of point (px, py) relative to raceline point idx.

        Sign convention: positive = left of travel direction, negative = right.
        Formula: tangent × displacement  (2-D cross product)
        """
        tx, ty = self._tx[idx], self._ty[idx]
        dx, dy = px - self.x[idx], py - self.y[idx]
        return float(tx * dy - ty * dx)

    def signed_lateral_batch(
        self, xs: np.ndarray, ys: np.ndarray, idxs: np.ndarray
    ) -> np.ndarray:
        """Vectorised signed_lateral for arrays."""
        tx = self._tx[idxs]
        ty = self._ty[idxs]
        dx = xs - self.x[idxs]
        dy = ys - self.y[idxs]
        return (tx * dy - ty * dx).astype(float)

    def heading_error_batch(
        self, yaws: np.ndarray, idxs: np.ndarray
    ) -> np.ndarray:
        """
        Signed heading error = actual_yaw - reference_psi, wrapped to [-π, π].
        """
        ref_psi = self.psi[idxs]
        err = yaws - ref_psi
        # Wrap to [-π, π]
        return (((err + math.pi) % (2 * math.pi)) - math.pi).astype(float)


def arc_length(xs: np.ndarray, ys: np.ndarray) -> float:
    """Compute approximate arc-length of a polyline."""
    diffs = np.diff(np.column_stack([xs, ys]), axis=0)
    return float(np.sum(np.hypot(diffs[:, 0], diffs[:, 1])))


def series_stats(values: np.ndarray) -> dict:
    """Return a dict of summary statistics over a 1-D array."""
    abs_vals = np.abs(values)
    return {
        "mean": float(np.mean(values)),
        "rms": float(np.sqrt(np.mean(values ** 2))),
        "max_abs": float(np.max(abs_vals)),
        "p95": float(np.percentile(abs_vals, 95)),
        "std": float(np.std(values)),
    }
