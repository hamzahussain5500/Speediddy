#!/usr/bin/env python3
"""
scripts/segment_analysis.py  —  Step 3: Offline corner segment analysis

Projects the driven path onto the reference raceline using proper sub-segment
arc-length projection (not brute-force XY), detects corners by curvature,
computes per-corner coaching metrics, and produces:

  <bag>_corner_grid.png    — Quick-scan grid: one column per corner, 4 rows of traces
  <bag>_corner_report.pdf  — Debrief document: summary table + one page per corner

Theory
------
Each driven point (x, y) is projected onto the nearest raceline *segment*
(not just the nearest vertex) to obtain:
  s_proj  — arc-length progress along the raceline (m)
  n_proj  — signed lateral deviation (m), + = left of travel direction

Reference speed at any driven point is then interpolated from the raceline CSV:
  v_ref(s) = interp(s_proj, rl_s, rl_vx)

Per corner:
  entry_v_ratio   = mean(v / v_ref)  for s in [apex-80, apex-20]
  apex_v_ratio    = mean(v / v_ref)  for s in [apex-15, apex+15]
  exit_v_ratio    = mean(v / v_ref)  for s in [apex+15, apex+70]
  apex_lat_dev    = mean(sign(kappa) * n_proj) at apex zone — + = inside
  apex_lag        = s_proj of driven apex minus s of geometric apex (m)
  early_throttle  = gas > 0.15 before apex
  throttle_offset = s of first post-apex throttle application (m past apex)

Usage:
  source /home/hamza/hackathon_ws/install/setup.bash
  python3 scripts/segment_analysis.py [--bag hackathon_wheel_to_wheel.mcap]
"""

import argparse
import json
import sys
from pathlib import Path

import numpy as np
import pandas as pd
from scipy.spatial import KDTree

import matplotlib
matplotlib.use('Agg')
import matplotlib.pyplot as plt
import matplotlib.gridspec as gridspec
from matplotlib.backends.backend_pdf import PdfPages
from matplotlib.lines import Line2D
import matplotlib.patches as mpatches

import rosbag2_py
from rclpy.serialization import deserialize_message
from rosidl_runtime_py.utilities import get_message

# ---------------------------------------------------------------------------
# Paths
# ---------------------------------------------------------------------------
WS_ROOT         = Path(__file__).resolve().parent.parent
RACELINE_CSV    = WS_ROOT / 'raceline_hybrid.csv'
BOUNDARIES_JSON = WS_ROOT / 'yas_marina_bnd.json'
STATE_TOPIC     = '/constructor0/state_estimation'

# ---------------------------------------------------------------------------
# Colour palette
# ---------------------------------------------------------------------------
C_ACTUAL   = '#00cfcf'   # cyan  — actual speed / driven path
C_REF      = '#ff8800'   # orange — reference speed / raceline
C_GAS      = '#22cc44'   # green — throttle
C_BRAKE    = '#cc2222'   # red   — brake
C_LAT      = '#8899ff'   # blue  — lateral deviation
C_BND      = '#444444'   # grey  — track boundaries
C_APEX     = '#ffdd00'   # yellow — apex marker


# ===========================================================================
# 1. BAG READING
# ===========================================================================

def read_bag(bag_path: Path) -> pd.DataFrame:
    """Read StateEstimation from MCAP → DataFrame."""
    reader = rosbag2_py.SequentialReader()
    reader.open(
        rosbag2_py.StorageOptions(uri=str(bag_path), storage_id='mcap'),
        rosbag2_py.ConverterOptions('cdr', 'cdr'),
    )
    type_map = {t.name: t.type for t in reader.get_all_topics_and_types()}
    if STATE_TOPIC not in type_map:
        sys.exit(f'ERROR: {STATE_TOPIC} not in bag.')
    msg_type = get_message(type_map[STATE_TOPIC])
    reader.set_filter(rosbag2_py.StorageFilter(topics=[STATE_TOPIC]))

    rows = []
    while reader.has_next():
        _, data, t_ns = reader.read_next()
        m = deserialize_message(data, msg_type)
        rows.append({
            't':     t_ns * 1e-9,
            'x':     m.x_m,
            'y':     m.y_m,
            'v':     m.v_mps,
            'gas':   m.gas,
            'brake': m.brake,
            'yaw':   m.yaw_rad,
        })
    df = pd.DataFrame(rows)
    # Normalise brake pressure to [0, 1]
    brake_max = df.brake.max()
    df['brake_norm'] = df.brake / brake_max if brake_max > 0 else 0.0
    print(f'  {len(df):,} messages | {df.t.iloc[-1]-df.t.iloc[0]:.1f} s | '
          f'v={df.v.min():.1f}–{df.v.max():.1f} m/s | '
          f'brake_max={brake_max/1e6:.2f} MPa')
    return df


# ===========================================================================
# 2. RACELINE + BOUNDARIES
# ===========================================================================

