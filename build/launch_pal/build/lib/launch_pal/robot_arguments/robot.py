# Copyright (c) 2023 PAL Robotics S.L. All rights reserved.
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
from launch.actions import DeclareLaunchArgument as DLA
from typing import Optional
from ament_index_python.packages import get_package_share_directory
import yaml


def create_robot_arg(arg_name: str, robot_name: Optional[str] = None) -> DLA:

    pkg_dir = get_package_share_directory("launch_pal")

    if not robot_name:
        robot_name = 'robot'

    config_file = f"{pkg_dir}/config/{robot_name}_configuration.yaml"

    configurations_raw = yaml.load(open(config_file), Loader=yaml.FullLoader)[
        f"{robot_name}_configuration"]

    if arg_name not in configurations_raw.keys():
        raise KeyError(
            f"Robot argument {arg_name} does not seem to exist in config {config_file}")

    description = configurations_raw[arg_name]['description']
    default_value = None
    choices = None

    if robot_name != 'robot':
        default_value = configurations_raw[arg_name]['default_value']
        choices = configurations_raw[arg_name]['choices']

    return DLA(name=arg_name,
               description=description,
               default_value=default_value,
               choices=choices)


@dataclass(frozen=True)
class RobotArgs:
    """This dataclass contains general launch arguments for PAL robots."""

    base_type: DLA = create_robot_arg('base_type')
    arm_type: DLA = create_robot_arg('arm_type')
    arm_type_right: DLA = create_robot_arg('arm_type_right')
    arm_type_left: DLA = create_robot_arg('arm_type_left')
    end_effector: DLA = create_robot_arg('end_effector')
    end_effector_right: DLA = create_robot_arg('end_effector_right')
    end_effector_left: DLA = create_robot_arg('end_effector_left')
    ft_sensor: DLA = create_robot_arg('ft_sensor')
    ft_sensor_right: DLA = create_robot_arg('ft_sensor_right')
    ft_sensor_left: DLA = create_robot_arg('ft_sensor_left')
    wrist_model: DLA = create_robot_arg('wrist_model')
    wrist_model_right: DLA = create_robot_arg('wrist_model_right')
    wrist_model_left: DLA = create_robot_arg('wrist_model_left')
    wheel_model: DLA = create_robot_arg('wheel_model')
    laser_model: DLA = create_robot_arg('laser_model')
    camera_model: DLA = create_robot_arg('camera_model')
    has_screen: DLA = create_robot_arg('has_screen')
    robot_model: DLA = create_robot_arg('robot_model')
