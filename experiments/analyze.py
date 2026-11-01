#!/usr/bin/env python3
"""Summarise failure-injection trials. usage: analyze.py <results dir> [--z-lift 0.10] [--z0 0.64]
Success is ground truth from Gazebo: the box link rose at least z-lift above its start height.
"""
import collections
import glob
import json
import math
import os
import re
import sys

CONTROL = {
    'Sequence',
    'SequenceWithMemory',
    'Fallback',
    'RetryUntilSuccessful',
    'ForceFailure',
    'Navigate',
    'Pick',
}
LINE = re.compile(r'^\[(\d+\.\d+)\]: (\S+)\s+(\w+) -> (\w+)')


def wilson(k, n, z=1.96):
    if n == 0:
        return (0.0, 0.0)
    p = k / n
    d = 1 + z * z / n
    c = (p + z * z / (2 * n)) / d
    h = z * math.sqrt(p * (1 - p) / n + z * z / (4 * n * n)) / d
    return (max(0.0, c - h), min(1.0, c + h))


def load(tdir, zlift, z0_nominal=0.64):
    t = json.load(open(f'{tdir}/trial.json'))
    log = (
        open(f'{tdir}/engine.log', errors='replace').read()
        if os.path.exists(f'{tdir}/engine.log')
        else ''
    )
    z0 = float(t['box0'].split()[2]) if t['box0'].strip() else None
    z1 = float(t['box1'].split()[2]) if t['box1'].strip() else None
    t['valid'] = (
        bool(t['ready'])
        and z0 is not None
        and z1 is not None
        and abs(z0 - z0_nominal) < 0.03
    )
    t['truth'] = t['valid'] and z1 - z0 >= zlift
    t['bt_ok'] = 'Mission completed' in log
    t['wall'] = t['wall_end'] - t['wall_start']
    try:
        t['sim'] = float(t['sim1']) - float(t['sim0'])
    except (ValueError, TypeError):
        t['sim'] = None
    ev = [
        (float(m[1]), m[2], m[3], m[4]) for m in map(LINE.match, log.splitlines()) if m
    ]
    fails = [e for e in ev if e[3] == 'FAILURE' and e[1] not in CONTROL]
    t['leaf_failures'] = len(fails)
    t['fail_nodes'] = [e[1] for e in fails]
    t['arm_ready_starts'] = sum(
        1 for e in ev if e[1] == 'ArmReady' and e[3] == 'RUNNING'
    )
    recov = []
    for i, e in enumerate(ev):
        if e[3] == 'FAILURE' and e[1] not in CONTROL:
            for f in ev[i + 1 :]:
                if f[1] == e[1] and f[3] == 'SUCCESS':
                    recov.append(f[0] - e[0])
                    break
    t['recovery'] = recov
    t['injected'] = 0
    t['calls'] = 0
    if os.path.exists(f'{tdir}/fi.jsonl'):
        for line in open(f'{tdir}/fi.jsonl'):
            d = json.loads(line)
            t['calls'] += 1
            t['injected'] += bool(d['injected'])
    return t


def main():
    root = sys.argv[1]
    zlift = (
        float(sys.argv[sys.argv.index('--z-lift') + 1])
        if '--z-lift' in sys.argv
        else 0.10
    )
    z0 = float(sys.argv[sys.argv.index('--z0') + 1]) if '--z0' in sys.argv else 0.64
    cells = collections.defaultdict(list)
    bad = []
    for d in sorted(glob.glob(f'{root}/*/')):
        if not os.path.exists(d + 'trial.json'):
            bad.append((d, 'no trial.json'))
            continue
        t = load(d.rstrip('/'), zlift, z0)
        if t['valid']:
            cells[(t['fault'], t['variant'])].append(t)
        else:
            bad.append(
                (d, f"invalid ready={t['ready']} box0={t['box0']!r} box1={t['box1']!r}")
            )
    print(
        'fault | variant | valid n | success (Gazebo) | 95% CI | BT says success | mean injected | mean leaf failures | '
        'mean restarts | mean recovery s | mean wall s (all) | mean wall s (success)'
    )
    print('---|' * 11 + '---')
    summary = {}
    for (fault, variant), ts in sorted(cells.items()):
        n = len(ts)
        k = sum(t['truth'] for t in ts)
        lo, hi = wilson(k, n)
        rec = [r for t in ts for r in t['recovery']]
        ok = [t['wall'] for t in ts if t['truth']]
        row = dict(
            n=n,
            success=k,
            rate=k / n,
            ci=[lo, hi],
            bt_ok=sum(t['bt_ok'] for t in ts),
            injected=sum(t['injected'] for t in ts) / n,
            leaf=sum(t['leaf_failures'] for t in ts) / n,
            restarts=sum(max(0, t['arm_ready_starts'] - 1) for t in ts) / n,
            recovery=(sum(rec) / len(rec)) if rec else None,
            recovery_n=len(rec),
            wall=sum(t['wall'] for t in ts) / n,
            wall_ok=(sum(ok) / len(ok)) if ok else None,
        )
        summary[f'{fault}/{variant}'] = row
        print(
            f"{fault} | {variant} | {n} | {k}/{n} ({100 * k / n:.0f}%) | {100 * lo:.0f}-{100 * hi:.0f}% | {row['bt_ok']} | "
            f"{row['injected']:.2f} | {row['leaf']:.2f} | {row['restarts']:.2f} | "
            f"{'-' if row['recovery'] is None else format(row['recovery'], '.1f')} | {row['wall']:.0f} | "
            f"{'-' if row['wall_ok'] is None else format(row['wall_ok'], '.0f')}"
        )
    json.dump(summary, open(f'{root}/summary.json', 'w'), indent=1)
    if bad:
        print(f'\nExcluded {len(bad)} trials:')
        for d, why in bad:
            print(' ', os.path.basename(d.rstrip('/')), why)
    names = collections.Counter(
        n for ts in cells.values() for t in ts for n in t['fail_nodes']
    )
    print('\nLeaf failures by node:', dict(names.most_common()))


if __name__ == '__main__':
    main()
