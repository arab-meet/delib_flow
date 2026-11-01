Pick Object Demo
================

This walkthrough covers the ``pick_object_example`` behavior tree, which is the most
complete demo in DelibFlow. It combines navigation, visual detection via ArUco markers,
inverse kinematics planning, and actual arm execution to pick up an object.

Before you start
-----------------

Bring up the stack in the default ``minimal_world``, where a box with an ArUco marker
sits on a table in front of the robot:

.. code-block:: bash

   ros2 launch tiago_demos tiago_bringup.launch.py

Check out :doc:`../../usage/docs/perception/aruco` for details on the marker setup.

Running the demo
-----------------

.. code-block:: bash

   ros2 launch tiago_demos tiago_demo.launch.py tree:=pick_object_example locations:=minimal_world_locations.yaml

What happens step by step
--------------------------

Once launched, the behavior tree runs through this sequence:

1. **Setup** - Initializes the action controller names for the arm, head, gripper,
   and torso. Also loads the pre-defined joint trajectories from the ``tiago_grab``
   package.
2. **Arm ready** - Moves the arm to a safe tucked position before navigating.
3. **Navigate to Bedroom** - Uses Nav2 to drive to the Bedroom waypoint, which in
   ``minimal_world_locations.yaml`` is the spot facing the table.
4. **Head down** - Points the head downward so the camera can see objects on a surface.
5. **Gripper open** - Opens the gripper in preparation for grasping.
6. **ArUco detection** - Reads the ArUco marker transform and computes the grasp target
   pose, with a 0.32m approach offset and a 0.05m pre-grasp offset.
7. **Pre-grasp motion** - Plans and executes an IK trajectory to move the arm just
   above the object.
8. **Grasp motion** - Plans and executes the final downward motion to the object.
9. **Gripper close** - Closes the gripper to secure the object.
10. **Lift** - Raises the torso with the object in hand.

The whole tree is wrapped in a ``RetryUntilSuccessful`` node, so if anything fails
(for example, the marker is not detected yet) it tries again, up to 10 attempts.

Monitoring with Groot2
-----------------------

The BT executor publishes real-time tree state on port 5555. If you have
`Groot2 <https://www.behaviortree.dev/groot>`_ installed, connect it to
``localhost:5555`` to watch the nodes tick live.

Tweaking the demo
------------------

The locations for this demo are in ``tiago_demos/config/minimal_world_locations.yaml``.
The Bedroom entry looks like this:

.. code-block:: yaml

   Bedroom:
     frame_id: map
     pose:
       x: 0.0
       y: 0.0
       z: 0.0
       yaw_deg: 0

Edit the coordinates to match your world setup, then relaunch the demo. No rebuild needed
since the config is installed with symlinks.

Launch arguments reference
---------------------------

.. list-table::
   :widths: 20 20 60
   :header-rows: 1

   * - Argument
     - Default
     - Description
   * - ``tree``
     - ``pick_object_example``
     - Name of the XML behavior tree file in ``tiago_demos/trees/``
   * - ``locations``
     - ``map_locations.yaml``
     - YAML file with named waypoints to load into the BT blackboard
   * - ``use_sim_time``
     - ``true``
     - Set to ``false`` when running on a real robot
   * - ``log_level``
     - ``info``
     - Logging verbosity (``debug``, ``info``, ``warn``, ``error``)