def load_raceline(csv_path: Path):
    rl = pd.read_csv(csv_path)
    rl_x   = rl['x'].to_numpy()
    rl_y   = rl['y'].to_numpy()
    rl_s   = rl['s'].to_numpy()
    rl_kap = rl['kappa'].to_numpy()
    rl_vx  = rl['vx'].to_numpy()
    rl_ax  = rl['ax'].to_numpy()
    tree   = KDTree(np.column_stack([rl_x, rl_y]))
    print(f'  {len(rl)} raceline pts | s_max={rl_s[-1]:.1f} m | '
          f'kappa=[{rl_kap.min():.4f}, {rl_kap.max():.4f}]')
    return rl_x, rl_y, rl_s, rl_kap, rl_vx, rl_ax, tree


def load_boundaries(json_path: Path):
    with open(json_path) as f:
        data = json.load(f)
    left  = np.array(data['boundaries']['left_border'])
    right = np.array(data['boundaries']['right_border'])
    return left, right


# ===========================================================================
# 3. PROPER SUB-SEGMENT ARC-LENGTH PROJECTION (vectorised)
# ===========================================================================

def project_onto_raceline(xs: np.ndarray, ys: np.ndarray,
                           rl_x, rl_y, rl_s, tree) -> tuple:
    """
    For every driven point (xs[i], ys[i]) find the nearest raceline SEGMENT
    (not just the nearest vertex) and return:
      s_proj : arc-length position along the raceline (m)
      n_proj : signed lateral deviation (m), positive = left of travel direction

    Algorithm
    ---------
    1. KDTree query gives nearest vertex index *idx*.
    2. Check the two adjacent segments [idx-1, idx] and [idx, idx+1].
    3. Project the point onto each segment (clamped to [0,1]).
    4. Keep the projection with the smaller perpendicular distance.

    This eliminates the "along-track" distance error of point-to-vertex lookup,
    which can be metres on long straights where driven points fall between
    two sparsely-spaced raceline vertices.
    """
    N = len(xs)
    M = len(rl_x)
    _, idxs = tree.query(np.column_stack([xs, ys]))

    best_d = np.full(N, np.inf)
    best_s = np.zeros(N)
    best_n = np.zeros(N)

    for i0_arr, i1_arr in [
        (np.clip(idxs - 1, 0, M - 1), idxs),
        (idxs, np.clip(idxs + 1, 0, M - 1)),
    ]:
        p0x = rl_x[i0_arr];  p0y = rl_y[i0_arr]
        seg_x = rl_x[i1_arr] - p0x
        seg_y = rl_y[i1_arr] - p0y
        seg_l2 = seg_x**2 + seg_y**2 + 1e-18
        seg_l  = np.sqrt(seg_l2)

        # Projection parameter t ∈ [0, 1]
        t = np.clip(((xs - p0x) * seg_x + (ys - p0y) * seg_y) / seg_l2, 0.0, 1.0)

        # Foot of perpendicular
        fx = p0x + t * seg_x
        fy = p0y + t * seg_y

        # Perpendicular distance
        d = np.hypot(xs - fx, ys - fy)

        # Signed lateral deviation: 2-D cross product of tangent × displacement
        # n > 0  → car is to the LEFT  of the path direction
        # n < 0  → car is to the RIGHT of the path direction
        tx = seg_x / seg_l
        ty = seg_y / seg_l
        n_signed = tx * (ys - fy) - ty * (xs - fx)

        # Arc-length at foot
        s_foot = rl_s[i0_arr] + t * seg_l

        # Update bests
        mask = d < best_d
        best_d[mask] = d[mask]
        best_s[mask] = s_foot[mask]
        best_n[mask] = n_signed[mask]

    return best_s, best_n


# ===========================================================================
# 4. CORNER DETECTION
# ===========================================================================

