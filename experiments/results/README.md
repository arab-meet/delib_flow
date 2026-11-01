# Experiment results

All numbers here were measured on one workstation (32 cores, 125 GB RAM,
RTX 5090) with other jobs running, so times carry load noise.
Nothing was run on a physical robot; that needs real hardware.

## Failure injection (TIAGo, Gazebo Harmonic)

`failure_injection_p05/`: full mission with 6 execution variants, 4 fault
conditions, p=0.5 per goal, seeds 0-19 shared across variants. 440 trials
count: 20 for each of 22 conditions. Flat retry x9 ran for planning and
navigation only.

- `table.txt`: every condition, from `analyze.py`.
- `tables_summary.txt`, `tables.tex`: the same, from `tables.py`.
- `fisher.txt`: two-sided Fisher exact tests, uncorrected.
- `localization.txt`, `localization.json`: what the log names, from
  `localization.py`.
- `fig_rq2_success.pdf`, `.png`: from `figure_rq2.py`.
- `summary.json`: input to the tables and the figure.

Success is ground truth: the box link rose at least 0.10 m above its start
height in Gazebo. Reproduce with:

```bash
flock ~/.gpu.lock python3 experiments/run_batch.py \
  --variants no_recovery,flat_retry,hierarchical,hierarchical_clear,api \
  --faults none,planning,grasp,nav --n 20 --slots 3 \
  --tag failure_injection_p05
```

```bash
flock ~/.gpu.lock python3 experiments/run_batch.py \
  --variants flat_retry9 --faults planning,nav --n 20 --slots 3 \
  --tag failure_injection_p05
```

```bash
cd experiments
R=results/failure_injection_p05
python3 exclude_invalid.py $R results/failure_injection_p05_excluded
python3 analyze.py $R > $R/table.txt
python3 stats.py $R/summary.json > $R/fisher.txt
python3 localization.py $R > $R/localization.txt
python3 tables.py $R
python3 figure_rq2.py $R $R/fig_rq2_success
```

### What to know before quoting these

- **Exclusions.** 457 trials ran. 17 were excluded by rule and re-run with
  the same seed: 12 where the stack never reported ready, 4 with no trial
  record, and 1 with an unreadable start pose. The rule does not look at the
  outcome, but two excluded trials did lift the box
  (`flat_retry__planning__013` and `hierarchical__none__006`). The excluded
  trials are in `failure_injection_p05_excluded/`, with
  `first_pass_table.txt`, the table before re-runs.
- **Retry budgets differ.** `hierarchical` retries each navigation goal and
  plan 3 times and the pick 3 times. `flat_retry` retries the mission 3
  times, `flat_retry9` 9 times. `flat_retry9` was added so that the
  comparison with `hierarchical` is fairer.
- **`hierarchical_clear` was added after seeing results.** It moves the arm
  clear before perceiving again, to test a guess from the first pass: after a
  failed grasp the arm hides the marker. It is exploratory, and that guess
  remains unconfirmed.
- **Runs were not simultaneous.** Variants ran in separate passes under
  different load from other jobs, so compare times with care.
- **Not injected:** perception dropouts and execution interruptions.
- **API baseline.** `api_task.py` has no retries. A script with its own
  retries was not tested, and it could close much of the gap. The server
  behind `pick_object` is itself a behavior tree, and its own log names the
  leaf.

## Failure injection (Panda, Gazebo Harmonic)

`failure_injection_panda/`: the pick with 4 variants and 3 fault conditions,
p=0.5 per goal, seeds 0-19, 240 trials on the port in `../panda_contact/`.
`../panda_contact/PROTOCOL.md` was committed before the first counted trial.
Reproduce with:

```bash
flock ~/.gpu.lock python3 experiments/run_batch.py \
  --variants no_recovery,flat_retry,flat_retry9,hierarchical \
  --faults none,planning,grasp --trial panda_contact/trial.sh \
  --n 20 --slots 3 --tag failure_injection_panda
```

```bash
cd experiments
R=results/failure_injection_panda
python3 analyze.py $R --z0 0.125 > $R/table.txt
python3 stats.py $R/summary.json > $R/fisher.txt
python3 panda_contact/check_criteria.py $R ${R}_excluded > $R/criteria.txt
python3 rq1_counted_trees.py > $R/rq1_counted_trees.txt
```

| Variant | Planning | Grasp | No injection |
| --- | --- | --- | --- |
| `no_recovery` | 3/20 | 8/20 | 20/20 |
| `flat_retry` | 7/20 | 17/20 | 20/20 |
| `flat_retry9` | 11/20 | 20/20 | 20/20 |
| `hierarchical` | 19/20 | 17/20 | 20/20 |

- `table.txt`, `fisher.txt`, `summary.json`: from the protocol's commands.
- `criteria.txt`: the protocol's three criteria, all met, from
  `../panda_contact/check_criteria.py`.
- `rq1_counted_trees.txt`: the two pick subtrees that ran, from
  `../rq1_counted_trees.py`. 8 of 11 leaves match in order.

Primary tests, `hierarchical` against `no_recovery`: planning p = 4.06e-07,
grasp p = 0.0079; Holm across the two gives 8.1e-07 and 0.0079.

### Before quoting the Panda result

- **Known pose.** The tree reads the cube's true pose from a file. There is no
  perception or navigation.
- **The port is ours,** and its contact setup was tuned on seeds 100 and up,
  in `panda_dev` inside `trials.tar.xz`, with the pilot before that. Neither
  counts. `PROTOCOL.md` lists what tuning changed.
- **Retry arithmetic.** Worked out after the runs, with independent faults at
  p=0.5 and 3 plans per pick: 12.5%, 33%, 70%, 96% under planning faults for
  the variants above, against 15%, 35%, 55%, 95% measured. Faults here are
  independent by construction; one that repeats would gain less from retries.
- **Why this differs from TIAGo against `flat_retry9`.** TIAGo has 2 plans per
  pick, so a whole restart passes them more often.
- **Failures with no injected fault.** 3 of 185 clean gripper closings failed
  verification, and `no_recovery__grasp__004` failed at the arm's first move.
  These stay in the counts: the exclusion rule does not cover them.
- **Sideways slip.** A held cube moved 4.9 mm on average, 9.9 mm at most, in
  successful trials.
- **Not run:** the API script, and any navigation fault.

## Other results

| Path | What it is | Evidence level |
| --- | --- | --- |
| `rq1_tree_reuse.txt` | Leaf comparison of the two pick trees | Static |
| `panda/` | Grab2 on Panda, 27 goals | Mock hardware, no physics |
| `panda_gz/` | Panda in Gazebo, 27 trials | Pilot, port may be at fault |
| `doc_test/`, `all_prs/` | Documented demos | Gazebo, single runs |
| `pr_tests/` | Tests of open PRs #63 and #48 | See `outcome.txt`, `smoke.txt` |

On the earlier port, Panda lifted the cube at least 0.05 m in 15 of 27 trials.
8 aborted
at the gripper close, and in 2 the action reported success with the cube
unmoved, while 2 had an unreadable pose. Do not quote this rate as a measure of
the tree: most of those aborts came from the port, as `PROTOCOL.md` explains.

Per-trial logs are in `trials.tar.xz`. Extract it in this directory.
