# Racing Analyzer — Yas Marina Lap Telemetry System

A modular, pure-Python racing telemetry analysis system for the Yas Marina Circuit. It reads vehicle state data (either from ROS 2 MCAP bag files or via HTTP API), computes per-point deviation metrics against an optimal reference raceline, detects corners, and generates structured coaching recommendations — all in structured JSON.

---

## Table of Contents

1. [Overview](#overview)
2. [Repository Structure](#repository-structure)
3. [Architecture](#architecture)
4. [Data Flow](#data-flow)
5. [Reference Data](#reference-data)
6. [Core Modules — Algorithms & Logic](#core-modules)
   - [Geometry & Nearest-Point Matching](#geometry--nearest-point-matching)
   - [Corner Detection](#corner-detection)
   - [Recommendations Engine](#recommendations-engine)
   - [Analysis Service — Orchestration](#analysis-service--orchestration)
7. [API Layer](#api-layer)
8. [Pydantic Models — Inputs & Outputs](#pydantic-models--inputs--outputs)
9. [MCAP Bag CLI](#mcap-bag-cli-analyze_bagpy)
10. [Real-Time Dashboard](#real-time-dashboard-dashboard_serverpy)
11. [ROS 2 Adapter](#ros-2-adapter)
12. [Numeric Constants & Thresholds](#numeric-constants--thresholds)
13. [Running the System](#running-the-system)
14. [Dependencies](#dependencies)

---

## Overview

The Racing Analyzer takes vehicle state telemetry (position, heading, speed) and compares it against a pre-computed optimal reference raceline for Yas Marina. It answers three core questions:

1. **Where on track is the vehicle relative to the optimal line?** — Signed lateral deviation at every recorded point.
2. **How does the vehicle's speed compare to the optimal speed profile?** — Speed error per point and per corner.
3. **What specific coaching actions would improve lap time?** — Prioritised, human-readable recommendations tied to individual corners.

The system can operate in three modes:

- **HTTP API** — Receives JSON payloads from any client, returns structured JSON analysis.
- **CLI batch analysis** — Reads MCAP bag files directly and prints a terminal race report.
- **Real-time dashboard** — Streams MCAP playback frame-by-frame over WebSocket to a browser dashboard.

---

## Repository Structure

```
hackathon_ws/
├── src/racing_analyzer/
│   ├── app/
│   │   ├── core/
│   │   │   ├── geometry.py          # Raceline dataclass, KDTree matching, deviation math
│   │   │   ├── loaders.py           # Pydantic → NumPy builders
│   │   │   ├── corner_detection.py  # Curvature-threshold corner segmentation
│   │   │   └── recommendations.py  # Rule-based coaching engine
│   │   ├── services/
│   │   │   └── analysis_service.py  # Orchestration: calls core, assembles responses
│   │   ├── api/
│   │   │   └── routes/
│   │   │       ├── analysis.py      # 3 POST endpoints
│   │   │       └── health.py        # GET /health
│   │   ├── models/
│   │   │   ├── inputs.py            # Pydantic request schemas
│   │   │   └── outputs.py           # Pydantic response schemas
│   │   └── main.py                  # FastAPI app factory
│   ├── racing_analyzer/
│   │   └── ros2_adapter.py          # ROS 2 node: subscribes to state_estimation
│   ├── analyze_bag.py               # CLI: MCAP bag → terminal race report
│   └── tests/                       # Unit and integration tests
│
├── dashboard_server.py              # Real-time WebSocket dashboard
├── raceline_hybrid.csv              # Optimal reference path (hybrid method)
├── raceline_minimum_curvature.csv   # Alternative reference path
├── yas_marina_bnd.json              # Left/right track boundary coordinates
└── outputs/
    └── yas_marina_bnd_hybrid_corner_analysis.json  # Pre-computed corner map
```

---

## Architecture

The system is built in strict layers. Each layer only depends on the one below it, and the core computation layer has no I/O dependencies at all:

```
┌─────────────────────────────────────────────────────────────────┐
│  INTERFACES                                                       │
│  ┌──────────────┐  ┌──────────────┐  ┌──────────────────────┐  │
│  │ HTTP API     │  │ MCAP CLI     │  │ Real-Time Dashboard   │  │
│  │ FastAPI      │  │ analyze_bag  │  │ WebSocket + Plotly.js │  │
│  └──────┬───────┘  └──────┬───────┘  └──────────┬───────────┘  │
│         └─────────────────┴──────────────────────┘              │
│                            │                                      │
├────────────────────────────┼─────────────────────────────────────│
│  SERVICE LAYER             │                                      │
│                    analysis_service.py                            │
│                    (orchestrates core modules)                    │
├────────────────────────────┼─────────────────────────────────────│
│  CORE LAYER (pure Python, no I/O)                                 │
│  ┌─────────────┐  ┌──────────────────┐  ┌──────────────────┐    │
│  │ geometry.py │  │corner_detection  │  │recommendations   │    │
│  │ KDTree      │  │curvature thresh. │  │rule engine       │    │
│  └─────────────┘  └──────────────────┘  └──────────────────┘    │
├─────────────────────────────────────────────────────────────────-│
│  DATA LAYER                                                        │
│  ┌─────────────┐  ┌──────────────┐  ┌──────────────────────┐    │
│  │ loaders.py  │  │ Pydantic     │  │ NumPy / SciPy        │    │
│  │ data build  │  │ validation   │  │ array operations     │    │
│  └─────────────┘  └──────────────┘  └──────────────────────┘    │
└─────────────────────────────────────────────────────────────────┘
```

**Key design principle:** The `app/core/` modules are pure computation — they only take NumPy arrays and dataclasses as input and produce NumPy arrays and dataclasses as output. They have no knowledge of FastAPI, ROS 2, or MCAP files. This makes them reusable across all interfaces.

---

## Data Flow

The complete end-to-end data flow for a full track analysis:

```
┌─────────────────────────────────────────────────────────────────────┐
│  INPUT                                                               │
│  raceline_hybrid.csv         yas_marina_bnd.json    MCAP / JSON     │
│  [s, x, y, psi, kappa, vx]  [left_border,          [t, x, y,       │
│                               right_border]          yaw, vx]       │
└──────────────┬───────────────────┬─────────────────────┬────────────┘
               │                   │                     │
               ▼                   ▼                     ▼
        build_raceline()    build_boundaries()   build_trajectory_arrays()
        → Raceline object   → left_bnd, right_bnd → timestamps, xs, ys,
          (KDTree inside)     each shape (K, 2)      yaws, vxs  shape (M,)
               │
               ▼
┌─────────────────────────────────────────────────────────────────────┐
│  PER-POINT METRIC COMPUTATION    _compute_per_point_metrics()        │
│                                                                      │
│  1. nearest_batch(xs, ys)                                            │
│     KDTree query → idxs shape (M,)   [nearest raceline index]       │
│                 → distances shape (M,) [Euclidean dist to raceline]  │
│                                                                      │
│  2. signed_lateral_batch(xs, ys, idxs)                               │
│     cross-product formula → lat_devs shape (M,)                     │
│     sign: + = left of raceline, − = right of raceline               │
│                                                                      │
│  3. heading_error_batch(yaws, idxs)                                  │
│     angle wrapping to [-π, π] → hdg_errs shape (M,)                 │
│                                                                      │
│  4. speed_errors = vxs − raceline.vx[idxs]  → spd_errs shape (M,)  │
└──────────────────────────────┬──────────────────────────────────────┘
                               │
                               ▼
┌─────────────────────────────────────────────────────────────────────┐
│  CORNER DETECTION    detect_corners(raceline)                        │
│                                                                      │
│  Input: raceline.kappa array  shape (N,)                            │
│                                                                      │
│  1. |kappa| >= 0.02  →  boolean mask "in corner"                    │
│  2. Find contiguous True-runs in mask                                │
│  3. Filter: arc-length of run >= 10.0 m                              │
│  4. Classify type by max |kappa|:                                    │
│        >= 0.08  →  hairpin                                           │
│        >= 0.04  →  medium                                            │
│        else     →  fast                                              │
│  5. Turn direction: sign of mean(kappa) over segment                 │
│                                                                      │
│  → List[CornerSegment]                                               │
└──────────────────────────────┬──────────────────────────────────────┘
                               │
                               ▼
┌─────────────────────────────────────────────────────────────────────┐
│  CORNER RESULT BUILDING    _build_corner_result()                    │
│                                                                      │
│  For each CornerSegment:                                             │
│    Mask trajectory points inside corner arc-length span             │
│    Require coverage >= 5% to compute profiles                        │
│                                                                      │
│  DeviationProfile:                                                   │
│    entry / apex / exit lateral deviation, mean, max, RMS            │
│                                                                      │
│  SpeedProfile:                                                       │
│    entry / apex / exit speed, reference apex speed, mean speed error│
│                                                                      │
│  Severity:                                                           │
│    lat_sev  = min(1.0, max_lateral / 3.0)                            │
│    spd_sev  = min(1.0, |mean_speed_error| / 10.0)                    │
│    severity = 0.6 × lat_sev + 0.4 × spd_sev                         │
│                                                                      │
│  → List[CornerResult]                                                │
└──────────────────────────────┬──────────────────────────────────────┘
                               │
                               ▼
┌─────────────────────────────────────────────────────────────────────┐
│  RECOMMENDATIONS    generate_recommendations(corners)                │
│                                                                      │
│  5 rule-based checks per covered corner:                             │
│    apex_miss            |apex lateral| > 1.2 m                      │
│    wide_entry           |entry lateral| > 1.5 m                     │
│    wide_exit            |exit lateral| > 1.5 m                      │
│    early_braking        mean_speed_error <= -3.0 m/s                │
│    high_speed_deviation mean_speed_error >= +3.0 m/s                │
│                                                                      │
│  Each triggered rule → RecommendationResult with                    │
│    explanation, recommendation text, priority, confidence           │
│                                                                      │
│  → List[RecommendationResult]                                        │
└──────────────────────────────┬──────────────────────────────────────┘
                               │
                               ▼
                    Structured JSON response
```

---

## Reference Data

### `raceline_hybrid.csv`

The optimal reference path for Yas Marina, generated using a hybrid method. Each row is one waypoint.

| Column | Unit | Description |
|--------|------|-------------|
| `s` | m | Cumulative arc-length from start |
| `x` | m | X coordinate (map frame) |
| `y` | m | Y coordinate (map frame) |
| `psi` | rad | Heading angle |
| `kappa` | 1/m | Curvature (positive = left turn, negative = right turn) |
| `vx` | m/s | Reference (optimal) speed at this point |
| `ax` | m/s² | Reference longitudinal acceleration |

**Size**: ~1,488 points over ~2,968 m lap length.
**Speed range**: 12.95 – 51.21 m/s (46 – 184 km/h).

### `yas_marina_bnd.json`

Track boundary coordinates in the map frame:

```json
{
  "boundaries": {
    "left_border":  [[x1, y1], [x2, y2], ...],
    "right_border": [[x1, y1], [x2, y2], ...]
  }
}
```

### `outputs/yas_marina_bnd_hybrid_corner_analysis.json`

Pre-computed corner map of Yas Marina. Contains 6 corners:

| Corner | Category | Apex Speed (ref) |
|--------|----------|-----------------|
| T1 | Double Apex | 114 km/h |
| T2 | Hairpin | — |
| T3 | 90-degree | — |
| T4 | Double Apex | — |
| T5 | Simple | — |
| T6 | Hairpin | — |

Used by the dashboard to show fixed apex markers and included in every WebSocket JSON snapshot as `optimum_reference`.

---

## Core Modules

### Geometry & Nearest-Point Matching

**File**: `app/core/geometry.py`

This is the computational heart of the system. The `Raceline` dataclass holds the reference path and exposes efficient batch query methods using a SciPy KDTree.

#### Raceline Dataclass

```python
@dataclass
class Raceline:
    s:     np.ndarray  # arc-length (N,)
    x:     np.ndarray  # x positions (N,)
    y:     np.ndarray  # y positions (N,)
    psi:   np.ndarray  # heading angles (N,)
    kappa: np.ndarray  # curvature 1/m (N,)
    vx:    np.ndarray  # reference speeds (N,)
    ax:    np.ndarray  # reference acceleration (N,)
    _tx:   np.ndarray  # precomputed tangent x (N,)
    _ty:   np.ndarray  # precomputed tangent y (N,)
    _tree: KDTree      # spatial index for O(log N) lookup
```

#### Tangent Vectors (precomputed at construction)

Tangent vectors are computed via finite differences and normalised. An epsilon of `1e-12` is added to denominators to prevent division by zero at duplicate points:

```
dx[i] = x[i+1] - x[i]       (forward finite difference)
dy[i] = y[i+1] - y[i]
norm  = sqrt(dx² + dy²) + 1e-12
tx[i] = dx[i] / norm
ty[i] = dy[i] / norm
```

#### Nearest-Point Matching

```python
raceline.nearest_batch(xs, ys) → (idxs, distances)
```

Uses `scipy.spatial.KDTree.query()` with batch input for O(M log N) total complexity where M = trajectory length, N = raceline length. Returns:
- `idxs` — index of nearest raceline point for each trajectory point
- `distances` — Euclidean distance to that nearest point (always ≥ 0)

#### Signed Lateral Deviation

The deviation sign is determined by a 2D cross product between the raceline tangent vector at the matched point and the vector from that raceline point to the vehicle:

```
dx_to_vehicle = vehicle_x - raceline.x[idx]
dy_to_vehicle = vehicle_y - raceline.y[idx]

lateral_deviation = tx[idx] * dy_to_vehicle - ty[idx] * dx_to_vehicle
```

**Sign convention**:
- **Positive** → vehicle is to the **left** of the raceline (in the direction of travel)
- **Negative** → vehicle is to the **right** of the raceline

This is the standard 2D signed area / cross-product formula and gives a geometrically meaningful deviation regardless of the track orientation on the map.

#### Heading Error

The heading error is the angle between the vehicle's actual yaw and the raceline's reference heading at the nearest point, wrapped into `[−π, π]` to avoid discontinuities at ±180°:

```
raw_error = actual_yaw − raceline.psi[idx]
wrapped   = ((raw_error + π) mod 2π) − π
```

#### Arc Length

Euclidean polyline distance summed over consecutive trajectory points:

```
L = Σ sqrt((x[i+1]-x[i])² + (y[i+1]-y[i])²)
```

#### Summary Statistics

`series_stats(array)` is called on every metric to produce the same 5-number summary:

| Statistic | Formula |
|-----------|---------|
| `mean` | arithmetic mean |
| `rms` | √(mean(x²)) |
| `max_abs` | max(|x|) |
| `p95` | 95th percentile of |x| |
| `std` | standard deviation |

---

### Corner Detection

**File**: `app/core/corner_detection.py`

Corners are detected directly from the curvature profile of the reference raceline using a threshold-and-segment approach. No external map data is needed.

#### Algorithm (Step by Step)

**Step 1 — Threshold the curvature**

```
in_corner[i] = |kappa[i]| >= curvature_threshold
```

Default `curvature_threshold = 0.02` (1/m). This means any point with a turning radius tighter than 50 m is considered "in a corner".

**Step 2 — Find contiguous segments**

Scan the boolean array `in_corner` for runs of consecutive `True` values. Each contiguous run is a candidate corner segment.

**Step 3 — Filter by arc-length**

Only segments with total arc-length `>= 10.0 m` are kept. This removes transient curvature noise (e.g., GPS jitter, small kinks) that are not real corners.

**Step 4 — Find the apex**

The apex is the index within the segment where `|kappa|` is maximum — i.e., the tightest point of the corner.

**Step 5 — Determine turn direction**

```
mean_kappa = mean(kappa[start_idx : end_idx])
direction  = "left"  if mean_kappa > 0
           = "right" if mean_kappa < 0
           = "unknown" if near zero
```

In this raceline convention, positive curvature = left turn.

**Step 6 — Classify corner type**

Based on peak curvature magnitude, calibrated for a Formula-style circuit:

| max |kappa| | Type | Approx. min radius |
|-------------|------|--------------------|
| ≥ 0.08 (1/m) | `hairpin` | ≤ 12.5 m |
| ≥ 0.04 (1/m) | `medium` | ≤ 25 m |
| < 0.04 (1/m) | `fast` | > 25 m |

#### CornerSegment Output

```python
@dataclass
class CornerSegment:
    id:             int    # zero-based index
    start_idx:      int    # raceline array index at entry
    end_idx:        int    # raceline array index at exit
    apex_idx:       int    # raceline array index at apex
    start_s:        float  # arc-length at entry (m)
    end_s:          float  # arc-length at exit (m)
    apex_s:         float  # arc-length at apex (m)
    length_m:       float  # total corner arc-length (m)
    max_curvature:  float  # peak |kappa| (1/m)
    mean_curvature: float  # mean |kappa| through corner (1/m)
    turn_direction: str    # "left" / "right" / "unknown"
    corner_type:    str    # "hairpin" / "medium" / "fast"
```

---

### Recommendations Engine

**File**: `app/core/recommendations.py`

The coaching engine applies 5 rule-based checks to each corner that has sufficient trajectory coverage (>= 5%). Each triggered rule emits one `RecommendationResult`.

#### The 5 Rules

| Rule | Trigger Condition | `issue_type` | Confidence |
|------|-------------------|--------------|------------|
| **Apex Miss** | `\|apex_lateral\| > 1.2 m` | `apex_miss` | 0.80 |
| **Wide Entry** | `\|entry_lateral\| > 1.5 m` | `wide_entry` | 0.75 |
| **Wide Exit** | `\|exit_lateral\| > 1.5 m` | `wide_exit` | 0.75 |
| **Early Braking** | `mean_speed_error <= −3.0 m/s` | `early_braking` | 0.70 |
| **High Speed** | `mean_speed_error >= +3.0 m/s` | `high_speed_deviation` | 0.65 |

Confidence values reflect how reliably the measured signal predicts the true driving issue. Apex miss is most reliable (0.80) because the lateral position at a single identifiable point is a direct measurement. High speed deviation is least reliable (0.65) because the reference speed profile may not account for car-specific setup differences.

#### Severity Score per Recommendation

Each recommendation has its own severity score in [0, 1], computed as:

```
severity = min(1.0, measured_value / (2 × threshold))
```

For example, an apex miss of 2.4 m against a 1.2 m threshold:

```
severity = min(1.0, 2.4 / (2 × 1.2)) = min(1.0, 1.0) = 1.0  →  critical
```

At exactly the threshold (1.2 m):

```
severity = 1.2 / 2.4 = 0.5  →  high
```

#### Priority Mapping

| Severity | Priority |
|----------|----------|
| ≥ 0.65 | `critical` |
| ≥ 0.35 | `high` |
| ≥ 0.20 | `medium` |
| < 0.20 | `low` |

#### Supporting Metrics

Each recommendation includes a `supporting_metrics` dict with the exact numeric values that triggered it:

```json
{
  "issue_type": "apex_miss",
  "supporting_metrics": {
    "apex_lateral_m": 1.87,
    "threshold_m": 1.2
  }
}
```

---

### Analysis Service — Orchestration

**File**: `app/services/analysis_service.py`

The analysis service is the only module that knows about both the core computation layer and the Pydantic response models. It orchestrates the pipeline and assembles the final response objects.

#### Three Entry Points

**`analyze_track(req)`** — Full analysis:
1. `build_raceline(req.raceline)` → `Raceline`
2. `build_boundaries(req.boundaries)` → `(left_bnd, right_bnd)`
3. `build_trajectory_arrays(req.trajectory)` → 5 NumPy arrays
4. `_compute_per_point_metrics(...)` → per-point deviation arrays
5. `detect_corners(raceline)` → `List[CornerSegment]`
6. `_build_corner_result(...)` for each segment → `List[CornerResult]`
7. `generate_recommendations(corners)` → `List[RecommendationResult]`
8. Assemble `AnalyzeTrackResponse`

**`compare_trajectory(req)`** — Lightweight (no corners or recommendations):
Steps 1, 3, 4, and 8 only. Used for fast deviation checking where corner analysis is not needed.

**`analyze_corners(req)`** — Raceline corners only (no trajectory):
Steps 1, 5, and 8 only. Returns corner geometry without any trajectory-derived speed or deviation profiles.

#### Corner Coverage Calculation

For each corner, the fraction of the corner's arc-length that the trajectory actually passes through:

```
mask    = (ref_s >= corner.start_s) & (ref_s <= corner.end_s)
covered = max(ref_s[mask]) - min(ref_s[mask])
coverage = min(1.0, covered / corner.length_m)
```

Profiles are only computed when `coverage >= 0.05` (5%). Below this, `speed_profile` and `deviation_profile` are `null` in the response. This avoids spurious results when only a fragment of a corner is captured.

#### Corner Severity Score

The per-corner severity combines lateral control quality and speed management:

```
lat_severity = min(1.0, max_lateral_deviation / 3.0)
spd_severity = min(1.0, |mean_speed_error| / 10.0)
severity     = 0.6 × lat_severity + 0.4 × spd_severity
```

The 60/40 weighting prioritises line quality over speed profile because lateral positioning has a larger compound effect on lap time at the circuit level.

---

## API Layer

**File**: `app/api/routes/analysis.py`
**App factory**: `app/main.py`

The FastAPI app runs at `http://localhost:8000` by default. Interactive Swagger docs are at `/docs`, ReDoc at `/redoc`.

### Endpoints

#### `POST /analyze-track`

Full lap analysis. Requires raceline, boundaries, and trajectory. Returns complete analysis including geometry, per-point metrics, corner profiles, and coaching recommendations.

**Validation**: Raceline minimum 10 points, trajectory minimum 2 points.

**Request body**:
```json
{
  "track_name": "Yas Marina",
  "raceline_type": "hybrid",
  "raceline": [
    {"s": 0.0, "x": 100.0, "y": 200.0, "psi": 1.57, "kappa": 0.02, "vx": 30.0, "ax": 0.0}
  ],
  "boundaries": {
    "left":  [{"x": 99.0, "y": 201.0}],
    "right": [{"x": 101.0, "y": 199.0}]
  },
  "trajectory": [
    {"timestamp": 0.0, "x": 100.5, "y": 200.3, "yaw": 1.55, "vx": 28.0}
  ]
}
```

**Response**: `AnalyzeTrackResponse` — metadata, geometry (all coordinate arrays), per-point metrics, corners, recommendations.

---

#### `POST /compare-trajectory`

Lightweight deviation comparison. No corners or recommendations computed. Use for high-frequency lap-delta comparisons.

**Request body**: Same as above but without `boundaries`.

**Response**: `CompareTrajectoryResponse` — metadata, geometry, metrics only.

---

#### `POST /analyze-corners`

Corner detection from raceline alone. No trajectory required.

**Request body**:
```json
{
  "track_name": "Yas Marina",
  "raceline": [...],
  "curvature_threshold": 0.02,
  "min_corner_length": 10.0
}
```

`curvature_threshold` and `min_corner_length` are optional and default to `0.02` (1/m) and `10.0` m.

**Response**: `AnalyzeCornersResponse` — corners with geometry but no trajectory-derived profiles.

---

#### `GET /health`

```json
{"status": "ok", "version": "1.0.0"}
```

---

## Pydantic Models — Inputs & Outputs

### Input Models (`app/models/inputs.py`)

| Model | Fields | Description |
|-------|--------|-------------|
| `Point2D` | `x, y: float` | A 2D coordinate |
| `RacelinePoint` | `s, x, y, psi, kappa, vx, ax` | One raceline waypoint |
| `TrajectoryPoint` | `timestamp, x, y, yaw, vx` | One vehicle state sample |
| `BoundaryData` | `left, right: List[Point2D]` | Full track boundary |
| `AnalyzeTrackRequest` | `track_name, raceline_type, raceline, boundaries, trajectory` | Full analysis request |
| `CompareTrajectoryRequest` | `track_name, raceline, trajectory` | Lightweight request |
| `AnalyzeCornersRequest` | `track_name, raceline, curvature_threshold?, min_corner_length?` | Corner-only request |

### Output Models (`app/models/outputs.py`)

#### `PerPointMetrics` — aligned with trajectory (M points each)

| Field | Unit | Description |
|-------|------|-------------|
| `s_ref` | m | Arc-length on raceline of matched point |
| `lateral_deviation` | m | Signed: + = left, − = right of raceline |
| `speed_error` | m/s | Actual − reference. + = faster, − = slower |
| `heading_error` | rad | Actual yaw − reference heading, wrapped to [−π, π] |
| `distance_to_nearest` | m | Euclidean distance to raceline, always ≥ 0 |

#### `SpeedProfile` — per corner

| Field | Unit | Description |
|-------|------|-------------|
| `entry_vx` | m/s | Speed at corner entry |
| `apex_vx` | m/s | Speed at corner apex |
| `exit_vx` | m/s | Speed at corner exit |
| `min_vx` | m/s | Minimum speed through corner |
| `ref_apex_vx` | m/s | Reference optimal speed at apex |
| `mean_speed_error` | m/s | Mean (actual − reference) through corner |

#### `DeviationProfile` — per corner

| Field | Unit | Description |
|-------|------|-------------|
| `mean_lateral` | m | Mean signed lateral deviation |
| `max_lateral` | m | Max absolute lateral deviation |
| `rms_lateral` | m | RMS lateral deviation |
| `entry_lateral` | m | Lateral deviation at entry |
| `apex_lateral` | m | Lateral deviation at apex |
| `exit_lateral` | m | Lateral deviation at exit |

#### `RecommendationResult`

| Field | Type | Description |
|-------|------|-------------|
| `corner_id` | int | References `CornerResult.id` |
| `issue_type` | enum | One of 10 defined issue types |
| `confidence` | [0,1] | Model confidence in this recommendation |
| `explanation` | str | Human-readable issue description |
| `recommendation` | str | Actionable coaching instruction |
| `coaching_priority` | enum | `critical / high / medium / low` |
| `severity_score` | [0,1] | Normalised severity of the issue |
| `supporting_metrics` | dict | Numeric values that triggered the rule |

**Possible `issue_type` values**:

```
late_braking       early_braking      understeer_entry    oversteer_exit
wide_entry         wide_exit          apex_miss           low_speed
high_speed_deviation                  inconsistent_line
```

---

## MCAP Bag CLI (`analyze_bag.py`)

**File**: `src/racing_analyzer/analyze_bag.py`

Reads ROS 2 MCAP bag files directly and prints a formatted terminal race report. No server needed.

### Usage

```bash
cd /home/hamza/hackathon_ws

python src/racing_analyzer/analyze_bag.py                          # default bag
python src/racing_analyzer/analyze_bag.py hackathon_fast_laps.mcap
python src/racing_analyzer/analyze_bag.py --all                    # all 3 bags
python src/racing_analyzer/analyze_bag.py --raceline minimum_curvature
```

### MCAP Reading

The script subscribes to the `/constructor0/state_estimation` topic using `mcap_ros2.reader.read_ros2_messages()`. Each message contributes one row:

```
(log_time_seconds, x_m, y_m, yaw_rad, v_mps)
```

All rows are stacked into a `(N, 5)` NumPy array and split into 5 parallel 1D arrays.

### Lap Detection Algorithm

The script auto-detects lap boundaries using a **start/finish zone crossing** strategy, requiring no explicit lap markers in the data:

1. Compute distance of every data point to the S/F reference point (raceline index 0).
2. Find all inward crossings: moments where the vehicle enters the S/F zone (radius = 20 m).
3. Apply the following rules:

| Crossings detected | Result |
|--------------------|--------|
| 0 | Entire bag = one run, labelled "Full bag" |
| 1 | Segment before = "Warm-up lap", segment after = "Timed lap" (if each ≥ 60 s) |
| ≥ 2 | Each consecutive pair of crossings = "Lap N (complete)" |

Segments shorter than 60 s are discarded as incomplete runs.

### Terminal Output

For each detected lap:
- Lap time (s) and path length (m)
- Lateral deviation: mean, RMS, max absolute, 95th percentile
- Speed error: mean, RMS, max absolute
- Heading error: RMS, max absolute
- Corner-by-corner table: type, direction, apex arc-length, max lateral, speed error, severity score
- Top 4 coaching recommendations with priority and actionable text

For multi-bag runs (`--all`), a cross-bag comparison table ranks bags by best lap time.

---

## Real-Time Dashboard (`dashboard_server.py`)

**File**: `dashboard_server.py` (workspace root)

A FastAPI + WebSocket server that replays an MCAP bag in real-time and streams live analysis to a browser dashboard.

### Usage

```bash
cd /home/hamza/hackathon_ws

python dashboard_server.py                              # wheel_to_wheel, 5x speed
python dashboard_server.py --bag hackathon_fast_laps.mcap
python dashboard_server.py --bag hackathon_good_lap.mcap --speed 10
python dashboard_server.py --speed 1                   # real-time (1:1 speed)
```

Open **http://localhost:8050**.

### Endpoints

| Endpoint | Type | Description |
|----------|------|-------------|
| `GET /` | HTTP | Single-page dashboard HTML |
| `GET /static-data` | HTTP | Track geometry, sent once at page load |
| `WS /ws/stream` | WebSocket | Frame-by-frame analysis snapshots |

### `/static-data` Payload

```json
{
  "raceline":      [{"x": ..., "y": ...}, ...],
  "left_boundary": [{"x": ..., "y": ...}, ...],
  "right_boundary":[{"x": ..., "y": ...}, ...],
  "corner_markers":[{"x": ..., "y": ..., "label": "T1", "category": "DOUBLE_APEX", "vx_apex_kmh": 114}],
  "track_length_m": 2968.27,
  "bag_name":       "hackathon_wheel_to_wheel.mcap",
  "optimum_properties": {"lap_length_m": ..., "vx_max_mps": ..., "n_turns": 6}
}
```

### WebSocket Stream Protocol

**1. Ready signal** (once, immediately on connection):
```json
{"type": "ready", "total_frames": 22600, "analysis_step": 11}
```

**2. Snapshot messages** (every `analysis_step` data frames):
```json
{
  "type": "snapshot",
  "schema_version": 1,
  "timestamp_utc": "2026-03-29T14:28:17+00:00",
  "source": {
    "bag": "hackathon_wheel_to_wheel.mcap",
    "raceline": "hybrid",
    "optimum_json": "yas_marina_bnd_hybrid_corner_analysis.json"
  },
  "current_state": {
    "frame": 500,
    "elapsed_s": 5.0,
    "x": -54.795,
    "y": -1.02,
    "speed_mps": 39.914,
    "speed_kmh": 143.7,
    "lateral_deviation_m": -0.687,
    "speed_error_mps": -7.305,
    "heading_error_rad": -1.5505,
    "dist_to_raceline_m": 0.695
  },
  "running_metrics": {
    "lateral_deviation": {
      "mean_m": 0.38,
      "rms_m": 0.62,
      "max_abs_m": 1.01,
      "p95_m": 0.98
    },
    "speed_error": {
      "mean_mps": -4.15,
      "rms_mps": 4.76,
      "max_abs_mps": 7.35
    },
    "heading_error": {
      "rms_deg": 89.9,
      "max_abs_deg": 97.2
    },
    "path_length_m": 168.67,
    "points_analysed": 501
  },
  "corners": [
    {
      "id": 1,
      "label": "Corner 1",
      "type": "medium",
      "direction": "right",
      "apex_s_m": 1116.88,
      "severity_score": 0.0,
      "trajectory_coverage_pct": 0.0,
      "speed_profile": {
        "entry_kmh": 148.0, "apex_kmh": 112.5, "exit_kmh": 140.2,
        "ref_apex_kmh": 118.0, "mean_speed_error_mps": -1.3
      },
      "deviation_profile": {
        "mean_lateral_m": 0.32, "max_lateral_m": 1.1, "rms_lateral_m": 0.54,
        "entry_lateral_m": 0.1, "apex_lateral_m": 0.9, "exit_lateral_m": 0.4
      }
    }
  ],
  "recommendations": [
    {
      "corner_id": 2,
      "corner_label": "Corner 2",
      "issue_type": "apex_miss",
      "priority": "high",
      "confidence": 0.80,
      "severity_score": 0.47,
      "explanation": "Lateral deviation at apex exceeds threshold.",
      "recommendation": "Turn in later and aim for the geometric apex.",
      "supporting_metrics": {"apex_lateral_m": 1.69, "threshold_m": 1.2}
    }
  ],
  "optimum_reference": {
    "corners": [...],
    "recommendations": [...]
  },
  "trajectory_preview": [{"x": ..., "y": ...}]
}
```

**3. Final message** (once, at end of bag):
```json
{"type": "final", ...}
```

### Adaptive Frame Stepping

Analysis is run every `analysis_step` data frames, targeting ~2,000 analysis steps per bag regardless of bag length:

```
analysis_step = max(1, total_frames // 2000)
```

For a 22,600-message bag: `analysis_step = 11`.

Playback timing respects real message timestamps divided by the speed multiplier:

```
sleep_time = (timestamp[frame + step] - timestamp[frame]) / speed_multiplier
```

### Dashboard UI Layout

| Panel | Content |
|-------|---------|
| **Track map** | Plotly scatter: boundaries (grey), optimal raceline (dashed gold), driven trajectory (cyan, growing), current position (red dot), apex markers (yellow diamonds with turn labels) |
| **Metric bar** | Speed (km/h), elapsed time, current lateral deviation (colour-coded green/orange/red), RMS lateral deviation, speed error, point count |
| **Recommendations tab** | Priority-coloured cards per issue with explanation and coaching action |
| **Corners tab** | Per-corner cards with entry/apex/exit speed vs reference, lateral deviation breakdown, severity score |
| **Charts tab** | Live time-series: speed (km/h), lateral deviation and speed error (last 600 samples) |
| **JSON tab** | Full structured JSON snapshot of the current analysis state, updated each frame |

---

## ROS 2 Adapter

**File**: `src/racing_analyzer/racing_analyzer/ros2_adapter.py`

A ROS 2 Python node that integrates the pure-Python core into a live ROS 2 system, enabling real-time streaming analysis.

**Subscriptions**:

| Topic | Message Type | Description |
|-------|-------------|-------------|
| `/constructor0/state_estimation` | `StateEstimation` | Vehicle position, heading, speed at 100 Hz |

**Publications**:

| Topic | Message Type | Description |
|-------|-------------|-------------|
| `/racing/driven_path` | `nav_msgs/Path` | Full driven path history |
| `/racing/lateral_deviation` | `std_msgs/Float64` | Current signed lateral deviation (m) |
| `/racing/speed_error` | `std_msgs/Float64` | Current speed error (m/s) |
| `/racing/raceline_markers` | `visualization_msgs/MarkerArray` | Reference raceline for RViz |

The ROS 2 adapter uses the identical `Raceline` object and `_compute_per_point_metrics()` function as the HTTP API — no business logic is duplicated.

---

## Numeric Constants & Thresholds

All tunable parameters in one place:

### Corner Detection

| Parameter | Default | Unit | Meaning |
|-----------|---------|------|---------|
| `curvature_threshold` | `0.02` | 1/m | Points with |κ| ≥ this are "in corner" (≡ radius ≤ 50 m) |
| `min_corner_length` | `10.0` | m | Segments shorter than this are discarded |
| Hairpin threshold | `0.08` | 1/m | max |κ| ≥ 0.08 → hairpin (radius ≤ 12.5 m) |
| Medium threshold | `0.04` | 1/m | max |κ| ≥ 0.04 → medium (radius ≤ 25 m) |

### Recommendation Thresholds

| Rule | Threshold | Unit |
|------|-----------|------|
| Apex miss | `1.2` | m lateral deviation at apex |
| Wide entry | `1.5` | m lateral deviation at entry |
| Wide exit | `1.5` | m lateral deviation at exit |
| Early braking | `−3.0` | m/s mean speed error |
| High speed | `+3.0` | m/s mean speed error |

### Severity Calculation

| Parameter | Value | Purpose |
|-----------|-------|---------|
| Lateral severity divisor | `3.0` m | `lat_sev = min(1, max_lat / 3.0)` |
| Speed severity divisor | `10.0` m/s | `spd_sev = min(1, \|spd_err\| / 10.0)` |
| Lateral weight in corner severity | `0.6` | 60% of corner severity |
| Speed weight in corner severity | `0.4` | 40% of corner severity |
| Minimum corner coverage | `0.05` | fraction; profiles only generated if ≥ 5% covered |

### Priority Thresholds

| Severity ≥ | Priority |
|------------|----------|
| 0.65 | `critical` |
| 0.35 | `high` |
| 0.20 | `medium` |
| < 0.20 | `low` |

### Lap Detection (CLI)

| Parameter | Value | Unit |
|-----------|-------|------|
| S/F zone radius | `20.0` | m |
| Minimum lap duration | `60.0` | s |

### Numerical Stability

| Parameter | Value | Purpose |
|-----------|-------|---------|
| Tangent normalisation epsilon | `1e-12` | Added to norms to prevent division by zero |

---

## Running the System

### 1. Terminal Race Report (no dependencies beyond Python)

```bash
cd /home/hamza/hackathon_ws
python src/racing_analyzer/analyze_bag.py hackathon_fast_laps.mcap
python src/racing_analyzer/analyze_bag.py --all
python src/racing_analyzer/analyze_bag.py --raceline minimum_curvature
```

### 2. Real-Time Browser Dashboard

```bash
cd /home/hamza/hackathon_ws
python dashboard_server.py                                   # 5x replay speed
python dashboard_server.py --bag hackathon_fast_laps.mcap --speed 20
python dashboard_server.py --speed 1                         # real-time
```

Open **http://localhost:8050** in a browser.

### 3. HTTP API Server

```bash
cd /home/hamza/hackathon_ws/src/racing_analyzer
uvicorn app.main:app --host 0.0.0.0 --port 8000 --reload
```

Docs: **http://localhost:8000/docs**

```bash
# Test health
curl http://localhost:8000/health

# Analyse corners from raceline only
curl -X POST http://localhost:8000/analyze-corners \
  -H "Content-Type: application/json" \
  -d '{"track_name": "Yas Marina", "raceline": [...]}'
```

### 4. ROS 2 Node

```bash
ros2 run racing_analyzer path_publisher
```

---

## Dependencies

| Package | Purpose |
|---------|---------|
| `numpy` | All array math and core computation |
| `scipy` | KDTree for O(log N) nearest-point queries |
| `pandas` | Reading raceline CSV files |
| `pydantic` | Request/response schema validation |
| `fastapi` | HTTP API and WebSocket server |
| `uvicorn` | ASGI server for FastAPI |
| `mcap-ros2-reader` | Reading ROS 2 MCAP bag files |
| `rclpy` | ROS 2 client library (optional, for ROS adapter only) |

The `app/core/` layer only requires `numpy` and `scipy`. All other dependencies are interface-level concerns. The core modules can be imported and called independently of any server or ROS environment.
