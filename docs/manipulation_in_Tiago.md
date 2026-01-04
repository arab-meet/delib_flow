# Manipulation in TIAGO using Grab2

## Overview

- **Nav2** : Base navigation
- **Grab2** : Arm & gripper manipulation
- **Behavior Trees** : High-level mission logic
- **YAML** : Named locations & predefined trajectories

---

## Grab2 Concept

Grab2 is a **robot-agnostic manipulation framework** based on Behavior Trees.

It provides:

- Manipulation BT nodes (pick, reach, grasp, grip…)
- Planning & execution via MoveIt
- Action-based execution (arm + gripper)

Grab2 **does not belong to TIAGO**.

To use Grab2 with TIAGO, we use the adapter package:

### tiago_grab

This package connects Grab2 to:

- TIAGO MoveIt groups
- TIAGO gripper controller
- TIAGO kinematics & URDF

---

## Defining Semantic Locations (YAML)

Instead of hardcoding coordinates in XML, locations are defined by name.

### File Location

tiago_demos/config/tiago_positions.yaml

### Example

```yaml
Table:
  frame_id: "map"
  pose:
    x: 1.2
    y: -0.5
    z: 0.0
    yaw_deg: 90

Kitchen:
  frame_id: "map"
  pose:
    x: 0.2
    y: 2.1
    z: 0.0
    yaw_deg: 180
```

> Names are case-sensitive.

---

## Manipulation Nodes (Grab2)

The main manipulation BT action nodes provided by **grab2_behavior_tree** are:

| Node                      | Description                            |
| ------------------------- | -------------------------------------- |
| `DetectObject`          | Detects target object using perception |
| `ComputeTopDownGrasp`   | Computes a top-down grasp pose         |
| `GetGraspHardcoded`     | Uses predefined grasp configuration    |
| `ReachObject`           | Moves arm to grasp pose                |
| `Grip`                  | Opens or closes the gripper            |
| `ComputePlanToTargetIK` | Plans motion using IK                  |
| `FollowJointTrajectory` | Executes joint trajectories            |
| `GetTrajectoryFromYAML` | Loads joint trajectories from YAML     |

---

## Using Semantic Locations in XML

Locations are defined in YAML and referenced by **name** in the Behavior Tree.

```xml
<NavigateToPose goal="{loc.Table}" />

```

#### Example Pick and Place BehaviorTree

```xml
<root main_tree_to_execute="MainTree">
  <BehaviorTree ID="MainTree">
    <Sequence>

      <!-- Navigate to object -->
      <NavigateToPose goal="{loc.Table}" />

      <!-- Detect object -->
      <DetectObject target="bottle" />

      <!-- Plan grasp -->
      <ComputeTopDownGrasp />

      <!-- Reach object -->
      <ReachObject />

      <!-- Close gripper -->
      <Grip command="close" />

      <!-- Navigate to drop location -->
      <NavigateToPose goal="{loc.Kitchen}" />

      <!-- Open gripper -->
      <Grip command="open" />

    </Sequence>
  </BehaviorTree>
</root>

```

## Using Predefined Trajectories (YAML)

Grab2 supports loading joint trajectories from YAML.

### Trajectory YAML

```yaml
home_pose:
  joints:
    arm_1_joint: 0.0
    arm_2_joint: -1.2
    arm_3_joint: 1.8
```

### XML Usage

```xml
<GetTrajectoryFromYAML trajectory_name="home_pose" />
<FollowJointTrajectory />
```


## Execution Engine (`btcpp_executor`)

The executor node:

* Loads Nav2 and Grab2 BT plugins
* Creates the global Blackboard
* Executes the Behavior Tree

### Blackboard Entries

* `node` :  ROS 2 node handle
* `battery_level` : float
* `holding_object` : bool
* Semantic poses loaded from YAML



To Do : 

* refine
* review
* Architecture
* Data Flow
* Integration with Nav2
* Common Pitfalls
* Limitations
