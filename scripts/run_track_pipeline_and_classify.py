#!/usr/bin/env python3
"""
End-to-end track analysis pipeline:
1) Input track boundary JSON
2) Run raceline generation pipeline (SP + MC + Hybrid)
3) Classify corners from hybrid raceline JSON
4) Emit frontend-ready analysis JSON + corner plot

Typical usage:
    python3 scripts/run_track_pipeline_and_classify.py \
      --track-json /home/hamza/hackathon_ws/yas_marina_bnd.json
"""

from __future__ import annotations

import argparse
import json
import subprocess
import sys
from collections import Counter
from pathlib import Path
from typing import Any

import numpy as np

import classify_corners as cc


WS_ROOT = Path(__file__).resolve().parent.parent
PIPELINE_SCRIPT = WS_ROOT / "minimal_raceline_project" / "run_raceline_pipeline.py"


def _run_raceline_pipeline(
    track_json: Path,
    output_dir: Path,
    planner_repo: Path | None,
    strict_dynamics: bool,
    pipeline_args: list[str],
) -> None:
    cmd = [
        sys.executable,
        str(PIPELINE_SCRIPT),
        "--track-json",
        str(track_json),
        "--output-dir",
        str(output_dir),
        "--json-only",
    ]

    if planner_repo is not None:
        cmd.extend(["--planner-repo", str(planner_repo)])
    if strict_dynamics:
        cmd.append("--strict-dynamics")
    if pipeline_args:
        cmd.extend(pipeline_args)

    print("[pipeline] Running raceline pipeline...")
    subprocess.run(cmd, check=True)


def _corner_payload(corners: list[dict], rl) -> list[dict[str, Any]]:
    out: list[dict[str, Any]] = []
    for c in sorted(corners, key=lambda x: x["s_apex"]):
        cat = c["category"]
        label = cc.CAT[cat]["label"]
        if cat in {"HAIRPIN", "NINETY", "SIMPLE", "SWEEP"} and c.get("radius_band"):
            label = f"{label} ({c['radius_band']})"

        i_lo = int(c["i_lo"])
        i_hi = int(min(c["i_hi"] + 1, len(rl)))
        seg_xy = np.column_stack([rl.x.values[i_lo:i_hi], rl.y.values[i_lo:i_hi]])

        out.append(
            {
                "turn_id": c["turn_id"],
                "category": cat,
                "label": label,
                "recommendation": cc.CAT[cat]["behavior"],
                "s_apex": float(c["s_apex"]),
                "x_apex": float(c["x_apex"]),
                "y_apex": float(c["y_apex"]),
                "R_apex_m": float(c["R_apex"]),
                "dpsi_deg": float(c["dpsi_deg"]),
                "vx_apex_mps": float(c["vx_apex"]),
                "n_peaks": int(c.get("n_peaks", 0)),
                "sign_changes": int(c.get("sign_changes", 0)),
                "radius_band": c.get("radius_band"),
                "index_range": [i_lo, i_hi - 1],
                "segment_xy": seg_xy.tolist(),
            }
        )
    return out


def _build_analysis_payload(
    track_json: Path,
    hybrid_json: Path,
    rl,
    corners: list[dict],
    trajectory_name: str,
) -> dict[str, Any]:
    counts = Counter(c["category"] for c in corners)
    dominant = max(counts.items(), key=lambda kv: kv[1])[0] if counts else None

    corners_out = _corner_payload(corners, rl)

    recommendations_overall = []
    for k, _ in counts.most_common():
        recommendations_overall.append(
            {
                "category": k,
                "label": cc.CAT[k]["label"],
                "recommendation": cc.CAT[k]["behavior"],
            }
        )

    return {
        "schema_version": 1,
        "source": {
            "track_json": str(track_json.resolve()),
            "hybrid_raceline_json": str(hybrid_json.resolve()),
            "trajectory_name": trajectory_name,
        },
        "trajectory": {
            "size": int(len(rl)),
            "columns": ["s", "x", "y", "kappa", "vx"],
            "s": rl.s.values.astype(float).tolist(),
            "x": rl.x.values.astype(float).tolist(),
            "y": rl.y.values.astype(float).tolist(),
            "kappa": rl.kappa.values.astype(float).tolist(),
            "vx": rl.vx.values.astype(float).tolist(),
        },
        "properties": {
            "lap_length_m": float(rl.s.max()),
            "n_points": int(len(rl)),
            "vx_mean_mps": float(np.mean(rl.vx.values)),
            "vx_max_mps": float(np.max(rl.vx.values)),
            "vx_min_mps": float(np.min(rl.vx.values)),
            "n_turns": int(len(corners)),
            "tightest_radius_m": float(min((c["R_apex"] for c in corners), default=np.nan)),
            "largest_heading_change_deg": float(max((c["dpsi_deg"] for c in corners), default=np.nan)),
            "dominant_corner_category": dominant,
        },
        "corner_counts": {k: int(v) for k, v in counts.items()},
        "corners": corners_out,
        "recommendations": recommendations_overall,
    }


