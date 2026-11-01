#!/bin/bash
# prints x y z of a gz model (default Box1)
gz model -m ${1:-Box1} -p 2>/dev/null | grep -A1 'Pose' | tail -1 | tr -d '[]' | awk '{print $1,$2,$3}'
