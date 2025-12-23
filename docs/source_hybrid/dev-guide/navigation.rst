.. _dg-navigation:

Navigation (Implementation)
###########################

.. note::
   **See also:**
   
   * :doc:`User Guide <../user-guide/navigation>`
   * :doc:`Theoretical Background <../theory/navigation>`

Package Structure
-----------------

The ``tiago_nav`` package contains Nav2 configuration:

.. code-block:: text

    tiago_nav/
    ├── CMakeLists.txt
    ├── package.xml
    ├── config/
    │   ├── nav2_params.yaml       # Main Nav2 configuration
    │   ├── amcl_params.yaml       # Localization parameters
    │   └── costmap_common.yaml    # Shared costmap config
    ├── maps/
    │   ├── default_map.yaml
    │   └── default_map.pgm
    └── launch/
        └── tiago_nav2.launch.py

Launch File Anatomy
-------------------

The main launch file (``tiago_nav2.launch.py``) starts:

1. **Map Server** - Serves the pre-built map
2. **AMCL** - Adaptive Monte Carlo Localization
3. **Nav2 Lifecycle Manager** - Manages node lifecycle
4. **Nav2 BT Navigator** - Behavior tree-based navigation
5. **Planner Server** - Global path planning
6. **Controller Server** - Local trajectory control
7. **Recovery Server** - Stuck recovery behaviors

Example Launch File
^^^^^^^^^^^^^^^^^^^

.. code-block:: python

    from launch import LaunchDescription
    from launch_ros.actions import Node
    from ament_index_python.packages import get_package_share_directory
    import os

    def generate_launch_description():
        pkg_dir = get_package_share_directory('tiago_nav')
        
        # Load parameters
        nav2_params = os.path.join(pkg_dir, 'config', 'nav2_params.yaml')
        map_file = os.path.join(pkg_dir, 'maps', 'default_map.yaml')

        return LaunchDescription([
            # Map Server
            Node(
                package='nav2_map_server',
                executable='map_server',
                name='map_server',
                parameters=[{'yaml_filename': map_file}]
            ),

            # AMCL
            Node(
                package='nav2_amcl',
                executable='amcl',
                name='amcl',
                parameters=[nav2_params]
            ),

            # Controller Server
            Node(
                package='nav2_controller',
                executable='controller_server',
                name='controller_server',
                parameters=[nav2_params]
            ),

            # Planner Server
            Node(
                package='nav2_planner',
                executable='planner_server',
                name='planner_server',
                parameters=[nav2_params]
            ),

            # BT Navigator
            Node(
                package='nav2_bt_navigator',
                executable='bt_navigator',
                name='bt_navigator',
                parameters=[nav2_params]
            ),

            # Lifecycle Manager
            Node(
                package='nav2_lifecycle_manager',
                executable='lifecycle_manager',
                name='lifecycle_manager_navigation',
                parameters=[{
                    'autostart': True,
                    'node_names': [
                        'map_server',
                        'amcl',
                        'controller_server',
                        'planner_server',
                        'bt_navigator'
                    ]
                }]
            ),
        ])

Configuration Deep Dive
-----------------------

nav2_params.yaml Structure
^^^^^^^^^^^^^^^^^^^^^^^^^^^

.. code-block:: yaml

    bt_navigator:
      ros__parameters:
        default_nav_to_pose_bt_xml: ...
        plugin_lib_names:
          - nav2_compute_path_to_pose_action_bt_node
          - nav2_follow_path_action_bt_node

    controller_server:
      ros__parameters:
        controller_frequency: 20.0
        min_x_velocity_threshold: 0.001
        min_y_velocity_threshold: 0.5
        min_theta_velocity_threshold: 0.001
        
        FollowPath:
          plugin: "dwb_core::DWBLocalPlanner"
          # DWB parameters...

    planner_server:
      ros__parameters:
        expected_planner_frequency: 20.0
        
        GridBased:
          plugin: "nav2_navfn_planner/NavfnPlanner"
          tolerance: 0.5
          use_astar: false

Costmap Configuration
^^^^^^^^^^^^^^^^^^^^^^

Global and local costmaps have separate configurations:

.. code-block:: yaml

    global_costmap:
      global_costmap:
        ros__parameters:
          update_frequency: 1.0
          publish_frequency: 1.0
          global_frame: map
          robot_base_frame: base_footprint
          
          resolution: 0.05
          track_unknown_space: true
          
          plugins: ["static_layer", "obstacle_layer", "inflation_layer"]
          
          static_layer:
            plugin: "nav2_costmap_2d::StaticLayer"
            map_subscribe_transient_local: True
          
          obstacle_layer:
            plugin: "nav2_costmap_2d::ObstacleLayer"
            observation_sources: scan
            scan:
              topic: /scan
              max_obstacle_height: 2.0
              clearing: True
              marking: True
          
          inflation_layer:
            plugin: "nav2_costmap_2d::InflationLayer"
            cost_scaling_factor: 3.0
            inflation_radius: 0.55

    local_costmap:
      local_costmap:
        ros__parameters:
          update_frequency: 5.0
          publish_frequency: 2.0
          global_frame: odom
          robot_base_frame: base_footprint
          rolling_window: true
          width: 3
          height: 3
          resolution: 0.05

