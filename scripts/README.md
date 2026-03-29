# scripts/ — Offline Analysis Tools

Standalone Python scripts that read MCAP bags without a running ROS 2 graph. Source the workspace once before running to make custom message types importable.

```bash
source /home/hamza/hackathon_ws/install/setup.bash
```

---

## plot_driven_path.py

Reads a bag file offline, extracts the driven trajectory, and generates a static two-panel PNG report comparing it against the reference raceline and track boundaries.

### Output

`<bag_stem>_overlay.png` saved next to the bag file. Example:

```
hackathon_good_lap_overlay.png
```

**Top panel — 2D circuit map:**

| Element | Colour | Meaning |
|---------|--------|---------|
| Solid grey line | — | Left track boundary |
| Dashed grey line | — | Right track boundary |
| `plasma` scatter | yellow → purple | Optimal raceline, colour = reference speed |
| `cool` scatter | cyan → blue | Driven path, colour = actual speed |
| Green circle | — | Lap start point |
| Red square | — | Lap end point |

**Bottom panel — lateral deviation:**

Signed perpendicular distance of the driven path from the nearest raceline point, plotted against the car's approximate arc-length progress. Positive = left of the raceline, negative = right.

Summary statistics are shown in the panel title:
- **mean abs** — average absolute deviation over the lap
- **max** — worst-case single-point deviation

### Usage

```bash
# Good lap (default)
python3 scripts/plot_driven_path.py

# Choose a specific bag
python3 scripts/plot_driven_path.py --bag hackathon_fast_laps.mcap
python3 scripts/plot_driven_path.py --bag hackathon_wheel_to_wheel.mcap

# Open an interactive window (requires display / X11 forwarding)
python3 scripts/plot_driven_path.py --show
```

### How it works

#### 1. Reading the MCAP bag

```python
storage_opts = rosbag2_py.StorageOptions(uri=bag_path, storage_id='mcap')
conv_opts    = rosbag2_py.ConverterOptions(
    input_serialization_format='cdr',
    output_serialization_format='cdr',
)
reader = rosbag2_py.SequentialReader()
reader.open(storage_opts, conv_opts)
reader.set_filter(rosbag2_py.StorageFilter(topics=[topic]))

while reader.has_next():
    _, data, t_ns = reader.read_next()
    msg = deserialize_message(data, msg_type)
```

`rosbag2_py` is the official ROS 2 bag API. It supports MCAP natively via the `mcap` storage plugin. The `ConverterOptions` request CDR (Common Data Representation) serialisation on both sides — this is the standard ROS 2 wire format.

`deserialize_message` from `rclpy.serialization` reconstructs a Python message object from raw CDR bytes. The message type (`StateEstimation`) is looked up dynamically from the bag's topic metadata using `rosidl_runtime_py.utilities.get_message`.

#### 2. Lateral deviation computation

```python
# For each driven point: find nearest raceline point
diff = driven[:, None, :] - raceline[None, :, :]   # (N, M, 2) broadcast
dists = np.linalg.norm(diff, axis=-1)              # (N, M)
idx_nearest = np.argmin(dists, axis=1)             # (N,)

# Signed deviation via 2D cross product
tangent = raceline[i1] - raceline[i0]
tangent /= norm(tangent)
vec_to_car = driven - raceline[i0]
signed_dev = tangent_x * vec_y - tangent_y * vec_x
```

The offline script uses **brute-force O(N·M)** nearest-neighbour search. For N = 8 127 driven points and M = 1 489 raceline points this creates a 12 M element array — acceptable offline but not suitable for a 100 Hz callback (the live node uses KDTree instead).

#### 3. Progress calculation

The bottom panel x-axis is the cumulative Euclidean arc length of the **driven path** (not the raceline arc length `s`). This means the x-axis scale reflects the actual distance driven, including any deviations from the reference. To compare directly against the raceline CSV's `s` column you would need to project driven points onto the raceline and use the raceline's arc-length parameterisation.

### Configuration

Edit the constants at the top of the file to change defaults:

```python
WS_ROOT         = Path(__file__).resolve().parent.parent
RACELINE_CSV    = WS_ROOT / 'raceline_hybrid.csv'
BOUNDARIES_JSON = WS_ROOT / 'yas_marina_bnd.json'
STATE_TOPIC     = '/constructor0/state_estimation'
```

