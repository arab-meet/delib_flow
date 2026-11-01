#!/usr/bin/env python3
"""API-driven baseline for the paper's comparison: a plain task script.

Navigation and manipulation are each one blocking action call, with no retries. Manipulation is the
single pick_object action, so a failure surfaces only as "pick_object failed". Uses the same planner,
controllers and fault injector as the behavior trees.
"""
import sys
import time

from control_msgs.action import FollowJointTrajectory
from geometry_msgs.msg import PoseStamped
from grab2_msgs.action import ReachObject
import math
from nav2_msgs.action import NavigateToPose
import rclpy
import rclpy.parameter
from rclpy.action import ActionClient
from rclpy.duration import Duration
from rclpy.node import Node
from rclpy.time import Time
from sensor_msgs.msg import JointState
from tf2_ros import Buffer, TransformListener
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
import yaml
from ament_index_python.packages import get_package_share_directory

rclpy.init()
node = Node(
    'api_task',
    parameter_overrides=[
        rclpy.parameter.Parameter('use_sim_time', rclpy.Parameter.Type.BOOL, True)
    ],
)
TRAJ = yaml.safe_load(
    open(get_package_share_directory('tiago_grab') + '/config/tiago_positions.yaml')
)['trajectories']


def log(msg):
    print(f'[API] {msg}', flush=True)


def call(name, action_type, goal, timeout=120.0):
    client = ActionClient(node, action_type, name)
    if not client.wait_for_server(timeout_sec=10.0):
        return False
    send = client.send_goal_async(goal)
    rclpy.spin_until_future_complete(node, send, timeout_sec=10.0)
    handle = send.result()
    if handle is None or not handle.accepted:
        return False
    res = handle.get_result_async()
    rclpy.spin_until_future_complete(node, res, timeout_sec=timeout)
    return res.done() and res.result().status == 4


def traj(name):
    t = TRAJ[name]
    jt = JointTrajectory(joint_names=t['joint_names'])
    for p in t['points']:
        pt = JointTrajectoryPoint(positions=p['positions'])
        pt.time_from_start = Duration(seconds=float(p['time_from_start'])).to_msg()
        jt.points.append(pt)
    g = FollowJointTrajectory.Goal()
    g.trajectory = jt
    return g


def nav(x, y, yaw_deg):
    g = NavigateToPose.Goal()
    g.pose.header.frame_id = 'map'
    g.pose.pose.position.x = float(x)
    g.pose.pose.position.y = float(y)
    g.pose.pose.orientation.z = math.sin(math.radians(yaw_deg) / 2)
    g.pose.pose.orientation.w = math.cos(math.radians(yaw_deg) / 2)
    return g


def step(name, ok):
    if not ok:
        log(f'FAILED action: {name}')
        node.get_logger().error('Mission failed!')
        sys.exit(1)
    log(f'ok action: {name}')


buf = Buffer()
TransformListener(buf, node)
gap = {}


def on_js(m):
    if 'gripper_left_finger_joint' in m.name:
        gap['v'] = (
            m.position[m.name.index('gripper_left_finger_joint')]
            + m.position[m.name.index('gripper_right_finger_joint')]
        )


node.create_subscription(JointState, 'joint_states', on_js, 10)

step(
    'arm_ready',
    call(
        '/arm_controller/follow_joint_trajectory',
        FollowJointTrajectory,
        traj('arm_ready_to_grab'),
    ),
)
step('navigate_away', call('/fi/navigate_to_pose', NavigateToPose, nav(-1.0, 1.0, 90)))
step('navigate_table', call('/fi/navigate_to_pose', NavigateToPose, nav(0.0, 0.0, 0)))
step(
    'head_down',
    call(
        '/head_controller/follow_joint_trajectory',
        FollowJointTrajectory,
        traj('head_down'),
    ),
)
end = time.time() + 2.0
while time.time() < end:
    rclpy.spin_once(node, timeout_sec=0.1)
try:
    tf = buf.lookup_transform('base_link', 'Aruco_marker_1', Time())
except Exception as e:  # noqa: B902
    step('lookup_object', False)
    raise e
target = PoseStamped()
target.header = tf.header
target.pose.position.x = tf.transform.translation.x
target.pose.position.y = tf.transform.translation.y
target.pose.position.z = tf.transform.translation.z
# Same top-down orientation as SetTargetUsingTransform
target.pose.orientation.y = math.sin(math.pi / 4)
target.pose.orientation.w = math.cos(math.pi / 4)
g = ReachObject.Goal()
g.target_pose = target
step('pick_object', call('/pick_object', ReachObject, g))
end = time.time() + 1.0
while time.time() < end:
    rclpy.spin_once(node, timeout_sec=0.1)
step('check_grasp', 0.046 <= gap.get('v', 0.0) <= 0.072)
step(
    'torso_up',
    call(
        '/torso_controller/follow_joint_trajectory',
        FollowJointTrajectory,
        traj('torso_up'),
    ),
)
node.get_logger().info('Mission completed successfully!')
print('Mission completed', flush=True)
