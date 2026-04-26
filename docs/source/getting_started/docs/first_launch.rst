First Launch
============

Two terminals, two commands, and TiAGo is up and running a behavior tree. Here is the
quickest path to seeing the robot move.

Terminal 1: bring up the simulation
-------------------------------------

This starts Gazebo, Nav2, MoveIt2, and the ArUco detection stack all at once:

.. code-block:: bash

   ros2 launch tiago_demos tiago_bringup.launch.py

Wait until Gazebo is fully loaded and the Nav2 actionlib servers are active before
moving on to the next step. You should see a lot of ``[INFO]`` logs from Nav2 settling
into the ready state.

Terminal 2: run a behavior tree
---------------------------------

Once the bringup is ready, launch one of the included demos:

.. code-block:: bash

   ros2 launch tiago_demos tiago_demo.launch.py tree:=our_map_example

You should see TiAGo navigate to the Office location, do a head sweep, move its torso
up and down, and then head over to the Trash location. That is the ``our_map_example``
behavior tree running end to end.

What's next?
------------

* Check out the available :doc:`../../simulation/docs/worlds` if you want to try a richer environment.
* Jump into the :doc:`../../walkthroughs/docs/bringup` page for a full breakdown of all
  the launch arguments.
* Try the pick-and-place demo: :doc:`../../walkthroughs/docs/pick_object`.