To use the hybrid raceline:
```python
RACELINE_CSV = WS_ROOT / 'raceline_hybrid.csv'
```

### Dependencies

All provided by a standard ROS 2 installation:

| Library | Role |
|---------|------|
| `rosbag2_py` | Sequential MCAP reader |
| `rclpy.serialization` | CDR message deserialisation |
| `rosidl_runtime_py` | Dynamic message type resolution from string |
| `numpy` | Vectorised distance computation |
| `pandas` | CSV ingestion |
| `matplotlib` | Figure rendering and PNG export |

---

## classify_corners.py (V2)

Geometry-driven offline corner classifier for raceline CSVs.

### Output

`<raceline_stem>_classified_corners_v2.png` saved next to the CSV.

### Usage

```bash
python3 scripts/classify_corners.py
python3 scripts/classify_corners.py --csv raceline_hybrid.csv
python3 scripts/classify_corners.py --show
```

### Pipeline

1. Load raceline columns: `s, x, y, kappa, vx`
2. Smooth `kappa` at multiple scales (`SMOOTH_WINDOWS`)
3. Detect turning regions using adaptive energy (`TURN_ENERGY_QUANTILE` + hysteresis)
4. Extract persistent peaks across scales
5. Compute topology features (`n_peaks`, sign flips, spacing, continuity)
6. Topology-first classification: `CHICANE`, `ESSES`, `DOUBLE_APEX`, then simple-turn family
7. Semantic mapping to: `HAIRPIN`, `NINETY`, `SIMPLE`, `SWEEP`

### Tunable constants (top of file)

| Constant | Default | Effect |
|----------|---------|--------|
| `SMOOTH_WINDOWS` | `(15, 31, 61)` | Larger = smoother and less noise, smaller = more detail |
| `TURN_ENERGY_QUANTILE` | `0.80` | Higher = fewer/stronger turns, lower = more/gentler turns |
| `TURN_HYSTERESIS_RATIO` | `0.60` | Lower = wider regions, higher = tighter boundaries |
| `MIN_REGION_POINTS` | `8` | Reject very short regions |
| `MIN_REGION_DPSI_DEG` | `6.0` | Reject weak heading-change regions |
| `PEAK_REL_HEIGHT` | `0.35` | Higher keeps dominant peaks only |
| `PERSIST_MIN_SCALES` | `2` | Higher requires stronger peak persistence |
| `PEAK_MATCH_FRAC` | `0.10` | Cross-scale peak matching tolerance |
| `LABEL_OFFSET` | `80.0` m | Plot-label placement only |

---

## Adding a New Script

Any script that needs to read a bag or use custom messages must:

1. Source the workspace: `source install/setup.bash`
2. Import `rosbag2_py` and `rclpy.serialization` for bag reading
3. Use `rosidl_runtime_py.utilities.get_message(type_string)` to resolve message types dynamically

Template:

```python
#!/usr/bin/env python3
import rosbag2_py
from rclpy.serialization import deserialize_message
from rosidl_runtime_py.utilities import get_message

bag_path = '/home/hamza/hackathon_ws/hackathon_wheel_to_wheel.mcap'
topic    = '/constructor0/state_estimation'

reader = rosbag2_py.SequentialReader()
reader.open(
    rosbag2_py.StorageOptions(uri=bag_path, storage_id='mcap'),
    rosbag2_py.ConverterOptions('cdr', 'cdr'),
)

type_map = {t.name: t.type for t in reader.get_all_topics_and_types()}
msg_type = get_message(type_map[topic])
reader.set_filter(rosbag2_py.StorageFilter(topics=[topic]))

while reader.has_next():
    _, data, t_ns = reader.read_next()
    msg = deserialize_message(data, msg_type)
    # use msg.x_m, msg.y_m, msg.v_mps, etc.
```

---

## segment_analysis.py

Corner-by-corner coaching analysis. Projects the driven path onto the reference raceline using sub-segment arc-length projection, detects corners by curvature, and generates a PNG grid and PDF report.

### Output files

| File | Description |
|------|-------------|
| `<bag>_corner_grid.png` | Dark-theme quick-scan: 4 rows (map, speed, controls, lat dev) × N corner columns |
| `<bag>_corner_report.pdf` | Page 1: colour-coded summary table. Pages 2–N: one full debrief page per corner |

