.. _ug-general:

General / Installation
######################

This page covers the initial setup required to run the DelibFlow system.

Prerequisites
-------------
* **ROS 2**: Jazzy Jalisco
* **OS**: Ubuntu 24.04 (Noble Numbat)
* **Gazebo**: Harmonic

Installation
------------
1.  **Create Workspace**:

    .. code-block:: bash

        mkdir -p ~/bt_ws/src
        cd ~/bt_ws/src

2.  **Clone Repository**:

    .. code-block:: bash

        git clone https://github.com/arab-meet/Bt.git

3.  **Install Dependencies**:

    .. code-block:: bash

        cd Bt
        ./setup_third_party_pkgs.sh

4.  **Build**:

    .. code-block:: bash

        cd ~/bt_ws
        colcon build --symlink-install

First Run
---------
To verify everything is working, launch the simulation:

.. code-block:: bash

    ros2 launch tiago_sim tiago_sim.launch.py
