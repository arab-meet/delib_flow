.. _ug-simulation:

Simulation (User Guide)
#######################

.. note::
   **See also:**
   
   * :doc:`Implementation Details <../dev-guide/simulation>`
   * :doc:`Theoretical Background <../theory/simulation>`

Overview
--------

We use `Gazebo Harmonic <https://gazebosim.org/>`_ for physics-based simulation of the TIAGo robot. Simulation enables:

- Safe testing of behaviors before deploying to hardware
- Rapid prototyping without physical robot
- Reproducible experiments
- Training machine learning models

System Requirements
-------------------

.. list-table::
   :header-rows: 1
   :widths: 30 70

   * - Component
     - Requirement
   * - **GPU**
     - Recommended (NVIDIA with proprietary drivers)
   * - **RAM**
     - 8GB minimum, 16GB for complex worlds
   * - **CPU**
     - Quad-core, 2.5GHz+

Launching the Simulation
-------------------------

Basic Launch
^^^^^^^^^^^^

.. code-block:: bash

    ros2 launch tiago_sim tiago_sim.launch.py

This opens Gazebo with:
- TIAGo robot in default pose
- Default world environment
- All sensors activated (camera, lidar)

Launch Options
^^^^^^^^^^^^^^

**Custom World**:

.. code-block:: bash

    ros2 launch tiago_sim tiago_sim.launch.py world:=my_world.sdf

**Spawn Position**:

.. code-block:: bash

    ros2 launch tiago_sim tiago_sim.launch.py \
        x:=2.0 y:=1.0 z:=0.0 yaw:=1.57

**Headless (No GUI)**:

.. code-block:: bash

    ros2 launch tiago_sim tiago_sim.launch.py gui:=false

.. tip::
   Headless mode significantly reduces CPU/GPU usage. Use for batch experiments.

Available Worlds
----------------

The ``tiago_sim/worlds`` directory contains several pre-made environments:

.. list-table::
   :header-rows: 1
   :widths: 30 70

   * - World
     - Description
   * - ``empty.sdf``
     - Flat ground plane only
   * - ``office.sdf``
     - Office environment with desks, chairs
   * - ``warehouse.sdf``
     - Large warehouse with shelves, pallets
   * - ``maze.sdf``
     - Navigation challenge maze

Creating Custom Worlds
-----------------------

Method 1: Gazebo GUI
^^^^^^^^^^^^^^^^^^^^

1. **Launch with Empty World**:

   .. code-block:: bash

      gz sim empty.sdf

2. **Add Models**:
   
   - Click "Insert" tab
   - Browse model database
   - Drag and drop into scene

3. **Save World**:

   File → Save As → ``my_world.sdf``

4. **Copy to Package**:

   .. code-block:: bash

      cp my_world.sdf ~/bt_ws/src/Bt/tiago_sim/worlds/

Method 2: Edit SDF Directly
^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Create ``custom_world.sdf``:

.. code-block:: xml

    <?xml version="1.0"?>
    <sdf version="1.9">
      <world name="custom">
        <!-- Ground plane -->
        <include>
          <uri>model://ground_plane</uri>
        </include>

        <!-- Sun light -->
        <include>
          <uri>model://sun</uri>
        </include>

        <!-- Add a table -->
        <include>
          <uri>model://table</uri>
          <pose>1 0 0 0 0 0</pose>
        </include>

        <!-- Add a box obstacle -->
        <model name="box">
          <pose>2 1 0.5 0 0 0</pose>
          <link name="link">
            <collision name="collision">
              <geometry>
                <box><size>0.5 0.5 1.0</size></box>
              </geometry>
            </collision>
            <visual name="visual">
              <geometry>
                <box><size>0.5 0.5 1.0</size></box>
              </geometry>
            </visual>
          </link>
        </model>
      </world>
    </sdf>

Robot Control in Simulation
----------------------------

Teleoperation
^^^^^^^^^^^^^

Control the robot manually:

.. code-block:: bash

    ros2 run teleop_twist_keyboard teleop_twist_keyboard

- ``i`` - Forward
- ``k`` - Stop
- ``j`` - Turn left
- ``l`` - Turn right

