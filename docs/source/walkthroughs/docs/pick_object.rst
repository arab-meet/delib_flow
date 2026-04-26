Pick Object Demo
================

This walkthrough covers the ``pick_object_example`` behavior tree, which is the most
complete demo in DelibFlow. It combines navigation, visual detection via ArUco markers,
inverse kinematics planning, and actual arm execution to pick up an object.

Before you start
-----------------

Make sure the full stack is running with the ``world`` world (the full home environment),
since the behavior tree navigates to the **Bedroom** waypoint:

.. code-block:: bash

   ros2 launch tiago_demos tiago_bringup.launch.py world:=world

You will also need an ArUco marker placed somewhere TiAGo can see from the Bedroom
location. Check out :doc:`../../usage/docs/perception/aruco` for details on the marker
setup.

Running the demo
-----------------

.. code-block:: bash

   ros2 launch tiago_demos tiago_demo.launch.py tree:=pick_object_example

What happens step by step
--------------------------

Once launched, the behavior tree runs through this sequence:

1. **Setup** - Initializes the action controller names for the arm, head, gripper,
   and torso. Also loads the pre-defined joint trajectories from the ``tiago_grab``
   package.
2. **Arm ready** - Moves the arm to a safe tucked position before navigating.
3. **Navigate to Bedroom** - Uses Nav2 to drive to the Bedroom waypoint defined in
   ``map_locations.yaml``.
4. **Head down** - Points the head downward so the camera can see objects on a surface.
5. **Gripper open** - Opens the gripper in preparation for grasping.
6. **ArUco detection** - Reads the ArUco marker transform and computes the grasp target
   pose, with a 0.32m approach offset and a 0.05m pre-grasp offset.
7. **Pre-grasp motion** - Plans and executes an IK trajectory to move the arm just
   above the object.
8. **Grasp motion** - Plans and executes the final downward motion to the object.
9. **Gripper close** - Closes the gripper to secure the object.
10. **Recover** - Raises the torso and moves the arm back to the ready position with
    the object in hand.

The whole tree is wrapped in a ``RetryUntilSuccessful`` node, so if anything fails
(for example, the marker is not detected yet) it will keep trying.

Monitoring with Groot2
-----------------------

The BT executor publishes real-time tree state on port 5555. If you have
`Groot2 <https://www.behaviortree.dev/groot>`_ installed, connect it to
``localhost:5555`` to watch the nodes tick live.

Tweaking the demo
------------------

The predefined locations are in ``tiago_demos/config/map_locations.yaml``. The Bedroom
entry looks like this:

.. code-block:: yaml

   Bedroom:
     frame_id: map
     pose:
       x: 6.0
       y: -2.57
       z: 0.0
       yaw_deg: 135.0

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