DWB Controller Parameters
^^^^^^^^^^^^^^^^^^^^^^^^^^

The DWB (Dynamic Window Approach variant) controller parameters:

.. code-block:: yaml

    FollowPath:
      plugin: "dwb_core::DWBLocalPlanner"
      min_vel_x: -0.3
      max_vel_x: 0.5
      min_vel_y: 0.0  # Diff drive
      max_vel_y: 0.0
      max_vel_theta: 1.0
      min_speed_xy: 0.0
      max_speed_xy: 0.5
      min_speed_theta: 0.0
      acc_lim_x: 2.5
      acc_lim_y: 0.0
      acc_lim_theta: 3.2
      decel_lim_x: -2.5
      decel_lim_y: 0.0
      decel_lim_theta: -3.2
      
      vx_samples: 20
      vy_samples: 0
      vtheta_samples: 40
      
      sim_time: 1.7
      linear_granularity: 0.05
      angular_granularity: 0.025
      
      critics: [
        "RotateToGoal",
        "Oscillation",
        "BaseObstacle",
        "GoalAlign",
        "PathAlign",
        "PathDist",
        "GoalDist"
      ]

Behavior Tree Integration
--------------------------

The navigation behavior tree (XML) used by ``bt_navigator``:

.. code-block:: xml

    <root main_tree_to_execute="MainTree">
      <BehaviorTree ID="MainTree">
        <RecoveryNode number_of_retries="6">
          <PipelineSequence>
            <RateController hz="1.0">
              <RecoveryNode number_of_retries="1">
                <ComputePathToPose goal="{goal}" path="{path}"/>
                <ClearEntireCostmap service_name="global_costmap/clear_entirely_global_costmap"/>
              </RecoveryNode>
            </RateController>
            <RecoveryNode number_of_retries="1">
              <FollowPath path="{path}"/>
              <ClearEntireCostmap service_name="local_costmap/clear_entirely_local_costmap"/>
            </RecoveryNode>
          </PipelineSequence>
          <SequenceStar>
            <ClearEntireCostmap service_name="local_costmap/clear_entirely_local_costmap"/>
            <ClearEntireCostmap service_name="global_costmap/clear_entirely_global_costmap"/>
            <Spin spin_dist="1.57"/>
            <Wait wait_duration="5"/>
          </SequenceStar>
        </RecoveryNode>
      </BehaviorTree>
    </root>

Custom Plugins
--------------

Creating a Custom Planner
^^^^^^^^^^^^^^^^^^^^^^^^^

Implement the ``nav2_core::GlobalPlanner`` interface:

.. code-block:: cpp

    #include "nav2_core/global_planner.hpp"

    class MyCustomPlanner : public nav2_core::GlobalPlanner
    {
    public:
      void configure(
        const rclcpp_lifecycle::LifecycleNode::WeakPtr& parent,
        std::string name,
        std::shared_ptr<tf2_ros::Buffer> tf,
        std::shared_ptr<nav2_costmap_2d::Costmap2DROS> costmap_ros) override
      {
        // Initialization
      }

      void cleanup() override {}
      void activate() override {}
      void deactivate() override {}

      nav_msgs::msg::Path createPlan(
        const geometry_msgs::msg::PoseStamped& start,
        const geometry_msgs::msg::PoseStamped& goal) override
      {
        // Your planning algorithm
        nav_msgs::msg::Path path;
        // ...
        return path;
      }
    };

    #include "pluginlib/class_list_macros.hpp"
    PLUGINLIB_EXPORT_CLASS(MyCustomPlanner, nav2_core::GlobalPlanner)

Register in ``plugin.xml``:

.. code-block:: xml

    <library path="my_custom_planner">
      <class type="MyCustomPlanner" base_class_type="nav2_core::GlobalPlanner">
        <description>My custom global planner</description>
      </class>
    </library>

Debugging Tools
---------------

Visualize Costmaps
^^^^^^^^^^^^^^^^^^

In RViz, add:
- ``Map`` display → Topic: ``/global_costmap/costmap``
- ``Map`` display → Topic: ``/local_costmap/costmap``

Monitor Nav2 Status
^^^^^^^^^^^^^^^^^^^

.. code-block:: bash

    ros2 topic echo /bt_navigator/transition_event

Check Transform Tree
^^^^^^^^^^^^^^^^^^^^

.. code-block:: bash

    ros2 run tf2_tools view_frames
    # Generates frames.pdf

Performance Profiling
^^^^^^^^^^^^^^^^^^^^^

.. code-block:: bash

    ros2 run nav2_util lifecycle_bringup --help
    # Use --perf flag for profiling

Best Practices
--------------

1. **Tune in Simulation First**: Always test parameter changes in Gazebo
2. **Use Dynamic Reconfigure**: Adjust params without restart
3. **Monitor Costmaps**: Visualize to understand robot's perception
4. **Version Control Configs**: Keep parameter files in git
5. **Document Changes**: Comment why parameters were changed

Next Steps
----------

* :doc:`../user-guide/navigation` - Learn usage and tuning
* :doc:`../theory/navigation` - Understand algorithms
* :doc:`behavior_trees` - Integrate custom nav behaviors
