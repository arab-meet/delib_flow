# Copyright (c) 2022 PAL Robotics S.L. All rights reserved.
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
from dataclasses import dataclass
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import GroupAction, OpaqueFunction, SetLaunchConfiguration
from launch_pal.arg_utils import read_launch_argument
from controller_manager.launch_utils import generate_load_controller_launch_description
from launch_pal.arg_utils import LaunchArgumentsBase
from launch.actions import DeclareLaunchArgument
from launch_pal.include_utils import include_scoped_launch_py_description
from launch.substitutions import PythonExpression, LaunchConfiguration
from launch_pal.robot_arguments import CommonArgs
from tiago_description.launch_arguments import TiagoArgs
from launch.conditions import (
    LaunchConfigurationNotEquals,
    IfCondition,
)


@dataclass(frozen=True)
class LaunchArguments(LaunchArgumentsBase):

    base_type: DeclareLaunchArgument = TiagoArgs.base_type
    arm_type: DeclareLaunchArgument = TiagoArgs.arm_type
    end_effector: DeclareLaunchArgument = TiagoArgs.end_effector
    ft_sensor: DeclareLaunchArgument = TiagoArgs.ft_sensor
    use_sim_time: DeclareLaunchArgument = CommonArgs.use_sim_time


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
    # Create the extra configs from the LAs
    pkg_share_folder = get_package_share_directory(
        "tiago_controller_configuration")

    launch_description.add_action(OpaqueFunction(function=create_base_configs))

    # Base controller
    base_controller = GroupAction(
        [
            generate_load_controller_launch_description(
                controller_name="mobile_base_controller",
                controller_params_file=LaunchConfiguration("base_config_file")
            )
        ]
    )

    launch_description.add_action(base_controller)

    joint_state_broadcaster = GroupAction(
        [
            generate_load_controller_launch_description(
                controller_name="joint_state_broadcaster",
                controller_params_file=os.path.join(
                    pkg_share_folder, "config", "joint_state_broadcaster.yaml"
                ),
            )
        ],
    )
    launch_description.add_action(joint_state_broadcaster)

    # IMU sensor broadcaster
    imu_sensor_broadcaster = GroupAction(
        [
            generate_load_controller_launch_description(
                controller_name='imu_sensor_broadcaster',
                controller_params_file=os.path.join(
                    pkg_share_folder, 'config', 'imu_sensor_broadcaster.yaml'))

        ],
    )
    launch_description.add_action(imu_sensor_broadcaster)

    # Torso controller
    torso_controller = GroupAction(
        [
            generate_load_controller_launch_description(
                controller_name="torso_controller",
                controller_params_file=os.path.join(
                    pkg_share_folder, "config", "torso_controller.yaml"
                ),
            )
        ],
    )

    launch_description.add_action(torso_controller)

    # Head controller
    head_controller = GroupAction(
        [
            generate_load_controller_launch_description(
                controller_name="head_controller",
                controller_params_file=os.path.join(
                    pkg_share_folder, "config", "head_controller.yaml"
                ),
            )
        ],
        forwarding=False,
    )

    launch_description.add_action(head_controller)

    # Arm controller
    arm_controller = GroupAction(
        [
            generate_load_controller_launch_description(
                controller_name='arm_controller',
                controller_params_file=os.path.join(
                    pkg_share_folder, 'config', 'arm_controller.yaml'))
        ],
        forwarding=False,
        condition=LaunchConfigurationNotEquals("arm_type", "no-arm"),
    )

    launch_description.add_action(arm_controller)

    # FT Sensor
    ft_sensor_controller = GroupAction(
        [
            generate_load_controller_launch_description(
                controller_name="ft_sensor_controller",
                controller_params_file=os.path.join(
                    pkg_share_folder, "config", "ft_sensor_controller.yaml"
                ),
            )
        ],
        forwarding=False,
        condition=IfCondition(
            PythonExpression(
                [
                    "'",
                    LaunchConfiguration("arm_type"),
                    "' != 'no-arm' and '",
                    LaunchConfiguration("ft_sensor"),
                    "' != 'no-ft-sensor'",
                ]
            )
        ),
    )

    launch_description.add_action(ft_sensor_controller)

    # Configure LA dependant controllers
    launch_description.add_action(OpaqueFunction(
        function=configure_end_effector))

    return


def create_base_configs(context, *args, **kwargs):

    base_type = read_launch_argument("base_type", context)
    base_share_pkg_folder = get_package_share_directory(
        base_type + "_controller_configuration")
    base_config_file = base_share_pkg_folder + "/config/mobile_base_controller.yaml"

    # Create controller type config
    if base_type == "pmb2":
        controller_type = "diff_drive_controller/DiffDriveController"
    else:
        controller_type = "omni_drive_controller/OmniDriveController"

    return [SetLaunchConfiguration("base_config_file", base_config_file)]


def configure_end_effector(context, *args, **kwargs):

    end_effector = read_launch_argument("end_effector", context)
    end_effector_underscore = end_effector.replace('-', '_')

    if (end_effector == 'no-end-effector'):
        return []

    if "robotiq" in end_effector:
        ee_pkg_name = "pal_robotiq_controller_configuration"
        ee_launch_file = "robotiq_gripper_controller.launch.py"
    else:
        ee_pkg_name = f"{end_effector_underscore}_controller_configuration"
        ee_launch_file = f"{end_effector_underscore}_controller.launch.py"

    end_effector_controller = include_scoped_launch_py_description(
        pkg_name=ee_pkg_name,
        paths=['launch', ee_launch_file],
        condition=IfCondition(
            PythonExpression(
                [
                    "'",
                    LaunchConfiguration("arm_type"),
                    "' != 'no-arm'",
                ]
            )
        ),
    )

    return [end_effector_controller]
