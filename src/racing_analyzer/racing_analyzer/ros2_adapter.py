"""
racing_analyzer/ros2_adapter.py

ROS 2 adapter that wraps the pure-Python compute core.
This is the ONLY file that imports rclpy / ROS messages.
The core (app/core/, app/services/) has zero ROS dependency.

Usage:
    ros2 run racing_analyzer path_publisher
"""

from __future__ import annotations

import math
from pathlib import Path

import numpy as np
import pandas as pd

import rclpy
from rclpy.node import Node
from rclpy.qos import DurabilityPolicy, QoSProfile, ReliabilityPolicy

from geometry_msgs.msg import Point, PoseStamped
from nav_msgs.msg import Path as NavPath
from std_msgs.msg import Float64
from visualization_msgs.msg import Marker, MarkerArray

# sd_localization_msgs is only available in the ROS env
from sd_localization_msgs.msg import StateEstimation  # type: ignore[import]

# ---- Pure-Python core (no ROS) ----
from app.core.geometry import Raceline
from app.models.inputs import BoundaryData, Point2D, RacelinePoint
from app.core.loaders import build_raceline, build_boundaries

import json


_WS_ROOT = Path(__file__).resolve().parents[3]
_RACELINE_CSV = _WS_ROOT / "raceline_hybrid.csv"
_BOUNDARIES_JSON = _WS_ROOT / "yas_marina_bnd.json"
_STATE_TOPIC = "/constructor0/state_estimation"
_MAP_FRAME = "map"


def _load_raceline_from_csv(csv_path: str) -> Raceline:
    df = pd.read_csv(csv_path)
    points = [
        RacelinePoint(
            s=float(row["s"]),
            x=float(row["x"]),
            y=float(row["y"]),
            psi=float(row["psi"]),
            kappa=float(row["kappa"]),
            vx=float(row["vx"]),
            ax=float(row.get("ax", 0.0)),
        )
        for _, row in df.iterrows()
    ]
    return build_raceline(points)


def _load_boundaries_from_json(json_path: str):
    with open(json_path) as f:
        data = json.load(f)
    bd = BoundaryData(
        left=[Point2D(x=p[0], y=p[1]) for p in data["boundaries"]["left_border"]],
        right=[Point2D(x=p[0], y=p[1]) for p in data["boundaries"]["right_border"]],
    )
    return build_boundaries(bd)


class PathPublisherNode(Node):
    """
    ROS 2 node that subscribes to StateEstimation and publishes
    deviation metrics using the pure-Python core for all computation.
    """

    def __init__(self) -> None:
        super().__init__("path_publisher")

        self.declare_parameter("raceline_csv", str(_RACELINE_CSV))
        self.declare_parameter("boundaries_json", str(_BOUNDARIES_JSON))
        self.declare_parameter("map_frame", _MAP_FRAME)
        self.declare_parameter("state_topic", _STATE_TOPIC)

        raceline_csv = self.get_parameter("raceline_csv").value
        boundaries_json = self.get_parameter("boundaries_json").value
        self.map_frame = self.get_parameter("map_frame").value
        state_topic = self.get_parameter("state_topic").value

        self.get_logger().info(f"Loading raceline: {raceline_csv}")
        self._raceline = _load_raceline_from_csv(raceline_csv)

        self.get_logger().info(f"Loading boundaries: {boundaries_json}")
        self._left_bnd, self._right_bnd = _load_boundaries_from_json(boundaries_json)

        self._driven_path = NavPath()
        self._driven_path.header.frame_id = self.map_frame

        latched_qos = QoSProfile(
            depth=1,
            durability=DurabilityPolicy.TRANSIENT_LOCAL,
            reliability=ReliabilityPolicy.RELIABLE,
        )

        self._pub_path = self.create_publisher(NavPath, "/racing/driven_path", 10)
        self._pub_lat_dev = self.create_publisher(Float64, "/racing/lateral_deviation", 10)
        self._pub_spd_err = self.create_publisher(Float64, "/racing/speed_error", 10)
        self._pub_markers = self.create_publisher(MarkerArray, "/racing/raceline_markers", latched_qos)

        self._sub = self.create_subscription(StateEstimation, state_topic, self._state_cb, 10)

        self._static_timer = self.create_timer(0.5, self._publish_static_markers_once)
        self.get_logger().info("PathPublisherNode ready.")

    def _state_cb(self, msg: StateEstimation) -> None:
        stamp = msg.header.stamp
        x, y, v, yaw = msg.x_m, msg.y_m, msg.v_mps, msg.yaw_rad

        # Append to driven path
        ps = PoseStamped()
        ps.header.stamp = stamp
        ps.header.frame_id = self.map_frame
        ps.pose.position.x = x
        ps.pose.position.y = y
        ps.pose.position.z = 0.0
        half_yaw = yaw * 0.5
        ps.pose.orientation.z = math.sin(half_yaw)
        ps.pose.orientation.w = math.cos(half_yaw)
        self._driven_path.poses.append(ps)
        self._driven_path.header.stamp = stamp

        # --- Use pure-Python core for all computation ---
        idx, _ = self._raceline.nearest(x, y)
        signed_lat = self._raceline.signed_lateral(x, y, idx)
        speed_err = float(v - self._raceline.vx[idx])

        self._pub_path.publish(self._driven_path)

        lat_msg = Float64()
        lat_msg.data = float(signed_lat)
        self._pub_lat_dev.publish(lat_msg)

        spd_msg = Float64()
        spd_msg.data = speed_err
        self._pub_spd_err.publish(spd_msg)

    def _publish_static_markers_once(self) -> None:
        now = self.get_clock().now().to_msg()
        ma = MarkerArray()
        ma.markers.append(
            self._make_line_marker(
                self._raceline.x, self._raceline.y, now,
                marker_id=0, ns="raceline",
                r=1.0, g=0.6, b=0.0, a=0.9, scale=0.4,
            )
        )
        ma.markers.append(
            self._make_line_marker(
                self._left_bnd[:, 0], self._left_bnd[:, 1], now,
                marker_id=1, ns="boundaries",
                r=0.2, g=0.8, b=0.2, a=0.8, scale=0.25,
            )
        )
        ma.markers.append(
            self._make_line_marker(
                self._right_bnd[:, 0], self._right_bnd[:, 1], now,
                marker_id=2, ns="boundaries",
                r=0.8, g=0.2, b=0.2, a=0.8, scale=0.25,
            )
        )
        self._pub_markers.publish(ma)
        self.get_logger().info("Static markers published.")
        self._static_timer.cancel()

    def _make_line_marker(
        self, xs, ys, stamp, *, marker_id, ns, r, g, b, a, scale
    ) -> Marker:
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
        m.lifetime.sec = 0
        for x, y in zip(xs, ys):
            p = Point()
            p.x = float(x)
            p.y = float(y)
            p.z = 0.0
            m.points.append(p)
        return m


def main(args=None) -> None:
    rclpy.init(args=args)
    node = PathPublisherNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
