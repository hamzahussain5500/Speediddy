#!/usr/bin/env python3
"""
racing_analyzer/path_publisher_node.py

Subscribes to /constructor0/state_estimation and publishes:

  /racing/driven_path          nav_msgs/Path          — accumulated driven path
  /racing/raceline_markers     visualization_msgs/MarkerArray — reference line + boundaries
  /racing/lateral_deviation    std_msgs/Float64       — signed lateral error (m)
  /racing/speed_error          std_msgs/Float64       — actual - reference speed (m/s)

Run alongside:
  ros2 bag play hackathon_wheel_to_wheel.mcap --clock
"""

import json
from pathlib import Path

import numpy as np
import pandas as pd
from scipy.spatial import KDTree

import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, DurabilityPolicy, ReliabilityPolicy

from std_msgs.msg import Float64, Header
from geometry_msgs.msg import PoseStamped, Point
from nav_msgs.msg import Path as NavPath
from visualization_msgs.msg import Marker, MarkerArray
from sd_localization_msgs.msg import StateEstimation

# ---------------------------------------------------------------------------
# Default data paths (override via ROS parameters)
# ---------------------------------------------------------------------------
_WS_ROOT = Path(__file__).resolve().parents[3]   # …/hackathon_ws
_RACELINE_CSV     = _WS_ROOT / 'raceline_hybrid.csv'
_BOUNDARIES_JSON  = _WS_ROOT / 'yas_marina_bnd.json'
_STATE_TOPIC      = '/constructor0/state_estimation'
_MAP_FRAME        = 'map'


