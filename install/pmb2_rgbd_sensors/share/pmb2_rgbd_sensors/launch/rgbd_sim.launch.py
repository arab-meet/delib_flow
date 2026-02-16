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

from dataclasses import dataclass

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import LoadComposableNodes, Node
from launch_ros.descriptions import ComposableNode

from launch_pal import get_pal_configuration
from launch_pal.arg_utils import LaunchArgumentsBase
from launch_pal.robot_arguments import CommonArgs
from launch_pal.conditions import UnlessNodeRunning


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
    # If the container node already exists, just load the component
    rgbd_container = Node(
        name='rgbd_container',
        namespace=LaunchConfiguration('namespace'),
        package='rclcpp_components',
        executable='component_container',
        emulate_tty=True,
        output='screen',
        condition=UnlessNodeRunning('rgbd_container')
    )

    launch_description.add_action(rgbd_container)

    base_floor_filter = 'base_floor_filter'
    roof_floor_filter = 'roof_floor_filter'

    base_floor_filter_config = get_pal_configuration(
        pkg='pcl_ros',
        node=base_floor_filter,
        ld=launch_description,
        cmdline_args=False,
    )
    roof_floor_filter_config = get_pal_configuration(
        pkg='pcl_ros',
        node=roof_floor_filter,
        ld=launch_description,
        cmdline_args=False,
    )

    point_cloud_filters = LoadComposableNodes(
        target_container='rgbd_container',
        composable_node_descriptions=[
            # Base Floor Filter
            ComposableNode(
                package='pcl_ros',
                plugin='pcl_ros::PipelineFilter',
                name=base_floor_filter,
                namespace=LaunchConfiguration('namespace'),
                parameters=base_floor_filter_config['parameters'],
                remappings=base_floor_filter_config['remappings'],
            ),

            # Roof Floor Filter
            ComposableNode(
                package='pcl_ros',
                plugin='pcl_ros::PipelineFilter',
                name=roof_floor_filter,
                namespace=LaunchConfiguration('namespace'),
                parameters=roof_floor_filter_config['parameters'],
                remappings=roof_floor_filter_config['remappings'],
            ),
        ],
    )

    launch_description.add_action(point_cloud_filters)
