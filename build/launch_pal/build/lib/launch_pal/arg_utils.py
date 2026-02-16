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

from launch import LaunchDescription
from launch.substitutions import LaunchConfiguration
from launch.utilities import perform_substitutions
from launch.actions import DeclareLaunchArgument
from dataclasses import dataclass
import yaml


class LaunchArgCreator:

    def __init__(self) -> None:
        self.launch_arguments = {}

    def from_yaml(self, yaml_file: str) -> dict:
        with open(yaml_file, 'r') as file:
            arg_configurations = yaml.load(file, Loader=yaml.FullLoader)
            try:
                self.launch_arguments = {key: self.dict_to_launch_arg(
                    item, key) for key, item in arg_configurations.items()}
            except Exception as e:
                print(f"Could not parse launch argument from file {yaml_file}")
                print(f"Error: {e}")

    def is_valid_dict(self, launch_dict: dict) -> bool:
        valid_keys = ['description', 'default_value', 'choices']
        key_set = set(launch_dict.keys())

        # Ensure description is in the dictionary and no invalid keys are present
        return ('description' in key_set) and key_set.issubset(valid_keys)

    def dict_to_launch_arg(self, launch_dict: dict, arg_name: str) -> str:

        if not self.is_valid_dict(launch_dict):
            raise ValueError(
                f"Launch argument configuration is not valid for {arg_name}")

        description = launch_dict['description']
        default_value = None
        choices = None
        if 'default_value' in launch_dict.keys():
            default_value = launch_dict['default_value']
        if 'choices' in launch_dict.keys():
            choices = launch_dict['choices']

        return DeclareLaunchArgument(name=arg_name,
                                     description=description,
                                     default_value=default_value,
                                     choices=choices)

    def get_argument(self, arg_name: str) -> DeclareLaunchArgument:
        if arg_name not in self.launch_arguments.keys():
            raise KeyError(
                f"Launch argument {arg_name} does not exist")

        return self.launch_arguments[arg_name]


def parse_launch_args_from_yaml(yaml_file: str) -> LaunchArgCreator:
    launch_args = LaunchArgCreator()
    launch_args.from_yaml(yaml_file)
    return launch_args


@dataclass(frozen=True, kw_only=True)
class LaunchArgumentsBase:
    """This class is a dataclass containing only DeclareLaunchArgument objects."""

    def __init_subclass__(cls, **kwargs):
        annotations = getattr(cls, '__annotations__', {})
        for attr, type_ in annotations.items():
            if not issubclass(type_, DeclareLaunchArgument):
                raise TypeError(
                    f"All attributes in dataclass {cls.__name__} must have type \
                          DeclareLaunchArgument")

    def add_to_launch_description(self, launch_description: LaunchDescription):
        """
        Load a yaml configuration file given by the robot name.

        Parameters
        ----------
        launch_description : LaunchDescription
            The launch description that the Launch Arguments will be added to


        """
        annotations = getattr(self, '__annotations__', {})
        for attr, type_ in annotations.items():
            launch_description.add_action(getattr(self, attr))
        return


def read_launch_argument(arg_name, context):
    """
    Use in Opaque functions to read the value of a launch argument.

    Parameters
    ----------
    arg_name : String
        Name of the launch argument
    context : LaunchContext
        The launch context

    Returns
    -------
    value : String
        The value of the launch argument

    """
    return perform_substitutions(context,
                                 [LaunchConfiguration(arg_name)])
