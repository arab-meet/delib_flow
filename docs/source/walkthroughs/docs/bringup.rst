Bringing Up the Stack
=====================

The ``tiago_bringup.launch.py`` file is your one-stop command to get everything running:
Gazebo, Nav2, MoveIt2, and the ArUco detection stack. Once it is up, you are ready to
launch any behavior tree demo.

Basic usage
-----------

.. code-block:: bash

   ros2 launch tiago_demos tiago_bringup.launch.py

This starts everything using the default ``minimal_world``. For a richer environment,
pass a different world name:

.. code-block:: bash

   ros2 launch tiago_demos tiago_bringup.launch.py world:=world

Launch arguments
----------------

.. list-table::
   :widths: 20 20 60
   :header-rows: 1

   * - Argument
     - Default
     - Description
   * - ``world``
     - ``minimal_world``
     - Gazebo world to load. See :doc:`../../simulation/docs/worlds` for the full list.

What gets launched
------------------

Under the hood, ``tiago_bringup.launch.py`` fires up four things:

1. **tiago_sim** - Gazebo server and client with the selected world and the TiAGo robot
   spawned inside it.
2. **tiago_nav2** - The full Nav2 navigation stack (planner, controller, lifecycle
   manager, etc.).
3. **tiago_moveit2** - The MoveIt2 move_group node for arm planning.
4. **aruco** - The ArUco marker detection and TF broadcast nodes, needed by the
   pick-and-place demos.

Checking that everything is ready
----------------------------------

After launching, watch the terminal output. Nav2 logs a lot during startup. You are
good to go once you see messages like:

.. code-block:: text

   [lifecycle_manager]: All nodes are active and ready!

At that point, open a new terminal and launch your behavior tree.

.. tip::
   If Nav2 takes a long time to activate, it usually means Gazebo is still loading.
   Give it a bit more time before trying to launch a demo.
