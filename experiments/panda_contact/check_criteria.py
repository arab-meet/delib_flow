#!/usr/bin/env python3
"""Check the counted Panda trials against PROTOCOL.md. usage: check_criteria.py <results dir> <excluded dir>."""
import collections
import glob
import json
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
from analyze import load  # noqa: E402

root, excl = sys.argv[1:3]
z0 = 0.125
trials = []
for d in sorted(glob.glob(f'{root}/*__*__*/')):
    d = d.rstrip('/')
    t = load(d, 0.10, z0)
    t['name'] = os.path.basename(d)
    t['variant'], t['fault'], _ = t['name'].split('__')
    t['goals'] = [json.loads(line) for line in open(f'{d}/fi.jsonl')]
    trials.append(t)
truth = collections.Counter()
tree = collections.Counter()
for t in trials:
    key = (t['variant'], t['fault'])
    truth[key] += t['truth']
    tree[key] += t['bt_ok']
n_excl = len(os.listdir(excl)) if os.path.isdir(excl) else 0
print(f'Counted trials: {len(trials)}. Excluded: {n_excl}.')
hn, nn = truth[('hierarchical', 'none')], truth[('no_recovery', 'none')]
print(
    f'1. No injection, at least 18 of 20: hierarchical {hn}, no_recovery {nn}: {min(hn, nn) >= 18}'
)
worst = max(abs(truth[k] - tree[k]) for k in truth)
disagree = [t['name'] for t in trials if t['truth'] != t['bt_ok']]
print(
    f'2. Tree count within 1 of ground truth in every condition: largest gap {worst}: {worst <= 1}. Trials that disagree: {disagree}'
)
share = n_excl / (len(trials) + n_excl)
print(f'3. At most 10% excluded: {100 * share:.1f}%: {share <= 0.10}')
print('\nFailures with no injected fault to explain them:')
for t in trials:
    if t['leaf_failures'] != t['injected']:
        print(
            f"  {t['name']}: {t['leaf_failures']} leaf failures, {t['injected']} injected: {t['fail_nodes']}"
        )
for stage in ('planning', 'grasp'):
    goals = [
        g
        for t in trials
        if t['fault'] == stage
        for g in t['goals']
        if g['stage'] == stage
    ]
    print(
        f"\n{stage} goals under {stage} faults: {sum(g['injected'] for g in goals)} of {len(goals)} injected",
        end='',
    )
print()
clean = sum(
    g['stage'] == 'grasp' and not g['injected'] for t in trials for g in t['goals']
)
failed = sum(t['fail_nodes'].count('VerifyGrasp') for t in trials) - sum(
    g['stage'] == 'grasp' and g['injected'] for t in trials for g in t['goals']
)
print(
    f'Gripper closings with no injected fault: {clean}, of which verification failed: {failed}'
)
side = []
for t in trials:
    if t['truth']:
        a, b = [list(map(float, t[k].split()[:2])) for k in ('box0', 'box1')]
        side.append(((a[0] - b[0]) ** 2 + (a[1] - b[1]) ** 2) ** 0.5)
print(
    f'Sideways cube movement in successful trials: mean {1000 * sum(side) / len(side):.1f} mm, max {1000 * max(side):.1f} mm'
)
