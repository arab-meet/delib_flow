.. _dg-manipulation:

Manipulation (Implementation)
#############################

.. note::
   **See also:**
   
   * :doc:`User Guide <../user-guide/manipulation>`
   * :doc:`Theoretical Background <../theory/manipulation>`

Package Structure
-----------------

.. code-block:: text

    tiago_grab/
    ├── CMakeLists.txt
    ├── package.xml
    ├── config/
    │   ├── grasp_config.yaml
    │   └── moveit_config/
    │       ├── ompl_planning.yaml
    │       ├── kinematics.yaml
    │       └── joint_limits.yaml
    ├── launch/
    │   └── tiago_grab.launch.py
    └── behavior_trees/
        └── pick_place.xml

MoveIt 2 Integration
--------------------

Dependencies
^^^^^^^^^^^^

``package.xml``:

.. code-block:: xml

    <depend>moveit_ros_planning_interface</depend>
    <depend>moveit_ros_move_group</depend>
    <depend>moveit_kinematics</depend>
    <depend>moveit_planners_ompl</depend>

Launch File
^^^^^^^^^^^

.. code-block:: python

    from moveit_configs_utils import MoveItConfigsBuilder
    from launch import LaunchDescription
    from launch_ros.actions import Node

    def generate_launch_description():
        moveit_config = MoveItConfigsBuilder("tiago").to_moveit_configs()

        return LaunchDescription([
            Node(
                package="moveit_ros_move_group",
                executable="move_group",
                parameters=[moveit_config.to_dict()],
            ),
            Node(
                package="tiago_grab",
                executable="grasp_action_server",
                parameters=[{"grasp_config": "config/grasp_config.yaml"}]
            ),
        ])

Grasp Planning
--------------

Action Server Implementation
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

