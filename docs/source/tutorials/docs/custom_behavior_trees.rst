Custom Behavior Trees
=====================

Once you have run the included demos, you will probably want to write your own behavior
tree. This page walks you through the structure of a tree file and how to plug into the
blackboard variables that the engine sets up for you.

How the engine works
---------------------

The ``btcpp_engine`` node is the heart of everything. When you run ``tiago_demo.launch.py``,
it:

1. Loads the XML tree file you specify with the ``tree`` argument.
2. Registers all the BT plugins (Nav2 actions, Grab2 manipulation, and TiAGo-specific nodes).
3. Populates the blackboard with your locations file and some default state.
4. Ticks the tree in a loop (every 500ms) until it succeeds, fails, or you kill it.

Pre-populated blackboard keys
------------------------------

Before your tree starts ticking, the engine puts these on the blackboard:

.. list-table::
   :widths: 30 20 50
   :header-rows: 1

   * - Key
     - Type
     - Description
   * - ``node``
     - rclcpp::Node
     - The ROS node handle, required by most BT action nodes
   * - ``bt_loop_duration``
     - int (ms)
     - How often the tree ticks (500ms)
   * - ``server_timeout``
     - int (ms)
     - How long to wait for a goal acknowledgment (5000ms)
   * - ``wait_for_service_timeout``
     - int (ms)
     - How long to wait for a service to appear (8000ms)
   * - ``battery_level``
     - float
     - Starting battery level (100.0)
   * - ``holding_object``
     - bool
     - Whether TiAGo is currently holding something (false)
   * - ``loc.<name>``
     - PoseStamped
     - One entry per location in your YAML file

Loading locations
------------------

Locations are defined in a YAML file (default: ``tiago_demos/config/map_locations.yaml``)
and get loaded into the blackboard with the prefix ``loc.``. For example:

.. code-block:: yaml

   Kitchen:
     frame_id: map
     pose:
       x: -2.94
       y: -1.75
       z: 0.0
       yaw_deg: 0.0

This becomes ``loc.Kitchen`` on the blackboard, which you can reference in your tree like:

.. code-block:: xml

   <NavigateToPose goal="{loc.Kitchen}" />

Writing a minimal tree
-----------------------

Here is a simple tree that navigates to two locations in sequence:

.. code-block:: xml

   <root BTCPP_format="4">
     <BehaviorTree ID="my_demo">
       <Sequence>
         <NavigateToPose goal="{loc.Kitchen}" />
         <NavigateToPose goal="{loc.Office}" />
       </Sequence>
     </BehaviorTree>
   </root>

Save this as ``tiago_demos/trees/my_demo.xml`` and run it with:

.. code-block:: bash

   ros2 launch tiago_demos tiago_demo.launch.py tree:=my_demo

Using a custom locations file
------------------------------

You can point to any YAML file instead of the default:

.. code-block:: bash

   ros2 launch tiago_demos tiago_demo.launch.py \
     tree:=my_demo \
     locations:=my_locations.yaml

The file needs to be in the ``tiago_demos/config/`` directory or you can give a full path.

Available BT nodes
-------------------

The engine registers nodes from three plugin libraries:

* **Nav2 BT plugins** - Navigation actions and conditions (NavigateToPose,
  NavigateThroughPoses, IsStuck, etc.)
* **Grab2 BT plugins** - Manipulation actions (MoveArm, OpenGripper, CloseGripper,
  ComputeIKTrajectory, etc.)
* **TiAGo-specific plugins** - Custom nodes for ArUco-based target setting
  (``tiago_set_target_using_aruco_marker``, ``tiago_set_target_using_transform``)

Debugging tips
---------------

* Set ``log_level:=debug`` to see every node tick in the console.
* Connect `Groot2 <https://www.behaviortree.dev/groot>`_ to ``localhost:5555`` for a live
  graphical view of the tree as it executes.
* If the tree loads but immediately returns FAILURE, check that your blackboard keys are
  spelled exactly right (they are case-sensitive).
