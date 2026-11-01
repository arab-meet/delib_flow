#!/usr/bin/env python3
"""Print the true world position of the Aruco box link: x y z. Composes the nested model poses gz reports."""
import re
import subprocess
import sys
import numpy as np


def quat_rot(q, v):
    w, x, y, z = q
    u = np.array([x, y, z])
    return 2 * u.dot(v) * u + (w * w - u.dot(u)) * v + 2 * w * np.cross(u, v)


def field(block, key, names):
    m = re.search(key + r' \{(.*?)\}', block, re.S)
    out = {n: 0.0 for n in names}
    if key == 'orientation':
        out['w'] = 1.0 if not m else 0.0
    if m:
        for n, v in re.findall(r'(\w): (-?[0-9.e+-]+)', m.group(1)):
            out[n] = float(v)
    return out


def box_world(world='mini_world'):
    txt = subprocess.run(
        ['gz', 'topic', '-e', '-n1', '-t', f'/world/{world}/dynamic_pose/info'],
        capture_output=True,
        text=True,
        timeout=15,
    ).stdout
    poses = []
    for b in txt.split('pose {')[1:]:
        n = re.search(r'name: "(.*?)"', b)
        if n and n.group(1) in ('Box1', 'Aruco_box'):
            p = field(b, 'position', 'xyz')
            o = field(b, 'orientation', 'xyzw')
            poses.append(
                (
                    n.group(1),
                    np.array([p['x'], p['y'], p['z']]),
                    (o['w'], o['x'], o['y'], o['z']),
                )
            )
    outer, inner = [e for e in poses if e[0] == 'Box1'][:2]
    pos = outer[1] + quat_rot(outer[2], inner[1])
    return pos


if __name__ == '__main__':
    print(' '.join(f'{v:.3f}' for v in box_world(*sys.argv[1:2])))