.. code-block:: cpp

    #include <rclcpp/rclcpp.hpp>
    #include <rclcpp_action/rclcpp_action.hpp>
    #include <moveit/move_group_interface/move_group_interface.h>
    #include <moveit/planning_scene_interface/planning_scene_interface.h>

    class GraspActionServer : public rclcpp::Node
    {
    public:
      using Pick = tiago_grab_interfaces::action::Pick;
      using GoalHandlePick = rclcpp_action::ServerGoalHandle<Pick>;

      explicit GraspActionServer(const rclcpp::NodeOptions& options = rclcpp::NodeOptions())
      : Node("grasp_action_server", options)
      {
        action_server_ = rclcpp_action::create_server<Pick>(
          this,
          "pick_object",
          std::bind(&GraspActionServer::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
          std::bind(&GraspActionServer::handle_cancel, this, std::placeholders::_1),
          std::bind(&GraspActionServer::handle_accepted, this, std::placeholders::_1)
        );
      }

    private:
      rclcpp_action::GoalResponse handle_goal(
        const rclcpp_action::GoalUUID& uuid,
        std::shared_ptr<const Pick::Goal> goal)
      {
        RCLCPP_INFO(get_logger(), "Received pick request for object: %s", goal->object_id.c_str());
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
      }

      rclcpp_action::CancelResponse handle_cancel(
        const std::shared_ptr<GoalHandlePick> goal_handle)
      {
        RCLCPP_INFO(get_logger(), "Received cancel request");
        return rclcpp_action::CancelResponse::ACCEPT;
      }

      void handle_accepted(const std::shared_ptr<GoalHandlePick> goal_handle)
      {
        std::thread{std::bind(&GraspActionServer::execute, this, std::placeholders::_1), goal_handle}.detach();
      }

      void execute(const std::shared_ptr<GoalHandlePick> goal_handle)
      {
        const auto goal = goal_handle->get_goal();
        auto result = std::make_shared<Pick::Result>();
        
        // Get object pose from TF
        geometry_msgs::msg::PoseStamped object_pose;
        if (!getObjectPose(goal->object_id, object_pose)) {
          result->success = false;
          goal_handle->abort(result);
          return;
        }

        // Plan and execute grasp
        moveit::planning_interface::MoveGroupInterface move_group(shared_from_this(), "arm");
        
        // Pre-grasp pose
        auto pre_grasp_pose = computePreGraspPose(object_pose);
        move_group.setPoseTarget(pre_grasp_pose);
        
        moveit::planning_interface::MoveGroupInterface::Plan plan;
        if (move_group.plan(plan) == moveit::core::MoveItErrorCode::SUCCESS) {
          move_group.execute(plan);
        }

        // Open gripper
        openGripper();

        // Approach
        auto grasp_pose = object_pose;
        move_group.setPoseTarget(grasp_pose);
        move_group.plan(plan);
        move_group.execute(plan);

        // Close gripper
        closeGripper();

        // Retreat
        auto retreat_pose = computeRetreatPose(object_pose);
        move_group.setPoseTarget(retreat_pose);
        move_group.plan(plan);
        move_group.execute(plan);

        result->success = true;
        goal_handle->succeed(result);
      }

      bool getObjectPose(const std::string& object_id, geometry_msgs::msg::PoseStamped& pose)
      {
        // Look up TF transform for object
        try {
          auto transform = tf_buffer_->lookupTransform("base_link", object_id, tf2::TimePointZero);
          pose.pose.position.x = transform.transform.translation.x;
          pose.pose.position.y = transform.transform.translation.y;
          pose.pose.position.z = transform.transform.translation.z;
          pose.pose.orientation = transform.transform.rotation;
          pose.header.frame_id = "base_link";
          return true;
        } catch (tf2::TransformException& ex) {
          RCLCPP_ERROR(get_logger(), "Could not transform: %s", ex.what());
          return false;
        }
      }

      geometry_msgs::msg::Pose computePreGraspPose(const geometry_msgs::msg::PoseStamped& object_pose)
      {
        auto pre_grasp = object_pose.pose;
        pre_grasp.position.z += 0.1;  // 10cm above object
        return pre_grasp;
      }

      void openGripper()
      {
        moveit::planning_interface::MoveGroupInterface gripper(shared_from_this(), "gripper");
        gripper.setNamedTarget("open");
        gripper.move();
      }

      void closeGripper()
      {
        moveit::planning_interface::MoveGroupInterface gripper(shared_from_this(), "gripper");
        gripper.setNamedTarget("closed");
        gripper.move();
      }

      rclcpp_action::Server<Pick>::SharedPtr action_server_;
      std::shared_ptr<tf2_ros::Buffer> tf_buffer_;
    };

Grasp Generation
^^^^^^^^^^^^^^^^

For more sophisticated grasping, use MoveIt's grasp generation:

.. code-block:: cpp

    #include <moveit/pick_place/pick_place.h>

    std::vector<moveit_msgs::msg::Grasp> generateGrasps(
      const geometry_msgs::msg::PoseStamped& object_pose)
    {
      std::vector<moveit_msgs::msg::Grasp> grasps;
      
      // Generate multiple grasp candidates
      for (double angle = 0; angle < 2 * M_PI; angle += M_PI / 4) {
        moveit_msgs::msg::Grasp grasp;
        
        // Set grasp pose
        grasp.grasp_pose.header = object_pose.header;
        grasp.grasp_pose.pose = object_pose.pose;
        
        // Rotate around Z axis
        tf2::Quaternion q;
        q.setRPY(0, 0, angle);
        grasp.grasp_pose.pose.orientation = tf2::toMsg(q);
        
        // Pre-grasp approach
        grasp.pre_grasp_approach.direction.header.frame_id = "base_link";
        grasp.pre_grasp_approach.direction.vector.z = -1.0;
        grasp.pre_grasp_approach.min_distance = 0.05;
        grasp.pre_grasp_approach.desired_distance = 0.1;
        
        // Post-grasp retreat
        grasp.post_grasp_retreat.direction.header.frame_id = "base_link";
        grasp.post_grasp_retreat.direction.vector.z = 1.0;
        grasp.post_grasp_retreat.min_distance = 0.05;
        grasp.post_grasp_retreat.desired_distance = 0.1;
        
        // Gripper posture
        grasp.grasp_posture.joint_names = {"gripper_joint"};
        grasp.grasp_posture.points.resize(1);
        grasp.grasp_posture.points[0].positions = {0.0};  // Closed
        
        grasps.push_back(grasp);
      }
      
      return grasps;
    }

Collision Avoidance
-------------------

Adding Objects to Planning Scene
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

.. code-block:: cpp

    moveit::planning_interface::PlanningSceneInterface planning_scene;

    // Add table
    moveit_msgs::msg::CollisionObject table;
    table.header.frame_id = "base_link";
    table.id = "table";

    shape_msgs::msg::SolidPrimitive primitive;
    primitive.type = primitive.BOX;
    primitive.dimensions = {1.0, 1.0, 0.05};  // 1m x 1m x 5cm

    geometry_msgs::msg::Pose box_pose;
    box_pose.position.x = 0.5;
    box_pose.position.z = 0.4;

    table.primitives.push_back(primitive);
    table.primitive_poses.push_back(box_pose);
    table.operation = table.ADD;

    planning_scene.applyCollisionObject(table);

Attached Objects
^^^^^^^^^^^^^^^^

When grasping, attach object to gripper:

.. code-block:: cpp

    moveit_msgs::msg::AttachedCollisionObject attached_obj;
    attached_obj.link_name = "gripper_link";
    attached_obj.object = collision_object;

    planning_scene.applyAttachedCollisionObject(attached_obj);

Configuration
-------------

Kinematics (kinematics.yaml)
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

.. code-block:: yaml

    arm:
      kinematics_solver: kdl_kinematics_plugin/KDLKinematicsPlugin
      kinematics_solver_search_resolution: 0.005
      kinematics_solver_timeout: 0.05

OMPL Planning (ompl_planning.yaml)
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

.. code-block:: yaml

    planning_plugin: ompl_interface/OMPLPlanner
    request_adapters: >-
      default_planner_request_adapters/AddTimeOptimalParameterization
      default_planner_request_adapters/ResolveConstraintFrames
      default_planner_request_adapters/FixWorkspaceBounds
      default_planner_request_adapters/FixStartStateBounds
      default_planner_request_adapters/FixStartStateCollision
      default_planner_request_adapters/FixStartStatePathConstraints

    arm:
      planner_configs:
        - RRTConnect
        - EST
      projection_evaluator: joints(arm_1_joint,arm_2_joint)
      longest_valid_segment_fraction: 0.005

Testing
-------

.. code-block:: cpp

    #include <gtest/gtest.h>
    #include <moveit/move_group_interface/move_group_interface.h>

    TEST(ManipulationTest, ReachNamedPose)
    {
      rclcpp::init(0, nullptr);
      auto node = std::make_shared<rclcpp::Node>("test_node");
      
      moveit::planning_interface::MoveGroupInterface move_group(node, "arm");
      move_group.setNamedTarget("home");
      
      auto success = (move_group.plan(plan) == moveit::core::MoveItErrorCode::SUCCESS);
      EXPECT_TRUE(success);
      
      rclcpp::shutdown();
    }

Best Practices
--------------

1. **Always Check Planning Success**: Don't execute failed plans
2. **Use Collision Objects**: Keep planning scene updated
3. **Validate IK Solutions**: Check joint limits before execution
4. **Plan Before Executing**: Never command joints directly
5. **Handle Gripper Separately**: Use dedicated gripper controller

Next Steps
----------

- :doc:`../user-guide/manipulation` - Learn usage
- :doc:`../theory/manipulation` - Understand IK and planning
- :doc:`perception` - Detect objects for grasping