def detect_corners(rl_s, rl_kap, rl_vx,
                   kappa_thresh=0.015, merge_gap_m=100.0,
                   window_pre=100.0, window_post=100.0) -> list:
    """
    Detect high-curvature segments (|kappa| > kappa_thresh), find the apex
    (maximum |kappa|) of each, merge corners whose apexes are within
    merge_gap_m of each other, and return a list of corner dicts.

    Each dict contains:
      name, s_apex, s_entry_window, s_exit_window,
      kappa_apex, radius_apex, vx_ref_apex, direction ('L' or 'R')
    """
    in_c = np.abs(rl_kap) > kappa_thresh

    # Segment boundaries
    rising  = np.where(~in_c[:-1] & in_c[1:])[0] + 1
    falling = np.where( in_c[:-1] & ~in_c[1:])[0] + 1
    if in_c[0]:
        rising  = np.concatenate([[0], rising])
    if in_c[-1]:
        falling = np.concatenate([falling, [len(rl_kap)]])

    raw = []
    for s, e in zip(rising, falling):
        if s >= e:
            continue
        seg_kap = rl_kap[s:e]
        local_apex = int(np.argmax(np.abs(seg_kap)))
        apex_idx = s + local_apex
        raw.append({
            'apex_idx':   int(apex_idx),
            's_apex':     float(rl_s[apex_idx]),
            'kappa_apex': float(rl_kap[apex_idx]),
            'vx_apex':    float(rl_vx[apex_idx]),
        })

    if not raw:
        return []

    # Merge nearby corners
    merged = [raw[0].copy()]
    for c in raw[1:]:
        prev = merged[-1]
        if c['s_apex'] - prev['s_apex'] < merge_gap_m:
            # Keep the apex with the higher curvature magnitude
            if abs(c['kappa_apex']) > abs(prev['kappa_apex']):
                prev.update({k: c[k] for k in ('apex_idx', 's_apex', 'kappa_apex', 'vx_apex')})
        else:
            merged.append(c.copy())

    # Annotate with window bounds and metadata
    corners = []
    for i, c in enumerate(merged):
        s_ap = c['s_apex']
        kap  = c['kappa_apex']
        R    = abs(1.0 / kap) if kap != 0 else 999.0
        direction = 'L' if kap > 0 else 'R'
        corners.append({
            'name':           f'C{i+1} ({direction}, R={R:.0f}m, {c["vx_apex"]:.1f}m/s)',
            'short_name':     f'C{i+1}',
            'idx':            i + 1,
            's_apex':         s_ap,
            's_lo':           max(0.0, s_ap - window_pre),
            's_hi':           s_ap + window_post,
            'kappa_apex':     kap,
            'radius_apex':    R,
            'vx_ref_apex':    c['vx_apex'],
            'direction':      direction,
            'corner_color':   '#cc2222' if R <= 15 else ('#ff8800' if R <= 45 else '#ffcc00'),
        })

    print(f'  Detected {len(corners)} corner(s):')
    for c in corners:
        print(f'    {c["name"]:35s}  s_apex={c["s_apex"]:.0f} m')
    return corners


# ===========================================================================
# 5. PER-CORNER METRICS
# ===========================================================================

BRAKE_THRESH_PA   = 80_000    # 80 kPa — "braking active"
THROTTLE_THRESH   = 0.15      # fraction [0, 1]
ENTRY_ZONE        = (80, 20)  # m before apex: [apex-80, apex-20]
APEX_ZONE         = 15        # m either side of apex
EXIT_ZONE         = (15, 70)  # m after apex: [apex+15, apex+70]


def compute_metrics(corner: dict, df: pd.DataFrame,
                    rl_s, rl_vx) -> dict | None:
    s_ap  = corner['s_apex']
    s_lo  = corner['s_lo']
    s_hi  = corner['s_hi']
    kap   = corner['kappa_apex']
    sign  = np.sign(kap)

    seg = df[(df.s_proj >= s_lo) & (df.s_proj <= s_hi)].copy()
    if len(seg) < 20:
        return None

    seg['v_ref']       = np.interp(seg.s_proj.values, rl_s, rl_vx)
    seg['speed_ratio'] = seg.v / seg.v_ref

    def zone(lo_off, hi_off):
        return seg[(seg.s_proj >= s_ap + lo_off) & (seg.s_proj <= s_ap + hi_off)]

    entry = zone(-ENTRY_ZONE[0], -ENTRY_ZONE[1])
    apex  = zone(-APEX_ZONE,      APEX_ZONE)
    exit_ = zone( EXIT_ZONE[0],   EXIT_ZONE[1])

    m = {}

    # Speed ratios
    m['entry_v_ratio'] = float(entry.speed_ratio.mean()) if len(entry) else np.nan
    m['apex_v_ratio']  = float(apex.speed_ratio.mean())  if len(apex)  else np.nan
    m['exit_v_ratio']  = float(exit_.speed_ratio.mean()) if len(exit_) else np.nan

    # Lateral deviation at apex: sign-corrected so + = hugging inside
    m['apex_lat_dev'] = float((apex.n_proj * sign).mean()) if len(apex) else np.nan

    # Apex lag: where is the driven apex (closest to inside) vs geometric apex?
    # For L turn (kap>0) inside = max n_proj; for R turn inside = min n_proj
    pre_exit = seg[seg.s_proj <= s_ap + APEX_ZONE + 20]
    if len(pre_exit) > 0:
        if sign > 0:
            driven_apex_s = float(pre_exit.loc[pre_exit.n_proj.idxmax(), 's_proj'])
        else:
            driven_apex_s = float(pre_exit.loc[pre_exit.n_proj.idxmin(), 's_proj'])
        m['apex_lag'] = driven_apex_s - s_ap   # + = late, − = early
    else:
        m['apex_lag'] = np.nan

    # Braking: first point in window where brake > threshold
    braking = seg[seg.brake > BRAKE_THRESH_PA]
    m['brake_start_offset'] = float(braking.s_proj.min() - s_ap) if len(braking) else np.nan

    # Early throttle: gas > threshold before the apex (excluding 20 m before)
    pre_apex = seg[seg.s_proj < s_ap - 5]
    m['early_throttle'] = bool((pre_apex.gas > THROTTLE_THRESH).any()) if len(pre_apex) else False

    # First throttle application after apex
    post_apex = seg[seg.s_proj > s_ap]
    on_thr = post_apex[post_apex.gas > THROTTLE_THRESH]
    m['throttle_offset'] = float(on_thr.s_proj.min() - s_ap) if len(on_thr) else np.nan

    # Store the segment for plotting
    m['_seg'] = seg

    return m


