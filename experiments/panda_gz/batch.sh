#!/bin/bash
# 27 fresh-sim picks: 9 cube positions, 3 repeats.
OUT=~/bt_ws/experiments/results/panda_gz; CSV=$OUT/trials.csv; mkdir -p $OUT
[ -f $CSV ] || echo "rep,x,y,status,z0,z1,wall_s,failed_at" > $CSV
for rep in 1 2 3; do for x in 0.35 0.40 0.45; do for y in -0.10 0.00 0.10; do
  id=${rep}_${x}_${y}
  grep -q "^$rep,$x,$y," $CSV && continue
  timeout 200 ~/bt_ws/experiments/dk.sh pandagz "/bt_ws/experiments/panda_gz/run.sh $x $y /bt_ws/experiments/results/panda_gz/$id" > $OUT/$id.txt 2>&1
  docker rm -f delibflow-pandagz >/dev/null 2>&1
  python3 - "$OUT/$id.txt" "$rep" "$x" "$y" >> $CSV <<'PY'
import re,sys
t=open(sys.argv[1]).read(); rep,x,y=sys.argv[2:5]
st=re.search(r'status: ([A-Z]+)',t); st=st.group(1) if st else 'NONE'
m=re.search(r'cube (\S+) (\S+) (\S+) -> (\S+) (\S+) (\S+) wall (\S+)',t)
z0,z1,w=(m.group(3),m.group(6),m.group(7)) if m else ('','','')
done=re.findall(r'\[([^\]]+)\] (?:Execution|Gripping|Planning) SUCCESS',t)
print(f"{rep},{x},{y},{st},{z0},{z1},{w},after:{done[-1] if done else 'none'}")
PY
  rm -f $OUT/$id.bringup.log
done; done; done
echo batch finished
