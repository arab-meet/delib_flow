.. _dg-simulation:

Simulation (Implementation)
###########################

.. note::
   **See also:**
   
   * :doc:`User Guide <../user-guide/simulation>`
   * :doc:`Theoretical Background <../theory/simulation>`

Package Structure
-----------------

.. code-block:: text

    tiago_sim/
    ├── CMakeLists.txt
    ├── package.xml
    ├── worlds/
    │   ├── empty.sdf
    │   └── office.sdf
    ├── urdf/
    │   ├── tiago.urdf.xacro
    │   └── sensors.urdf.xacro
    └── launch/
        └── tiago_sim.launch.py

URDF Configuration
------------------

Main Robot Description (tiago.urdf.xacro):

.. code-block:: xml

    <?xml version="1.0"?>
    <robot xmlns:xacro="http://www.ros.org/wiki/xacro" name="tiago">
      
      <xacro:include filename="sensors.urdf.xacro"/>
      
      <link name="base_link">
        <visual>
          <geometry>
            <cylinder radius="0.25" length="0.4"/>
          </geometry>
        </visual>
        <collision>
          <geometry>
            <cylinder radius="0.25" length="0.4"/>
          </geometry>
        </collision>
        <inertial>
          <mass value="50.0"/>
          <inertia ixx="1.0" ixy="0.0" ixz="0.0" iyy="1.0" iyz="0.0" izz="1.0"/>
        </inertial>
      </link>

      <!-- Gazebo plugins -->
      <gazebo>
        <plugin name="gz::sim::systems::DiffDrive" filename="gz-sim-diff-drive-system">
          <left_joint>left_wheel_joint</left_joint>
          <right_joint>right_wheel_joint</right_joint>
          <wheel_separation>0.5</wheel_separation>
          <wheel_diameter>0.2</wheel_diameter>
          <odom_topic>/odom</odom_topic>
          <tf_topic>/tf</tf_topic>
        </plugin>
      </gazebo>
      
    </robot>

Sensor Configuration (sensors.urdf.xacro):

.. code-block:: xml

    <xacro:macro name="camera_sensor" params="name parent *origin">
      <joint name="${name}_joint" type="fixed">
        <xacro:insert_block name="origin"/>
        <parent link="${parent}"/>
        <child link="${name}_link"/>
      </joint>

      <link name="${name}_link">
        <visual>
          <geometry>
            <box size="0.05 0.05 0.05"/>
          </geometry>
        </visual>
      </link>

      <gazebo reference="${name}_link">
        <sensor name="${name}" type="camera">
          <update_rate>30</update_rate>
          <camera>
            <horizontal_fov>1.047</horizontal_fov>
            <image>
              <width>640</width>
              <height>480</height>
            </image>
            <clip>
              <near>0.1</near>
              <far>100</far>
            </clip>
          </camera>
          <plugin name="camera_controller" filename="libgazebo_ros_camera.so">
            <ros>
              <namespace>/camera</namespace>
            </ros>
            <camera_name>camera</camera_name>
            <frame_name>${name}_link</frame_name>
          </plugin>
        </sensor>
      </gazebo>
    </xacro:macro>

Launch File
-----------

.. code-block:: python

    import os
    from launch import LaunchDescription
    from launch.actions import IncludeLaunchDescription
    from launch_ros.actions import Node
    from ament_index_python.packages import get_package_share_directory

    def generate_launch_description():
        pkg_dir = get_package_share_directory('tiago_sim')
        
        # Process URDF
        urdf_file = os.path.join(pkg_dir, 'urdf', 'tiago.urdf.xacro')
        robot_description = {'robot_description': open(urdf_file).read()}

        return LaunchDescription([
            # Gazebo
            IncludeLaunchDescription(
                os.path.join(get_package_share_directory('ros_gz_sim'), 'launch', 'gz_sim.launch.py'),
                launch_arguments={'gz_args': '-r empty.sdf'}.items()
            ),
            
            # Spawn robot
            Node(
                package='ros_gz_sim',
                executable='create',
                arguments=[
                    '-name', 'tiago',
                    '-topic', '/robot_description',
                ],
                output='screen'
            ),
            
            # Robot state publisher
            Node(
                package='robot_state_publisher',
                executable='robot_state_publisher',
                parameters=[robot_description]
            ),
        ])

Best Practices
--------------

1. **Use Xacro**: For modularity and reusability
2. **Tune Inertias**: Match real robot properties
3. **Optimize Meshes**: Simplify for better performance
4. **Version Control**: Commit URDF/SDF changes

Next Steps
----------

- :doc:`../user-guide/simulation` - Usage guide
- :doc:`../theory/simulation` - Physics theory