# ===========================================================================
# 6. CLASSIFICATION
# ===========================================================================

def classify(corner: dict, m: dict) -> list:
    """Return list of (issue_label, detail_string) for detected problems."""
    issues = []

    evr = m.get('entry_v_ratio', np.nan)
    avr = m.get('apex_v_ratio',  np.nan)
    xvr = m.get('exit_v_ratio',  np.nan)
    ald = m.get('apex_lat_dev',  np.nan)
    lag = m.get('apex_lag',      np.nan)
    thr = m.get('throttle_offset', np.nan)

    if not np.isnan(evr):
        if evr < 0.90:
            issues.append(('Over-braking on entry',
                           f'Entry speed {evr:.0%} of reference (−{(1-evr)*100:.0f}%)'))
        elif evr > 1.07:
            issues.append(('Under-braking / hot entry',
                           f'Entry speed {evr:.0%} of reference (+{(evr-1)*100:.0f}%)'))

    if not np.isnan(avr) and avr < 0.90:
        issues.append(('Slow apex',
                       f'Apex speed {avr:.0%} of reference (−{(1-avr)*100:.0f}%)'))

    if not np.isnan(ald):
        if ald < -2.0:
            issues.append(('Running wide at apex',
                           f'Apex deviation {ald:+.1f} m (outside of optimal line)'))
        elif ald < -0.8:
            issues.append(('Slightly wide at apex',
                           f'Apex deviation {ald:+.1f} m'))

    if not np.isnan(lag):
        if lag > 20:
            issues.append(('Late apex',
                           f'Driven apex {lag:.0f} m past geometric apex'))
        elif lag < -20:
            issues.append(('Early apex',
                           f'Driven apex {abs(lag):.0f} m before geometric apex'))

    if m.get('early_throttle', False):
        issues.append(('Early throttle',
                       'Throttle applied before apex — risk of understeer on exit'))

    if not np.isnan(thr) and thr > 30:
        issues.append(('Delayed throttle on exit',
                       f'Throttle applied {thr:.0f} m after apex'))

    if not np.isnan(xvr) and xvr < 0.90:
        issues.append(('Throttle loss on exit',
                       f'Exit speed {xvr:.0%} of reference (−{(1-xvr)*100:.0f}%)'))

    return issues


# ===========================================================================
# 7.  HELPERS
# ===========================================================================

def _corner_color(R):
    if R <= 15:  return '#cc2222'
    if R <= 45:  return '#ff8800'
    return '#ffcc00'


def _draw_mini_map(ax, left, right, rl_x, rl_y, seg, corner,
                   rl_s, rl_kap):
    """Plot the circuit overview zoomed to the corner."""
    s_ap = corner['s_apex']
    col  = corner['corner_color']

    # Full circuit in muted grey
    ax.plot(left[:,0],  left[:,1],  color='#aaaaaa', lw=0.6, zorder=1)
    ax.plot(right[:,0], right[:,1], color='#aaaaaa', lw=0.6, zorder=1)
    ax.plot(rl_x, rl_y, color='#cccccc', lw=1.0, zorder=2)

    # Corner section of raceline highlighted
    in_win = (rl_s >= corner['s_lo']) & (rl_s <= corner['s_hi'])
    ax.plot(rl_x[in_win], rl_y[in_win], color=col, lw=2.5, zorder=3)

    # Driven path in this window
    ax.scatter(seg.x, seg.y, c=seg.v, cmap='cool', s=4, zorder=4)

    # Apex marker on raceline (nearest point)
    apex_rl_idx = int(np.argmin(np.abs(rl_s - s_ap)))
    ax.plot(rl_x[apex_rl_idx], rl_y[apex_rl_idx],
            '*', color=C_APEX, ms=10, zorder=5)

    # Zoom to window + margin
    wx = rl_x[in_win]; wy = rl_y[in_win]
    margin = 40
    ax.set_xlim(wx.min() - margin, wx.max() + margin)
    ax.set_ylim(wy.min() - margin, wy.max() + margin)
    ax.set_aspect('equal')
    ax.axis('off')


def _draw_speed(ax, seg, corner, rl_s, rl_vx):
    s_ap = corner['s_apex']
    s    = seg.s_proj - s_ap          # offset so apex = 0
    v_ref = np.interp(seg.s_proj.values, rl_s, rl_vx)

    ax.plot(s, seg.v.values,  color=C_ACTUAL, lw=1.5, label='Actual')
    ax.plot(s, v_ref,          color=C_REF,    lw=1.5, ls='--', label='Reference')
    ax.axvline(0, color=C_APEX, lw=1, ls='--', alpha=0.8)
    ax.set_ylabel('Speed (m/s)', fontsize=8)
    ax.legend(fontsize=7, loc='lower right')
    ax.grid(True, alpha=0.2)


