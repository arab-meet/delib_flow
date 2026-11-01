#!/bin/bash
# Panda in Gazebo, N picks with a physical cube, one fresh sim per pick.
# usage: run.sh <x> <y> <out>
X=$1; Y=$2; OUT=$3; mkdir -p $(dirname $OUT)
source /bt_ws/install/setup.bash
HERE=/bt_ws/experiments/panda_gz
export PANDA_URDF=/tmp/panda.urdf GZ_SIM_RESOURCE_PATH=/opt/ros/jazzy/share:$GZ_SIM_RESOURCE_PATH
python3 $HERE/make_urdf.py $PANDA_URDF $HERE/ros2_controllers.yaml
export PANDA_WORLD=/tmp/panda_world.sdf
sed "s|<pose>0.4 0 0.125 0 0 0</pose>|<pose>$X $Y 0.125 0 0 0</pose>|" $HERE/panda_world.sdf > $PANDA_WORLD
ros2 launch $HERE/panda_gz.launch.py > $OUT.bringup.log 2>&1 &
for i in $(seq 1 40); do sleep 3; ros2 action list 2>/dev/null | grep -q reach_object && ros2 action list | grep -q compute_plan_to_target_ik && [ "$(timeout 6 ros2 control list_controllers 2>/dev/null | grep -c active)" -ge 4 ] && break; done
echo "ready $((i*3)) s"; sleep 3
pose() { timeout 10 gz topic -e -n1 -t /world/panda_world/dynamic_pose/info 2>/dev/null | python3 -c "
import re,sys
t=sys.stdin.read()
for b in t.split('pose {')[1:]:
    if 'name: \"cube\"' in b:
        m=re.search(r'position \{(.*?)\}',b,re.S).group(1); d=dict(re.findall(r'(\w): (-?[0-9.e+-]+)',m)); print(d.get('x','0'),d.get('y','0'),d.get('z','0'))
"; }
Z0=$(pose)
S=$(date +%s.%N)
# Top-down, with the hand yawed so the fingers close across the cube's faces
timeout 120 ros2 action send_goal /reach_object grab2_msgs/action/ReachObject "{target_pose: {header: {frame_id: panda_link0}, pose: {position: {x: $X, y: $Y, z: 0.125}, orientation: {x: 0.9238795, y: -0.3826834, z: 0.0, w: 0.0}}}}" 2>&1 | grep -E 'status: [A-Z]+' | tail -1
E=$(date +%s.%N)
sleep 2
Z1=$(pose)
echo "cube $Z0 -> $Z1 wall $(python3 -c "print(round($E-$S,1))")"
sed -E 's/\x1b\[[0-9;]*m//g' $OUT.bringup.log | grep -E 'reach_object\]|tolerance|Aborted' | sed -E 's/.*\[reach_object\]: //' | cut -c1-90 | tail -16
kill -INT %1 2>/dev/null; sleep 2; exit 0
