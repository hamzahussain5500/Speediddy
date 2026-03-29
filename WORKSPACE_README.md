# Racing Analyzer — ROS 2 Workspace

End-to-end telemetry analysis pipeline for the Constructor GenAI Hackathon 2026 autonomous racing dataset recorded at **Yas Marina Circuit**.

The workspace contains three complementary tools:

| Tool | When to use |
|------|-------------|
| `scripts/plot_driven_path.py` | **Offline step 1** — read a bag, produce a 2-panel PNG overlay (driven path vs raceline vs boundaries) |
| `src/racing_analyzer` | **Live step 2** — subscribe to state estimation during bag playback, stream lateral deviation and speed error into RViz at 100 Hz |
| `scripts/segment_analysis.py` | **Offline step 3** — corner-by-corner coaching analysis with PNG grid and PDF debrief report |

---

## Table of Contents

1. [Repository Layout](#1-repository-layout)
2. [Data Files](#2-data-files)
3. [Theory: Coordinate Systems and Track-Relative State](#3-theory-coordinate-systems-and-track-relative-state)
4. [Theory: Lateral Deviation and Speed Error](#4-theory-lateral-deviation-and-speed-error)
5. [Offline Plotting Script — Step 1](#5-offline-plotting-script--step-1)
6. [ROS 2 Package — racing\_analyzer — Step 2](#6-ros-2-package--racing_analyzer--step-2)
7. [Segment Analysis — Step 3](#7-segment-analysis--step-3)
8. [Quick-Start: Running the Full Pipeline](#8-quick-start-running-the-full-pipeline)
9. [RViz Setup](#9-rviz-setup)
10. [FAQ](#10-faq)

---

## 1. Repository Layout

```
hackathon_ws/
├── hackathon_wheel_to_wheel.mcap            # Conservative single lap (~81 s)
├── hackathon_fast_laps.mcap           # Two fastest laps (~74 s)
├── hackathon_wheel_to_wheel.mcap      # Multi-car race scenario (~226 s)
├── raceline_hybrid.csv     # Geometric optimal raceline
├── raceline_hybrid.csv                # Blended (speed-profile + curvature) raceline
├── yas_marina_bnd.json                # Left/right track boundary polygons
│
├── scripts/
│   └── plot_driven_path.py            # Offline bag → PNG visualizer
│
└── src/
    ├── sd_msgs/                       # Custom ROS 2 message definitions
    │   ├── sd_localization_msgs/      # StateEstimation
    │   ├── sd_map_msgs/               # SnMapState, SnLaneState, SnState
    │   ├── sd_can_msgs/               # CAN bus message types
    │   └── vectornav_msgs/            # GPS / IMU raw messages
    └── racing_analyzer/               # Analysis and visualization package
        ├── package.xml
        ├── setup.py
        ├── launch/
        │   └── visualize.launch.py
        └── racing_analyzer/
            └── path_publisher_node.py
```

---

## 2. Data Files

### MCAP Bags

| File | Duration | Description |
|------|----------|-------------|
| `hackathon_wheel_to_wheel.mcap` | 81.3 s | Single clean, conservative lap — best for baseline analysis |
| `hackathon_fast_laps.mcap` | 74.3 s | Two fastest laps — best for performance comparison |
| `hackathon_wheel_to_wheel.mcap` | 226.0 s | Multi-car race — includes overtaking and defensive driving |

All bags share the same topic set. The primary topic used by this pipeline is:

```
/constructor0/state_estimation   [sd_localization_msgs/msg/StateEstimation]   ~100 Hz
```

### Raceline CSVs

Both raceline files have the same schema:

| Column | Unit | Description |
|--------|------|-------------|
| `s` | m | Arc-length progress along the path from the start point |
| `x` | m | Global X position (local Cartesian frame, not GPS) |
| `y` | m | Global Y position |
| `psi` | rad | Heading angle (yaw of the tangent direction) |
| `kappa` | 1/m | Path curvature — larger magnitude = tighter corner |
| `vx` | m/s | Reference longitudinal speed at that point |
| `ax` | m/s² | Reference longitudinal acceleration at that point |

**`raceline_hybrid.csv`** — purely geometric: minimises the integral of curvature squared along the path. Produces the smoothest, largest-radius path through each corner regardless of car dynamics.

**`raceline_hybrid.csv`** — blends the minimum-curvature geometry with a physically-derived speed profile that accounts for grip limits, tyre slip, and brake/throttle transitions. The result is a raceline that is both geometrically smooth and kinematically realistic.

### Track Boundaries — `yas_marina_bnd.json`

```json
{
  "map_name": "yas_marina",
  "boundaries": {
    "left_border":  [[x0, y0], [x1, y1], ...],   // ~11 827 points
    "right_border": [[x0, y0], [x1, y1], ...]    // ~12 229 points
  }
}
```

Left and right are defined **relative to the direction of travel**. At a hairpin or chicane the "right" boundary can be the geometrically inner wall, which is why it may appear on the left when viewed from above in a fixed-frame viewer.

---

## 3. Theory: Coordinate Systems and Track-Relative State

### Global Frame

All position data from `StateEstimation` (`x_m`, `y_m`) is in a **local Cartesian map frame** — not WGS-84 latitude/longitude. The origin is fixed to the start of the map, and the axes are aligned with a projection that keeps distances in metres accurate over the circuit extent (~1.5 km × 1 km).

The same coordinate system is used for:
- The raceline CSVs (`x`, `y` columns)
- The boundary JSON (`left_border`, `right_border` arrays)

This means all three datasets can be overlaid directly in 2D without any projection transform.

### Track-Relative (Frenet / Curvilinear) Frame

The message also provides a track-relative state via `sn_map_state.track_sn_state.sn_state`:

| Field | Type | Meaning |
|-------|------|---------|
| `idx` | uint32 | Index into the reference path point array |
| `ds` | double | Fractional arc-length offset past `idx` (metres) |
| `n` | double | Lateral offset from the reference line (metres, + = left) |
| `epsi` | double | Heading error relative to reference tangent (radians) |

The total arc-length progress along the track is:

```
s_total = s[idx] + ds
```

where `s[idx]` is the cumulative arc length stored in the raceline CSV at row `idx`.

This Frenet decomposition is the same framework used in **Model Predictive Contouring Control (MPCC)**, where the optimiser separates the error into:
- **Contouring error** (`n`) — lateral displacement from the path
- **Lag error** (`epsi` and progress) — how far ahead or behind the car is relative to a "virtual target" on the path

---

## 4. Theory: Lateral Deviation and Speed Error

### Signed Lateral Deviation

For every driven position `(x, y)` the pipeline projects it onto the nearest raceline segment and computes a signed perpendicular distance:

```
tangent = (rl[i+1] - rl[i]) / ||rl[i+1] - rl[i]||   # unit tangent at nearest point
vec     = (x - rl_x[i], y - rl_y[i])                  # vector from raceline to car

lateral_deviation = tangent_x * vec_y - tangent_y * vec_x   # 2D cross product
```

The cross product gives the **z-component** of the 3D cross product, which is:

- **Positive** → car is to the **left** of the raceline (in the direction of travel)
- **Negative** → car is to the **right**
- **Zero** → car is exactly on the line

This is a first-order (nearest-point) approximation. For curved sections the true perpendicular distance diverges slightly from the cross-product estimate, but the error is negligible at typical deviations (< 3 m) on a circuit with radius > 30 m.

### Speed Error

```
speed_error = v_actual - v_reference_at_nearest_point
```

where `v_reference_at_nearest_point` is `vx[idx]` from the raceline CSV (interpolated to the nearest index via KDTree).

- **Positive** → car is faster than the reference (e.g. under-braking)
- **Negative** → car is slower (e.g. late braking, wheelspin, early lift)

### KDTree Nearest-Point Search

The pipeline builds a `scipy.spatial.KDTree` over all raceline points once at startup. Each query is O(log N) where N ≈ 1 489 points, fast enough for 100 Hz callbacks with sub-millisecond latency.

---

## 5. Offline Plotting Script

**File:** `scripts/plot_driven_path.py`

### What it does

1. Opens the MCAP bag with `rosbag2_py.SequentialReader`
2. Deserialises every `StateEstimation` message using `rclpy.serialization.deserialize_message`
3. Extracts `(x_m, y_m, v_mps)` and the ROS timestamp
4. Loads the raceline CSV and boundary JSON
5. Produces a two-panel PNG figure:
   - **Top:** 2D circuit map — boundaries (grey), raceline coloured by reference speed (`plasma` colormap), driven path coloured by actual speed (`cool` colormap)
   - **Bottom:** signed lateral deviation vs approximate arc-length progress

### Usage

```bash
# Source the workspace first (required for custom message types)
source /home/hamza/hackathon_ws/install/setup.bash

# Default — reads hackathon_wheel_to_wheel.mcap
python3 scripts/plot_driven_path.py

# Specify a different bag
python3 scripts/plot_driven_path.py --bag hackathon_fast_laps.mcap
python3 scripts/plot_driven_path.py --bag hackathon_wheel_to_wheel.mcap

# Open an interactive matplotlib window (requires a display / X11 forwarding)
python3 scripts/plot_driven_path.py --show
```

Output is saved alongside the bag file as `<bag_stem>_overlay.png`.

### Key Functions

| Function | Description |
|----------|-------------|
| `read_bag_positions(bag, topic)` | Sequential MCAP reader; returns `(xs, ys, vs, ts)` numpy arrays |
| `load_raceline(csv)` | Returns `(x, y, vx)` arrays from raceline CSV |
| `load_boundaries(json)` | Returns `(left, right)` as `(N,2)` arrays |
| `compute_lateral_deviation(xs, ys, rx, ry)` | Brute-force nearest-neighbour + cross-product signed deviation |
| `plot_overlay(...)` | Renders and saves the dual-panel matplotlib figure |

### Dependencies

| Library | Purpose |
|---------|---------|
| `rosbag2_py` | Read MCAP bags |
| `rclpy` | Message deserialisation |
| `rosidl_runtime_py` | Dynamic message type resolution |
| `numpy` | Array maths |
| `pandas` | CSV loading |
| `matplotlib` | Plotting |
| `scipy` | (imported indirectly via node) |

All are available in a standard ROS 2 Humble/Iron installation.

---

## 6. ROS 2 Package — racing\_analyzer

**Location:** `src/racing_analyzer/`

### Architecture

```
rosbag play ──► /constructor0/state_estimation
                        │
                        ▼
               PathPublisher node
                        │
          ┌─────────────┼─────────────┐
          ▼             ▼             ▼
  /racing/driven_path  /racing/lateral_deviation  /racing/speed_error
  (nav_msgs/Path)      (std_msgs/Float64)          (std_msgs/Float64)
          │
          ▼
    /racing/raceline_markers   (latched MarkerArray — boundaries + raceline)
```

### Published Topics

| Topic | Type | Rate | Description |
|-------|------|------|-------------|
| `/racing/driven_path` | `nav_msgs/Path` | 100 Hz | Accumulated driven path as a list of `PoseStamped` with full yaw |
| `/racing/raceline_markers` | `visualization_msgs/MarkerArray` | Once (latched) | LINE_STRIP markers: orange = raceline, green = left boundary, red = right boundary |
| `/racing/lateral_deviation` | `std_msgs/Float64` | 100 Hz | Signed lateral error from raceline in metres |
| `/racing/speed_error` | `std_msgs/Float64` | 100 Hz | `v_actual − v_reference` in m/s |

### ROS 2 Parameters

Override any of these at launch with `--ros-args -p key:=value`:

| Parameter | Default | Description |
|-----------|---------|-------------|
| `raceline_csv` | `<ws>/raceline_hybrid.csv` | Path to reference raceline CSV |
| `boundaries_json` | `<ws>/yas_marina_bnd.json` | Path to boundary JSON |
| `map_frame` | `map` | TF frame ID used in all published messages |
| `state_topic` | `/constructor0/state_estimation` | Input topic |

Example — switch to the hybrid raceline:
```bash
ros2 run racing_analyzer path_publisher \
  --ros-args -p raceline_csv:=/home/hamza/hackathon_ws/raceline_hybrid.csv
```

### Node Internals: `PathPublisher`

**`__init__`**
1. Declares and reads ROS parameters
2. Calls `_load_raceline()` — reads CSV, builds `KDTree`, precomputes unit tangents
3. Calls `_load_boundaries()` — parses JSON into left/right numpy arrays
4. Creates publishers with appropriate QoS (latched for static markers)
5. Creates subscriber to `StateEstimation`
6. Schedules a one-shot 0.5 s timer to publish static markers after RViz has connected

**`_state_cb(msg)`** — called at ~100 Hz
1. Extracts `x_m`, `y_m`, `yaw_rad`, `v_mps`
2. Appends a `PoseStamped` to the driven `NavPath` (yaw encoded as quaternion)
3. Queries `KDTree` for nearest raceline index
4. Computes signed lateral deviation (cross product)
5. Computes speed error (`v - v_ref[idx]`)
6. Publishes all three outputs

**`_publish_static_markers_once()`**
Publishes three `LINE_STRIP` markers with `TRANSIENT_LOCAL` QoS (latched) so late-subscribing RViz sessions still receive them. The timer cancels itself after firing once.

### QoS Notes

The `raceline_markers` publisher uses `TRANSIENT_LOCAL` / `RELIABLE` QoS, which means:
- The last-published message is stored and replayed to any new subscriber
- RViz will receive the markers even if it starts after the node

The driven path and metric topics use the default best-effort QoS (`depth=10`) — suitable for real-time streaming where dropping occasional old messages is acceptable.

### Building

```bash
cd /home/hamza/hackathon_ws
colcon build --packages-select racing_analyzer --symlink-install
source install/setup.bash
```

`--symlink-install` means edits to `path_publisher_node.py` take effect immediately without rebuilding.

---

## 7. Segment Analysis — Step 3

**File:** `scripts/segment_analysis.py`

### What it does

1. Reads the bag and extracts `(x, y, v, gas, brake)` for every `StateEstimation` message
2. Projects each driven point onto the reference raceline using **proper sub-segment arc-length projection** (see theory below)
3. Detects corners by curvature threshold (`|κ| > 0.015`, R < 67 m), merges corners within 100 m of each other
4. Computes per-corner coaching metrics across three zones relative to the geometric apex
5. Classifies each metric into coaching flags (late apex, early throttle, throttle loss, etc.)
6. Produces a **PNG quick-scan grid** and a **multi-page PDF debrief report**

### Corner zones

```
|←── entry zone ──→|←── apex zone ──→|←── exit zone ──→|
  [apex−80, apex−20]  [apex±15]        [apex+15, apex+70]
```

### Metrics computed per corner

| Metric | Definition | Coaching meaning |
|--------|-----------|-----------------|
| `entry_v_ratio` | mean(v / v_ref) in entry zone | < 0.90 = over-braking; > 1.07 = under-braking |
| `apex_v_ratio` | mean(v / v_ref) in apex zone | < 0.90 = slow apex, grip lost |
| `exit_v_ratio` | mean(v / v_ref) in exit zone | < 0.90 = throttle loss on exit |
| `apex_lat_dev` | mean(sign(κ) × n_proj) at apex | + = inside (good); − = running wide |
| `apex_lag` | s_driven_apex − s_geometric_apex | + = late apex; − = early apex |
| `early_throttle` | gas > 0.15 before apex | Risk of understeer on exit |
| `throttle_offset` | first s where gas > 0.15 after apex | Long delay = throttle hesitation |
| `brake_start_offset` | first s where brake > 80 kPa, relative to apex | Early = conservative; late = under-braking |

### Sub-segment arc-length projection — why it matters

The naive approach (find the nearest raceline *vertex*) introduces a large error when the car is between two sparsely-spaced raceline points. The sub-segment method instead projects each car position onto the nearest raceline *segment* (line between two consecutive vertices):

```
For each driven point P:
  1. KDTree → nearest vertex index idx
  2. Check both adjacent segments: [idx-1, idx] and [idx, idx+1]
  3. Project P onto each segment: t = clip(dot(P-A, B-A) / |B-A|², 0, 1)
  4. foot = A + t*(B-A)
  5. s_proj = s[idx0] + t * |B-A|
  6. n_proj = tangent × (P - foot)   [2D cross product, signed]
  7. Keep whichever segment gives the smaller perpendicular distance
```

This removes the "along-track" distance artifact and gives the true perpendicular (lateral) displacement.

### Understanding anomalous readings

When the car's autonomous planner follows a **significantly different line** than the reference CSV raceline, some metrics will appear anomalous:

**Example — C2 (R=12m, apex speed 204%):**
The minimum curvature reference line requires slowing to 12.3 m/s at this hairpin. The car barely decelerates below 25 m/s, meaning it is taking a wider-radius arc through the complex. The s_proj correctly locates the car near the geometric apex, but the car's physical speed at that arc-length position is genuinely higher — it does not need to slow as much for its chosen line. This is **not a bug**: it reveals that the car's internal planner chose a different racing strategy for this complex.

**Example — C3/C4 apex lag −73/−76 m:**
The car's closest approach to the inside wall occurs 73–76 m before the reference geometric apex. This means the car's own apex in its chosen racing line is much earlier than where the CSV raceline reaches peak curvature. Again, **real data**: the car negotiates the C2–C3 chicane and C4 sweeper as single combined manoeuvres on a different arc than the reference.

**What to do:** Run the analysis with `raceline_hybrid.csv` (which blends curvature and speed profile from the actual car dynamics) for better correspondence. The minimum curvature reference is a geometric ideal; discrepancies reveal strategic differences in line choice, not measurement errors.

### Usage

```bash
source /home/hamza/hackathon_ws/install/setup.bash

# Default — good lap, minimum curvature reference
python3 scripts/segment_analysis.py

# Fast laps
python3 scripts/segment_analysis.py --bag hackathon_fast_laps.mcap

# Use hybrid raceline (edit RACELINE_CSV at the top of the script)
```

### Output files

| File | Description |
|------|-------------|
| `<bag>_corner_grid.png` | Dark-theme 4-row × N-column grid: map, speed, throttle/brake, lateral deviation — one column per corner |
| `<bag>_corner_report.pdf` | Page 1: colour-coded summary table. Pages 2–N: full per-corner debrief with analysis text |

### Classification thresholds

| Flag | Trigger condition |
|------|------------------|
| Over-braking on entry | `entry_v_ratio < 0.90` |
| Under-braking / hot entry | `entry_v_ratio > 1.07` |
| Slow apex | `apex_v_ratio < 0.90` |
| Running wide at apex | `sign(κ) × n_proj < −2.0 m` |
| Slightly wide at apex | `sign(κ) × n_proj < −0.8 m` |
| Late apex | `apex_lag > +20 m` |
| Early apex | `apex_lag < −20 m` |
| Early throttle | gas > 0.15 before apex |
| Delayed throttle on exit | `throttle_offset > 30 m` |
| Throttle loss on exit | `exit_v_ratio < 0.90` |

---

## 8. Quick-Start: Running the Full Pipeline

**Step 0 — source the workspace in every terminal:**
```bash
source /home/hamza/hackathon_ws/install/setup.bash
```

**Terminal 1 — play the bag:**
```bash
cd /home/hamza/hackathon_ws
ros2 bag play hackathon_wheel_to_wheel.mcap --clock
```

`--clock` publishes `/clock` so all nodes use bag time rather than wall time.

**Terminal 2 — run the analysis node:**
```bash
ros2 run racing_analyzer path_publisher
# or
ros2 launch racing_analyzer visualize.launch.py
```

**Terminal 3 — monitor live metrics:**
```bash
# Lateral deviation (m)
ros2 topic echo /racing/lateral_deviation

# Speed error (m/s)  — positive means faster than reference
ros2 topic echo /racing/speed_error

# Topic statistics
ros2 topic hz /racing/driven_path
ros2 topic hz /constructor0/state_estimation
```

**Terminal 4 — offline reports (no ROS needed, just the sourced workspace):**
```bash
# Step 1: path overlay PNG
python3 scripts/plot_driven_path.py --bag hackathon_fast_laps.mcap

# Step 3: corner segment analysis (PNG grid + PDF debrief)
python3 scripts/segment_analysis.py --bag hackathon_wheel_to_wheel.mcap
```

---

## 9. RViz Setup

After launching the node, open RViz2 and configure as follows:

### Global Options
- **Fixed Frame:** `map`

### Displays to add

| Display type | Topic / Setting | Recommended style |
|---|---|---|
| `MarkerArray` | `/racing/raceline_markers` | Default — orange raceline, green/red boundaries appear automatically |
| `Path` | `/racing/driven_path` | Color: `(0, 220, 255)` cyan; Line Width: 3 |
| *(optional)* `TF` | — | Visualise vehicle pose if TF is published |

### Why the boundaries look inverted at some corners

Left and right boundaries are defined **relative to the direction of travel**, not screen orientation. At hairpins or chicanes where the car reverses its heading relative to the world frame, the "left" boundary appears on the right side of the screen. This is expected and correct — both boundaries are faithfully reproduced from the `yas_marina_bnd.json` file.

### Why the raceline appears to touch the inner boundary at hairpins

The minimum-curvature raceline minimises turning radius by definition, so it naturally runs as close to the apex (inner wall) as its track-limit constraints allow. The visual "overlap" in RViz is a rendering artifact of marker line thickness (0.4 m for the raceline, 0.25 m for the boundaries) — the centrelines do not cross.

---

## 10. FAQ

**Q: Why do I need to `source install/setup.bash` every time?**

The `StateEstimation` message type is a custom ROS 2 message defined in `sd_localization_msgs`. Python can only import it if the package's installation directory is on `PYTHONPATH`, which the `setup.bash` script adds. Without sourcing, you will get `ModuleNotFoundError: No module named 'sd_localization_msgs'`.

---

**Q: The offline script prints `ERROR: topic not found in bag`. What happened?**

Check the exact topic name with:
```bash
ros2 bag info hackathon_wheel_to_wheel.mcap
```
The pipeline expects `/constructor0/state_estimation`. If you are using a different bag with a different vehicle namespace (e.g. `/constructor1/`), pass the correct topic name via the `state_topic` parameter or edit `STATE_TOPIC` at the top of the script.

---

**Q: What is the coordinate frame of `x_m` / `y_m` in `StateEstimation`?**

It is a **local Euclidean map frame**, not GPS. The origin and axes are fixed when the map is loaded by the localisation stack. Coordinates are in metres and range roughly:
- X: −374 m to +293 m
- Y: −167 m to +960 m

These match exactly with the raceline CSVs and boundary JSON, so no transform is needed to overlay them.

---

**Q: What does a negative `lateral_deviation` mean?**

The sign convention follows the 2D cross product of the raceline tangent and the vector from the raceline to the car:

```
lateral = tangent × vec_to_car   (z-component)
```

- **Positive** → car is to the **left** of the reference line (in the direction of travel)
- **Negative** → car is to the **right**

At Yas Marina, a negative deviation on corner entry usually means the car is cutting toward the inside (apex) early; a positive deviation on exit means running wide.

---

**Q: Why is the lateral deviation sometimes large on straights?**

On long straights the raceline is a smooth line through the centre of the track. Small deviations from dead-centre are amplified in the cross-product calculation when the nearest raceline point is far from the car along the tangential direction. If you need more accuracy on straights, switch to using `sn_map_state.track_sn_state.sn_state.n` from the `StateEstimation` message directly — it is computed by the localisation stack and uses the full Frenet frame.

---

**Q: Can I use `hackathon_wheel_to_wheel.mcap` with the same pipeline?**

Yes. The bag shares the same topic set. Pass it with:
```bash
python3 scripts/plot_driven_path.py --bag hackathon_wheel_to_wheel.mcap
ros2 bag play hackathon_wheel_to_wheel.mcap --clock
```

The node will show the driven path of `constructor0` only (the ego vehicle). The bag also contains data from competitor cars on different topics not subscribed to by this node.

---

**Q: `colcon build` succeeded but `ros2 run racing_analyzer path_publisher` says package not found.**

You need to source the **updated** install after building:
```bash
source install/setup.bash
```
If you built with `--symlink-install`, Python source changes in `racing_analyzer/` take effect immediately, but a new `source` is still needed once after the first build.

---

**Q: How do I switch from the minimum-curvature raceline to the hybrid raceline?**

Either edit `_RACELINE_CSV` in `path_publisher_node.py` (takes effect immediately with symlink install), or pass a parameter at runtime:
```bash
ros2 run racing_analyzer path_publisher \
  --ros-args -p raceline_csv:=/home/hamza/hackathon_ws/raceline_hybrid.csv
```
For the offline script, edit `RACELINE_CSV` at the top of `scripts/plot_driven_path.py` or `scripts/segment_analysis.py`.

---

**Q: The segment analysis shows apex speeds > 200% of reference — is something broken?**

No. This reveals that the car's autonomous planner chose a fundamentally different line through that corner complex than the minimum curvature reference. For example, C2 (R=12m hairpin) shows 204% apex speed because the car takes a wider arc that does not require decelerating to 12.3 m/s. The reference speed is correct for the *reference line*; the car's higher speed is correct for *its* line. Run the analysis with `raceline_hybrid.csv` for a reference line that is closer to what the car actually drives.

---

**Q: What does a large negative apex lag (e.g. −73 m) mean?**

The apex lag is `s_driven_apex − s_geometric_apex`, where `s_driven_apex` is the arc-length position where the car's lateral deviation from the reference is at its inside-most point. A value of −73 m means the car reaches its closest approach to the inside wall 73 m *before* the geometric apex of the reference line. This happens when the car's racing line negotiates a chicane or complex as a single combined arc whose turning-in phase starts and peaks much earlier than the reference would suggest. It is a real strategic difference, not a data error.

---

**Q: Why do all corners show "Early throttle"?**

Autonomous racing controllers often apply partial throttle before the geometric apex as part of traction management — they blend brake release and throttle engagement smoothly rather than waiting for a hard apex point. The 0.15 threshold is calibrated for human coaching (where early throttle on tight corners causes understeer). For autonomous systems, this flag may be less meaningful unless correlated with a yaw rate spike or speed loss on exit. Consider raising the threshold to 0.25 or correlating with lateral acceleration data.

---

**Q: How do I add more corners to the analysis?**

Lower the `kappa_thresh` parameter in `detect_corners()` inside `segment_analysis.py`:
```python
# In main(): change kappa_thresh=0.015 to 0.01 to include medium-speed corners (R < 100 m)
corners = detect_corners(rl_s, rl_kap, rl_vx, kappa_thresh=0.01, merge_gap_m=100.0)
```
This adds one additional medium-speed corner at s ≈ 184 m (R=98 m, 32.5 m/s).
