#!/bin/bash
# Stop at the grasp pose, then compare the commanded and actual hand position.
source /bt_ws/install/setup.bash
HERE=/bt_ws/experiments/panda_gz
export PANDA_URDF=/tmp/panda.urdf GZ_SIM_RESOURCE_PATH=/opt/ros/jazzy/share:$GZ_SIM_RESOURCE_PATH PANDA_WORLD=/tmp/w.sdf PANDA_TREE=$HERE/panda_probe.xml
python3 $HERE/make_urdf.py $PANDA_URDF $HERE/ros2_controllers.yaml
sed "s|<pose>0.4 0 0.125 0 0 0</pose>|<pose>0.4 0.5 0.125 0 0 0</pose>|" $HERE/panda_world.sdf > $PANDA_WORLD
ros2 launch $HERE/panda_gz.launch.py > /tmp/b.log 2>&1 &
for i in $(seq 1 40); do sleep 3; ros2 action list 2>/dev/null | grep -q reach_object && ros2 action list | grep -q compute_plan && [ "$(timeout 6 ros2 control list_controllers 2>/dev/null | grep -c active)" -ge 4 ] && break; done
sleep 3
for G in "0.40 -0.10" "0.40 0.00" "0.40 0.10" "0.35 -0.10" "0.35 0.10"; do set -- $G
 R=$(timeout 60 ros2 action send_goal /reach_object grab2_msgs/action/ReachObject "{target_pose: {header: {frame_id: panda_link0}, pose: {position: {x: $1, y: $2, z: 0.125}, orientation: {x: 0.9238795, y: -0.3826834, z: 0.0, w: 0.0}}}}" 2>&1 | grep -oE 'status: [A-Z]+' | tail -1)
 sleep 2
 T=$(timeout 6 ros2 run tf2_ros tf2_echo panda_link0 panda_leftfinger 2>/dev/null | grep -m1 Translation)
 T2=$(timeout 6 ros2 run tf2_ros tf2_echo panda_link0 panda_rightfinger 2>/dev/null | grep -m1 Translation)
 T8=$(timeout 6 ros2 run tf2_ros tf2_echo panda_link0 panda_link8 2>/dev/null | grep -m1 -A1 Translation | tr '\n' ' ')
 echo "cmd $1 $2 $R | link8 $T8 | L $T | R $T2"
done
timeout 5 ros2 topic echo /joint_states --once --field position 2>/dev/null | head -12 | tr '\n' ' '; echo
kill -INT %1; sleep 2; exit 0