Joint Position Control
^^^^^^^^^^^^^^^^^^^^^^^

Move individual joints:

.. code-block:: bash

    ros2 topic pub /arm_controller/command trajectory_msgs/msg/JointTrajectory "{
      joint_names: ['arm_1_joint'],
      points: [{positions: [1.0], time_from_start: {sec: 2}}]
    }"

Sensor Visualization
--------------------

Camera
^^^^^^

View camera feed:

.. code-block:: bash

    ros2 run rqt_image_view rqt_image_view /camera/image_raw

Lidar
^^^^^

Visualize in RViz:

1. Add ``LaserScan`` display
2. Topic: ``/scan``
3. Fixed Frame: ``base_link``

Performance Optimization
------------------------

If simulation is slow:

Reduce Physics Rate
^^^^^^^^^^^^^^^^^^^

Edit world SDF:

.. code-block:: xml

    <physics type="ode">
      <max_step_size>0.01</max_step_size>  <!-- Increase for faster but less accurate -->
      <real_time_factor>1.0</real_time_factor>
    </physics>

Disable Unnecessary Sensors
^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Modify ``tiago_sim/urdf/sensors.urdf.xacro``:

Comment out sensors you don't need (e.g., depth camera if only using 2D navigation).

Use Simplified Models
^^^^^^^^^^^^^^^^^^^^^

Reduce mesh complexity in robot URDF for faster rendering.

Gazebo Performance Settings
^^^^^^^^^^^^^^^^^^^^^^^^^^^^

In Gazebo GUI:
- View → Contacts (disable)
- View → Wireframe (enable for debugging only)

Troubleshooting
---------------

Gazebo Doesn't Start
^^^^^^^^^^^^^^^^^^^^

**Solutions**:

1. **Check Gazebo Installation**:

   .. code-block:: bash

      gz sim --version

   Should show "Gazebo Harmonic" (8.x).

2. **Clear Gazebo Cache**:

   .. code-block:: bash

      rm -rf ~/.gz/sim

3. **Check Graphics Drivers**: Ensure proprietary NVIDIA/AMD drivers installed.

Robot Falls Through Floor
^^^^^^^^^^^^^^^^^^^^^^^^^^

**Cause**: Physics not initializing properly.

**Solution**: Add ground plane contact properties in world SDF:

.. code-block:: xml

    <surface>
      <friction>
        <ode>
          <mu>1.0</mu>
          <mu2>1.0</mu2>
        </ode>
      </friction>
    </surface>

Simulation Runs Too Slow
^^^^^^^^^^^^^^^^^^^^^^^^^

**Solutions**:

1. Reduce physics update rate (see Performance Optimization)
2. Disable GUI: ``gui:=false``
3. Use ``gz sim -s`` (server only, no rendering)

Sensors Not Publishing
^^^^^^^^^^^^^^^^^^^^^^^

**Solutions**:

1. **Check if sensor plugin loaded**:

   .. code-block:: bash

      gz topic -l | grep camera

2. **Verify URDF**: Ensure sensor plugins are in robot description
3. **Restart Simulation**: Sometimes sensors need a fresh start

Best Practices
--------------

1. **Start Simple**: Begin with empty world, add complexity gradually
2. **Save Often**: Gazebo can crash - save world changes frequently
3. **Monitor Performance**: Use ``gz stats`` to check real-time factor
4. **Version Control Worlds**: Commit `.sdf` files to git
5. **Document Custom Models**: Add README for custom objects

Advanced Features
-----------------

Recording and Playback
^^^^^^^^^^^^^^^^^^^^^^^

Record simulation state:

.. code-block:: bash

    gz log -d 1 -f recording

Replay:

.. code-block:: bash

    gz sim -p recording.log

Plugins
^^^^^^^

Add custom physics or sensor behavior by writing Gazebo plugins in C++.
See Gazebo documentation for plugin tutorials.

Next Steps
----------

- :doc:`../dev-guide/simulation` - Customize robot URDF and sensors
- :doc:`../theory/simulation` - Understand physics engines
- :doc:`navigation` - Test navigation in simulated environments
- :doc:`manipulation` - Simulate pick-and-place tasks
