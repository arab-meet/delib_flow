# Panda failure-injection protocol

Written before the first counted trial. Seeds 0-19 had not been run on this
port when this file was committed.

## Question

Does the recovery result seen on TIAGo hold on a fixed-base arm with the same
success rule?

## Setup

- Franka Panda in Gazebo Harmonic, this directory's port, headless, one fresh
  simulator per trial, 3 trials at a time, under `flock ~/.gpu.lock`.
- A 0.05 m, 0.1 kg cube on a table, friction 1.0.
- The cube's place comes from the seed: x uniform in 0.35-0.45 m, y uniform in
  -0.10-0.10 m. The same seed gives the same place in every variant.
- The tree gets the cube's true pose from a location file. There is no
  perception on Panda and no navigation.

## Conditions

- **Variants:** `no_recovery`, `flat_retry` (3 attempts), `flat_retry9`
  (9 attempts), `hierarchical`. Trees are in `trees/`.
- **Faults:** `none`, `planning`, `grasp`, each with p=0.5 per goal, using
  `fault_injector.py`, unchanged. Navigation does not apply.
- **Trials:** seeds 0-19 per condition, 240 in all. Limit 300 s per mission.
- **Not run:** the API script baseline. A script without retries would stop at
  the same first failure as `no_recovery`, but that has not been measured here.

## Success

The cube rose at least 0.10 m in Gazebo above its start height, read 3 s after
the mission ends. The tree lifts to 0.14 m above the grasp height.

## Exclusions, decided now

A trial is excluded and re-run with the same seed only if the stack did not
report ready, there is no trial record, or the start pose is unreadable or more
than 0.03 m from 0.125 m in height. The outcome plays no part. Exclusions are
kept and reported.

## Analysis, decided now

```bash
python3 analyze.py results/failure_injection_panda --z0 0.125
```

```bash
python3 stats.py results/failure_injection_panda/summary.json
```

- **Primary:** `hierarchical` against `no_recovery`, on planning and on grasp
  faults. Two-sided Fisher exact tests with Holm correction across the two.
- **Secondary, uncorrected:** `hierarchical` against `flat_retry` and
  `flat_retry9`, and mean wall time. `flat_retry9` has a different retry budget
  and is there for the equal-budget comparison, as on TIAGo.

## When the result is worth quoting, decided now

All of these must hold:

1. With no injection, `hierarchical` and `no_recovery` each succeed in at least
   18 of 20 trials. Otherwise contact is not reliable and the fault conditions
   say little.
2. Under every condition, the count of missions the tree reports as successful
   equals the count of ground-truth successes, within 1.
3. No more than 10% of trials are excluded.

If any fails, the result is reported as such, is not added to the paper, and
scope A's text stands. The result is reported whichever way the comparison goes.

## Frozen

Nothing in this directory that affects a trial changes once seed 0 has run. If a
fault in the port itself turns up, I stop, report it, fix it, and re-run every
counted trial with seeds 20-39, keeping the first set on record.

## Kept out of the counts

- The pilot in `results/panda_gz/`: 27 trials, on the earlier port in `panda_gz/`.
- Tuning trials in `results/panda_dev/`: 60 trials on seeds 100 and up, while
  fixing this port.

## What the tuning changed

In the pilot, 8 of 27 trials aborted at gripper close. These changes came from
tuning. Each is a property of the simulated model, and none comes from fault
injection:

- Both fingers are commanded by one trajectory controller, as on TIAGo. The
  pilot used `Grip`, a mirror node and a gripper action controller.
- Finger collision meshes became boxes matching the mesh's bounds.
- **The cause of most failures:** the fingers opened to exactly their 0.04 m
  joint limit and stayed stuck there for seconds when told to close. The
  simulated limit is now 0.045 m, while the tree still opens to 0.04 m.
- The fingers start open.
- The tree opens to 0.04 m, closes to 0.02 m, and uses `CheckGraspFromFingers`
  with TIAGo's thresholds. Its joint names come through `finger_state_relay.py`.
- The lift is planned before closing, so that no restart begins with the cube in
  the gripper. Panda therefore has three plans in a mission, against TIAGo's two.
  Its lift is one more stage where a planning fault can stop a mission.
- `panda_tool` is a fixed frame so that a location's yaw of 0 means a top-down
  grasp, since DelibFlow's location file has no roll or pitch.

Known weakness: the two fingers are position controlled with equal strength, so
a held cube can slide about 5 mm sideways between them during the lift. In
tuning, the cube stayed held.
