#!/usr/bin/env python3
"""
scripts/classify_corners.py (V2)

Geometry-driven corner classifier for a raceline CSV.

Core idea:
    - smooth κ(s) at multiple scales,
    - detect turning regions from adaptive turning energy,
    - extract persistent curvature peaks,
    - classify topology first (chicane / esses / double-apex / simple-turn family),
    - then assign semantic labels (hairpin, 90°, sweep, simple).

Usage:
        python3 scripts/classify_corners.py
        python3 scripts/classify_corners.py --csv raceline_hybrid.csv
        python3 scripts/classify_corners.py --show
"""

import argparse
import json
import sys
from pathlib import Path

import numpy as np
import pandas as pd
import matplotlib
matplotlib.use('Agg')
import matplotlib.pyplot as plt
import matplotlib.patches as mpatches
from matplotlib.collections import LineCollection
from matplotlib.lines import Line2D

# ---------------------------------------------------------------------------
# Tunable parameters (V2: fewer absolute thresholds, more adaptive geometry)
# ---------------------------------------------------------------------------
SMOOTH_WINDOWS        = (15, 31, 51)  # odd windows for κ smoothing (multi-scale)
TURN_ENERGY_QUANTILE  = 0.70         # high turning-energy threshold (adaptive)
TURN_HYSTERESIS_RATIO = 0.6         # grow regions down to this fraction of high threshold
MIN_REGION_POINTS     = 60            # reject tiny fragments
MIN_REGION_DPSI_DEG   = 8.0          # minimum heading change for a valid region
PEAK_REL_HEIGHT       = 0.35         # keep peaks above this fraction of region max |κ|
PERSIST_MIN_SCALES    = 2            # peak must persist across at least these scales
PEAK_MATCH_FRAC       = 0.10         # per-region peak matching distance (fraction of region length)
LABEL_OFFSET          = 80.0         # plot label offset from apex

WS_ROOT      = Path(__file__).resolve().parent.parent
DEFAULT_CSV  = WS_ROOT / 'raceline_minimum_curvature.csv'
DEFAULT_JSON = WS_ROOT / 'outputs' / 'trajectories_bundle.json'

# ---------------------------------------------------------------------------
# Category definitions
# ---------------------------------------------------------------------------
CAT = {
    'HAIRPIN': dict(
        color='#dd2222',
        label='Hairpin',
        behavior='Heavy brake · rotate · maximize exit',
        r_range='Topology: simple, high Δψ, small R',
    ),
    'NINETY': dict(
        color='#ff8800',
        label='90° Corner',
        behavior='Firm entry brake · single apex',
        r_range='Topology: simple, Δψ ≈ 70°–110°',
    ),
    'SIMPLE': dict(
        color='#ffcc00',
        label='Simple Corner',
        behavior='Clean line · one dominant apex',
        r_range='Topology: same-sign, single-peak dominant',
    ),
    'DOUBLE_APEX': dict(
        color='#66cc55',
        label='Double Apex',
        behavior='Two-stage rotation · patience mid-turn',
        r_range='Topology: same-sign, two persistent peaks',
    ),
    'CHICANE': dict(
        color='#cc44ff',
        label='Chicane',
        behavior='Quick L-R / R-L transition · prioritize exit',
        r_range='Topology: opposite-sign compact pair',
    ),
    'ESSES': dict(
        color='#44bbff',
        label='Esses',
        behavior='Flow + rhythm through oscillatory section',
        r_range='Topology: opposite-sign flowing sequence',
    ),
    'SWEEP': dict(
        color='#7799ff',
        label='Sweep',
        behavior='High-speed arc · minimal scrub',
        r_range='Topology: simple, large R',
    ),
}


# ===========================================================================
# 1.  LOAD TRAJECTORY (CSV or JSON)
# ===========================================================================

def _validate_raceline_df(rl: pd.DataFrame) -> pd.DataFrame:
    required = {'s', 'x', 'y', 'kappa', 'vx'}
    missing  = required - set(rl.columns)
    if missing:
        sys.exit(f'ERROR: trajectory data missing columns: {missing}')
    print(f'  {len(rl)} points  |  s = 0 – {rl.s.max():.1f} m  |  '
          f'κ ∈ [{rl.kappa.min():.4f}, {rl.kappa.max():.4f}] 1/m')
    return rl


