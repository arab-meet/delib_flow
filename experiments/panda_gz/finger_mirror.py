#!/usr/bin/env python3
"""Mirror the Panda's finger 1 onto finger 2, standing in for the mimic joint Gazebo's DART engine lacks."""
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from std_msgs.msg import Float64MultiArray


class Mirror(Node):

    def __init__(self):
        super().__init__('finger_mirror')
        self.pub = self.create_publisher(
            Float64MultiArray, '/finger2_controller/commands', 10
        )
        self.create_subscription(JointState, '/joint_states', self.cb, 10)

    def cb(self, msg):
        if 'panda_finger_joint1' in msg.name:
            pos = msg.position[msg.name.index('panda_finger_joint1')]
            self.pub.publish(Float64MultiArray(data=[pos]))


rclpy.init()
rclpy.spin(Mirror())
