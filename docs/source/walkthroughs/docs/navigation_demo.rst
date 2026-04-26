Navigation Demo
===============

The ``our_map_example`` behavior tree is a simpler demo focused on multi-waypoint
navigation and basic body movements (head and torso). It is a great starting point if
you are new to behavior trees or just want to see TiAGo move around without the
complexity of manipulation.

Before you start
-----------------

Bring up the stack. Either the ``test_world`` or the full ``world`` works here:

.. code-block:: bash

   ros2 launch tiago_demos tiago_bringup.launch.py world:=world

Running the demo
-----------------

.. code-block:: bash

   ros2 launch tiago_demos tiago_demo.launch.py tree:=our_map_example

What happens step by step
--------------------------

1. **Setup** - Initializes the controller names for the head and torso, and loads the
   joint trajectory definitions.
2. **Navigate to Office** - Drives to the Office waypoint (-8.25, -7.0 on the map,
   facing 180 degrees).
3. **Head sweep** - Executes a head sweep motion, like TiAGo is scanning the area.
4. **Torso up** - Raises the torso to its upper position.
5. **Torso down** - Lowers the torso back down.
6. **Navigate to Trash** - Drives to the Trash waypoint (-1.70, -5.5 on the map).

The whole sequence runs once and exits (no retry loop, unlike the pick demo).

Predefined waypoints
---------------------

Both locations used in this demo come from ``tiago_demos/config/map_locations.yaml``:

.. code-block:: yaml

   Office:
     frame_id: map
     pose:
       x: -8.25
       y: -7.0
       z: 0.0
       yaw_deg: 180.0

   Trash:
     frame_id: map
     pose:
       x: -1.70
       y: -5.5
       z: 0.0
       yaw_deg: 90.0

All six predefined waypoints in the config file are:

.. list-table::
   :widths: 20 15 15 15
   :header-rows: 1

   * - Location
     - X
     - Y
     - Yaw
   * - Dining
     - 4.48
     - 5.93
     - 0 deg
   * - Bedroom
     - 6.0
     - -2.57
     - 135 deg
   * - Kitchen
     - -2.94
     - -1.75
     - 0 deg
   * - Trash
     - -1.70
     - -5.5
     - 90 deg
   * - Closet
     - -8.5
     - 7.0
     - 180 deg
   * - Office
     - -8.25
     - -7.0
     - 180 deg

Want to add your own waypoints? Just add a new entry to the YAML file following the
same format and reference it in your behavior tree as ``{loc.YourLocationName}``.

What to try next
-----------------

Once you are comfortable with this demo, check out :doc:`pick_object` for a more
advanced walkthrough involving arm manipulation and object grasping. Or head over to
:doc:`../../tutorials/docs/custom_behavior_trees` to start building your own tree.