### Usage

```bash
# Default: hackathon_wheel_to_wheel.mcap + minimum curvature raceline
python3 scripts/segment_analysis.py

# Different bag
python3 scripts/segment_analysis.py --bag hackathon_fast_laps.mcap
```

### Pipeline stages

```
read_bag()                 → DataFrame: t, x, y, v, gas, brake, brake_norm
  ↓
project_onto_raceline()    → adds s_proj, n_proj columns (sub-segment, vectorised)
  ↓
detect_corners()           → list of corner dicts (apex s, kappa, radius, window bounds)
  ↓
compute_metrics() × N      → entry/apex/exit speed ratio, lat dev, apex lag, throttle timing
  ↓
classify() × N             → list of (flag_label, detail_string) per corner
  ↓
plot_grid()                → <bag>_corner_grid.png
plot_pdf()                 → <bag>_corner_report.pdf
```

### Sub-segment projection (key improvement over brute-force)

```python
# For each driven point, check two candidate segments around the nearest vertex:
for i0_arr, i1_arr in [(idxs-1, idxs), (idxs, idxs+1)]:
    t = clip(dot(P-A, B-A) / |B-A|², 0, 1)      # parameter along segment
    foot = A + t*(B-A)                             # closest point on segment
    s_proj = s[i0] + t * |B-A|                    # arc-length at foot
    n_proj = tangent × (P - foot)                 # signed lateral (cross product)
    # keep whichever gives smallest perpendicular distance
```

The brute-force approach (nearest vertex) can give errors of several metres on long straights where the car falls between two raceline points. The sub-segment method eliminates this.

### Coaching flags and thresholds

| Flag | Condition | Notes |
|------|-----------|-------|
| Over-braking on entry | `entry_v_ratio < 0.90` | Car lost too much speed before corner |
| Under-braking / hot entry | `entry_v_ratio > 1.07` | Approaching too fast |
| Slow apex | `apex_v_ratio < 0.90` | Car not carrying enough speed through the apex |
| Running wide at apex | `sign(κ) × n_proj < −2.0 m` | Car is on the outside of the reference apex |
| Slightly wide at apex | `sign(κ) × n_proj < −0.8 m` | Minor deviation outside |
| Late apex | `apex_lag > +20 m` | Driven apex past geometric apex |
| Early apex | `apex_lag < −20 m` | Driven apex before geometric apex |
| Early throttle | gas > 0.15 before apex | Throttle applied in the turning phase |
| Delayed throttle | `throttle_offset > 30 m` | Slow to get on power after apex |
| Throttle loss on exit | `exit_v_ratio < 0.90` | Not accelerating as fast as reference |

### Interpreting anomalous speed ratios

When the car's planned trajectory differs significantly from the reference CSV, speed ratios can exceed 150–200%. This is not a bug — it reflects genuine line choice differences:

- **> 100%** at most corners: the minimum curvature reference speed profile is conservative relative to the car's actual speed. Consider using `raceline_hybrid.csv` for a closer match.
- **200%+ at one specific corner**: the car is taking a completely different arc through a complex (e.g. a wider-radius path that avoids the reference's tight hairpin speed dip).
- **Negative apex lag −70 m**: the car's racing apex is much earlier than the reference predicts, meaning the car and reference are negotiating the corner geometry differently.

### Key constants (editable at the top of the file)

| Constant | Default | Meaning |
|----------|---------|---------|
| `RACELINE_CSV` | `raceline_hybrid.csv` | Reference raceline |
| `BRAKE_THRESH_PA` | `80_000` Pa | Threshold for "braking active" |
| `THROTTLE_THRESH` | `0.15` | Fraction for "throttle on" |
| `ENTRY_ZONE` | `(80, 20)` m before apex | Zone for entry speed metric |
| `APEX_ZONE` | `±15` m | Zone for apex metrics |
| `EXIT_ZONE` | `(15, 70)` m after apex | Zone for exit speed metric |
| `kappa_thresh` | `0.015` (R < 67 m) | Corner detection curvature threshold |
| `merge_gap_m` | `100 m` | Merge corners whose apexes are within this distance |