def main() -> None:
    parser = argparse.ArgumentParser(
        description="Run raceline pipeline from track JSON, classify hybrid corners, and export frontend JSON."
    )
    parser.add_argument("--track-json", type=Path, required=True, help="Track boundary JSON input")
    parser.add_argument("--output-dir", type=Path, default=WS_ROOT / "outputs")
    parser.add_argument("--planner-repo", type=Path, default=None)
    parser.add_argument("--strict-dynamics", action="store_true")
    parser.add_argument(
        "--pipeline-arg",
        action="append",
        default=[],
        help="Extra arg passed to raceline pipeline (repeatable), e.g. --pipeline-arg=--samples --pipeline-arg=1800",
    )
    parser.add_argument(
        "--skip-pipeline",
        action="store_true",
        help="Skip raceline generation and use existing output JSON files.",
    )
    parser.add_argument(
        "--hybrid-json",
        type=Path,
        default=None,
        help="Optional explicit hybrid raceline JSON path. Defaults to <output-dir>/raceline_hybrid.json",
    )
    parser.add_argument(
        "--out-json",
        type=Path,
        default=None,
        help="Final analysis JSON output path. Default: <output-dir>/<track_stem>_hybrid_corner_analysis.json",
    )
    parser.add_argument("--show", action="store_true", help="Show plot interactively")
    args = parser.parse_args()

    track_json = args.track_json.resolve()
    output_dir = args.output_dir.resolve()
    output_dir.mkdir(parents=True, exist_ok=True)

    if not track_json.exists():
        sys.exit(f"ERROR: track JSON not found: {track_json}")

    if not args.skip_pipeline:
        _run_raceline_pipeline(
            track_json=track_json,
            output_dir=output_dir,
            planner_repo=args.planner_repo,
            strict_dynamics=args.strict_dynamics,
            pipeline_args=args.pipeline_arg,
        )

    hybrid_json = args.hybrid_json.resolve() if args.hybrid_json else (output_dir / "raceline_hybrid.json")
    if not hybrid_json.exists():
        sys.exit(f"ERROR: hybrid JSON not found: {hybrid_json}")

    print("[classify] Loading hybrid trajectory JSON")
    rl, traj_name, out_stem = cc.load_raceline_any(hybrid_json, json_key="hybrid")

    print("[classify] Detecting + classifying corners")
    raw = cc.detect_raw_segments(rl)
    corners = cc.merge_chicanes(raw)
    corners = cc.classify_all(corners)
    corners = cc.number_corners(corners)
    cc.print_summary(corners)

    out_png = output_dir / f"{out_stem}_classified_corners_v2.png"
    cc.plot_classified_corners(rl, corners, hybrid_json, out_png)

    payload = _build_analysis_payload(
        track_json=track_json,
        hybrid_json=hybrid_json,
        rl=rl,
        corners=corners,
        trajectory_name=traj_name,
    )

    out_json = args.out_json.resolve() if args.out_json else (output_dir / f"{track_json.stem}_hybrid_corner_analysis.json")
    with out_json.open("w", encoding="utf-8") as f:
        json.dump(payload, f, indent=2)

    print(f"[OK] Saved analysis JSON: {out_json}")
    print(f"[OK] Saved corner plot:    {out_png}")

    if args.show:
        import matplotlib.pyplot as plt

        plt.show()


if __name__ == "__main__":
    main()
