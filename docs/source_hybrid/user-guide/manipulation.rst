.. _ug-manipulation:

Manipulation (User Guide)
#########################

.. note::
   **See also:**
   
   * :doc:`Implementation Details <../dev-guide/manipulation>`
   * :doc:`Theoretical Background <../theory/manipulation>`

Overview
--------

The Manipulation system controls the TIAGo robot's arm and gripper to interact with objects using MoveIt 2 for motion planning.

Prerequisites
-------------

Ensure the following are running:

1. **Simulation or Real Robot**
2. **Perception System** (to detect objects)
   
   .. code-block:: bash

      ros2 launch tiago_aruco_broadcast aruco.launch.py

Running Manipulation
--------------------

Launch the Manipulation Stack
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

.. code-block:: bash

    ros2 launch tiago_grab tiago_grab.launch.py

This starts:
- MoveIt 2 move_group node
- Gripper action server
- Grasp planning service

Basic Pick and Place
^^^^^^^^^^^^^^^^^^^^^

**Via Behavior Tree** (Recommended):

.. code-block:: bash

    ros2 launch tiago_demos bt_demo.launch.py tree:=pick_object_example.xml

**Via Action** (Manual):

1. **Pick an Object**:

   .. code-block:: bash

      ros2 action send_goal /pick_object tiago_grab/action/Pick "{object_id: 'aruco_42'}"

2. **Place the Object**:

   .. code-block:: bash

      ros2 action send_goal /place_object tiago_grab/action/Place "{
        target_pose: {
          position: {x: 0.5, y: 0.0, z: 0.8}
        }
      }"

Gripper Control
---------------

Manual Gripper Commands
^^^^^^^^^^^^^^^^^^^^^^^^

**Open Gripper**:

.. code-block:: bash

    ros2 action send_goal /gripper_controller/gripper_cmd control_msgs/action/GripperCommand "{
      command: {position: 0.1}
    }"

**Close Gripper**:

.. code-block:: bash

    ros2 action send_goal /gripper_controller/gripper_cmd control_msgs/action/GripperCommand "{
      command: {position: 0.0}
    }"

.. tip::
   Position ranges from 0.0 (fully closed) to 0.1 (fully open).

Arm Motion Planning
-------------------

Using MoveIt
^^^^^^^^^^^^

**Move to a Named Pose**:

TIAGo comes with pre-defined poses like ``home``, ``fold``, ``reach_max``.

.. code-block:: bash

    ros2 service call /move_group/plan_kinematic_path moveit_msgs/srv/GetMotionPlan "{
      motion_plan_request: {
        group_name: 'arm',
        goal_constraints: [{name: 'home'}]
      }
    }"

**Move to a Cartesian Position**:

.. code-block:: bash

    ros2 topic pub /arm_controller/command trajectory_msgs/msg/JointTrajectory "{
      joint_names: ['arm_1_joint', 'arm_2_joint', 'arm_3_joint', 'arm_4_joint'],
      points: [{positions: [0.0, 0.0, 0.0, 0.0], time_from_start: {sec: 2}}]
    }"

Configuration
-------------

Grasp Parameters
^^^^^^^^^^^^^^^^

Edit ``tiago_grab/config/grasp_config.yaml`` to adjust:

.. code-block:: yaml

    grasp_approach_distance: 0.1  # How far to approach before grasping
    grasp_retreat_distance: 0.1   # How far to retreat after grasping
    pre_grasp_opening: 0.08      # Gripper opening before grasp
    grasp_closure: 0.0           # Gripper closure during grasp

MoveIt Configuration
^^^^^^^^^^^^^^^^^^^^

Key MoveIt parameters in ``moveit_config/config/ompl_planning.yaml``:

.. list-table::
   :header-rows: 1
   :widths: 40 60

   * - Parameter
     - Description
   * - ``planning_time``
     - Max time to find a path (default: 5.0s)
   * - ``max_velocity_scaling_factor``
     - Reduce for safer motion (0.0-1.0)
   * - ``max_acceleration_scaling_factor``
     - Reduce for smoother motion (0.0-1.0)

Troubleshooting
---------------

Grasp Fails
^^^^^^^^^^^

**Symptom**: Gripper opens/closes but doesn't secure object.

**Solutions**:

1. **Check Object Detection**:

   .. code-block:: bash

      ros2 topic echo /detected_objects

2. **Adjust Grasp Closure**: Increase ``grasp_closure`` in config
3. **Verify Gripper Calibration**: Ensure gripper sensors are working

Planning Fails
^^^^^^^^^^^^^^

**Symptom**: "No valid plan found" error.

**Solutions**:

1. **Increase Planning Time**:

   .. code-block:: yaml

      planning_time: 10.0

2. **Check for Obstacles**: View MoveIt planning scene in RViz
3. **Simplify Goal**: Try a less constrained pose

Arm Collides
^^^^^^^^^^^^

**Symptom**: Arm hits itself or environment.

**Solutions**:

1. **Update Planning Scene**: Ensure all obstacles are registered
2. **Increase Safety Margins**: Edit ``collision_checking`` parameters
3. **Use Cartesian Planner**: For precise end-effector control

Best Practices
--------------

1. **Always Home First**: Start from a known pose
2. **Plan Before Executing**: Check path in RViz before running
3. **Use Visual Servoing**: For precise grasping tasks
4. **Monitor Joint Limits**: Don't exceed hardware capabilities
5. **Test with Slow Speeds**: Before increasing velocity scaling

Advanced Usage
--------------

Custom Grasp Generation
^^^^^^^^^^^^^^^^^^^^^^^

To generate grasps programmatically:

.. code-block:: python

    from moveit_msgs.msg import Grasp

    grasp = Grasp()
    grasp.pre_grasp_approach.direction.vector.x = 1.0
    grasp.pre_grasp_approach.min_distance = 0.05
    grasp.pre_grasp_approach.desired_distance = 0.1
    # ... set other grasp parameters

Dual-Arm Manipulation
^^^^^^^^^^^^^^^^^^^^^

.. note::
   TIAGo has one arm, but the framework supports dual-arm robots. See MoveIt documentation for multi-arm planning.

Next Steps
----------

- :doc:`../dev-guide/manipulation` - Write custom grasp planners
- :doc:`../theory/manipulation` - Understand IK and motion planning
- :doc:`perception` - Improve object detection for grasping
- :doc:`behavior_trees` - Automate pick-and-place sequences
