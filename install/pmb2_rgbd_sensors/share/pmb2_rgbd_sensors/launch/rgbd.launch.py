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
from launch.actions import DeclareLaunchArgument, OpaqueFunction
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import LoadComposableNodes, Node
from launch_ros.descriptions import ComposableNode

from launch_pal import get_pal_configuration
from launch_pal.arg_utils import LaunchArgumentsBase, read_launch_argument
from launch_pal.robot_arguments import CommonArgs
from launch_pal.conditions import UnlessNodeRunning
from pmb2_description.launch_arguments import PMB2Args


@dataclass(frozen=True)
class LaunchArguments(LaunchArgumentsBase):
    namespace: DeclareLaunchArgument = CommonArgs.namespace
    camera_model: DeclareLaunchArgument = PMB2Args.camera_model


def generate_launch_description():

    # Create the launch description and populate
    ld = LaunchDescription()
    launch_arguments = LaunchArguments()

    launch_arguments.add_to_launch_description(ld)

    declare_actions(ld, launch_arguments)

    return ld


def driver(context, launch_description):
    actions = []
    camera_model = read_launch_argument('camera_model', context)

    base_camera_node = 'base_rgbd_camera'
    roof_camera_node = 'roof_rgbd_camera'

    if camera_model in ['structure']:
        base_proc_node = 'base_rgbd_camera_proc'
        roof_proc_node = 'roof_rgbd_camera_proc'

        base_camera_config = get_pal_configuration(
            pkg='structure_camera_cfg',
            node=base_camera_node,
            ld=launch_description,
            cmdline_args=False,
        )
        base_camera_proc_config = get_pal_configuration(
            pkg='structure_camera_cfg',
            node=base_proc_node,
            ld=launch_description,
            cmdline_args=False,
        )
        roof_camera_config = get_pal_configuration(
            pkg='structure_camera_cfg',
            node=roof_camera_node,
            ld=launch_description,
            cmdline_args=False,
        )
        roof_camera_proc_config = get_pal_configuration(
            pkg='structure_camera_cfg',
            node=roof_proc_node,
            ld=launch_description,
            cmdline_args=False,
        )

        depth_image_proc = LoadComposableNodes(
            target_container='rgbd_container',
            composable_node_descriptions=[
                # Base - Camera Driver
                ComposableNode(
                    package='openni2_camera',
                    plugin='openni2_wrapper::OpenNI2Driver',
                    name=base_camera_node,
                    namespace=LaunchConfiguration('namespace'),
                    parameters=base_camera_config['parameters'],
                    remappings=base_camera_config['remappings'],
                ),
                # Base - Convert Depth image to PointCloud
                ComposableNode(
                    package='astra_camera',
                    plugin='astra_camera::PointCloudXyzNode',
                    name=base_proc_node,
                    namespace=LaunchConfiguration('namespace'),
                    parameters=base_camera_proc_config['parameters'],
                    remappings=base_camera_proc_config['remappings'],
                ),
                # Roof - Camera Driver
                ComposableNode(
                    package='openni2_camera',
                    plugin='openni2_wrapper::OpenNI2Driver',
                    name=roof_camera_node,
                    namespace=LaunchConfiguration('namespace'),
                    parameters=roof_camera_config['parameters'],
                    remappings=roof_camera_config['remappings'],
                ),
                # Roof - Convert Depth image to PointCloud
                ComposableNode(
                    package='astra_camera',
                    plugin='astra_camera::PointCloudXyzNode',
                    name=roof_proc_node,
                    namespace=LaunchConfiguration('namespace'),
                    parameters=roof_camera_proc_config['parameters'],
                    remappings=roof_camera_proc_config['remappings'],
                ),
            ],
        )
        actions.append(depth_image_proc)
    elif camera_model in ['realsense-d435', 'realsense-d435i', 'realsense-d455']:
        base_camera_config = get_pal_configuration(
            pkg='realsense_camera_cfg',
            node=base_camera_node,
            ld=launch_description,
            cmdline_args=False,
        )
        roof_camera_config = get_pal_configuration(
            pkg='realsense_camera_cfg',
            node=roof_camera_node,
            ld=launch_description,
            cmdline_args=False,
        )
        camera_components = LoadComposableNodes(
            target_container='rgbd_container',
            composable_node_descriptions=[
                # Base - Camera Driver
                ComposableNode(
                    package='realsense2_camera',
                    plugin='realsense2_camera::RealSenseNodeFactory',
                    name=base_camera_node,
                    namespace=LaunchConfiguration('namespace'),
                    parameters=base_camera_config["parameters"],
                    remappings=base_camera_config["remappings"],
                ),
                # Roof - Camera Driver
                ComposableNode(
                    package='realsense2_camera',
                    plugin='realsense2_camera::RealSenseNodeFactory',
                    name=roof_camera_node,
                    namespace=LaunchConfiguration('namespace'),
                    parameters=roof_camera_config["parameters"],
                    remappings=roof_camera_config["remappings"],
                ),
            ],
        )
        actions.append(camera_components)
    else:
        raise ValueError(f"Unsupported base camera model: {camera_model}!")

    if any(
        model in camera_model
        for model in ['realsense-d435', 'realsense-d435i', 'realsense-d455']
    ):
        rgbd_analyzer = Node(
            package='diagnostic_aggregator',
            executable='add_analyzer',
            namespace='stockbot_rgbd_sensors',
            output='screen',
            emulate_tty=True,
            parameters=[
                os.path.join(
                    get_package_share_directory('stockbot_rgbd_sensors'),
                    'config', 'rgbd_analyzers.yaml')],
        )
        actions.append(rgbd_analyzer)

    return actions


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

    rgbd_driver = OpaqueFunction(
        function=driver,
        args=[launch_description],
    )
    launch_description.add_action(rgbd_driver)

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

    rgbd_analyzer = Node(
        package='diagnostic_aggregator',
        executable='add_analyzer',
        namespace='pmb2_rgbd_sensors',
        output='screen',
        emulate_tty=True,
        parameters=[
            os.path.join(
                get_package_share_directory('pmb2_rgbd_sensors'),
                'config', 'rgbd_analyzers.yaml')],
    )
    launch_description.add_action(rgbd_analyzer)