def load_raceline(csv_path: Path) -> pd.DataFrame:
    return _validate_raceline_df(pd.read_csv(csv_path))


def _looks_like_traj_dict(obj: dict) -> bool:
    return all(k in obj for k in ('s', 'x', 'y', 'kappa', 'vx'))


def _lookup_dotted(obj: dict, dotted_key: str):
    cur = obj
    for part in dotted_key.split('.'):
        if not isinstance(cur, dict) or part not in cur:
            return None
        cur = cur[part]
    return cur


def _pick_trajectory_from_json(payload: dict, json_key: str | None) -> tuple[dict, str]:
    # 1) explicit key (supports dotted access like trajectories.hybrid)
    if json_key:
        candidate = _lookup_dotted(payload, json_key)
        if isinstance(candidate, dict) and _looks_like_traj_dict(candidate):
            return candidate, json_key.split('.')[-1]

    # 2) direct payload is already one trajectory
    if _looks_like_traj_dict(payload):
        return payload, str(payload.get('name', 'trajectory'))

    # 3) bundle format: {"trajectories": {...}}
    if isinstance(payload.get('trajectories'), dict):
        tr = payload['trajectories']
        for key in ('minimum_curvature', 'hybrid', 'shortest_path'):
            if key in tr and isinstance(tr[key], dict) and _looks_like_traj_dict(tr[key]):
                return tr[key], key
        for k, v in tr.items():
            if isinstance(v, dict) and _looks_like_traj_dict(v):
                return v, str(k)

    # 4) top-level keyed trajectories: {"hybrid": {...}}
    for key in ('minimum_curvature', 'hybrid', 'shortest_path'):
        v = payload.get(key)
        if isinstance(v, dict) and _looks_like_traj_dict(v):
            return v, key

    for k, v in payload.items():
        if isinstance(v, dict) and _looks_like_traj_dict(v):
            return v, str(k)

    raise ValueError('Could not find trajectory in JSON. Use --json-key if needed.')


def _trajectory_dict_to_df(traj: dict) -> pd.DataFrame:
    cols = ['s', 'x', 'y', 'kappa', 'vx']
    data = {}
    n = None
    for c in cols:
        arr = np.asarray(traj.get(c, []), dtype=float)
        if arr.ndim != 1:
            raise ValueError(f'JSON field {c} must be a 1D array')
        if n is None:
            n = len(arr)
        elif len(arr) != n:
            raise ValueError(f'JSON field length mismatch for {c}')
        data[c] = arr

    if n is None or n < 3:
        raise ValueError('Trajectory must contain at least 3 points')

    # Keep optional fields if present
    for c in ('psi', 'ax'):
        if c in traj:
            arr = np.asarray(traj[c], dtype=float)
            if arr.ndim == 1 and len(arr) == n:
                data[c] = arr

    return pd.DataFrame(data)


def _output_stem_from_name(input_path: Path, traj_name: str, key_name: str) -> str:
    name = (traj_name or key_name or input_path.stem).strip()
    if not name:
        name = input_path.stem
    name = name.replace(' ', '_')
    if name in {'minimum_curvature', 'hybrid', 'shortest_path'}:
        return f'raceline_{name}'
    if name.startswith('raceline_'):
        return name
    if input_path.suffix.lower() == '.csv':
        return input_path.stem
    return f'raceline_{name}'


def load_raceline_any(input_path: Path, json_key: str | None = None) -> tuple[pd.DataFrame, str, str]:
    if input_path.suffix.lower() == '.csv':
        rl = load_raceline(input_path)
        stem = input_path.stem
        return rl, stem, stem

    if input_path.suffix.lower() == '.json':
        with input_path.open('r', encoding='utf-8') as f:
            payload = json.load(f)
        traj_dict, key_name = _pick_trajectory_from_json(payload, json_key)
        rl = _validate_raceline_df(_trajectory_dict_to_df(traj_dict))
        traj_name = str(traj_dict.get('name', key_name))
        stem = _output_stem_from_name(input_path, traj_name, key_name)
        print(f'  JSON trajectory selected: {traj_name}')
        return rl, traj_name, stem

    sys.exit(f'ERROR: Unsupported input type: {input_path.suffix}. Use .csv or .json')