def _draw_controls(ax, seg, corner):
    s_ap = corner['s_apex']
    s    = seg.s_proj - s_ap

    ax.fill_between(s, seg.gas.values,       alpha=0.6, color=C_GAS,   step='mid', label='Throttle')
    ax.fill_between(s, seg.brake_norm.values, alpha=0.6, color=C_BRAKE, step='mid', label='Brake (norm)')
    ax.axvline(0, color=C_APEX, lw=1, ls='--', alpha=0.8)
    ax.set_ylim(0, 1.05)
    ax.set_ylabel('Pedals [0–1]', fontsize=8)
    ax.legend(fontsize=7, loc='upper right')
    ax.grid(True, alpha=0.2)


def _draw_lat_dev(ax, seg, corner, metrics):
    s_ap = corner['s_apex']
    s    = seg.s_proj - s_ap

    ax.axhline(0,  color='k',    lw=0.8, ls='--')
    ax.axvline(0,  color=C_APEX, lw=1,   ls='--', alpha=0.8, label='Geometric apex')
    ax.fill_between(s, seg.n_proj.values, alpha=0.4, color=C_LAT)
    ax.plot(s, seg.n_proj.values, color=C_LAT, lw=1.5)

    lag = metrics.get('apex_lag', np.nan)
    if not np.isnan(lag):
        ax.axvline(lag, color='#ff88ff', lw=1, ls=':', alpha=0.9, label=f'Driven apex ({lag:+.0f} m)')

    ax.set_ylabel('Lat dev (m)\n(+= left of line)', fontsize=8)
    ax.set_xlabel('Progress from apex (m)', fontsize=8)
    ax.legend(fontsize=7)
    ax.grid(True, alpha=0.2)


# ===========================================================================
# 8. PNG GRID  — one column per corner, 4 rows
# ===========================================================================

def plot_grid(corners, metrics_list, issues_list,
              df, left, right, rl_x, rl_y, rl_s, rl_vx, rl_kap,
              out_path: Path):

    n_cols = len(corners)
    fig = plt.figure(figsize=(5.5 * n_cols, 18))
    fig.patch.set_facecolor('#1a1a2e')

    row_ratios = [2.2, 1.3, 1.1, 1.1]
    gs = gridspec.GridSpec(4, n_cols, figure=fig,
                           hspace=0.45, wspace=0.35,
                           height_ratios=row_ratios)

    row_labels = ['Track map', 'Speed (m/s)', 'Throttle / Brake', 'Lateral deviation (m)']

    for col, (corner, m, issues) in enumerate(zip(corners, metrics_list, issues_list)):
        if m is None:
            continue
        seg = m['_seg']
        col_color = corner['corner_color']

        # ---- Row 0: mini map ----
        ax0 = fig.add_subplot(gs[0, col])
        ax0.set_facecolor('#111122')
        _draw_mini_map(ax0, left, right, rl_x, rl_y, seg, corner, rl_s, rl_kap)

        # Column header
        ax0.set_title(f'{corner["name"]}\n', color='white', fontsize=9,
                      fontweight='bold', pad=4)

        # Issue badges
        badge_y = 1.02
        for label, _ in issues:
            short = label[:18]
            ax0.text(0.5, badge_y, short,
                     transform=ax0.transAxes, ha='center', va='bottom',
                     fontsize=6.5, color='white',
                     bbox=dict(boxstyle='round,pad=0.2', fc='#882222', ec='none', alpha=0.9))
            badge_y += 0.10

        # ---- Row 1: speed ----
        ax1 = fig.add_subplot(gs[1, col])
        ax1.set_facecolor('#111122')
        for sp in ax1.spines.values(): sp.set_edgecolor('#444466')
        ax1.tick_params(colors='#aaaacc', labelsize=7)
        ax1.yaxis.label.set_color('#aaaacc')
        _draw_speed(ax1, seg, corner, rl_s, rl_vx)

        # ---- Row 2: controls ----
        ax2 = fig.add_subplot(gs[2, col])
        ax2.set_facecolor('#111122')
        for sp in ax2.spines.values(): sp.set_edgecolor('#444466')
        ax2.tick_params(colors='#aaaacc', labelsize=7)
        ax2.yaxis.label.set_color('#aaaacc')
        _draw_controls(ax2, seg, corner)

        # ---- Row 3: lateral deviation ----
        ax3 = fig.add_subplot(gs[3, col])
        ax3.set_facecolor('#111122')
        for sp in ax3.spines.values(): sp.set_edgecolor('#444466')
        ax3.tick_params(colors='#aaaacc', labelsize=7)
        ax3.yaxis.label.set_color('#aaaacc')
        ax3.xaxis.label.set_color('#aaaacc')
        _draw_lat_dev(ax3, seg, corner, m)

        # Summary metrics box at bottom of last row
        avr = m.get('apex_v_ratio', np.nan)
        ald = m.get('apex_lat_dev', np.nan)
        evr = m.get('entry_v_ratio', np.nan)
        xvr = m.get('exit_v_ratio', np.nan)
        txt = (f'Entry {evr:.0%} | Apex {avr:.0%} | Exit {xvr:.0%}\n'
               f'Apex dev {ald:+.2f} m ({"inside" if ald>0 else "outside"})')
        ax3.text(0.5, -0.45, txt,
                 transform=ax3.transAxes, ha='center', va='top',
                 fontsize=7, color='#ccccee',
                 bbox=dict(boxstyle='round,pad=0.3', fc='#222244', ec='#444466'))

    # Row labels on leftmost column
    for row, lbl in enumerate(row_labels):
        fig.text(0.005, 1 - (row + 0.5) / 4, lbl,
                 va='center', ha='left', rotation=90,
                 color='#888899', fontsize=9)

    fig.suptitle('Yas Marina — Corner Segment Analysis\n'
                 'Raceline: minimum curvature  |  Data: hackathon_good_lap',
                 color='white', fontsize=13, fontweight='bold', y=1.002)

    plt.savefig(out_path, dpi=150, bbox_inches='tight',
                facecolor=fig.get_facecolor())
    print(f'  Saved → {out_path}')


