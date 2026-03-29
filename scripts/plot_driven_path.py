#!/usr/bin/env python3
"""
Step 1: Offline visual overlay of driven path vs optimal raceline vs track boundaries.

Usage (with workspace sourced):
    source /home/hamza/hackathon_ws/install/setup.bash
    python3 scripts/plot_driven_path.py [--bag hackathon_wheel_to_wheel.mcap]

Saves path_overlay.png next to the bag file.
"""

import argparse
import json
import sys
from pathlib import Path

import numpy as np
import pandas as pd
import matplotlib
matplotlib.use('Agg')          # headless-safe; change to 'TkAgg' if you want a window
import matplotlib.pyplot as plt
import matplotlib.cm as cm

import rosbag2_py
from rclpy.serialization import deserialize_message
from rosidl_runtime_py.utilities import get_message

# ---------------------------------------------------------------------------
# Paths (resolved relative to workspace root)
# ---------------------------------------------------------------------------
WS_ROOT = Path(__file__).resolve().parent.parent
RACELINE_CSV  = WS_ROOT / 'raceline_hybrid.csv'
BOUNDARIES_JSON = WS_ROOT / 'yas_marina_bnd.json'
STATE_TOPIC   = '/constructor0/state_estimation'


# ---------------------------------------------------------------------------
# Bag reader
# ---------------------------------------------------------------------------

def read_bag_positions(bag_path: str, topic: str):
    """
    Return arrays of (x_m, y_m, v_mps, timestamp_s) from all StateEstimation
    messages on *topic* in the given MCAP bag.
    """
    storage_opts = rosbag2_py.StorageOptions(uri=str(bag_path), storage_id='mcap')
    conv_opts = rosbag2_py.ConverterOptions(
        input_serialization_format='cdr',
        output_serialization_format='cdr',
    )
    reader = rosbag2_py.SequentialReader()
    reader.open(storage_opts, conv_opts)

    # Build topic→type map
    type_map = {t.name: t.type for t in reader.get_all_topics_and_types()}
    if topic not in type_map:
        sys.exit(f'ERROR: topic "{topic}" not found in bag.\nAvailable: {list(type_map.keys())}')

    msg_type = get_message(type_map[topic])

    reader.set_filter(rosbag2_py.StorageFilter(topics=[topic]))

    xs, ys, vs, ts = [], [], [], []
    while reader.has_next():
        _, data, t_ns = reader.read_next()
        msg = deserialize_message(data, msg_type)
        xs.append(msg.x_m)
        ys.append(msg.y_m)
        vs.append(msg.v_mps)
        ts.append(t_ns * 1e-9)

    return np.array(xs), np.array(ys), np.array(vs), np.array(ts)


# ---------------------------------------------------------------------------
# Reference data loaders
# ---------------------------------------------------------------------------

def load_raceline(csv_path: Path):
    """Return (x, y, vx) arrays from the hybrid raceline CSV."""
    df = pd.read_csv(csv_path)
    return df['x'].to_numpy(), df['y'].to_numpy(), df['vx'].to_numpy()


def load_boundaries(json_path: Path):
    """Return (left_pts, right_pts) as (N,2) arrays."""
    with open(json_path) as f:
        data = json.load(f)
    left  = np.array(data['boundaries']['left_border'])
    right = np.array(data['boundaries']['right_border'])
    return left, right


# ---------------------------------------------------------------------------
# Plotting
# ---------------------------------------------------------------------------

def compute_lateral_deviation(xs, ys, rx, ry):
    """
    For each driven point, find the nearest raceline point and return
    the signed lateral distance (positive = left of raceline direction).
    """
    driven = np.column_stack([xs, ys])          # (N, 2)
    raceline = np.column_stack([rx, ry])         # (M, 2)

    # Nearest-neighbour lookup (brute force — fine for ~8 k pts)
    diff = driven[:, None, :] - raceline[None, :, :]   # (N, M, 2)
    dists = np.linalg.norm(diff, axis=-1)              # (N, M)
    idx_nearest = np.argmin(dists, axis=1)             # (N,)

    # Signed deviation using cross product with local raceline tangent
    i0 = idx_nearest
    i1 = np.clip(i0 + 1, 0, len(rx) - 1)
    tangent = raceline[i1] - raceline[i0]              # (N, 2)
    tangent /= np.linalg.norm(tangent, axis=1, keepdims=True) + 1e-9

    vec_to_car = driven - raceline[i0]                 # (N, 2)
    # cross product z-component: tangent_x * vec_y - tangent_y * vec_x
    signed_dev = tangent[:, 0] * vec_to_car[:, 1] - tangent[:, 1] * vec_to_car[:, 0]

    return dists[np.arange(len(xs)), idx_nearest], signed_dev


