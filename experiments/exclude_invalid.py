#!/usr/bin/env python3
"""Move trials that failed the validity check out of a results dir, keeping them for the record.
usage: exclude_invalid.py <results dir> <excluded dir>. A resumed run_batch.py then repeats those seeds.
"""
import glob
import os
import shutil
import sys

from analyze import load

root, excl = sys.argv[1:3]
os.makedirs(excl, exist_ok=True)
for d in sorted(glob.glob(f'{root}/*/')):
    d = d.rstrip('/')
    name = os.path.basename(d)
    if not os.path.exists(f'{d}/trial.json') or not load(d, 0.10)['valid']:
        target = f'{excl}/{name}'
        n = 2
        while os.path.exists(target):
            target = f'{excl}/{name}.{n}'
            n += 1
        shutil.move(d, target)
        print('excluded', name)