# ===========================================================================
# 9. PDF REPORT — summary table + one page per corner
# ===========================================================================

SCORE_THRESHOLDS = {
    'entry': [(0.92, '✗ Over-braking'), (1.08, '✓ OK'), (999, '✗ Under-braking')],
    'apex':  [(0.90, '✗ Slow'),         (999,  '✓ OK')],
    'exit':  [(0.90, '✗ Loss'),         (999,  '✓ OK')],
}

def _score_color(val, metric):
    if np.isnan(val):
        return '#888888', '–'
    if metric == 'entry':
        if val < 0.92:   return '#cc4444', f'{val:.0%}'
        if val > 1.08:   return '#cc8800', f'{val:.0%}'
        return '#44aa44', f'{val:.0%}'
    else:
        color = '#44aa44' if val >= 0.90 else '#cc4444'
        return color, f'{val:.0%}'


def _bool_cell(val):
    return ('#cc4444', '✗ Yes') if val else ('#44aa44', '✓ No')


def plot_pdf(corners, metrics_list, issues_list,
             df, left, right, rl_x, rl_y, rl_s, rl_vx, rl_kap,
             bag_name: str, out_path: Path):

    valid = [(c, m, iss) for c, m, iss in zip(corners, metrics_list, issues_list)
             if m is not None]

    with PdfPages(out_path) as pdf:

        # ------------------------------------------------------------------ #
        # PAGE 1 — Summary table
        # ------------------------------------------------------------------ #
        fig, ax = plt.subplots(figsize=(14, 9))
        fig.patch.set_facecolor('#0f0f1e')
        ax.set_facecolor('#0f0f1e')
        ax.axis('off')

        fig.text(0.5, 0.96,
                 'Yas Marina — Corner Performance Summary',
                 ha='center', va='top', color='white',
                 fontsize=16, fontweight='bold')
        fig.text(0.5, 0.92,
                 f'Bag: {bag_name}   |   Raceline: minimum curvature   |   '
                 f'{len(valid)} corners analysed',
                 ha='center', va='top', color='#aaaacc', fontsize=10)

        cols  = ['Corner', 'Radius', 'Ref Spd\nat apex',
                 'Entry\nspeed', 'Apex\nspeed', 'Exit\nspeed',
                 'Apex lat\ndev (m)', 'Apex\nlag (m)',
                 'Early\nthrottle', 'Issues']
        col_w = [0.13, 0.05, 0.06, 0.07, 0.07, 0.07, 0.08, 0.07, 0.07, 0.26]

        n_rows = len(valid)
        row_h  = 0.07
        table_top = 0.87

        # Header
        x = 0.01
        for c, w in zip(cols, col_w):
            ax.text(x + w / 2, table_top, c,
                    ha='center', va='bottom', color='#ccccff',
                    fontsize=8, fontweight='bold',
                    transform=fig.transFigure)
            x += w

        # Rows
        for r, (corner, m, issues) in enumerate(valid):
            y = table_top - (r + 1) * row_h
            bg_col = '#1a1a33' if r % 2 == 0 else '#141427'

            # Background rectangle
            rect = mpatches.FancyBboxPatch(
                (0.01, y - 0.01), 0.98, row_h - 0.005,
                boxstyle='square,pad=0',
                facecolor=bg_col, edgecolor='none',
                transform=fig.transFigure, zorder=0)
            fig.add_artist(rect)

            values = [
                ('#ccccff', corner['name']),
                ('#ccccff', f'{corner["radius_apex"]:.0f} m'),
                ('#ccccff', f'{corner["vx_ref_apex"]:.1f} m/s'),
                _score_color(m.get('entry_v_ratio', np.nan), 'entry'),
                _score_color(m.get('apex_v_ratio',  np.nan), 'apex'),
                _score_color(m.get('exit_v_ratio',  np.nan), 'exit'),
            ]
            ald = m.get('apex_lat_dev', np.nan)
            ald_col = '#44aa44' if ald > -0.5 else ('#cc8800' if ald > -2 else '#cc4444')
            values.append((ald_col, f'{ald:+.2f}' if not np.isnan(ald) else '–'))

            lag = m.get('apex_lag', np.nan)
            lag_col = '#44aa44' if abs(lag) < 15 else '#cc8800' if abs(lag) < 30 else '#cc4444'
            values.append((lag_col if not np.isnan(lag) else '#888888',
                           f'{lag:+.0f}' if not np.isnan(lag) else '–'))

            values.append(_bool_cell(m.get('early_throttle', False)))

            iss_str = '; '.join(i for i, _ in issues) if issues else '✓ Clean'
            iss_col = '#44aa44' if not issues else '#cc8800' if len(issues) == 1 else '#cc4444'
            values.append((iss_col, iss_str))

            x = 0.01
            for (col_color, text), w in zip(values, col_w):
                ax.text(x + w / 2, y + row_h * 0.35, text,
                        ha='center', va='center', color=col_color,
                        fontsize=7.5, transform=fig.transFigure,
                        clip_on=True)
                x += w

        # Legend
        fig.text(0.5, 0.03,
                 '■ Green = within reference  ■ Amber = 1 issue  ■ Red = significant deviation',
                 ha='center', color='#888899', fontsize=8)

        pdf.savefig(fig, bbox_inches='tight', facecolor=fig.get_facecolor())
        plt.close(fig)

        # ------------------------------------------------------------------ #
        # PAGES 2-N — One page per corner
        # ------------------------------------------------------------------ #
        for corner, m, issues in valid:
            seg = m['_seg']

            fig = plt.figure(figsize=(14, 9))
            fig.patch.set_facecolor('#0f0f1e')

            gs = gridspec.GridSpec(2, 3, figure=fig,
                                   hspace=0.45, wspace=0.38,
                                   left=0.06, right=0.97,
                                   top=0.88, bottom=0.10)

            # Header
            col = corner['corner_color']
            fig.text(0.5, 0.96,
                     f'{corner["name"]}',
                     ha='center', va='top', color=col,
                     fontsize=15, fontweight='bold')
            fig.text(0.5, 0.92,
                     f'Apex at s = {corner["s_apex"]:.0f} m   |   '
                     f'Reference speed: {corner["vx_ref_apex"]:.1f} m/s   |   '
                     f'Window: [{corner["s_lo"]:.0f}, {corner["s_hi"]:.0f}] m',
                     ha='center', va='top', color='#aaaacc', fontsize=9)

            # Top-left: map
            ax_map = fig.add_subplot(gs[0, 0])
            ax_map.set_facecolor('#111122')
            _draw_mini_map(ax_map, left, right, rl_x, rl_y, seg, corner, rl_s, rl_kap)
            ax_map.set_title('Track map', color='white', fontsize=9)

            # Top-centre: speed
            ax_spd = fig.add_subplot(gs[0, 1])
            ax_spd.set_facecolor('#111122')
            for sp in ax_spd.spines.values(): sp.set_edgecolor('#444466')
            ax_spd.tick_params(colors='#aaaacc', labelsize=8)
            ax_spd.set_title('Speed trace', color='white', fontsize=9)
            _draw_speed(ax_spd, seg, corner, rl_s, rl_vx)

            # Top-right: controls
            ax_ctl = fig.add_subplot(gs[0, 2])
            ax_ctl.set_facecolor('#111122')
            for sp in ax_ctl.spines.values(): sp.set_edgecolor('#444466')
            ax_ctl.tick_params(colors='#aaaacc', labelsize=8)
            ax_ctl.set_title('Throttle / Brake', color='white', fontsize=9)
            _draw_controls(ax_ctl, seg, corner)

            # Bottom-left: lateral deviation
            ax_lat = fig.add_subplot(gs[1, 0:2])
            ax_lat.set_facecolor('#111122')
            for sp in ax_lat.spines.values(): sp.set_edgecolor('#444466')
            ax_lat.tick_params(colors='#aaaacc', labelsize=8)
            ax_lat.set_title('Lateral deviation from optimal raceline', color='white', fontsize=9)
            _draw_lat_dev(ax_lat, seg, corner, m)

            # Bottom-right: analysis text
            ax_txt = fig.add_subplot(gs[1, 2])
            ax_txt.set_facecolor('#111122')
            ax_txt.axis('off')
            ax_txt.set_title('Corner analysis', color='white', fontsize=9)

            lines = []
            evr = m.get('entry_v_ratio', np.nan)
            avr = m.get('apex_v_ratio',  np.nan)
            xvr = m.get('exit_v_ratio',  np.nan)
            ald = m.get('apex_lat_dev',  np.nan)
            lag = m.get('apex_lag',      np.nan)
            thr = m.get('throttle_offset', np.nan)
            brs = m.get('brake_start_offset', np.nan)

            lines.append(f'Entry speed:  {evr:.1%}' if not np.isnan(evr) else 'Entry speed: –')
            lines.append(f'Apex speed:   {avr:.1%}' if not np.isnan(avr) else 'Apex speed: –')
            lines.append(f'Exit speed:   {xvr:.1%}' if not np.isnan(xvr) else 'Exit speed: –')
            lines.append('')
            lines.append(f'Apex lat dev: {ald:+.2f} m' if not np.isnan(ald) else 'Apex lat dev: –')
            lines.append(f'Apex lag:     {lag:+.1f} m' if not np.isnan(lag) else 'Apex lag: –')
            lines.append(f'Brake start:  {brs:+.0f} m from apex' if not np.isnan(brs) else 'Brake start: –')
            lines.append(f'Throttle app: {thr:+.0f} m from apex' if not np.isnan(thr) else 'Throttle app: –')
            lines.append('')

            if issues:
                lines.append('⚠ Issues detected:')
                for label, detail in issues:
                    lines.append(f'  • {label}')
                    lines.append(f'    {detail}')
            else:
                lines.append('✓ No issues detected')

            for i, line in enumerate(lines):
                col_txt = '#ff9999' if line.startswith('  •') else \
                          '#ffcc88' if line.startswith('    ') else \
                          '#ccccee'
                ax_txt.text(0.05, 0.97 - i * 0.065, line,
                            transform=ax_txt.transAxes,
                            va='top', ha='left',
                            fontsize=8, color=col_txt, family='monospace')

            pdf.savefig(fig, bbox_inches='tight', facecolor=fig.get_facecolor())
            plt.close(fig)

    print(f'  Saved → {out_path}')


