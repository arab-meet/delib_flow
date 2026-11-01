#!/bin/bash
# Container command: bring up the full stack headless, then log ROS state.
source /bt_ws/install/setup.bash
exec ros2 launch tiago_demos tiago_bringup.launch.py headless:=True "$@"