def save_classification_json(rl: pd.DataFrame, corners: list,
                             input_path: Path, out_json_path: Path,
                             trajectory_name: str) -> None:
    from collections import Counter

    sorted_corners = sorted(corners, key=lambda x: x['s_apex'])
    corners_payload = []
    for c in sorted_corners:
        label = CAT[c['category']]['label']
        if c['category'] in {'HAIRPIN', 'NINETY', 'SIMPLE', 'SWEEP'} and c.get('radius_band'):
            label = f'{label} ({c["radius_band"]})'

        i_lo = int(c['i_lo'])
        i_hi = int(min(c['i_hi'] + 1, len(rl)))
        seg_xy = np.column_stack([rl.x.values[i_lo:i_hi], rl.y.values[i_lo:i_hi]])

        corners_payload.append({
            'turn_id': c['turn_id'],
            'category': c['category'],
            'label': label,
            's_apex': float(c['s_apex']),
            'x_apex': float(c['x_apex']),
            'y_apex': float(c['y_apex']),
            'R_apex_m': float(c['R_apex']),
            'dpsi_deg': float(c['dpsi_deg']),
            'vx_apex_mps': float(c['vx_apex']),
            'n_peaks': int(c.get('n_peaks', 0)),
            'sign_changes': int(c.get('sign_changes', 0)),
            'radius_band': c.get('radius_band', None),
            'index_range': [i_lo, i_hi - 1],
            'segment_xy': seg_xy.tolist(),
        })

    counts = Counter(c['category'] for c in corners)

    payload = {
        'schema_version': 1,
        'source': {
            'input_file': str(input_path.resolve()),
            'trajectory_name': trajectory_name,
        },
        'trajectory': {
            'size': int(len(rl)),
            'columns': ['s', 'x', 'y', 'kappa', 'vx'],
            's': rl.s.values.astype(float).tolist(),
            'x': rl.x.values.astype(float).tolist(),
            'y': rl.y.values.astype(float).tolist(),
            'kappa': rl.kappa.values.astype(float).tolist(),
            'vx': rl.vx.values.astype(float).tolist(),
        },
        'corner_counts': {k: int(v) for k, v in counts.items()},
        'corners': corners_payload,
    }

    with out_json_path.open('w', encoding='utf-8') as f:
        json.dump(payload, f, indent=2)

    print(f'  Saved → {out_json_path}')


# ===========================================================================
# 2.  SEGMENT DETECTION
# ===========================================================================

def _heading_change(seg_kappa: np.ndarray, seg_ds: np.ndarray) -> float:
    """Total heading change (degrees) = |∫ κ ds| over a segment."""
    return float(np.abs(np.sum(seg_kappa * seg_ds)) * 180.0 / np.pi)


def _compute_ds(s: np.ndarray) -> np.ndarray:
    tail = s[-1] - s[-2] if len(s) >= 2 else 1.0
    if tail <= 0:
        tail = np.median(np.diff(s)) if len(s) > 2 else 1.0
    return np.diff(s, append=s[-1] + tail)


def _moving_average(y: np.ndarray, w: int) -> np.ndarray:
    w = int(max(3, w))
    if w % 2 == 0:
        w += 1
    pad = w // 2
    yp = np.pad(y, pad_width=pad, mode='edge')
    kernel = np.ones(w, dtype=float) / float(w)
    ys = np.convolve(yp, kernel, mode='same')
    return ys[pad:-pad]


def _contiguous_runs(mask: np.ndarray) -> list:
    rising = np.where(~mask[:-1] & mask[1:])[0] + 1
    falling = np.where(mask[:-1] & ~mask[1:])[0] + 1
    if mask[0]:
        rising = np.concatenate([[0], rising])
    if mask[-1]:
        falling = np.concatenate([falling, [len(mask)]])
    return [(int(a), int(b)) for a, b in zip(rising, falling) if a < b]


def _local_maxima(y: np.ndarray) -> np.ndarray:
    if len(y) < 3:
        return np.array([], dtype=int)
    return np.where((y[1:-1] >= y[:-2]) & (y[1:-1] > y[2:]))[0] + 1


def _sign_changes(kappa_seg: np.ndarray, eps: float) -> int:
    sign = np.zeros_like(kappa_seg, dtype=int)
    sign[kappa_seg > eps] = 1
    sign[kappa_seg < -eps] = -1
    nz = sign[sign != 0]
    if len(nz) < 2:
        return 0
    return int(np.sum(nz[1:] != nz[:-1]))


