#!/bin/bash
# One independent trial, inside its own container: fresh sim, one mission, ground truth from Gazebo.
# usage: trial.sh <variant> <fault> <p> <seed> <outdir>
VARIANT=$1; FAULT=$2; P=$3; SEED=$4; OUT=$5
mkdir -p "$OUT"
source /bt_ws/install/setup.bash
EXP=/bt_ws/experiments
ros2 launch tiago_demos tiago_bringup.launch.py headless:=True > "$OUT/bringup.log" 2>&1 &
BRINGUP=$!
ready=0
for i in $(seq 1 90); do
  sleep 3
  n=$(timeout 8 ros2 control list_controllers 2>/dev/null | grep -c active)
  if [ "${n:-0}" -ge 8 ] && grep -q 'Arm tucked' "$OUT/bringup.log" \
     && ros2 action list 2>/dev/null | grep -q navigate_to_pose \
     && ros2 action list 2>/dev/null | grep -q compute_plan_to_target_ik; then ready=1; break; fi
done
READY_T=$((i*3))
python3 $EXP/fault_injector.py --fault "$FAULT" --p "$P" --seed "$SEED" --log "$OUT/fi.jsonl" > "$OUT/fi.log" 2>&1 &
FI=$!
sleep 5
BOX0=$(python3 $EXP/box_pose.py 2>/dev/null)
SIM0=$(timeout 8 ros2 topic echo /clock --once --field clock.sec 2>/dev/null | grep -E '^[0-9]+$' | head -1)
START=$(date +%s.%N)
if [ "$VARIANT" = api ]; then
  ros2 run grab2_bt_grabber bt_engine --ros-args -r __node:=pick_object_server --params-file $(ros2 pkg prefix tiago_grab)/share/tiago_grab/config/grabbers_config.yaml -p tree_file:=$EXP/trees/pick_object_api.xml -p use_sim_time:=true > "$OUT/server.log" 2>&1 &
  sleep 5
  timeout -s INT ${TRIAL_TIMEOUT:-420} python3 $EXP/api_task.py > "$OUT/engine.log" 2>&1
else
LOCATIONS=$EXP/map_locations_exp.yaml timeout -s INT ${TRIAL_TIMEOUT:-420} $EXP/run_tree.sh $EXP/trees/$VARIANT.xml > "$OUT/engine.log" 2>&1
fi
ENGINE_RC=$?
END=$(date +%s.%N)
sleep 3
BOX1=$(python3 $EXP/box_pose.py 2>/dev/null)
SIM1=$(timeout 8 ros2 topic echo /clock --once --field clock.sec 2>/dev/null | grep -E '^[0-9]+$' | head -1)
cat > "$OUT/trial.json" <<JSON
{"variant":"$VARIANT","fault":"$FAULT","p":$P,"seed":$SEED,"ready":$ready,"ready_s":$READY_T,"engine_rc":$ENGINE_RC,
 "box0":"$BOX0","box1":"$BOX1","sim0":"$SIM0","sim1":"$SIM1","wall_start":$START,"wall_end":$END}
JSON
grep -E '\[ERROR\]|process has died' "$OUT/bringup.log" | grep -v tolerances | cut -c1-200 | sort | uniq -c | sort -rn | head -20 > "$OUT/bringup_errors.txt"
sed -E 's/\x1b\[[0-9;]*m//g' -i "$OUT/engine.log"
rm -f "$OUT/bringup.log"
kill -INT $FI $BRINGUP 2>/dev/null
exit 0
