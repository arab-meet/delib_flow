#!/bin/bash
# Panda path, mock hardware: does Grab2 run its own demo and its BT grabber on current sources?
source /bt_ws/install/setup.bash
OUT=/bt_ws/experiments/results/panda; mkdir -p $OUT
echo "=== 1. grab2_engine with collect_cubes (the demo the Grab2 README documents)"
timeout -s INT 20 ros2 launch grab2_behavior_tree grab2_engine.launch.py behavior_tree:=collect_cubes jc_action:=/panda_arm_controller/follow_joint_trajectory gc_action:=/panda_hand_controller/gripper_cmd > $OUT/engine_collect_cubes.log 2>&1
echo "rc=$?"; grep -E -i 'error|exception|what\(\)|died|not.*(registered|found)|Tree' $OUT/engine_collect_cubes.log | cut -c1-220 | head -8
echo "=== 2. controllers, MoveIt planner and BT grabber"
ros2 launch grab2_controller panda_controllers.launch.py hardware:=mock_components > $OUT/controllers.log 2>&1 &
sleep 12
ros2 launch grab2_planner planning_server.launch.py > $OUT/planner.log 2>&1 &
sleep 12
ros2 launch grab2_bt_grabber reach_object_server.launch.py > $OUT/grabber.log 2>&1 &
sleep 10
timeout 20 ros2 control list_controllers | cut -c1-90
ros2 action list
echo "=== 3. reach goal on Panda via the BT grabber"
for G in "x: 0.45, y: 0.1, z: 0.3" "x: 0.4, y: -0.15, z: 0.25" "x: 0.5, y: 0.0, z: 0.35" "x: 0.35, y: 0.2, z: 0.3" "x: 0.45, y: -0.1, z: 0.2"; do
  S=$(date +%s.%N)
  timeout 90 ros2 action send_goal /reach_object grab2_msgs/action/ReachObject "{target_pose: {header: {frame_id: panda_link0}, pose: {position: {$G}, orientation: {x: 1.0, y: 0.0, z: 0.0, w: 0.0}}}}" 2>&1 | tail -4 | tr '\n' ' ' | cut -c1-200; echo
  E=$(date +%s.%N); echo "goal [$G] wall=$(python3 -c "print(round($E-$S,1))")"
done
grep -E 'RUNNING -> (SUCCESS|FAILURE)|IDLE -> (SUCCESS|FAILURE)|ERROR' $OUT/grabber.log | sed -E 's/\x1b\[[0-9;]*m//g' | cut -c1-110 | tail -14
kill -INT %1 %2 %3 2>/dev/null; sleep 2
exit 0