def _persistent_peaks(s: np.ndarray, smoothed: dict, region: dict) -> list:
    i_lo, i_hi = region['i_lo'], region['i_hi']
    seg_len = max(region['length_m'], 1.0)
    match_dist = max(4.0, PEAK_MATCH_FRAC * seg_len)

    candidates = []
    for _, ks in smoothed.items():
        seg = ks[i_lo:i_hi]
        if len(seg) < 3:
            continue
        mag = np.abs(seg)
        idx = _local_maxima(mag)
        if len(idx) == 0:
            continue
        keep = idx[mag[idx] >= PEAK_REL_HEIGHT * np.max(mag)]
        for j in keep:
            ii = i_lo + int(j)
            candidates.append(dict(
                idx=ii,
                s=float(s[ii]),
                amp=float(np.abs(ks[ii])),
                sign=int(np.sign(ks[ii])) if ks[ii] != 0 else 0,
                scale_id=id(ks),
            ))

    if not candidates:
        return []

    candidates = sorted(candidates, key=lambda p: (p['sign'], p['s']))
    clusters = []
    for p in candidates:
        placed = False
        for c in clusters:
            if c[0]['sign'] != p['sign']:
                continue
            s_c = np.mean([q['s'] for q in c])
            if abs(p['s'] - s_c) <= match_dist:
                c.append(p)
                placed = True
                break
        if not placed:
            clusters.append([p])

    out = []
    for c in clusters:
        scales = {q['scale_id'] for q in c}
        if len(scales) < PERSIST_MIN_SCALES:
            continue
        best = max(c, key=lambda q: q['amp'])
        out.append(dict(
            idx=int(best['idx']),
            s=float(np.mean([q['s'] for q in c])),
            amp=float(np.max([q['amp'] for q in c])),
            sign=int(best['sign']),
            persistence=int(len(scales)),
        ))
    return sorted(out, key=lambda p: p['s'])


