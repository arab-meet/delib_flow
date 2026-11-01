#!/bin/bash
# usage: run_tree.sh <abs tree path> [engine args]
source /bt_ws/install/setup.bash
T=$1; shift; LOC=${LOCATIONS:-config/map_locations.yaml}
exec ros2 run tiago_demos btcpp_engine --ros-args -r __node:=bt_executor -p use_sim_time:=true -p behavior_tree:=$T -p target_locations:=$LOC "$@"
