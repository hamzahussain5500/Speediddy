# Minimal Raceline Pipeline

A clean, copyable mini-project that takes a JSON track boundary file and generates:
- `raceline_shortest_path.csv`
- `raceline_minimum_curvature.csv`
- `raceline_hybrid.csv`
- `hybrid_blend_weights.csv`
- `reftrack_from_json.csv`
- `plot_raceline_shortest_path.png`
- `plot_raceline_minimum_curvature.png`
- `plot_raceline_hybrid.png`

This project is now **standalone**: it vendors the minimum CommonRoad planner code under `vendor/`.

## 1) Install dependencies

```bash
pip install -r requirements.txt
```

## 2) Run

```bash
python run_raceline_pipeline.py \
  --track-json /absolute/path/to/yas_marina_bnd.json \
  --output-dir ./outputs
```

`--planner-repo` is optional. By default, the script uses vendored planner files in `./vendor`.

## 3) Output format

All raceline CSV files use:

```text
s,x,y,psi,kappa,vx,ax
```

- `s` [m]: cumulative arc-length
- `x,y` [m]: global coordinates
- `psi` [rad]: heading
- `kappa` [1/m]: curvature
- `vx` [m/s]: longitudinal velocity
- `ax` [m/s²]: longitudinal acceleration

## Notes

- Hybrid trajectory blends shortest-path and minimum-curvature by centerline curvature.
- If planner dynamics CSVs are Git LFS pointers, fallback dynamics files are auto-generated in output folder.
- Vendored planner license file is included at `vendor/LICENSE.commonroad-raceline-planner`.