class PathPublisher(Node):

    def __init__(self):
        super().__init__('path_publisher')

        # ---- parameters (can be overridden on CLI with --ros-args -p key:=val) ----
        self.declare_parameter('raceline_csv',    str(_RACELINE_CSV))
        self.declare_parameter('boundaries_json', str(_BOUNDARIES_JSON))
        self.declare_parameter('map_frame',       _MAP_FRAME)
        self.declare_parameter('state_topic',     _STATE_TOPIC)

        raceline_csv    = self.get_parameter('raceline_csv').value
        boundaries_json = self.get_parameter('boundaries_json').value
        self.map_frame  = self.get_parameter('map_frame').value
        state_topic     = self.get_parameter('state_topic').value

        # ---- load reference data ----
        self.get_logger().info(f'Loading raceline: {raceline_csv}')
        self._load_raceline(raceline_csv)

        self.get_logger().info(f'Loading boundaries: {boundaries_json}')
        self._load_boundaries(boundaries_json)

        # ---- driven path accumulator ----
        self._driven_path = NavPath()
        self._driven_path.header.frame_id = self.map_frame

        # ---- latched QoS for static markers (boundaries + raceline) ----
        latched_qos = QoSProfile(
            depth=1,
            durability=DurabilityPolicy.TRANSIENT_LOCAL,
            reliability=ReliabilityPolicy.RELIABLE,
        )

        # ---- publishers ----
        self._pub_path     = self.create_publisher(NavPath,      '/racing/driven_path',       10)
        self._pub_lat_dev  = self.create_publisher(Float64,      '/racing/lateral_deviation',  10)
        self._pub_spd_err  = self.create_publisher(Float64,      '/racing/speed_error',        10)
        self._pub_markers  = self.create_publisher(MarkerArray,  '/racing/raceline_markers', latched_qos)

        # ---- subscriber ----
        self._sub = self.create_subscription(
            StateEstimation,
            state_topic,
            self._state_cb,
            10,
        )

        # Publish static markers once after a short delay so RViz has time to subscribe
        self.create_timer(0.5, self._publish_static_markers_once)

        self.get_logger().info('PathPublisher ready — waiting for state_estimation messages.')

    # ------------------------------------------------------------------
    # Reference data loading
    # ------------------------------------------------------------------

    def _load_raceline(self, csv_path: str):
        df = pd.read_csv(csv_path)
        self._rl_x  = df['x'].to_numpy()
        self._rl_y  = df['y'].to_numpy()
        self._rl_vx = df['vx'].to_numpy()
        pts = np.column_stack([self._rl_x, self._rl_y])
        self._rl_tree = KDTree(pts)

        # Pre-compute unit tangents for signed lateral deviation
        dx = np.diff(self._rl_x, append=self._rl_x[-1] - self._rl_x[-2])
        dy = np.diff(self._rl_y, append=self._rl_y[-1] - self._rl_y[-2])
        norms = np.hypot(dx, dy) + 1e-9
        self._rl_tx = dx / norms
        self._rl_ty = dy / norms

        self.get_logger().info(f'  {len(self._rl_x)} raceline points loaded')

    def _load_boundaries(self, json_path: str):
        with open(json_path) as f:
            data = json.load(f)
        self._left_bnd  = np.array(data['boundaries']['left_border'])
        self._right_bnd = np.array(data['boundaries']['right_border'])
        self.get_logger().info(
            f'  left={len(self._left_bnd)} pts  right={len(self._right_bnd)} pts'
        )

    # ------------------------------------------------------------------
    # Static markers (raceline + boundaries) — published once, latched
    # ------------------------------------------------------------------

    def _publish_static_markers_once(self):
        """Called once 0.5 s after startup; timer is then cancelled."""
        now = self.get_clock().now().to_msg()
        ma = MarkerArray()
        ma.markers.append(self._make_line_marker(
            self._rl_x, self._rl_y, now,
            marker_id=0, ns='raceline',
            r=1.0, g=0.6, b=0.0, a=0.9,   # orange
            scale=0.4,
        ))
        ma.markers.append(self._make_line_marker(
            self._left_bnd[:, 0], self._left_bnd[:, 1], now,
            marker_id=1, ns='boundaries',
            r=0.2, g=0.8, b=0.2, a=0.8,   # green
            scale=0.25,
        ))
        ma.markers.append(self._make_line_marker(
            self._right_bnd[:, 0], self._right_bnd[:, 1], now,
            marker_id=2, ns='boundaries',
            r=0.8, g=0.2, b=0.2, a=0.8,   # red
            scale=0.25,
        ))
        self._pub_markers.publish(ma)
        self.get_logger().info('Static markers published (raceline + boundaries).')
        # Cancel self so this only fires once
        self._static_timer.cancel()

    def _make_line_marker(self, xs, ys, stamp, *, marker_id, ns,
                          r, g, b, a, scale) -> Marker:
        m = Marker()
        m.header.frame_id = self.map_frame
        m.header.stamp = stamp
        m.ns = ns
        m.id = marker_id
        m.type = Marker.LINE_STRIP
        m.action = Marker.ADD
        m.scale.x = scale
        m.color.r = r
        m.color.g = g
        m.color.b = b
        m.color.a = a
        m.pose.orientation.w = 1.0
        m.lifetime.sec = 0   # forever
        for x, y in zip(xs, ys):
            p = Point()
            p.x = float(x)
            p.y = float(y)
            p.z = 0.0
            m.points.append(p)
        return m

    # ------------------------------------------------------------------
    # State estimation callback
    # ------------------------------------------------------------------

    def _state_cb(self, msg: StateEstimation):
        stamp = msg.header.stamp
        x = msg.x_m
        y = msg.y_m
        v = msg.v_mps

        # ---- 1. Append to driven path ----
        ps = PoseStamped()
        ps.header.stamp = stamp
        ps.header.frame_id = self.map_frame
        ps.pose.position.x = x
        ps.pose.position.y = y
        ps.pose.position.z = 0.0
        # Encode yaw in quaternion (z-up)
        half_yaw = msg.yaw_rad * 0.5
        import math
        ps.pose.orientation.z = math.sin(half_yaw)
        ps.pose.orientation.w = math.cos(half_yaw)
        self._driven_path.poses.append(ps)
        self._driven_path.header.stamp = stamp

        # ---- 2. Nearest raceline point ----
        dist, idx = self._rl_tree.query([x, y])
        tx = self._rl_tx[idx]
        ty = self._rl_ty[idx]
        dx = x - self._rl_x[idx]
        dy = y - self._rl_y[idx]
        # signed lateral: cross product of tangent × vec_to_car
        signed_lat = tx * dy - ty * dx

        # ---- 3. Speed error ----
        v_ref = self._rl_vx[idx]
        speed_err = v - v_ref

        # ---- 4. Publish ----
        self._pub_path.publish(self._driven_path)

        lat_msg = Float64()
        lat_msg.data = float(signed_lat)
        self._pub_lat_dev.publish(lat_msg)

        spd_msg = Float64()
        spd_msg.data = float(speed_err)
        self._pub_spd_err.publish(spd_msg)

    # ------------------------------------------------------------------
    # Timer wiring (we need to store the timer ref for cancel())
    # ------------------------------------------------------------------

    def create_timer(self, period, callback):
        timer = super().create_timer(period, callback)
        # Store reference so _publish_static_markers_once can cancel it
        self._static_timer = timer
        return timer


def main(args=None):
    rclpy.init(args=args)
    node = PathPublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
