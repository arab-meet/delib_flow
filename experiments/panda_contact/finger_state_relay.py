#!/usr/bin/env python3
"""Republish the Panda's finger joints under the names CheckGraspFromFingers looks for."""
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState

NAMES = {
    "panda_finger_joint1": "gripper_left_finger_joint",
    "panda_finger_joint2": "gripper_right_finger_joint",
}


class Relay(Node):
    def __init__(self):
        super().__init__("finger_state_relay")
        self.pub = self.create_publisher(JointState, "/finger_states", 10)
        self.create_subscription(JointState, "/joint_states", self.cb, 10)

    def cb(self, msg):
        out = JointState(header=msg.header)
        for name, pos in zip(msg.name, msg.position):
            if name in NAMES:
                out.name.append(NAMES[name])
                out.position.append(pos)
        self.pub.publish(out)


rclpy.init()
rclpy.spin(Relay())
