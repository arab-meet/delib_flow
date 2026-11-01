#!/usr/bin/env python3
"""Run trials in parallel, each in its own container on its own Docker network.
usage: run_batch.py --variants a,b --faults x,y --n 10 --slots 3 --tag name [--p 0.5]
Trials with an existing trial.json are skipped, so a batch can be resumed."""
import argparse
import itertools
import os
import queue
import subprocess
import threading

HOME = os.path.expanduser('~')
ap = argparse.ArgumentParser()
ap.add_argument('--variants', required=True)
ap.add_argument('--faults', required=True)
ap.add_argument('--n', type=int, default=10)
ap.add_argument('--slots', type=int, default=3)
ap.add_argument('--p', type=float, default=0.5)
ap.add_argument('--tag', required=True)
ap.add_argument('--slot-base', type=int, default=0)
ap.add_argument('--trial', default='trial.sh', help='trial script under experiments/')
ap.add_argument('--seed-base', type=int, default=0)
a = ap.parse_args()

q = queue.Queue()
for variant, fault, seed in itertools.product(
    a.variants.split(','), a.faults.split(','), range(a.seed_base, a.seed_base + a.n)
):
    tid = f'{variant}__{fault}__{seed:03d}'
    if not os.path.exists(f'{HOME}/bt_ws/experiments/results/{a.tag}/{tid}/trial.json'):
        q.put((variant, fault, seed, tid))
print('trials to run:', q.qsize(), flush=True)


def worker(slot):
    net = f'delibflow-net-{slot}'
    subprocess.run(['docker', 'network', 'create', net], capture_output=True)
    while True:
        try:
            variant, fault, seed, tid = q.get_nowait()
        except queue.Empty:
            return
        out = f'/bt_ws/experiments/results/{a.tag}/{tid}'
        cmd = [
            'timeout',
            '-k',
            '20',
            '700',
            'docker',
            'run',
            '--rm',
            '--init',
            '--name',
            f'delibflow-trial-{slot}',
            '--network',
            net,
            '--gpus',
            'all',
            '--runtime',
            'nvidia',
            '-e',
            'NVIDIA_DRIVER_CAPABILITIES=all',
            '-e',
            f'LOCAL_USER_ID={os.getuid()}',
            '-e',
            'ROS_DOMAIN_ID=25',
            '-e',
            'GZ_PARTITION=delibflow',
            '-e',
            'RCUTILS_COLORIZED_OUTPUT=0',
            '-e',
            'ROS_LOG_DIR=/tmp/roslog',
            '-e',
            'PYTHONUNBUFFERED=1',
            '-e',
            f"PROBE={os.environ.get('PROBE', '')}",
            '-v',
            f'{HOME}/bt_ws/src:/bt_ws/src',
            '-v',
            f'{HOME}/bt_ws/docker_ws/build:/bt_ws/build',
            '-v',
            f'{HOME}/bt_ws/docker_ws/install:/bt_ws/install',
            '-v',
            f'{HOME}/bt_ws/experiments:/bt_ws/experiments',
            'delibflow-ws:jazzy',
            f'/bt_ws/experiments/{a.trial}',
            variant,
            fault,
            str(a.p),
            str(seed),
            out,
        ]
        r = subprocess.run(cmd, capture_output=True, text=True)
        subprocess.run(
            ['docker', 'rm', '-f', f'delibflow-trial-{slot}'], capture_output=True
        )
        print(tid, 'rc', r.returncode, 'left', q.qsize(), flush=True)


threads = [
    threading.Thread(target=worker, args=(s + a.slot_base,)) for s in range(a.slots)
]
[t.start() for t in threads]
[t.join() for t in threads]
print('batch done', flush=True)
