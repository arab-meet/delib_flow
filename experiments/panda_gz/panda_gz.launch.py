import os

from launch import LaunchDescription
from launch.actions import ExecuteProcess, TimerAction
from launch_ros.actions import Node
from moveit_configs_utils import MoveItConfigsBuilder

HERE = '/bt_ws/experiments/panda_gz'


def generate_launch_description():
    urdf = open(os.environ['PANDA_URDF']).read()
    moveit = (
        MoveItConfigsBuilder('moveit_resources_panda')
        .robot_description(file_path='config/panda.urdf.xacro')
        .robot_description_semantic(file_path='config/panda.srdf')
        .trajectory_execution(file_path='config/gripper_moveit_controllers.yaml')
        .planning_pipelines(pipelines=['ompl'])
        .to_moveit_configs()
    ).to_dict()
    moveit['robot_description'] = urdf
    sim = {'use_sim_time': True}
    spawn = [
        Node(
            package='controller_manager',
            executable='spawner',
            parameters=[sim],
            arguments=[
                'joint_state_broadcaster',
                'panda_arm_controller',
                'panda_hand_controller',
                'finger2_controller',
                '-c',
                '/controller_manager',
            ],
        )
    ]
    grabber_params = {
        'action_name': 'reach_object',
        'arm_controller_action': 'panda_arm_controller/follow_joint_trajectory',
        'gripper_controller_action': 'panda_hand_controller/gripper_cmd',
        'tick_frequency': 100,
        'plugins': ['behaviortree_cpp/bt_plugins', 'grab2_behavior_tree/bt_plugins'],
        'use_sim_time': True,
        'tree_file': os.environ.get('PANDA_TREE', f'{HERE}/panda_pick.xml'),
    }
    return LaunchDescription(
        [
            ExecuteProcess(
                cmd=['gz', 'sim', '-r', '-s', os.environ['PANDA_WORLD']],
                output='screen',
            ),
            Node(
                package='ros_gz_bridge',
                executable='parameter_bridge',
                arguments=['/clock@rosgraph_msgs/msg/Clock[gz.msgs.Clock'],
            ),
            Node(
                package='robot_state_publisher',
                executable='robot_state_publisher',
                parameters=[{'robot_description': urdf}, sim],
            ),
            Node(
                package='ros_gz_sim',
                executable='create',
                arguments=['-topic', 'robot_description', '-name', 'panda'],
            ),
            TimerAction(period=5.0, actions=spawn),
            ExecuteProcess(
                cmd=['python3', f'{HERE}/finger_mirror.py'], output='screen'
            ),
            TimerAction(
                period=12.0,
                actions=[
                    Node(
                        package='moveit_ros_move_group',
                        executable='move_group',
                        parameters=[moveit, sim],
                        output='screen',
                    ),
                    Node(
                        package='grab2_planner',
                        executable='grab2_planner_server',
                        name='planner_server',
                        parameters=[moveit, sim],
                        output='screen',
                    ),
                ],
            ),
            TimerAction(
                period=18.0,
                actions=[
                    Node(
                        package='grab2_bt_grabber',
                        executable='bt_engine',
                        name='reach_object',
                        parameters=[grabber_params],
                        output='screen',
                    ),
                ],
            ),
        ]
    )
