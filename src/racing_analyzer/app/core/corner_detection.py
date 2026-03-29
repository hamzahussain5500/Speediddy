"""
app/core/corner_detection.py

Detects corners / segments from a raceline's curvature profile.
Pure computation — no I/O, no ROS, no web framework.
"""

from __future__ import annotations

from dataclasses import dataclass
from typing import List, Literal, Optional

import numpy as np

from app.core.geometry import Raceline


@dataclass
class CornerSegment:
    """Raw detected corner segment (indices into the raceline arrays)."""
    id: int
    start_idx: int
    end_idx: int
    apex_idx: int
    start_s: float
    end_s: float
    apex_s: float
    length_m: float
    max_curvature: float          # |kappa| peak
    mean_curvature: float         # |kappa| mean
    turn_direction: Literal["left", "right", "unknown"]
    corner_type: Literal["hairpin", "medium", "fast", "chicane"]


def _classify_corner(max_kappa: float) -> Literal["hairpin", "medium", "fast", "chicane"]:
    """
    Classify by peak curvature magnitude.
    Thresholds tuned for Formula-style circuits (Yas Marina).
    """
    if max_kappa >= 0.08:
        return "hairpin"
    elif max_kappa >= 0.04:
        return "medium"
    else:
        return "fast"


def detect_corners(
    raceline: Raceline,
    curvature_threshold: float = 0.02,
    min_corner_length_m: float = 10.0,
) -> List[CornerSegment]:
    """
    Detect corners by thresholding the absolute curvature profile.

    A corner is a contiguous run of points where |kappa| >= curvature_threshold
    AND the arc-length span >= min_corner_length_m.

    Returns a list of CornerSegment, sorted by start_s.
    """
    kappa_abs = np.abs(raceline.kappa)
    in_corner = kappa_abs >= curvature_threshold

    corners: List[CornerSegment] = []
    corner_id = 0
    i = 0
    n = len(in_corner)

    while i < n:
        if not in_corner[i]:
            i += 1
            continue

        # Start of a new corner region
        start = i
        while i < n and in_corner[i]:
            i += 1
        end = i - 1  # inclusive

        seg_s_start = float(raceline.s[start])
        seg_s_end = float(raceline.s[end])
        seg_length = seg_s_end - seg_s_start

        if seg_length < min_corner_length_m:
            continue  # too short, skip

        seg_kappa = raceline.kappa[start : end + 1]
        seg_kappa_abs = kappa_abs[start : end + 1]

        # Apex = point of maximum absolute curvature
        local_apex = int(np.argmax(seg_kappa_abs))
        apex_idx = start + local_apex

        # Turn direction from mean curvature sign
        mean_kappa_signed = float(np.mean(seg_kappa))
        if mean_kappa_signed > 0:
            turn_dir: Literal["left", "right", "unknown"] = "left"
        elif mean_kappa_signed < 0:
            turn_dir = "right"
        else:
            turn_dir = "unknown"

        max_k = float(np.max(seg_kappa_abs))
        mean_k = float(np.mean(seg_kappa_abs))

        corners.append(
            CornerSegment(
                id=corner_id,
                start_idx=start,
                end_idx=end,
                apex_idx=apex_idx,
                start_s=seg_s_start,
                end_s=seg_s_end,
                apex_s=float(raceline.s[apex_idx]),
                length_m=seg_length,
                max_curvature=max_k,
                mean_curvature=mean_k,
                turn_direction=turn_dir,
                corner_type=_classify_corner(max_k),
            )
        )
        corner_id += 1

    return corners
