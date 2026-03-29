# racing_analyzer — ROS 2 Package

Real-time racing telemetry analysis node for the Constructor GenAI Hackathon 2026 dataset.

---

## Overview

`racing_analyzer` is a ROS 2 Python package (`ament_python`) containing a single node — `PathPublisher` — that subscribes to the autonomous car's fused state estimation at 100 Hz and publishes:

- The accumulated **driven path** for RViz visualisation
- The **optimal raceline and track boundaries** as latched RViz markers
- A continuous **lateral deviation** stream (signed distance from the reference line)
- A continuous **speed error** stream (actual minus reference speed)

It is designed to run alongside `ros2 bag play` and stream all outputs into RViz in real time.

---

## Package Structure

```
racing_analyzer/
├── package.xml                          # ROS 2 package manifest
├── setup.py                             # Python package build config
├── setup.cfg                            # ament script directory config
├── resource/
│   └── racing_analyzer                  # ament resource index marker
├── launch/
│   └── visualize.launch.py              # Launch file for the node
└── racing_analyzer/
    ├── __init__.py
    └── path_publisher_node.py           # Main node implementation
```

---

## Node: `path_publisher`

### Subscribed Topics

| Topic | Type | Rate | Description |
|-------|------|------|-------------|
| `/constructor0/state_estimation` | `sd_localization_msgs/StateEstimation` | ~100 Hz | Fused vehicle state: position, velocity, orientation, pedal inputs |

### Published Topics

| Topic | Type | Rate | QoS | Description |
|-------|------|------|-----|-------------|
| `/racing/driven_path` | `nav_msgs/Path` | 100 Hz | Best-effort, depth 10 | All driven poses accumulated since node start |
| `/racing/raceline_markers` | `visualization_msgs/MarkerArray` | Once (latched) | Reliable, TRANSIENT_LOCAL | Orange raceline + green/red boundary LINE_STRIP markers |
| `/racing/lateral_deviation` | `std_msgs/Float64` | 100 Hz | Best-effort, depth 10 | Signed perpendicular distance from the reference line (m) |
| `/racing/speed_error` | `std_msgs/Float64` | 100 Hz | Best-effort, depth 10 | `v_actual − v_reference_at_nearest_point` (m/s) |

### ROS 2 Parameters

| Parameter | Type | Default | Description |
|-----------|------|---------|-------------|
| `raceline_csv` | string | `<ws>/raceline_hybrid.csv` | Absolute path to reference raceline |
| `boundaries_json` | string | `<ws>/yas_marina_bnd.json` | Absolute path to track boundaries |
| `map_frame` | string | `map` | TF frame id for all published messages |
| `state_topic` | string | `/constructor0/state_estimation` | StateEstimation topic to subscribe to |

Override parameters at launch:
```bash
ros2 run racing_analyzer path_publisher \
  --ros-args \
  -p raceline_csv:=/home/hamza/hackathon_ws/raceline_hybrid.csv \
  -p map_frame:=odom
```

---

## Dependencies

### ROS 2 Packages

| Package | Used for |
|---------|----------|
| `rclpy` | Node base class, publisher/subscriber API |
| `std_msgs` | `Float64` message type |
| `nav_msgs` | `Path` message type |
| `geometry_msgs` | `PoseStamped`, `Point` |
| `visualization_msgs` | `Marker`, `MarkerArray` |
| `sd_localization_msgs` | `StateEstimation` (custom hackathon message) |

### Python Libraries

| Library | Used for |
|---------|----------|
| `numpy` | Array maths, tangent computation |
| `pandas` | Loading raceline CSV |
| `scipy.spatial.KDTree` | Fast nearest-neighbour raceline lookup |
| `json` | Parsing boundary JSON |
| `math` | Quaternion encoding of yaw |

---

## Build and Install

```bash
cd /home/hamza/hackathon_ws

# Build only this package
colcon build --packages-select racing_analyzer --symlink-install

# Source the workspace (required in every new terminal)
source install/setup.bash
```

`--symlink-install` creates symlinks instead of copying Python files. This means edits to `path_publisher_node.py` take effect immediately without rebuilding — just restart the node.

---

## Running

### Option A — Direct executable

```bash
source install/setup.bash
ros2 run racing_analyzer path_publisher
```

### Option B — Launch file

```bash
source install/setup.bash
ros2 launch racing_analyzer visualize.launch.py
```

### Full pipeline (3 terminals)