def detect_raw_segments(rl: pd.DataFrame) -> list:
    """Detect geometric turning regions using smoothed curvature + adaptive energy."""
    s = rl.s.values
    kappa = rl.kappa.values
    ds = _compute_ds(s)

    smoothed = {w: _moving_average(kappa, w) for w in SMOOTH_WINDOWS}
    k_ref = smoothed[SMOOTH_WINDOWS[len(SMOOTH_WINDOWS) // 2]]

    abs_k = np.abs(k_ref)
    hi = float(np.quantile(abs_k, TURN_ENERGY_QUANTILE))
    lo = TURN_HYSTERESIS_RATIO * hi
    hi_mask = abs_k >= hi
    lo_mask = abs_k >= lo

    segments = []
    for i_lo, i_hi in _contiguous_runs(lo_mask):
        if not np.any(hi_mask[i_lo:i_hi]):
            continue
        if (i_hi - i_lo) < MIN_REGION_POINTS:
            continue

        seg_k = k_ref[i_lo:i_hi]
        seg_ds = ds[i_lo:i_hi]
        dpsi = _heading_change(seg_k, seg_ds)
        if dpsi < MIN_REGION_DPSI_DEG:
            continue

        ai = int(np.argmax(np.abs(seg_k)))
        apex = i_lo + ai
        peaks = _persistent_peaks(s, smoothed, dict(i_lo=i_lo, i_hi=i_hi,
                                                    length_m=float(s[min(i_hi - 1, len(s) - 1)] - s[i_lo])))

        peak_signs = [p['sign'] for p in peaks if p['sign'] != 0]
        has_opposite = len(set(peak_signs)) >= 2
        all_same = len(set(peak_signs)) == 1 and len(peak_signs) > 0

        if len(peaks) >= 2:
            spacings = np.diff([p['s'] for p in peaks])
            spacing_norm = float(np.mean(spacings) / max(s[min(i_hi - 1, len(s) - 1)] - s[i_lo], 1e-6))
        else:
            spacing_norm = 0.0

        eps = 0.10 * float(np.quantile(np.abs(k_ref), 0.90))
        flips = _sign_changes(seg_k, eps=eps)

        double_apex_score = 0.0
        if all_same and len(peaks) >= 2:
            strongest = sorted(peaks, key=lambda p: p['amp'], reverse=True)[:2]
            strongest = sorted(strongest, key=lambda p: p['idx'])
            i1, i2 = strongest[0]['idx'], strongest[1]['idx']
            if i2 > i1 + 1:
                valley = float(np.min(np.abs(k_ref[i1:i2 + 1])))
                min_peak = float(min(strongest[0]['amp'], strongest[1]['amp']))
                valley_ratio = valley / max(min_peak, 1e-9)
                gap_ratio = (s[i2] - s[i1]) / max(s[min(i_hi - 1, len(s) - 1)] - s[i_lo], 1e-9)
                spacing_score = 1.0 - min(abs(gap_ratio - 0.45) / 0.45, 1.0)
                double_apex_score = float(0.6 * valley_ratio + 0.4 * spacing_score)

        segments.append(dict(
            i_lo=int(i_lo), i_hi=int(i_hi),
            s_lo=float(s[i_lo]),
            s_hi=float(s[min(i_hi - 1, len(s) - 1)]),
            s_apex=float(s[apex]),
            x_apex=float(rl.x.iloc[apex]),
            y_apex=float(rl.y.iloc[apex]),
            kappa_apex=float(k_ref[apex]),
            R_apex=float(1.0 / max(abs(k_ref[apex]), 1e-9)),
            dpsi_deg=float(dpsi),
            vx_apex=float(rl.vx.iloc[apex]),
            length_m=float(s[min(i_hi - 1, len(s) - 1)] - s[i_lo]),
            n_peaks=int(len(peaks)),
            sign_changes=int(flips),
            has_opposite_peak_signs=bool(has_opposite),
            all_peak_same_sign=bool(all_same),
            peak_spacing_norm=float(spacing_norm),
            double_apex_score=float(double_apex_score),
        ))

    print(f'  Adaptive regions detected: {len(segments)} '
          f'(energy q={TURN_ENERGY_QUANTILE:.2f}, hi={hi:.4f})')
    return segments


# ===========================================================================
# 3.  CHICANE MERGING
# ===========================================================================

def merge_chicanes(segments: list) -> list:
    """V2 keeps segmentation/classification separate; no greedy pre-merge step."""
    print(f'  Topology stage input corners: {len(segments)}')
    return segments


# ===========================================================================
# 4.  CLASSIFICATION
# ===========================================================================

def classify_segment(seg: dict, refs: dict) -> str:
    """Topology-first classification for one region."""
    n_peaks = seg.get('n_peaks', 0)
    sign_changes = seg.get('sign_changes', 0)
    opposite = seg.get('has_opposite_peak_signs', False)

    if opposite:
        compact = seg['length_m'] <= 1.25 * refs['len_med']
        close_pair = seg.get('peak_spacing_norm', 0.0) > 0 and seg.get('peak_spacing_norm', 0.0) <= 0.45
        if n_peaks <= 3 and sign_changes <= 2 and compact and close_pair:
            return 'CHICANE'
        return 'ESSES'

    if sign_changes >= 2 and n_peaks >= 3:
        return 'ESSES'

    if seg.get('all_peak_same_sign', False) and n_peaks >= 2 and seg.get('double_apex_score', 0.0) >= 0.45:
        return 'DOUBLE_APEX'

    R = seg['R_apex']
    dpsi = seg['dpsi_deg']
    if dpsi >= max(120.0, 1.40 * refs['dpsi_med']) and R <= refs['r_q25']:
        return 'HAIRPIN'
    if 70.0 <= dpsi <= 110.0:
        return 'NINETY'
    if R >= refs['r_q75'] and dpsi <= refs['dpsi_med']:
        return 'SWEEP'
    return 'SIMPLE'


def classify_all(segments: list) -> list:
    """Add topology + adaptive-geometry categories to every region."""
    if not segments:
        return segments

    lengths = np.array([s['length_m'] for s in segments], dtype=float)
    dpsis = np.array([s['dpsi_deg'] for s in segments], dtype=float)
    radii = np.array([s['R_apex'] for s in segments], dtype=float)
    refs = dict(
        len_med=float(np.median(lengths)),
        dpsi_med=float(np.median(dpsis)),
        r_q25=float(np.quantile(radii, 0.25)),
        r_q75=float(np.quantile(radii, 0.75)),
    )

    for seg in segments:
        seg['category'] = classify_segment(seg, refs)

    # Optional radius band (adaptive) for simple-turn family
    simple_like = [s for s in segments if s['category'] in {'HAIRPIN', 'NINETY', 'SIMPLE', 'SWEEP'}]
    if simple_like:
        rr = np.array([s['R_apex'] for s in simple_like], dtype=float)
        q1, q2 = np.quantile(rr, [0.33, 0.66])
        for s in simple_like:
            if s['R_apex'] <= q1:
                s['radius_band'] = 'tight'
            elif s['R_apex'] <= q2:
                s['radius_band'] = 'medium'
            else:
                s['radius_band'] = 'fast'

    return segments


def number_corners(corners: list) -> list:
    """Assign sequential turn numbers T1, T2, … in arc-length order."""
    for i, c in enumerate(sorted(corners, key=lambda x: x['s_apex'])):
        c['turn_id'] = f'T{i + 1}'
    return corners


# ===========================================================================
# 5.  SUMMARY PRINT
# ===========================================================================

def print_summary(corners: list) -> None:
    print(f'\n{"ID":>4}  {"s_apex":>8}  {"Type":^24}  {"R(m)":>6}  '
          f'{"Δψ(°)":>7}  {"Pk":>3}  {"Flip":>4}  {"vx_ref":>7}  {"Behaviour":<32}')
    print('─' * 120)
    for c in sorted(corners, key=lambda x: x['s_apex']):
        cat  = CAT[c['category']]
        label = cat['label']
        if c['category'] in {'HAIRPIN', 'NINETY', 'SIMPLE', 'SWEEP'} and c.get('radius_band'):
            label = f'{label} ({c["radius_band"]})'
        dpsi_str = f'{c["dpsi_deg"]:.1f}°'
        r_str = f'{c["R_apex"]:.0f}'
        print(f'{c["turn_id"]:>4}  {c["s_apex"]:>8.0f}  '
              f'{label:^24}  {r_str:>6}  '
              f'{dpsi_str:>7}  {c.get("n_peaks", 0):>3d}  {c.get("sign_changes", 0):>4d}  '
              f'{c["vx_apex"]:>6.1f}  {cat["behavior"]}')

    print()
    from collections import Counter
    counts = Counter(c['category'] for c in corners)
    print('Category breakdown:')
    for k, v in sorted(counts.items(), key=lambda x: -x[1]):
        print(f'  {CAT[k]["label"]:20s}: {v}')


# ===========================================================================
# 6.  PLOT
# ===========================================================================

def _colored_raceline(ax, rl: pd.DataFrame) -> None:
    """Draw the full raceline as a multicoloured line (curvature heat map)."""
    x = rl.x.values
    y = rl.y.values
    kabs = np.abs(rl.kappa.values)

    pts   = np.column_stack([x, y]).reshape(-1, 1, 2)
    segs  = np.concatenate([pts[:-1], pts[1:]], axis=1)
    lc    = LineCollection(segs, cmap='Blues_r', linewidth=1.2, alpha=0.35, zorder=1)
    lc.set_array(kabs)
    ax.add_collection(lc)


def _outward_position(cx, cy, track_cx, track_cy, offset):
    """Move (cx, cy) radially outward from the track centroid by `offset` metres."""
    dx = cx - track_cx
    dy = cy - track_cy
    norm = max(np.hypot(dx, dy), 1e-6)
    return cx + offset * dx / norm, cy + offset * dy / norm


def _relax_labels(positions: list, min_sep: float = 80.0,
                  n_iter: int = 60) -> list:
    """
    Iterative spring relaxation: push label positions apart until every pair
    is at least `min_sep` metres apart.  Labels are only pushed, never pulled.
    """
    pos = [list(p) for p in positions]
    for _ in range(n_iter):
        moved = False
        for i in range(len(pos)):
            for j in range(i + 1, len(pos)):
                dx = pos[i][0] - pos[j][0]
                dy = pos[i][1] - pos[j][1]
                d  = max(np.hypot(dx, dy), 1e-6)
                if d < min_sep:
                    push = (min_sep - d) / 2.0 + 1.0
                    pos[i][0] += push * dx / d
                    pos[i][1] += push * dy / d
                    pos[j][0] -= push * dx / d
                    pos[j][1] -= push * dy / d
                    moved = True
        if not moved:
            break
    return [(p[0], p[1]) for p in pos]


def plot_classified_corners(rl: pd.DataFrame, corners: list,
                            csv_path: Path, out_path: Path) -> None:
    fig, ax = plt.subplots(figsize=(18, 12))
    # Reserve a right-side panel for readable textual summaries
    fig.subplots_adjust(left=0.06, right=0.74, top=0.93, bottom=0.07)
    fig.patch.set_facecolor('#0f0f1e')
    ax.set_facecolor('#0f0f1e')

    x_all = rl.x.values
    y_all = rl.y.values

    # Track centroid (for outward label placement)
    cx_track = x_all.mean()
    cy_track = y_all.mean()

    # ── Full raceline (dim background) ────────────────────────────────────
    _colored_raceline(ax, rl)
    ax.plot(x_all, y_all, color='#334455', lw=1.0, zorder=1, alpha=0.6)

    # ── Direction arrow on a straight ─────────────────────────────────────
    mid_idx = len(x_all) // 4
    ax.annotate('', xy=(x_all[mid_idx + 5], y_all[mid_idx + 5]),
                 xytext=(x_all[mid_idx], y_all[mid_idx]),
                 arrowprops=dict(arrowstyle='->', color='#445566',
                                 lw=1.5, mutation_scale=15),
                 zorder=2)

    # ── Highlighted corner segments ────────────────────────────────────────
    for c in corners:
        cat   = c['category']
        color = CAT[cat]['color']
        i_lo  = c['i_lo']
        i_hi  = min(c['i_hi'] + 1, len(rl))
        xc    = x_all[i_lo:i_hi]
        yc    = y_all[i_lo:i_hi]
        ax.plot(xc, yc, color=color, lw=6.0, zorder=3, solid_capstyle='round')

    # ── Apex markers ──────────────────────────────────────────────────────
    for c in corners:
        color = CAT[c['category']]['color']
        ax.plot(c['x_apex'], c['y_apex'],
                marker='*', ms=14, color=color,
                markeredgecolor='white', markeredgewidth=0.8,
                zorder=6)

    # ── Compact on-track labels (turn ID only) to avoid occlusion ────────
    sorted_corners = sorted(corners, key=lambda x: x['s_apex'])
    raw_pos = [
        _outward_position(c['x_apex'], c['y_apex'],
                          cx_track, cy_track, 28.0)
        for c in sorted_corners
    ]
    label_pos = _relax_labels(raw_pos, min_sep=32.0, n_iter=60)

    for c, (lx, ly) in zip(sorted_corners, label_pos):
        cat = c['category']
        color = CAT[cat]['color']
        cx, cy = c['x_apex'], c['y_apex']

        ax.annotate('',
                    xy=(cx, cy), xytext=(lx, ly),
                    arrowprops=dict(arrowstyle='-', color=color,
                                    lw=1.0, alpha=0.65),
                    zorder=4)

        ax.text(lx, ly, c['turn_id'],
                ha='center', va='center',
                fontsize=8.5, color='white', fontweight='bold',
                bbox=dict(boxstyle='round,pad=0.22',
                          fc=color, ec='white', alpha=0.95, linewidth=0.7),
                zorder=7)

    # ── Legend ────────────────────────────────────────────────────────────
    legend_elements = [
        mpatches.Patch(fc=info['color'], ec='white', lw=0.6,
                       label=f'{info["label"]}  [{info["r_range"]}]')
        for info in CAT.values()
    ]
    leg = ax.legend(handles=legend_elements,
                    loc='upper left',
                    fontsize=8,
                    framealpha=0.85,
                    facecolor='#111133',
                    edgecolor='#445566',
                    labelcolor='white',
                    title='Corner classes',
                    title_fontsize=8.5)
    leg.get_title().set_color('#aabbcc')

    # ── Stats box ─────────────────────────────────────────────────────────
    from collections import Counter
    counts = Counter(c['category'] for c in corners)
    stats  = [f'{CAT[k]["label"]}: {v}'
              for k, v in sorted(counts.items(), key=lambda x: -x[1])]
    ax.text(0.015, 0.985, 'Corner count\n' + '\n'.join(stats),
            transform=ax.transAxes,
            ha='left', va='top',
            fontsize=7.5, color='#aabbcc',
            fontfamily='monospace',
            bbox=dict(boxstyle='round,pad=0.5',
                      fc='#111133', ec='#334455', alpha=0.88))

    # ── Right-side readable table (details moved off the track map) ──────
    info_ax = fig.add_axes([0.755, 0.07, 0.235, 0.86])
    info_ax.set_facecolor('#0f0f1e')
    info_ax.set_xticks([])
    info_ax.set_yticks([])
    for sp in info_ax.spines.values():
        sp.set_edgecolor('#334455')

    info_ax.text(0.03, 0.98, 'Corner Summary',
                 ha='left', va='top', color='white',
                 fontsize=10, fontweight='bold')

    line_y = 0.94
    line_step = 0.045 if len(sorted_corners) <= 12 else 0.034
    for c in sorted_corners:
        cat = c['category']
        color = CAT[cat]['color']
        label_name = CAT[cat]['label']
        if cat in {'HAIRPIN', 'NINETY', 'SIMPLE', 'SWEEP'} and c.get('radius_band'):
            label_name = f'{label_name} ({c["radius_band"]})'

        detail = (f'{c["turn_id"]}  {label_name}\n'
                  f'R={c["R_apex"]:.0f}m  Δψ={c["dpsi_deg"]:.0f}°  '
                  f'pk={c.get("n_peaks", 0)}  v={c["vx_apex"]:.1f}')

        info_ax.text(0.03, line_y, detail,
                     ha='left', va='top', color='white', fontsize=7.2,
                     fontfamily='monospace',
                     bbox=dict(boxstyle='round,pad=0.25',
                               fc=color, ec='white', alpha=0.88, linewidth=0.6))
        line_y -= line_step
        if line_y < 0.08:
            break

    # ── Axes formatting ───────────────────────────────────────────────────
    ax.set_aspect('equal')
    margin = 80
    ax.set_xlim(x_all.min() - margin, x_all.max() + margin)
    ax.set_ylim(y_all.min() - margin, y_all.max() + margin)
    ax.set_xlabel('X (m)', color='#778899', fontsize=9)
    ax.set_ylabel('Y (m)', color='#778899', fontsize=9)
    ax.tick_params(colors='#556677', labelsize=8)
    for sp in ax.spines.values():
        sp.set_edgecolor('#334455')
    ax.grid(True, color='#1a2233', lw=0.5, alpha=0.5)

    ax.set_title(f'Yas Marina — Classified Corners\n{csv_path.name}',
                 color='white', fontsize=13, fontweight='bold', pad=12)

    plt.savefig(out_path, dpi=150, facecolor=fig.get_facecolor())
    print(f'\n  Saved → {out_path}')


# ===========================================================================
# 7.  MAIN
# ===========================================================================

def main():
    default_input = DEFAULT_JSON if DEFAULT_JSON.exists() else DEFAULT_CSV
    parser = argparse.ArgumentParser(
        description='Classify corners on a raceline trajectory (.csv or .json) and plot the result.')
    parser.add_argument('--input',  default=str(default_input),
                        help='Path to trajectory input (.csv or .json).')
    parser.add_argument('--json-key', default='minimum_curvature',
                        help='For JSON bundles, which trajectory to use (e.g. minimum_curvature, hybrid).')
    # Backward compatibility: --csv still works
    parser.add_argument('--csv', default=None,
                        help=argparse.SUPPRESS)
    parser.add_argument('--show', action='store_true',
                        help='Open an interactive window (requires a display)')
    args = parser.parse_args()

    input_arg = args.csv if args.csv else args.input
    input_path = Path(input_arg)
    if not input_path.exists():
        sys.exit(f'ERROR: {input_path} not found')

    print(f'\n[1/5] Loading trajectory: {input_path.name}')
    rl, traj_name, out_stem = load_raceline_any(input_path, json_key=args.json_key)

    print('\n[2/5] Detecting adaptive turning regions (smoothed κ)')
    raw = detect_raw_segments(rl)

    print('\n[3/5] Topology classification → semantic label mapping → numbering')
    corners = merge_chicanes(raw)
    corners = classify_all(corners)
    corners = number_corners(corners)

    print_summary(corners)

    print('[4/5] Plotting')
    out_png = input_path.parent / f'{out_stem}_classified_corners_v2.png'
    plot_classified_corners(rl, corners, input_path, out_png)

    print('[5/5] Writing frontend JSON')
    out_json = input_path.parent / f'{out_stem}_classified_corners_v2.json'
    save_classification_json(rl, corners, input_path, out_json, trajectory_name=traj_name)

    if args.show:
        matplotlib.use('TkAgg')
        plt.show()


if __name__ == '__main__':
    main()