# ===========================================================================
# 10. MAIN
# ===========================================================================

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--bag', default=str(WS_ROOT / 'hackathon_wheel_to_wheel.mcap'))
    args = parser.parse_args()

    bag_path = Path(args.bag)
    if not bag_path.exists():
        sys.exit(f'ERROR: {bag_path} not found')

    print(f'\n[1/6] Reading bag: {bag_path.name}')
    df = read_bag(bag_path)

    print('\n[2/6] Loading raceline + boundaries')
    rl_x, rl_y, rl_s, rl_kap, rl_vx, rl_ax, tree = load_raceline(RACELINE_CSV)
    left, right = load_boundaries(BOUNDARIES_JSON)

    print('\n[3/6] Projecting driven path onto raceline (sub-segment)')
    s_proj, n_proj = project_onto_raceline(df.x.values, df.y.values,
                                            rl_x, rl_y, rl_s, tree)
    df['s_proj'] = s_proj
    df['n_proj'] = n_proj
    print(f'  s_proj: [{s_proj.min():.1f}, {s_proj.max():.1f}] m')
    print(f'  n_proj: [{n_proj.min():.2f}, {n_proj.max():.2f}] m  '
          f'mean_abs={np.abs(n_proj).mean():.2f} m')

    print('\n[4/6] Detecting corners')
    corners = detect_corners(rl_s, rl_kap, rl_vx,
                             kappa_thresh=0.015, merge_gap_m=100.0)

    print('\n[5/6] Computing metrics and classifying')
    metrics_list = []
    issues_list  = []
    for corner in corners:
        m = compute_metrics(corner, df, rl_s, rl_vx)
        metrics_list.append(m)
        if m is not None:
            iss = classify(corner, m)
            issues_list.append(iss)
            flag = '⚠' if iss else '✓'
            print(f'  {flag} {corner["name"]:35s}  '
                  f'entry={m.get("entry_v_ratio",np.nan):.0%}  '
                  f'apex={m.get("apex_v_ratio",np.nan):.0%}  '
                  f'exit={m.get("exit_v_ratio",np.nan):.0%}  '
                  f'lat_dev={m.get("apex_lat_dev",np.nan):+.2f}m  '
                  + (f'issues: {len(iss)}' if iss else 'clean'))
        else:
            issues_list.append([])
            print(f'  — {corner["name"]:35s}  skipped (too few points)')

    print('\n[6/6] Rendering outputs')
    stem = bag_path.stem
    grid_path   = bag_path.parent / f'{stem}_corner_grid.png'
    report_path = bag_path.parent / f'{stem}_corner_report.pdf'

    plot_grid(corners, metrics_list, issues_list,
              df, left, right, rl_x, rl_y, rl_s, rl_vx, rl_kap,
              grid_path)

    plot_pdf(corners, metrics_list, issues_list,
             df, left, right, rl_x, rl_y, rl_s, rl_vx, rl_kap,
             bag_path.name, report_path)

    print('\nDone.')


if __name__ == '__main__':
    main()
