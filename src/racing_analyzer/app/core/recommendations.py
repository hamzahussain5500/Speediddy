"""
app/core/recommendations.py

Rule-based recommendation / coaching engine.
Pure computation — deterministic, no side effects.

Each rule function receives per-corner metrics and returns a
RecommendationResult (or None if the rule does not fire).
"""

from __future__ import annotations

from typing import List, Optional

from app.models.outputs import (
    CornerResult,
    Priority,
    RecommendationResult,
)


# ---------------------------------------------------------------------------
# Thresholds — centralised so they are easy to tune
# ---------------------------------------------------------------------------

_LATE_ENTRY_DEVIATION_M: float = 1.5     # wide at entry → apex-miss pattern
_EARLY_BRAKING_SPEED_ERR: float = -3.0  # m/s slower than ref at apex
_LATE_BRAKING_SPEED_ERR: float = 3.0    # m/s faster than ref at apex
_OVERSHOOT_EXIT_M: float = 1.5          # lateral deviation at exit
_UNDERSTEER_ENTRY_M: float = 1.5        # lateral at entry
_APEX_MISS_M: float = 1.2              # lateral at apex
_HIGH_SEVERITY_THRESHOLD: float = 0.65
_MEDIUM_SEVERITY_THRESHOLD: float = 0.35


def _priority(severity: float) -> Priority:
    if severity >= _HIGH_SEVERITY_THRESHOLD:
        return "critical"
    elif severity >= _MEDIUM_SEVERITY_THRESHOLD:
        return "high"
    elif severity >= 0.2:
        return "medium"
    return "low"


# ---------------------------------------------------------------------------
# Individual rule functions
# ---------------------------------------------------------------------------

def _check_apex_miss(corner: CornerResult) -> Optional[RecommendationResult]:
    if corner.deviation_profile is None:
        return None
    apex_lat = corner.deviation_profile.apex_lateral
    if abs(apex_lat) < _APEX_MISS_M:
        return None
    direction = "right" if apex_lat > 0 else "left"
    severity = min(1.0, abs(apex_lat) / (2 * _APEX_MISS_M))
    return RecommendationResult(
        corner_id=corner.id,
        corner_label=corner.label,
        issue_type="apex_miss",
        confidence=0.80,
        explanation=(
            f"The car is {abs(apex_lat):.1f} m to the {direction} of the reference apex "
            f"in {corner.label}."
        ),
        recommendation=(
            f"Hit the apex tighter — aim {abs(apex_lat):.1f} m further {'right' if direction == 'right' else 'left'} "
            "at the clipping point."
        ),
        coaching_priority=_priority(severity),
        severity_score=round(severity, 3),
        supporting_metrics={"apex_lateral_m": round(apex_lat, 3)},
    )


def _check_wide_entry(corner: CornerResult) -> Optional[RecommendationResult]:
    if corner.deviation_profile is None:
        return None
    entry_lat = corner.deviation_profile.entry_lateral
    if abs(entry_lat) < _UNDERSTEER_ENTRY_M:
        return None
    direction = "right" if entry_lat > 0 else "left"
    severity = min(1.0, abs(entry_lat) / (2 * _UNDERSTEER_ENTRY_M))
    return RecommendationResult(
        corner_id=corner.id,
        corner_label=corner.label,
        issue_type="wide_entry",
        confidence=0.75,
        explanation=(
            f"Entry to {corner.label} is {abs(entry_lat):.1f} m wide "
            f"({direction} of reference line)."
        ),
        recommendation=(
            "Use a later turn-in point to carry more speed on a tighter entry arc."
        ),
        coaching_priority=_priority(severity),
        severity_score=round(severity, 3),
        supporting_metrics={"entry_lateral_m": round(entry_lat, 3)},
    )


def _check_wide_exit(corner: CornerResult) -> Optional[RecommendationResult]:
    if corner.deviation_profile is None:
        return None
    exit_lat = corner.deviation_profile.exit_lateral
    if abs(exit_lat) < _OVERSHOOT_EXIT_M:
        return None
    severity = min(1.0, abs(exit_lat) / (2 * _OVERSHOOT_EXIT_M))
    return RecommendationResult(
        corner_id=corner.id,
        corner_label=corner.label,
        issue_type="wide_exit",
        confidence=0.75,
        explanation=(
            f"The car runs {abs(exit_lat):.1f} m wide at exit of {corner.label}."
        ),
        recommendation=(
            "Delay throttle application or unwind the steering earlier to track out more "
            "progressively."
        ),
        coaching_priority=_priority(severity),
        severity_score=round(severity, 3),
        supporting_metrics={"exit_lateral_m": round(exit_lat, 3)},
    )


def _check_low_speed_apex(corner: CornerResult) -> Optional[RecommendationResult]:
    if corner.speed_profile is None:
        return None
    speed_err = corner.speed_profile.mean_speed_error
    if speed_err >= _EARLY_BRAKING_SPEED_ERR:
        return None
    severity = min(1.0, abs(speed_err) / (2 * abs(_EARLY_BRAKING_SPEED_ERR)))
    return RecommendationResult(
        corner_id=corner.id,
        corner_label=corner.label,
        issue_type="early_braking",
        confidence=0.70,
        explanation=(
            f"Average speed through {corner.label} is {abs(speed_err):.1f} m/s below "
            "the reference, suggesting early braking."
        ),
        recommendation=(
            "Brake later and/or carry more entry speed. "
            "Trail-braking can help maintain speed deeper into the corner."
        ),
        coaching_priority=_priority(severity),
        severity_score=round(severity, 3),
        supporting_metrics={"mean_speed_error_mps": round(speed_err, 3)},
    )


def _check_high_speed(corner: CornerResult) -> Optional[RecommendationResult]:
    if corner.speed_profile is None:
        return None
    speed_err = corner.speed_profile.mean_speed_error
    if speed_err <= _LATE_BRAKING_SPEED_ERR:
        return None
    severity = min(1.0, speed_err / (2 * _LATE_BRAKING_SPEED_ERR))
    return RecommendationResult(
        corner_id=corner.id,
        corner_label=corner.label,
        issue_type="high_speed_deviation",
        confidence=0.65,
        explanation=(
            f"The car is {speed_err:.1f} m/s faster than the reference through {corner.label}. "
            "This increases lateral load and deviation risk."
        ),
        recommendation=(
            "Verify the reference speed is appropriate. "
            "If intentional, ensure lateral deviation remains acceptable."
        ),
        coaching_priority=_priority(severity),
        severity_score=round(severity, 3),
        supporting_metrics={"mean_speed_error_mps": round(speed_err, 3)},
    )


# ---------------------------------------------------------------------------
# Public entry point
# ---------------------------------------------------------------------------

_RULES = [
    _check_apex_miss,
    _check_wide_entry,
    _check_wide_exit,
    _check_low_speed_apex,
    _check_high_speed,
]


def generate_recommendations(corners: List[CornerResult]) -> List[RecommendationResult]:
    """
    Apply all rules to every corner and return a flat list of recommendations,
    sorted by severity (highest first).
    """
    results: List[RecommendationResult] = []
    for corner in corners:
        for rule in _RULES:
            rec = rule(corner)
            if rec is not None:
                results.append(rec)

    results.sort(key=lambda r: r.severity_score, reverse=True)
    return results
