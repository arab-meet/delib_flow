#!/bin/bash
# Panda on mock hardware: reach goals over a grid through Grab2's BT grabber. N=27.
source /bt_ws/install/setup.bash
OUT=/bt_ws/experiments/results/panda; mkdir -p $OUT
CSV=$OUT/grid.csv; echo "x,y,z,status,wall_s" > $CSV
ros2 launch grab2_controller panda_controllers.launch.py hardware:=mock_components > $OUT/controllers.log 2>&1 &
sleep 12
ros2 launch grab2_planner planning_server.launch.py > $OUT/planner.log 2>&1 &
sleep 12
ros2 launch grab2_bt_grabber reach_object_server.launch.py > $OUT/grabber.log 2>&1 &
sleep 10
for x in 0.3 0.4 0.5; do for y in -0.2 0.0 0.2; do for z in 0.05 0.15 0.25; do
  S=$(date +%s.%N)
  R=$(timeout 60 ros2 action send_goal /reach_object grab2_msgs/action/ReachObject "{target_pose: {header: {frame_id: panda_link0}, pose: {position: {x: $x, y: $y, z: $z}, orientation: {x: 1.0, y: 0.0, z: 0.0, w: 0.0}}}}" 2>&1 | grep -oE 'status: [A-Z]+' | tail -1 | cut -d' ' -f2)
  E=$(date +%s.%N)
  echo "$x,$y,$z,${R:-TIMEOUT},$(python3 -c "print(round($E-$S,2))")" | tee -a $CSV
done; done; done
kill -INT %1 %2 %3 2>/dev/null; sleep 2; exit 0
