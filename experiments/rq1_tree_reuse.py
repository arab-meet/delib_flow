#!/usr/bin/env python3
"""Compare the pick tree each platform actually ships: which leaf instances carry over unchanged.
TIAGo: tiago_grab/behavior_trees/pick_object_bt.xml. Panda: grab2_bt_grabber/behavior_trees/reach_object.xml.
"""
import collections
import difflib
import os
import xml.etree.ElementTree as ET

SRC = os.path.expanduser('~/bt_ws/src/delib_flow')
TIAGO = f'{SRC}/tiago_grab/behavior_trees/pick_object_bt.xml'
PANDA = f'{SRC}/ThirdParty/grab2/grab2_bt_grabber/behavior_trees/reach_object.xml'
CONTROL = {'root', 'BehaviorTree', 'Sequence'}


def leaves(path):
    out = []
    for e in ET.parse(path).getroot().iter():
        if e.tag in CONTROL:
            continue
        out.append((e.tag, e.get('name', e.tag)))
    return out


def control(path):
    return collections.Counter(
        e.tag
        for e in ET.parse(path).getroot().iter()
        if e.tag in CONTROL and e.tag not in ('root', 'BehaviorTree')
    )


t, p = leaves(TIAGO), leaves(PANDA)
print('TIAGo leaves', len(t), 'control', dict(control(TIAGO)))
print('Panda leaves', len(p), 'control', dict(control(PANDA)))
for name, seq in (('TIAGo', t), ('Panda', p)):
    print(f'\n{name}:')
    for tag, label in seq:
        print(f'  {tag:24s} {label}')
sm = difflib.SequenceMatcher(a=[x[0] for x in p], b=[x[0] for x in t], autojunk=False)
same = sum(b.size for b in sm.get_matching_blocks())
print('\nLeaf types in order, Panda -> TIAGo:')
for op, i1, i2, j1, j2 in sm.get_opcodes():
    print(f'  {op:8s} {[x[1] for x in p[i1:i2]]} -> {[x[1] for x in t[j1:j2]]}')
print(
    f'\nPanda to TIAGo: {same}/{len(p)} Panda leaves reused in order ({100 * same / len(p):.0f}%), '
    f'{len(p) - same} changed or removed, {len(t) - same} added on TIAGo.'
)
print(
    f'TIAGo to Panda: {same}/{len(t)} TIAGo leaves reused in order ({100 * same / len(t):.0f}%).'
)
tt = {x[0] for x in t}
pt = {x[0] for x in p}
print(
    f'Leaf node types shared: {sorted(tt & pt)}; TIAGo only: {sorted(tt - pt)}; Panda only: {sorted(pt - tt)}'
)