def plot_overlay(xs, ys, vs_car,
                 rx, ry, rv,
                 left, right,
                 out_path: Path):

    fig, axes = plt.subplots(
        2, 1,
        figsize=(14, 16),
        gridspec_kw={'height_ratios': [3, 1]},
    )

    # ---- Top panel: 2-D map overlay ----------------------------------------
    ax = axes[0]

    # Track boundaries
    ax.plot(left[:, 0],  left[:, 1],  color='#555555', lw=1.5, label='Left boundary')
    ax.plot(right[:, 0], right[:, 1], color='#888888', lw=1.5, ls='--', label='Right boundary')

    # Optimal raceline coloured by reference speed
    sc_ref = ax.scatter(rx, ry, c=rv, cmap='plasma', s=6, zorder=3,
                        label='Optimal raceline (colour = ref speed)')
    cbar = plt.colorbar(sc_ref, ax=ax, fraction=0.025, pad=0.01)
    cbar.set_label('Reference vx (m/s)', fontsize=10)

    # Driven path coloured by actual speed
    sc_car = ax.scatter(xs, ys, c=vs_car, cmap='cool', s=4, zorder=4,
                        alpha=0.85, label='Driven path (colour = actual speed)')
    cbar2 = plt.colorbar(sc_car, ax=ax, fraction=0.025, pad=0.04)
    cbar2.set_label('Actual v (m/s)', fontsize=10)

    # Start / end markers
    ax.plot(xs[0],  ys[0],  'go', ms=10, zorder=6, label='Start')
    ax.plot(xs[-1], ys[-1], 'rs', ms=10, zorder=6, label='End')

    ax.set_aspect('equal')
    ax.set_title('Driven Path vs Optimal Raceline — Yas Marina Circuit', fontsize=14)
    ax.set_xlabel('X (m)')
    ax.set_ylabel('Y (m)')
    ax.legend(loc='upper right', fontsize=9)
    ax.grid(True, alpha=0.25)

    # ---- Bottom panel: lateral deviation vs progress -----------------------
    dist_abs, signed_dev = compute_lateral_deviation(xs, ys, rx, ry)

    # Approximate progress: cumulative arc length of driven path
    d_xy = np.sqrt(np.diff(xs)**2 + np.diff(ys)**2)
    progress = np.concatenate([[0.0], np.cumsum(d_xy)])

    ax2 = axes[1]
    ax2.axhline(0, color='k', lw=0.8, ls='--')
    ax2.fill_between(progress, signed_dev, alpha=0.35, color='steelblue')
    ax2.plot(progress, signed_dev, color='steelblue', lw=1.0)
    ax2.set_xlabel('Approximate progress along driven path (m)')
    ax2.set_ylabel('Lateral deviation from raceline (m)\n(+ = left of raceline)')
    ax2.set_title(f'Lateral Deviation   |  mean abs = {dist_abs.mean():.2f} m'
                  f'   |  max = {dist_abs.max():.2f} m')
    ax2.grid(True, alpha=0.25)

    plt.tight_layout()
    plt.savefig(out_path, dpi=150)
    print(f'Saved → {out_path}')


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main():
    parser = argparse.ArgumentParser(description='Plot driven path vs optimal raceline.')
    parser.add_argument(
        '--bag',
        default=str(WS_ROOT / 'hackathon_wheel_to_wheel.mcap'),
        help='Path to the MCAP bag file',
    )
    parser.add_argument(
        '--show',
        action='store_true',
        help='Open an interactive matplotlib window (requires a display)',
    )
    args = parser.parse_args()

    bag_path = Path(args.bag)
    if not bag_path.exists():
        sys.exit(f'ERROR: bag file not found: {bag_path}')

    # ---------- read bag --------
    print(f'Reading {bag_path.name} …')
    xs, ys, vs, ts = read_bag_positions(bag_path, STATE_TOPIC)
    duration = ts[-1] - ts[0] if len(ts) > 1 else 0.0
    print(f'  {len(xs):,} messages  |  {duration:.1f} s  |  '
          f'speed range {vs.min():.1f}–{vs.max():.1f} m/s')

    # ---------- reference data --------
    print(f'Loading raceline  …')
    rx, ry, rv = load_raceline(RACELINE_CSV)
    print(f'  {len(rx):,} raceline points')

    print(f'Loading boundaries …')
    left, right = load_boundaries(BOUNDARIES_JSON)
    print(f'  left={len(left):,} pts   right={len(right):,} pts')

    # ---------- plot --------
    out_path = bag_path.parent / (bag_path.stem + '_overlay.png')
    plot_overlay(xs, ys, vs, rx, ry, rv, left, right, out_path)

    if args.show:
        matplotlib.use('TkAgg')
        plt.show()


if __name__ == '__main__':
    main()