**Terminal 1 — bag playback:**
```bash
source install/setup.bash
ros2 bag play hackathon_wheel_to_wheel.mcap --clock
```

**Terminal 2 — analysis node:**
```bash
source install/setup.bash
ros2 run racing_analyzer path_publisher
```

**Terminal 3 — live metric echo:**
```bash
source install/setup.bash
ros2 topic echo /racing/lateral_deviation
ros2 topic echo /racing/speed_error
```

---

## Implementation Details

### Startup sequence

```
__init__
  │
  ├─ _load_raceline()          Parse CSV → x[], y[], vx[]
  │    └─ KDTree(x, y)         Build spatial index once
  │    └─ tangents[]           Precompute unit tangents for signed deviation
  │
  ├─ _load_boundaries()        Parse JSON → left[], right[] arrays
  │
  ├─ create_publisher × 4      driven_path, markers, lat_dev, speed_error
  ├─ create_subscription       StateEstimation @ 100 Hz
  └─ create_timer(0.5 s)       One-shot → _publish_static_markers_once()
```

### Callback: `_state_cb` (runs at 100 Hz)

```
receive StateEstimation
  │
  ├─ extract x_m, y_m, v_mps, yaw_rad
  │
  ├─ build PoseStamped          yaw → quaternion (z·sin, w·cos)
  ├─ append to NavPath
  ├─ publish /racing/driven_path
  │
  ├─ KDTree.query([x, y])       O(log N) → nearest raceline index
  │
  ├─ compute lateral deviation
  │    tangent = (tx, ty)       pre-stored unit tangent at idx
  │    vec = (x - rl_x, y - rl_y)
  │    lateral = tx·vec_y − ty·vec_x   (2D cross product)
  │
  ├─ publish /racing/lateral_deviation
  │
  ├─ speed_error = v_mps − vx[idx]
  └─ publish /racing/speed_error
```

### Signed Lateral Deviation — Theory

The 2D cross product of the path tangent `t̂` and the vector from the path to the car `v` gives the scalar signed area, equivalent to the perpendicular (lateral) component of `v`:

```
lateral = t̂ × v = tₓ·vᵧ − tᵧ·vₓ
```

- **Positive** → car is to the **left** of the path (in the direction of travel)
- **Negative** → car is to the **right**

This is a first-order approximation. The error versus the true geodesic perpendicular distance grows with path curvature κ and lateral offset n as approximately `κ·n²/2`. For Yas Marina corners (minimum radius ≈ 35 m, κ ≈ 0.03 1/m) and typical deviations (n < 3 m), the error is less than 0.15 m — well within acceptable limits for coaching feedback.

### KDTree Nearest-Point Lookup — Performance

With N = 1 489 raceline points the KDTree query runs in O(log 1489) ≈ 11 comparisons. On a modern CPU this takes < 50 µs, leaving ample headroom within the 10 ms budget of the 100 Hz callback.

Brute-force (as used in the offline script for simplicity) runs in O(N) and is equally fast for N < 10 000, but KDTree is used in the live node to keep callback latency deterministic as the raceline grows.

### Static Marker QoS — TRANSIENT_LOCAL

The `raceline_markers` publisher uses `DurabilityPolicy.TRANSIENT_LOCAL`. This instructs the ROS 2 middleware (DDS) to store the last published message and replay it to any subscriber that connects **after** the message was published. Without this, RViz must be running before the node starts or it will never receive the markers.

---

## Extending the Node

### Add a new metric

1. Create a new publisher in `__init__`:
   ```python
   self._pub_heading_error = self.create_publisher(Float64, '/racing/heading_error', 10)
   ```

2. Compute and publish in `_state_cb`:
   ```python
   heading_ref = math.atan2(self._rl_ty[idx], self._rl_tx[idx])
   heading_error = msg.yaw_rad - heading_ref
   # Wrap to [-pi, pi]
   heading_error = (heading_error + math.pi) % (2 * math.pi) - math.pi
   h_msg = Float64()
   h_msg.data = heading_error
   self._pub_heading_error.publish(h_msg)
   ```

### Switch raceline at runtime

Declare a new parameter `raceline_csv` and add a parameter event handler — or simply restart the node with a different `-p raceline_csv:=...` argument.

### Record metrics to CSV

Use a Python `csv.writer` opened in `__init__` and write a row each callback. Close it in a `destroy_node` override. This gives you an offline record of every 100 Hz sample without needing a second bag recording.
