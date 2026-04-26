Installation
============

Let's get the workspace built. This will clone the repo, pull in all the third-party
packages, and do a full colcon build.

1. Create the workspace and clone the repo
------------------------------------------

.. code-block:: bash

   mkdir -p ~/bt_ws/src
   cd ~/bt_ws/src
   git clone https://github.com/arab-meet/delib_flow.git

2. Pull in third-party packages
---------------------------------

The setup script picks the right ``.repos`` file for your ROS distro, runs ``vcs import``,
and calls ``rosdep install`` to grab any missing system packages.

.. code-block:: bash

   cd ~/bt_ws/src/delib_flow
   ./setup_third_party_pkgs.sh

This will clone around 25 packages (TiAGo description, Nav2 configs, MoveIt2 configs,
Grab2, YOLO ROS, BehaviorTree.ROS2, and the gripper packages). It takes a while the
first time, so grab a coffee.

3. Build
---------

.. code-block:: bash

   cd ~/bt_ws
   colcon build --symlink-install

The ``--symlink-install`` flag means you can edit Python scripts and config files without
rebuilding every time, which is handy during development.

4. Source the workspace
------------------------

Add this to your ``.bashrc`` (or ``.zshrc``) so every new terminal picks up the workspace:

.. code-block:: bash

   echo "source ~/bt_ws/install/setup.bash" >> ~/.bashrc
   source ~/.bashrc

You are all set. Check out :doc:`first_launch` to run your first demo.
