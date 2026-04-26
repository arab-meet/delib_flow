Simulation Worlds
=================

DelibFlow ships with three Gazebo worlds. You pick one via the ``world`` argument when
launching the bringup. All worlds are SDF 1.9 format and use the Gazebo Harmonic physics
engine (DART).

Switching worlds
----------------

Pass the world name to the bringup launch file:

.. code-block:: bash

   ros2 launch tiago_demos tiago_bringup.launch.py world:=<world_name>

Available worlds
----------------

minimal_world (default)
~~~~~~~~~~~~~~~~~~~~~~~

A bare-bones world with just a ground plane. It loads fast, which makes it perfect for
quickly iterating on behavior tree logic when you do not need any obstacles or objects
around.

.. code-block:: bash

   ros2 launch tiago_demos tiago_bringup.launch.py world:=minimal_world

Use this when:

* You are writing or debugging a new behavior tree
* You want the simulation to start as fast as possible
* Navigation or manipulation details do not matter yet

test_world
~~~~~~~~~~

A more practical environment with furniture and objects: boxes, tables, counters, a
trash bin, and a desk. This is the go-to world for testing navigation and basic
manipulation.

.. code-block:: bash

   ros2 launch tiago_demos tiago_bringup.launch.py world:=test_world

Use this when:

* You want to test navigation around real obstacles
* You are placing ArUco markers on objects for pick-and-place testing

world
~~~~~

A full home environment with multiple rooms: a bathroom (toilet, sink, bathtub), a
kitchen, a bedroom, shelves, cabinets, and a bedside table. This is the richest world
and is used by the prebuilt ``map_locations.yaml`` config with all its predefined
waypoints (Dining, Bedroom, Kitchen, Trash, Closet, Office).

.. code-block:: bash

   ros2 launch tiago_demos tiago_bringup.launch.py world:=world

Use this when:

* You are running the included demo behavior trees as intended
* You want to test navigation across long distances and multiple rooms

World assets
------------

All world files live under ``tiago_sim/worlds/``. Model assets (furniture, objects,
food items) are under ``tiago_sim/models/``. You can add or modify models there and
reference them in your own custom SDF worlds.
