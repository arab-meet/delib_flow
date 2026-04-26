Prerequisites
=============

Before building the workspace, make sure your system is set up with the right tools.

Supported ROS 2 Distributions
------------------------------

DelibFlow targets the following distributions:

* ROS 2 **Jazzy** (Ubuntu 24.04)
* ROS 2 **Kilted** (Ubuntu 24.04)

.. note::
   Humble support has been dropped. If you are on Ubuntu 22.04, consider upgrading
   your OS or running in a container.

System Dependencies
-------------------

You need to have the following installed before cloning the repo:

* `ROS 2 <https://docs.ros.org/en/jazzy/Installation.html>`_ (Jazzy or Kilted)
* `Gazebo Harmonic <https://gazebosim.org/docs/harmonic/install>`_
* `colcon <https://colcon.readthedocs.io/en/released/user/installation.html>`_ build tool
* ``vcstool`` for importing third-party repos:

  .. code-block:: bash

     sudo apt install python3-vcstool

* ``rosdep`` for resolving system-level dependencies:

  .. code-block:: bash

     sudo apt install python3-rosdep
     sudo rosdep init   # skip if already done
     rosdep update

That should cover everything. Head over to :doc:`installation` when you are ready.
