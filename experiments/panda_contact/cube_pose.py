#!/usr/bin/env python3
"""Print the true world position of the cube: x y z. usage: cube_pose.py"""
import re
import subprocess

for _ in range(3):
    try:
        txt = subprocess.run(
            ["gz", "topic", "-e", "-n1", "-t", "/world/panda_world/dynamic_pose/info"],
            capture_output=True,
            text=True,
            timeout=10,
        ).stdout
    except subprocess.TimeoutExpired:
        continue
    for block in txt.split("pose {")[1:]:
        if 'name: "cube"' in block:
            pos = re.search(r"position \{(.*?)\}", block, re.S).group(1)
            d = dict(re.findall(r"(\w): (-?[0-9.e+-]+)", pos))
            print(
                f"{float(d.get('x', 0)):.4f} {float(d.get('y', 0)):.4f} {float(d.get('z', 0)):.4f}"
            )
            raise SystemExit
