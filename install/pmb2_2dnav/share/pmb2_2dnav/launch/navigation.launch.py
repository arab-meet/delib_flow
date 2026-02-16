# Copyright (c) 2025 PAL Robotics S.L. All rights reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import os

from ament_index_python import get_package_share_directory

from dataclasses import dataclass

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

from launch_pal import get_pal_configuration
from launch_pal.arg_utils import LaunchArgumentsBase
from launch_pal.robot_arguments import CommonArgs


@dataclass(frozen=True)
class LaunchArguments(LaunchArgumentsBase):
    namespace: DeclareLaunchArgument = CommonArgs.namespace


def generate_launch_description():

    # Create the launch description and populate
    ld = LaunchDescription()
    launch_arguments = LaunchArguments()

    launch_arguments.add_to_launch_description(ld)

    declare_actions(ld, launch_arguments)

    return ld


def declare_actions(
    launch_description: LaunchDescription, launch_args: LaunchArguments
):
    bt_navigator_node = 'bt_navigator'
    controller_server_node = 'controller_server'
    local_costmap_node = 'local_costmap'
    planner_server_node = 'planner_server'
    global_costmap_node = 'global_costmap'
    behavior_server_node = 'behavior_server'
    smoother_server_node = 'smoother_server'
    waypoint_follower_node = 'waypoint_follower'
    lifecycle_manager_node = 'lifecycle_manager_navigation'

    bt_navigator_config = get_pal_configuration(
        pkg='nav2_bt_navigator',
        node=bt_navigator_node,
        ld=launch_description,
        cmdline_args=['use_sim_time'],
    )
    controller_server_config = get_pal_configuration(
        pkg='nav2_controller',
        node=controller_server_node,
        ld=launch_description,
        cmdline_args=['use_sim_time'],
    )
    local_costmap_config = get_pal_configuration(
        pkg='nav2_controller',
        node=local_costmap_node,
        ld=launch_description,
        cmdline_args=['use_sim_time'],
    )
    planner_server_config = get_pal_configuration(
        pkg='nav2_planner',
        node=planner_server_node,
        ld=launch_description,
        cmdline_args=['use_sim_time'],
    )
    global_costmap_config = get_pal_configuration(
        pkg='nav2_planner',
        node=global_costmap_node,
        ld=launch_description,
        cmdline_args=['use_sim_time'],
    )
    behavior_server_config = get_pal_configuration(
        pkg='nav2_behaviors',
        node=behavior_server_node,
        ld=launch_description,
        cmdline_args=['use_sim_time'],
    )
    smoother_server_config = get_pal_configuration(
        pkg='nav2_smoother',
        node=smoother_server_node,
        ld=launch_description,
        cmdline_args=['use_sim_time'],
    )
    waypoint_follower_config = get_pal_configuration(
        pkg='nav2_waypoint_follower',
        node=waypoint_follower_node,
        ld=launch_description,
        cmdline_args=['use_sim_time'],
    )
    lifecycle_manager_config = get_pal_configuration(
        pkg='nav2_lifecycle_manager',
        node=lifecycle_manager_node,
        ld=launch_description,
        cmdline_args=['use_sim_time'],
    )

    controller_server_config['parameters'].extend(local_costmap_config['parameters'])
    planner_server_config['parameters'].extend(global_costmap_config['parameters'])

    bt_navigator = Node(
        namespace=LaunchConfiguration('namespace'),
        package='nav2_bt_navigator',
        executable='bt_navigator',
        name=bt_navigator_node,
        output='screen',
        emulate_tty=True,
        parameters=bt_navigator_config['parameters'],
        remappings=bt_navigator_config['remappings'],
    )

    launch_description.add_action(bt_navigator)

    controller_server = Node(
        namespace=LaunchConfiguration('namespace'),
        package='nav2_controller',
        executable='controller_server',
        # Do not fully qualify the name otherwise local_costmap parameters
        # will go under the /controller_server node and will not be applied
        # If not fully qualified, parameters will go under /**
        # name=controller_server_node,
        output='screen',
        emulate_tty=True,
        parameters=controller_server_config['parameters'],
        remappings=controller_server_config['remappings'],
    )

    launch_description.add_action(controller_server)

    planner_server = Node(
        namespace=LaunchConfiguration('namespace'),
        package='nav2_planner',
        executable='planner_server',
        # Do not fully qualify the name otherwise global_costmap parameters
        # will go under the /planner_server node and will not be applied.
        # If not fully qualified, parameters will go under /**
        # name=planner_server_node,
        output='screen',
        emulate_tty=True,
        parameters=planner_server_config['parameters'],
        remappings=planner_server_config['remappings'],
    )

    launch_description.add_action(planner_server)

    behavior_server = Node(
        namespace=LaunchConfiguration('namespace'),
        package='nav2_behaviors',
        executable='behavior_server',
        name=behavior_server_node,
        output='screen',
        emulate_tty=True,
        parameters=behavior_server_config['parameters'],
        remappings=behavior_server_config['remappings'],
    )

    launch_description.add_action(behavior_server)

    smoother_server = Node(
        namespace=LaunchConfiguration('namespace'),
        package='nav2_smoother',
        executable='smoother_server',
        name=smoother_server_node,
        output='screen',
        emulate_tty=True,
        parameters=smoother_server_config['parameters'],
        remappings=smoother_server_config['remappings'],
    )

    launch_description.add_action(smoother_server)

    waypoint_follower = Node(
        namespace=LaunchConfiguration('namespace'),
        package='nav2_waypoint_follower',
        executable='waypoint_follower',
        name=waypoint_follower_node,
        output='screen',
        emulate_tty=True,
        parameters=waypoint_follower_config['parameters'],
        remappings=waypoint_follower_config['remappings'],
    )

    launch_description.add_action(waypoint_follower)

    lifecycle_manager = Node(
        namespace=LaunchConfiguration('namespace'),
        package='nav2_lifecycle_manager',
        executable='lifecycle_manager',
        name=lifecycle_manager_node,
        output='screen',
        emulate_tty=True,
        parameters=lifecycle_manager_config['parameters'],
        remappings=lifecycle_manager_config['remappings'],
    )

    launch_description.add_action(lifecycle_manager)

    nav2_analyzer = Node(
        package='diagnostic_aggregator',
        executable='add_analyzer',
        namespace='pmb2_2dnav',
        output='screen',
        emulate_tty=True,
        parameters=[
            os.path.join(
                get_package_share_directory('pmb2_2dnav'), 'config', 'nav2_analyzers.yaml')],
    )
    launch_description.add_action(nav2_analyzer)
