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
from launch_ros.actions import ComposableNodeContainer, Node
from launch_ros.descriptions import ComposableNode

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
    laser_node = 'laser'
    pal_laser_filters_node = 'pal_laser_filters'
    dlo_node = 'direct_laser_odometry'
    lifecycle_manager_node = 'lifecycle_manager_laser'

    laser_config = get_pal_configuration(
        pkg='sick_laser_cfg',
        node=laser_node,
        ld=launch_description,
        cmdline_args=False,
    )
    pal_laser_filters_config = get_pal_configuration(
        pkg='pal_laser_filters',
        node=pal_laser_filters_node,
        ld=launch_description,
        cmdline_args=False,
    )
    dlo_config = get_pal_configuration(
        pkg='dlo_ros',
        node=dlo_node,
        ld=launch_description,
        cmdline_args=False,
    )
    lifecycle_manager_config = get_pal_configuration(
        pkg='nav2_lifecycle_manager',
        node=lifecycle_manager_node,
        ld=launch_description,
        cmdline_args=False,
    )

    laser_container = ComposableNodeContainer(
        name='laser_container',
        namespace=LaunchConfiguration('namespace'),
        package='rclcpp_components',
        executable='component_container',
        composable_node_descriptions=[
            # Laser Driver
            ComposableNode(
                namespace=LaunchConfiguration('namespace'),
                package='sick_tim',
                plugin='sick_tim::SickTim5512050001Driver',
                name=laser_node,
                parameters=laser_config['parameters'],
                remappings=laser_config['remappings'],
            ),
            # Laser Filters
            ComposableNode(
                namespace=LaunchConfiguration('namespace'),
                package='pal_laser_filters',
                plugin='pal_laser_filters::ScanFilterChain',
                name=pal_laser_filters_node,
                parameters=pal_laser_filters_config['parameters'],
                remappings=pal_laser_filters_config['remappings'],
            ),
            # Direct Laser Odometry
            ComposableNode(
                namespace=LaunchConfiguration('namespace'),
                package='dlo_ros',
                plugin='dlo::DirectLaserOdometryNode',
                name=dlo_node,
                parameters=dlo_config['parameters'],
                remappings=dlo_config['remappings'],
            ),
            # Nav2 Lifecycle Manager
            ComposableNode(
                namespace=LaunchConfiguration('namespace'),
                package='nav2_lifecycle_manager',
                plugin='nav2_lifecycle_manager::LifecycleManager',
                name=lifecycle_manager_node,
                parameters=lifecycle_manager_config['parameters'],
                remappings=lifecycle_manager_config['remappings'],
            ),
        ],
        output='screen',
    )

    launch_description.add_action(laser_container)

    laser_analyzer = Node(
        package='diagnostic_aggregator',
        executable='add_analyzer',
        namespace='pmb2_laser_sensors',
        output='screen',
        emulate_tty=True,
        parameters=[
            os.path.join(
                get_package_share_directory('pmb2_laser_sensors'),
                'config', 'laser_analyzers.yaml')],
    )
    launch_description.add_action(laser_analyzer)
