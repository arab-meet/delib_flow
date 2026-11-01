#!/bin/bash
# One Panda trial in its own container: fresh sim, one pick, ground truth from Gazebo.
# usage: trial.sh <variant> <fault> <p> <seed> <outdir>
VARIANT=$1; FAULT=$2; P=$3; SEED=$4; OUT=$5
mkdir -p "$OUT"
source /bt_ws/install/setup.bash
EXP=/bt_ws/experiments; HERE=$EXP/panda_contact
export AMENT_PREFIX_PATH=$HERE/ament:$AMENT_PREFIX_PATH
export GZ_SIM_RESOURCE_PATH=/opt/ros/jazzy/share:$GZ_SIM_RESOURCE_PATH
# The cube's place is a function of the seed
read X Y < <(python3 -c "import random; r=random.Random($SEED); print(f'{r.uniform(0.35,0.45):.3f} {r.uniform(-0.10,0.10):.3f}')")
export PANDA_URDF=/tmp/panda.urdf PANDA_WORLD=/tmp/panda_world.sdf
python3 $HERE/make_urdf.py $PANDA_URDF $HERE/ros2_controllers.yaml
sed "s|<pose>0.4 0 0.125 0 0 0</pose>|<pose>$X $Y 0.125 0 0 0</pose>|" $HERE/panda_world.sdf > $PANDA_WORLD
cat > /tmp/locations.yaml <<YAML
Cube:
  frame_id: panda_link0
  pose: {x: $X, y: $Y, z: 0.125, yaw_deg: 0}
YAML
ros2 launch $HERE/panda_gz.launch.py > "$OUT/bringup.log" 2>&1 &
BRINGUP=$!
ready=0
for i in $(seq 1 40); do
  sleep 3
  n=$(timeout 8 ros2 control list_controllers 2>/dev/null | grep -c active)
  if [ "${n:-0}" -ge 3 ] && ros2 action list 2>/dev/null | grep -q compute_plan_to_target_ik; then ready=1; break; fi
done
READY_T=$((i*3))
python3 $EXP/fault_injector.py --fault "$FAULT" --p "$P" --seed "$SEED" --log "$OUT/fi.jsonl" > "$OUT/fi.log" 2>&1 &
FI=$!
sleep 5
BOX0=$(python3 $HERE/cube_pose.py 2>/dev/null)
SIM0=$(timeout 8 ros2 topic echo /clock --once --field clock.sec 2>/dev/null | grep -E '^[0-9]+$' | head -1)
[ -z "$PROBE" ] || python3 $HERE/probe.py "$OUT/probe.txt" > /dev/null 2>&1 &
START=$(date +%s.%N)
timeout -s INT ${TRIAL_TIMEOUT:-300} ros2 run tiago_demos btcpp_engine --ros-args -r __node:=bt_executor -r joint_states:=/finger_states \
  -p use_sim_time:=true -p behavior_tree:=$HERE/trees/$VARIANT.xml -p target_locations:=/tmp/locations.yaml > "$OUT/engine.log" 2>&1
ENGINE_RC=$?
END=$(date +%s.%N)
sleep 3
BOX1=$(python3 $HERE/cube_pose.py 2>/dev/null)
SIM1=$(timeout 8 ros2 topic echo /clock --once --field clock.sec 2>/dev/null | grep -E '^[0-9]+$' | head -1)
cat > "$OUT/trial.json" <<JSON
{"variant":"$VARIANT","fault":"$FAULT","p":$P,"seed":$SEED,"ready":$ready,"ready_s":$READY_T,"engine_rc":$ENGINE_RC,"cube_x":$X,"cube_y":$Y,
 "box0":"$BOX0","box1":"$BOX1","sim0":"$SIM0","sim1":"$SIM1","wall_start":$START,"wall_end":$END}
JSON
grep -E '\[ERROR\]|process has died' "$OUT/bringup.log" | cut -c1-200 | sort | uniq -c | sort -rn | head -20 > "$OUT/bringup_errors.txt"
sed -E 's/\x1b\[[0-9;]*m//g' -i "$OUT/engine.log"
[ -n "$KEEP_BRINGUP" ] || rm -f "$OUT/bringup.log"
kill -INT $FI $BRINGUP 2>/dev/null
exit 0
