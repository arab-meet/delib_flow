#!/usr/bin/env python3
"""Compare the pick subtrees that ran in the benchmarks: which leaves carry over, by node type and name, in order.
TIAGo: trees/hierarchical.xml. Panda: panda_contact/trees/hierarchical.xml."""
import difflib
import os
import xml.etree.ElementTree as ET

HERE = os.path.dirname(os.path.abspath(__file__))
CONTROL = {'Sequence', 'RetryUntilSuccessful'}


def leaves(pick):
    return [(e.tag, e.get('name', e.tag)) for e in pick.iter() if e.tag not in CONTROL]


def plan_retries(pick):
    return sum(
        1
        for e in pick.iter('RetryUntilSuccessful')
        if e.find('ComputePlanToTargetIK') is not None
    )


tiago_root = ET.parse(f'{HERE}/trees/hierarchical.xml').getroot()
tiago = next(b for b in tiago_root.iter('BehaviorTree') if b.get('ID') == 'Pick').find(
    'RetryUntilSuccessful'
)
panda = (
    ET.parse(f'{HERE}/panda_contact/trees/hierarchical.xml')
    .getroot()
    .find('BehaviorTree/Sequence/RetryUntilSuccessful')
)
t, p = leaves(tiago), leaves(panda)
for name, pick, seq in (('TIAGo', tiago, t), ('Panda', panda, p)):
    print(
        f"{name}: outer retry {pick.get('num_attempts')}, {plan_retries(pick)} plans retried, {len(seq)} leaves"
    )
    for tag, label in seq:
        print(f'  {tag:24s} {label}')
sm = difflib.SequenceMatcher(a=p, b=t, autojunk=False)
same = sum(b.size for b in sm.get_matching_blocks())
print('\nPanda -> TIAGo:')
for op, i1, i2, j1, j2 in sm.get_opcodes():
    print(f'  {op:8s} {[x[1] for x in p[i1:i2]]} -> {[x[1] for x in t[j1:j2]]}')
print(
    f'\n{same}/{len(p)} Panda leaves ({100 * same / len(p):.0f}%), {same}/{len(t)} TIAGo leaves ({100 * same / len(t):.0f}%) reused in order.'
)
