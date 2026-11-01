#!/bin/bash
# Run documented commands end to end: doc_test.sh <world> <tree> <seconds>
W=$1; T=$2; S=$3
OUT=/bt_ws/experiments/results/${OUTD:-doc_test}/${W}__${T}${LOC:+__$LOC}; mkdir -p $OUT
source /bt_ws/install/setup.bash
ros2 launch tiago_demos tiago_bringup.launch.py headless:=True world:=$W > $OUT/bringup.log 2>&1 &
for i in $(seq 1 80); do sleep 3; n=$(timeout 8 ros2 control list_controllers 2>/dev/null | grep -c active); [ "${n:-0}" -ge 8 ] && grep -q 'Arm tucked' $OUT/bringup.log && break; done
echo "ready after $((i*3)) s, controllers $n"; sleep 5
timeout -s INT $S ros2 launch tiago_demos tiago_demo.launch.py tree:=$T ${LOC:+locations:=$LOC} > $OUT/demo.log 2>&1
echo "demo rc=$?"
sed -E 's/\x1b\[[0-9;]*m//g' $OUT/demo.log | grep -E 'RUNNING -> (FAILURE|SUCCESS)|Mission|died|what\(\)|Failed to load' | sed -E 's/^\[[a-z_0-9-]+\] //' | cut -c1-90 | tail -${TAILN:-12}
timeout 10 gz model -m Box1 -p >/dev/null 2>&1
[ "$W" = minimal_world ] && python3 /bt_ws/experiments/box_pose.py
grep -E '\[ERROR\]' $OUT/bringup.log | grep -v -E 'tolerances|costmap' | sed -E 's/\[[0-9.]+\]//' | cut -c1-140 | sort | uniq -c | sort -rn | head -6
exit 0
