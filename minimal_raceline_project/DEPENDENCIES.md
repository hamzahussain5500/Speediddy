# Dependency list

## Standard library (no install)
- argparse
- json
- pathlib
- sys
- typing

## Third-party Python packages
- numpy
- scipy
- PyYAML
- trajectory-planning-helpers
- commonroad-io
- cvxpy
- matplotlib
- quadprog
- casadi

## Vendored planner code
- `commonroad_raceline_planner` is vendored inside `vendor/commonroad_raceline_planner`.
- External planner installation is **not required** for normal usage.
- Optional: you can still pass `--planner-repo /path/to/commonroad-raceline-planner` to override vendored code.

## Non-Python data dependency
Planner expects:
- `racecar.ini`
- `ggv.csv`
- `ax_max_machines.csv`
These are vendored under `vendor/scenarios/`.

If `ggv.csv`/`ax_max_machines.csv` are Git LFS pointer files, this script automatically writes fallback dynamics tables unless `--strict-dynamics` is passed.
