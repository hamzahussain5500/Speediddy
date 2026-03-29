"""
app/core/loaders.py

Functions to build core domain objects from raw dicts / lists that come
from either the web API (parsed JSON) or a ROS 2 adapter.

No I/O here — callers pass already-parsed Python objects.
"""

from __future__ import annotations

from typing import List

import numpy as np

from app.core.geometry import Raceline
from app.models.inputs import (
    BoundaryData,
    RacelinePoint,
    TrajectoryPoint,
)


def build_raceline(points: List[RacelinePoint]) -> Raceline:
    """Convert a list of RacelinePoint Pydantic models into a Raceline dataclass."""
    arr = np.array(
        [(p.s, p.x, p.y, p.psi, p.kappa, p.vx, p.ax) for p in points],
        dtype=float,
    )
    return Raceline(
        s=arr[:, 0],
        x=arr[:, 1],
        y=arr[:, 2],
        psi=arr[:, 3],
        kappa=arr[:, 4],
        vx=arr[:, 5],
        ax=arr[:, 6],
    )


def build_boundaries(data: BoundaryData) -> tuple[np.ndarray, np.ndarray]:
    """
    Returns (left_bnd, right_bnd) each as float64 array of shape (N, 2).
    """
    left = np.array([[p.x, p.y] for p in data.left], dtype=float)
    right = np.array([[p.x, p.y] for p in data.right], dtype=float)
    return left, right


def build_trajectory_arrays(
    points: List[TrajectoryPoint],
) -> tuple[np.ndarray, np.ndarray, np.ndarray, np.ndarray, np.ndarray]:
    """
    Returns (timestamps, xs, ys, yaws, vxs) each as 1-D float64 arrays.
    """
    arr = np.array(
        [(p.timestamp, p.x, p.y, p.yaw, p.vx) for p in points],
        dtype=float,
    )
    return arr[:, 0], arr[:, 1], arr[:, 2], arr[:, 3], arr[:, 4]
