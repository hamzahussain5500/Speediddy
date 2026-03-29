# ---- build stage ----
FROM python:3.11-slim AS builder

WORKDIR /build
COPY requirements.txt .
RUN pip install --no-cache-dir --prefix=/install -r requirements.txt


# ---- runtime stage ----
FROM python:3.11-slim

# Non-root user for security
RUN useradd -m -u 1000 appuser

WORKDIR /app

# Copy installed packages from build stage
COPY --from=builder /install /usr/local

# Copy application source (no ROS files needed)
COPY app/ ./app/

USER appuser

EXPOSE 8000

# Stateless, single-worker by default; scale with --workers in prod
CMD ["uvicorn", "app.main:app", "--host", "0.0.0.0", "--port", "8000"]
