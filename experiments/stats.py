#!/usr/bin/env python3
"""Two-sided Fisher exact tests on success counts. usage: stats.py <results dir>/summary.json"""
import json
import math
import sys

s = json.load(open(sys.argv[1]))


def fisher(a, b, c, d):
    def p(x):
        return (
            math.comb(a + b, x)
            * math.comb(c + d, a + c - x)
            / math.comb(a + b + c + d, a + c)
        )

    p0 = p(a)
    lo, hi = max(0, a + c - (c + d)), min(a + b, a + c)
    return sum(p(x) for x in range(lo, hi + 1) if p(x) <= p0 * (1 + 1e-9))


PAIRS = [
    ('no_recovery', 'hierarchical'),
    ('no_recovery', 'hierarchical_clear'),
    ('no_recovery', 'flat_retry'),
    ('flat_retry', 'hierarchical'),
    ('flat_retry', 'hierarchical_clear'),
    ('flat_retry9', 'hierarchical'),
    ('flat_retry9', 'hierarchical_clear'),
    ('hierarchical', 'hierarchical_clear'),
    ('api', 'no_recovery'),
    ('api', 'hierarchical'),
    ('api', 'hierarchical_clear'),
]
print('fault | A | B | A success | B success | Fisher p (two-sided, uncorrected)')
print('---|---|---|---|---|---')
for fault in ('none', 'planning', 'grasp', 'nav'):
    for x, y in PAIRS:
        ka, kb = s.get(f'{fault}/{x}'), s.get(f'{fault}/{y}')
        if ka and kb:
            pv = fisher(
                ka['success'],
                ka['n'] - ka['success'],
                kb['success'],
                kb['n'] - kb['success'],
            )
            print(
                f"{fault} | {x} | {y} | {ka['success']}/{ka['n']} | {kb['success']}/{kb['n']} | {pv:.3g}"
            )
