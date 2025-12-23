.. _ug-general:

General / Installation
######################

This page covers the initial setup required to run the DelibFlow system.

System Requirements
-------------------

.. list-table::
   :header-rows: 1
   :widths: 30 70

   * - Component
     - Requirement
   * - **Operating System**
     - Ubuntu 24.04 (Noble Numbat)
   * - **ROS 2**
     - Jazzy Jalisco
   * - **Gazebo**
     - Harmonic
   * - **Python**
     - 3.10+
   * - **RAM**
     - 8GB minimum, 16GB recommended
   * - **CPU**
     - Quad-core processor (Intel i5 or equivalent)
   * - **GPU**
     - Optional (improves Gazebo performance)

Installation Methods
--------------------

Method 1: Native Installation
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

1.  **Create Workspace**:

    .. code-block:: bash

        mkdir -p ~/bt_ws/src
        cd ~/bt_ws/src

2.  **Clone Repository**:

    .. code-block:: bash

        git clone https://github.com/arab-meet/Bt.git
        cd Bt

3.  **Install Dependencies**:

    .. code-block:: bash

        ./setup_third_party_pkgs.sh

    .. tip::
       This script will automatically clone and install third-party ROS packages required for the TIAGo simulation.

4.  **Build Workspace**:

    .. code-block:: bash

        cd ~/bt_ws
        colcon build --symlink-install

    .. note::
       The ``--symlink-install`` flag creates symbolic links to Python scripts instead of copying them, allowing for faster iteration during development.

5.  **Source the Workspace**:

    .. code-block:: bash

        source install/setup.bash

    .. important::
       You must source the workspace in every new terminal. Consider adding it to your ``~/.bashrc``:
       
       .. code-block:: bash
       
           echo "source ~/bt_ws/install/setup.bash" >> ~/.bashrc

Method 2: Docker (Recommended for Beginners)
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

.. warning::
   Docker support is experimental. Some features may not work as expected.

1.  **Navigate to Docker Directory**:

    .. code-block:: bash

        cd ~/bt_ws/src/Bt/docker_bt

2.  **Build and Run**:

    .. code-block:: bash

        docker compose up

This will launch a containerized environment with all dependencies pre-installed.

First Run
---------

To verify everything is working, launch the simulation:

.. code-block:: bash

    ros2 launch tiago_sim tiago_sim.launch.py

You should see Gazebo open with the TIAGo robot loaded in the environment.

Troubleshooting
---------------

Build Errors
^^^^^^^^^^^^

**Issue**: ``colcon build`` fails with missing dependencies.

**Solution**: Ensure all ROS 2 dependencies are installed:

.. code-block:: bash

    rosdep install --from-paths src --ignore-src -r -y

**Issue**: ``setup_third_party_pkgs.sh`` fails.

**Solution**: Check internet connection and ensure ``git`` is installed.

Runtime Errors
^^^^^^^^^^^^^^

**Issue**: Gazebo doesn't launch or crashes.

**Solution**: Check Gazebo installation:

.. code-block:: bash

    gz sim --version

Ensure it reports Harmonic (version 8.x).

**Issue**: ``ros2 launch`` command not found.

**Solution**: Source your ROS 2 installation:

.. code-block:: bash

    source /opt/ros/jazzy/setup.bash

Next Steps
----------

Once installation is complete, proceed to:

- :doc:`behavior_trees` - Learn how to run Behavior Tree demos
- :doc:`navigation` - Set up autonomous navigation
- :doc:`manipulation` - Configure the manipulation stack
