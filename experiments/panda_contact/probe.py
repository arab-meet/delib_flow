#!/usr/bin/env python3
"""Tuning aid: log finger positions, efforts and the tool pose at 5 Hz. usage: probe.py <out file>"""
import sys

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
import tf2_ros


class Probe(Node):
    def __init__(self):
        super().__init__(
            "probe",
            parameter_overrides=[
                rclpy.parameter.Parameter(
                    "use_sim_time", rclpy.Parameter.Type.BOOL, True
                )
            ],
        )
        self.out = open(sys.argv[1], "w", buffering=1)
        self.buf = tf2_ros.Buffer()
        self.tl = tf2_ros.TransformListener(self.buf, self)
        self.js = None
        self.create_subscription(JointState, "/joint_states", self.cb, 10)
        self.create_timer(0.2, self.tick)

    def cb(self, msg):
        self.js = msg

    def tick(self):
        if not self.js:
            return
        d = dict(zip(self.js.name, self.js.position))
        e = dict(zip(self.js.name, self.js.effort))
        try:
            t = self.buf.lookup_transform(
                "panda_link0", "panda_tool", rclpy.time.Time()
            ).transform
            p = f"{t.translation.x:.4f} {t.translation.y:.4f} {t.translation.z:.4f} q {t.rotation.x:.3f} {t.rotation.y:.3f} {t.rotation.z:.3f} {t.rotation.w:.3f}"
        except Exception:
            p = "notf"
        t = self.get_clock().now().nanoseconds * 1e-9
        self.out.write(
            f"{t:.1f} f1 {d.get('panda_finger_joint1', 0):.4f} f2 {d.get('panda_finger_joint2', 0):.4f} "
            f"e1 {e.get('panda_finger_joint1', 0):.2f} e2 {e.get('panda_finger_joint2', 0):.2f} tool {p}\n"
        )


rclpy.init()
rclpy.spin(Probe())
