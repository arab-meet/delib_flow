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

from launch.actions import DeclareLaunchArgument


def get_robot_name(default_robot_name='pmb2'):
    declare_robot_name = DeclareLaunchArgument(
        'robot_name',
        default_value=default_robot_name,
        description='Name of the robot. ',
        choices=['pmb2', 'tiago', 'tiago_dual', 'pmb3', 'ari', 'omni_base', 'tiago_pro'])

    return declare_robot_name


def get_wheel_model(robot):
    if (robot == 'pmb2') or (robot == 'tiago'):
        declare_wheel_model = DeclareLaunchArgument(
            'wheel_model',
            default_value='moog',
            description='Wheel model, ',
            choices=['nadia', 'moog'])

    else:
        raise ValueError('The robot ' + robot +
                         ' has not the argument wheel_model')

    return declare_wheel_model


def get_laser_model(robot):
    if (robot == 'pmb2') or (robot == 'tiago') or (robot == 'pmb3') or (robot == 'omni_base'):
        declare_laser_model = DeclareLaunchArgument(
            'laser_model',
            default_value='sick-571',
            description='Base laser model. ',
            choices=['no-laser', 'sick-571', 'sick-561', 'sick-551', 'hokuyo'])
    elif robot == 'ari':
        declare_laser_model = DeclareLaunchArgument(
            'laser_model',
            default_value='ydlidar-tg15',
            description='Base laser model.',
            choices=['no-laser', 'sick-571', 'ydlidar-tg15', 'ydlidar-tg30'],
        )

    else:
        raise ValueError('The robot ' + robot +
                         ' has not the argument laser_model')

    return declare_laser_model


def get_courier_rgbd_sensors(robot):
    if (robot == 'pmb2'):
        declare_courier_rgbd_sensors = DeclareLaunchArgument(
            'courier_rgbd_sensors',
            default_value='False',
            description='Whether the base has RGBD sensors or not. ',
            choices=['True', 'False'])

    else:
        raise ValueError('The robot ' + robot +
                         ' has not the argument courier_rgbd_sensors')

    return declare_courier_rgbd_sensors


def get_arm(robot):
    if (robot == 'tiago'):
        declare_arm = DeclareLaunchArgument(
            'arm',
            default_value='tiago-arm',
            description='Which type of arm TIAGo has. ',
            choices=['no-arm', 'tiago-arm'])

    else:
        raise ValueError('The robot ' + robot + ' has not the argument arm')

    return declare_arm


def get_wrist_model(robot):
    if (robot == 'tiago'):
        declare_wrist_model = DeclareLaunchArgument(
            'wrist_model',
            default_value='wrist-2010',
            description='Wrist model. ',
            choices=['wrist-2010', 'wrist-2017'])

    else:
        raise ValueError('The robot ' + robot +
                         ' has not the argument wrist_model')

    return declare_wrist_model


def get_end_effector(robot):
    if (robot == 'tiago'):
        declare_end_effector = DeclareLaunchArgument(
            'end_effector',
            default_value='pal-gripper',
            description='End effector model.',
            choices=['pal-gripper', 'pal-hey5', 'custom', 'no-end-effector', 'robotiq-2f-85',
                     'robotiq-2f-140'])

    elif robot == 'ari':
        declare_end_effector = DeclareLaunchArgument(
            'end_effector',
            default_value='no-hand',
            description='End effector model. ',
            choices=['ari-hand', 'no-hand'],  # ARIv2 does not have a hand DoF
        )
    else:
        raise ValueError('The robot ' + robot +
                         ' has not the argument end_effector')

    return declare_end_effector


def get_ft_sensor(robot):
    if (robot == 'tiago'):
        declare_ft_sensor = DeclareLaunchArgument(
            'ft_sensor',
            default_value='schunk-ft',
            description='FT sensor model. ',
            choices=['schunk-ft', 'no-ft-sensor'])

    else:
        raise ValueError('The robot ' + robot +
                         ' has not the argument ft_sensor')

    return declare_ft_sensor


def get_camera_model(robot):
    if (robot == 'tiago'):
        declare_camera_model = DeclareLaunchArgument(
            'camera_model',
            default_value='orbbec-astra',
            description='Head camera model. ',
            choices=['no-camera', 'orbbec-astra', 'orbbec-astra-pro', 'asus-xtion'])
    elif (robot == 'pmb3'):
        declare_camera_model = DeclareLaunchArgument(
            'camera_model',
            default_value='realsense-d435',
            description='Base cameras model',
            choices=['realsense-d435'])
    elif robot == 'ari':
        declare_camera_model = DeclareLaunchArgument(
            'camera_model',
            default_value='realsense-d435',
            description='Head camera model. ',
            choices=['raspi', 'realsense-d435'],
        )
    else:
        raise ValueError('The robot ' + robot +
                         ' has not the argument camera_model')

    return declare_camera_model


def get_robot_model(robot):
    if robot == 'ari':
        declare_robot_model = DeclareLaunchArgument(
            'robot_model',
            default_value='v2',
            description='ARI\'s version. ',
            choices=['v1', 'v2'],
        )
    else:
        raise ValueError('The robot ' + robot +
                         ' has not the argument robot_model')

    return declare_robot_model
