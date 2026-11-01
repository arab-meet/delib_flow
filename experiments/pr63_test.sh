#!/bin/bash
# PR 63 as its author intends it: test_world, its new map, pick_and_place_object_example.
OUT=/bt_ws/experiments/results/pr_tests/pr63; mkdir -p $OUT
source /bt_ws/install/setup.bash; source /overlay/ws/install63/local_setup.bash
ros2 launch tiago_demos tiago_bringup.launch.py headless:=True world:=test_world > $OUT/bringup.log 2>&1 &
for i in $(seq 1 80); do sleep 3; n=$(timeout 8 ros2 control list_controllers 2>/dev/null | grep -c active); [ "${n:-0}" -ge 8 ] && grep -q 'Arm tucked' $OUT/bringup.log && break; done
echo "ready after $((i*3)) s, controllers $n"; sleep 5
timeout 15 ros2 topic echo --once --field poses /world/default/dynamic_pose/info 2>/dev/null | head -1 >/dev/null
python3 /bt_ws/experiments/box_pose.py world_template 2>/dev/null; echo "box before"
timeout -s INT ${1:-480} ros2 launch tiago_demos tiago_demo.launch.py tree:=pick_and_place_object_example > $OUT/demo.log 2>&1
echo "demo rc=$?"
python3 /bt_ws/experiments/box_pose.py world_template 2>/dev/null; echo "box after"
sed -E 's/\x1b\[[0-9;]*m//g' $OUT/demo.log | grep -E 'RUNNING -> (FAILURE|SUCCESS)|IDLE -> FAILURE|Mission|died|Failed to load' | sed -E 's/^\[[a-z_0-9-]+\] //' | cut -c1-90 > $OUT/outcome.txt
wc -l $OUT/outcome.txt; tail -14 $OUT/outcome.txt
grep -cE 'RUNNING -> FAILURE|IDLE -> FAILURE' $OUT/outcome.txt
sed -E 's/\x1b\[[0-9;]*m//g' $OUT/bringup.log | grep -E 'Read map' | cut -c1-140
grep -E "ERROR|process has died" $OUT/bringup.log | sed -E "s/\[[0-9.]{10,}\]//" | cut -c1-150 | sort | uniq -c | sort -rn | head -8; rm -f $OUT/bringup.log
