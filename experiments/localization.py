#!/usr/bin/env python3
"""RQ4, the parts a machine can measure: what the mission log names when a mission fails.
usage: localization.py <results dir>

For every failed trial, take the last failure the mission log reports. "Candidates" is how many
execution stages that report leaves open: 1 for a BT leaf or a single-purpose script step, and every
leaf of the pick tree when the script only knows that pick_object failed.
"Right stage" compares the report with the injector's log: the fault's own stage was named, and the
last injected fault was the last thing the injector did to the mission before it ended.
Time to diagnose needs people and is not measured here.
"""
import collections
import glob
import json
import os
import re
import statistics
import sys

from analyze import CONTROL, LINE, load

API_FAIL = re.compile(r'^\[API\] FAILED action: (\S+)')
STAGE = {
    'planning': {'PlanPregrasp', 'PlanGrasp', 'pick_object'},
    'grasp': {'VerifyGrasp', 'check_grasp'},
    'nav': {'ToAway', 'ToTable', 'navigate_away', 'navigate_table'},
}
HERE = os.path.dirname(os.path.abspath(__file__))


def pick_leaves():
    """Leaves of the tree behind the pick_object action in the API baseline."""
    xml = open(f'{HERE}/trees/pick_object_api.xml').read()
    return len(
        re.findall(
            r'<(?!Sequence|BehaviorTree|root|Retry|Fallback|Script|/|\?)(\w+)[ /]', xml
        )
    )


def reported(tdir):
    log = open(f'{tdir}/engine.log', errors='replace').read().splitlines()
    last = None
    for line in log:
        m = API_FAIL.match(line)
        if m:
            last = m[1]
            continue
        m = LINE.match(line)
        if m and m[4] == 'FAILURE' and m[2] not in CONTROL:
            last = m[2]
    return last


def main():
    root = sys.argv[1]
    n_pick = pick_leaves()
    rows = collections.defaultdict(list)
    for d in sorted(glob.glob(f'{root}/*/')):
        d = d.rstrip('/')
        if not os.path.exists(f'{d}/trial.json'):
            continue
        t = load(d, 0.10)
        if not t['valid'] or t['truth']:
            continue
        name = reported(d)
        cand = n_pick if name == 'pick_object' else 1
        calls = (
            [json.loads(x) for x in open(f'{d}/fi.jsonl')]
            if os.path.exists(f'{d}/fi.jsonl')
            else []
        )
        injected = bool(calls) and calls[-1]['injected']
        right = t['fault'] != 'none' and injected and name in STAGE[t['fault']]
        rows[(t['variant'], t['fault'])].append(
            dict(name=name, cand=cand, right=right, injected=injected)
        )
    print(f'Leaves in the pick tree behind pick_object: {n_pick}\n')
    print(
        'variant | fault | failed trials | nothing reported | median candidates | last call was injected | '
        'of those, right stage named | reports'
    )
    print('---|' * 7 + '---')
    out = {}
    for (variant, fault), rs in sorted(rows.items()):
        inj = [r for r in rs if r['injected']]
        names = collections.Counter(r['name'] for r in rs)
        none = sum(r['name'] is None for r in rs)
        med = statistics.median(r['cand'] for r in rs)
        print(
            f"{variant} | {fault} | {len(rs)} | {none} | {med:g} | {len(inj)} | {sum(r['right'] for r in inj)} | "
            f"{dict(names.most_common())}"
        )
        out[f'{variant}/{fault}'] = dict(
            failed=len(rs),
            silent=none,
            median_candidates=med,
            last_injected=len(inj),
            right_stage=sum(r['right'] for r in inj),
            reports=dict(names.most_common()),
        )
    json.dump(out, open(f'{root}/localization.json', 'w'), indent=1, default=str)


if __name__ == '__main__':
    main()
