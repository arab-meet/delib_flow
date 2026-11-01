#!/usr/bin/env python3
"""
Failure injection proxy for the DelibFlow experiments.

Sits between the behavior tree and the real action servers. The tree sends goals to
/fi/<stage>. For the configured stage, each goal fails independently with probability p
(seeded, so a trial is reproducible). Everything else is forwarded unchanged.

  planning  goal to /fi/compute_plan_to_target_ik is aborted after 2 s (planner timeout)
  grasp     a closing goal to /fi/gripper really leaves the gripper open, so nothing is held
  nav       goal to /fi/navigate_to_pose is aborted after 2 s (navigation failure)

Every call is appended to --log as one JSON line.
"""
import argparse
import json
import random
import threading
import time

from control_msgs.action import FollowJointTrajectory
from grab2_msgs.action import ComputePlanToTargetIK
from nav2_msgs.action import NavigateToPose
import rclpy
import rclpy.parameter
from rclpy.action import ActionClient, ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node
from trajectory_msgs.msg import JointTrajectoryPoint

ABORT_DELAY_S = 2.0
GRIP_CLOSED_BELOW = 0.03
GRIP_OPEN_POS = 0.04


class Proxy:

    def __init__(self, node, name, action_type, upstream, stage, injector):
        self.node = node
        self.stage = stage
        self.injector = injector
        self.action_type = action_type
        group = ReentrantCallbackGroup()
        self.client = ActionClient(node, action_type, upstream, callback_group=group)
        self.server = ActionServer(
            node,
            action_type,
            name,
            execute_callback=self.execute,
            goal_callback=lambda _: GoalResponse.ACCEPT,
            cancel_callback=lambda _: CancelResponse.ACCEPT,
            callback_group=group,
        )
        self.lock = threading.Lock()

    def execute(self, handle):
        goal = handle.request
        inject = self.injector.roll(self.stage, goal)
        if inject and self.stage in ('planning', 'nav'):
            time.sleep(ABORT_DELAY_S)
            handle.abort()
            return self.action_type.Result()
        if inject and self.stage == 'grasp':
            goal = self.keep_open(goal)
        self.client.wait_for_server(timeout_sec=10.0)
        send = self.client.send_goal_async(goal)
        while not send.done():
            time.sleep(0.01)
        upstream = send.result()
        if not upstream.accepted:
            handle.abort()
            return self.action_type.Result()
        result_future = upstream.get_result_async()
        while not result_future.done():
            if handle.is_cancel_requested:
                upstream.cancel_goal_async()
                handle.canceled()
                return self.action_type.Result()
            time.sleep(0.01)
        wrapped = result_future.result()
        if wrapped.status == 4:  # SUCCEEDED
            handle.succeed()
        elif wrapped.status == 5:  # CANCELED
            handle.canceled()
        else:
            handle.abort()
        return wrapped.result

    @staticmethod
    def keep_open(goal):
        for point in goal.trajectory.points:
            point.positions = [GRIP_OPEN_POS for _ in point.positions]
        return goal


class Injector:

    def __init__(self, fault, p, seed, log_path, clock):
        self.fault = fault
        self.p = p
        self.rng = random.Random(seed)
        self.log = open(log_path, 'a', buffering=1)
        self.clock = clock
        self.lock = threading.Lock()

    def is_grasp_close(self, goal):
        points = goal.trajectory.points
        return bool(points) and all(
            pos < GRIP_CLOSED_BELOW for pos in points[-1].positions
        )

    def roll(self, stage, goal):
        with self.lock:
            eligible = stage == self.fault
            if stage == 'grasp':
                eligible = eligible and self.is_grasp_close(goal)
                if not self.is_grasp_close(goal):
                    return False
            inject = eligible and self.rng.random() < self.p
            self.log.write(
                json.dumps(
                    {
                        'wall': time.time(),
                        'sim': self.clock.now().nanoseconds * 1e-9,
                        'stage': stage,
                        'injected': inject,
                    }
                )
                + '\n'
            )
            return inject


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument(
        '--fault', default='none', choices=['none', 'planning', 'grasp', 'nav']
    )
    ap.add_argument('--p', type=float, default=0.5)
    ap.add_argument('--seed', type=int, default=0)
    ap.add_argument('--log', required=True)
    args = ap.parse_args()

    rclpy.init()
    node = Node(
        'fault_injector',
        parameter_overrides=[
            rclpy.parameter.Parameter('use_sim_time', rclpy.Parameter.Type.BOOL, True)
        ],
    )
    injector = Injector(args.fault, args.p, args.seed, args.log, node.get_clock())
    proxies = [
        Proxy(
            node,
            '/fi/compute_plan_to_target_ik',
            ComputePlanToTargetIK,
            '/compute_plan_to_target_ik',
            'planning',
            injector,
        ),
        Proxy(
            node,
            '/fi/gripper',
            FollowJointTrajectory,
            '/gripper_controller/follow_joint_trajectory',
            'grasp',
            injector,
        ),
        Proxy(
            node,
            '/fi/navigate_to_pose',
            NavigateToPose,
            '/navigate_to_pose',
            'nav',
            injector,
        ),
    ]
    executor = MultiThreadedExecutor(num_threads=8)
    executor.add_node(node)
    node.get_logger().info(f'Injecting fault={args.fault} p={args.p} seed={args.seed}')
    try:
        executor.spin()
    finally:
        del proxies
        rclpy.shutdown()


if __name__ == '__main__':
    main()
