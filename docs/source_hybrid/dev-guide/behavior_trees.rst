.. _dg-behavior-trees:

Behavior Trees (Implementation)
###############################

.. note::
   **See also:**
   
   * :doc:`User Guide <../user-guide/behavior_trees>`
   * :doc:`Theoretical Background <../theory/behavior_trees>`

Package Structure
-----------------

The ``tiago_demos`` package is organized as follows:

.. code-block:: text

    tiago_demos/
    ├── CMakeLists.txt
    ├── package.xml
    ├── include/tiago_demos/
    │   ├── bt_nodes.hpp          # Custom BT node definitions
    │   └── bt_executor.hpp       # Tree execution logic
    ├── src/
    │   ├── bt_nodes.cpp          # Node implementations
    │   ├── bt_executor.cpp
    │   └── main.cpp              # ROS 2 node entry point
    ├── trees/
    │   ├── pick_object_example.xml
    │   └── our_map_example.xml
    ├── config/
    │   └── bt_config.yaml
    └── launch/
        └── bt_demo.launch.py

BehaviorTree.CPP Integration
-----------------------------

We use `BehaviorTree.CPP v4 <https://www.behaviortree.dev/>`_ for the underlying BT engine.

Key Dependencies
^^^^^^^^^^^^^^^^

In ``package.xml``:

.. code-block:: xml

    <depend>behaviortree_cpp</depend>
    <depend>rclcpp</depend>
    <depend>rclcpp_action</depend>
    <depend>nav2_behavior_tree</depend>

In ``CMakeLists.txt``:

.. code-block:: cmake

    find_package(behaviortree_cpp REQUIRED)
    find_package(rclcpp REQUIRED)
    find_package(rclcpp_action REQUIRED)

    add_executable(bt_executor
      src/main.cpp
      src/bt_executor.cpp
      src/bt_nodes.cpp
    )

    ament_target_dependencies(bt_executor
      behaviortree_cpp
      rclcpp
      rclcpp_action
    )

Creating Custom Nodes
----------------------

Action Node Example
^^^^^^^^^^^^^^^^^^^

Here's how to create a custom action node that publishes a message:

**Header** (``include/tiago_demos/bt_nodes.hpp``):

.. code-block:: cpp

    #pragma once
    #include "behaviortree_cpp/action_node.h"
    #include "rclcpp/rclcpp.hpp"
    #include "std_msgs/msg/string.hpp"

    namespace tiago_demos
    {

    class PublishMessage : public BT::StatefulActionNode
    {
    public:
      PublishMessage(const std::string& name, 
                     const BT::NodeConfig& config,
                     rclcpp::Node::SharedPtr node);

      static BT::PortsList providedPorts()
      {
        return {
          BT::InputPort<std::string>("message", "Message to publish")
        };
      }

      BT::NodeStatus onStart() override;
      BT::NodeStatus onRunning() override;
      void onHalted() override;

    private:
      rclcpp::Node::SharedPtr node_;
      rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
      std::string message_;
    };

    } // namespace tiago_demos

**Implementation** (``src/bt_nodes.cpp``):

.. code-block:: cpp

    #include "tiago_demos/bt_nodes.hpp"

    namespace tiago_demos
    {

    PublishMessage::PublishMessage(
      const std::string& name,
      const BT::NodeConfig& config,
      rclcpp::Node::SharedPtr node)
    : BT::StatefulActionNode(name, config), node_(node)
    {
      publisher_ = node_->create_publisher<std_msgs::msg::String>(
        "/bt_messages", 10);
    }

    BT::NodeStatus PublishMessage::onStart()
    {
      // Get input from BT blackboard
      if (!getInput("message", message_)) {
        throw BT::RuntimeError("Missing required input [message]");
      }

      RCLCPP_INFO(node_->get_logger(), "Publishing: %s", message_.c_str());
      
      auto msg = std_msgs::msg::String();
      msg.data = message_;
      publisher_->publish(msg);

      return BT::NodeStatus::SUCCESS;
    }

    BT::NodeStatus PublishMessage::onRunning()
    {
      // For synchronous actions, this is never called
      return BT::NodeStatus::SUCCESS;
    }

    void PublishMessage::onHalted()
    {
      RCLCPP_WARN(node_->get_logger(), "PublishMessage halted");
    }

    } // namespace tiago_demos

Condition Node Example
^^^^^^^^^^^^^^^^^^^^^^^

.. code-block:: cpp

    class BatteryCheck : public BT::ConditionNode
    {
    public:
      BatteryCheck(const std::string& name, const BT::NodeConfig& config)
      : BT::ConditionNode(name, config) {}

      static BT::PortsList providedPorts()
      {
        return {
          BT::InputPort<double>("threshold", 20.0, "Battery % threshold")
        };
      }

      BT::NodeStatus tick() override
      {
        double threshold;
        getInput("threshold", threshold);

        // Get battery level from blackboard or topic
        auto battery_level = getBatteryLevel();

        if (battery_level > threshold) {
          return BT::NodeStatus::SUCCESS;
        }
        return BT::NodeStatus::FAILURE;
      }

    private:
      double getBatteryLevel()
      {
        // Implementation: subscribe to battery topic
        return 75.0;  // Example
      }
    };

Registering Nodes
^^^^^^^^^^^^^^^^^

In your main executor:

.. code-block:: cpp

    #include "behaviortree_cpp/bt_factory.h"
    #include "tiago_demos/bt_nodes.hpp"

    int main(int argc, char** argv)
    {
      rclcpp::init(argc, argv);
      auto node = std::make_shared<rclcpp::Node>("bt_executor");

      BT::BehaviorTreeFactory factory;

      // Register custom nodes
      factory.registerNodeType<tiago_demos::PublishMessage>(
        "PublishMessage", node);
      factory.registerNodeType<tiago_demos::BatteryCheck>(
        "BatteryCheck");

      // Load tree from XML
      auto tree = factory.createTreeFromFile("/path/to/tree.xml");

      // Execute
      BT::NodeStatus status = BT::NodeStatus::RUNNING;
      while (rclcpp::ok() && status == BT::NodeStatus::RUNNING) {
        status = tree.tickOnce();
        rclcpp::spin_some(node);
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
      }

      rclcpp::shutdown();
      return 0;
    }

Using ROS 2 Actions in BT
--------------------------

Integrating Nav2 Actions
^^^^^^^^^^^^^^^^^^^^^^^^^

For navigation, we use Nav2's built-in BT nodes:

.. code-block:: xml

    <Action ID="NavigateToPose" server_name="navigate_to_pose"
            goal="{goal_pose}" result="{nav_result}"/>

The ``NavigateToPose`` node is provided by ``nav2_behavior_tree``.

Custom Action Client Node
^^^^^^^^^^^^^^^^^^^^^^^^^^

To create your own action client node:

.. code-block:: cpp

    #include "behaviortree_cpp/action_node.h"
    #include "rclcpp_action/rclcpp_action.hpp"
    #include "my_interfaces/action/pick_object.hpp"

    class PickObjectAction : public BT::StatefulActionNode
    {
    public:
      using PickObject = my_interfaces::action::PickObject;
      using GoalHandlePick = rclcpp_action::ClientGoalHandle<PickObject>;

      PickObjectAction(const std::string& name, 
                       const BT::NodeConfig& config,
                       rclcpp::Node::SharedPtr node)
      : BT::StatefulActionNode(name, config), node_(node)
      {
        action_client_ = rclcpp_action::create_client<PickObject>(
          node_, "pick_object");
      }

      BT::NodeStatus onStart() override
      {
        // Wait for action server
        if (!action_client_->wait_for_action_server(std::chrono::seconds(5))) {
          RCLCPP_ERROR(node_->get_logger(), "Action server not available");
          return BT::NodeStatus::FAILURE;
        }

        // Send goal
        auto goal = PickObject::Goal();
        getInput("object_id", goal.object_id);

        auto send_goal_options = rclcpp_action::Client<PickObject>::SendGoalOptions();
        send_goal_options.result_callback =
          [this](const GoalHandlePick::WrappedResult& result) {
            result_received_ = true;
            result_ = result.code;
          };

        action_client_->async_send_goal(goal, send_goal_options);
        return BT::NodeStatus::RUNNING;
      }

      BT::NodeStatus onRunning() override
      {
        if (result_received_) {
          if (result_ == rclcpp_action::ResultCode::SUCCEEDED) {
            return BT::NodeStatus::SUCCESS;
          }
          return BT::NodeStatus::FAILURE;
        }
        return BT::NodeStatus::RUNNING;
      }

    private:
      rclcpp::Node::SharedPtr node_;
      rclcpp_action::Client<PickObject>::SharedPtr action_client_;
      bool result_received_ = false;
      rclcpp_action::ResultCode result_;
    };

Blackboard and Data Sharing
----------------------------

The BT blackboard allows nodes to share data:

.. code-block:: cpp

    // Write to blackboard
    setOutput("detected_object_id", "aruco_42");

    // Read from blackboard
    std::string object_id;
    if (!getInput("object_id", object_id)) {
      RCLCPP_ERROR(node_->get_logger(), "No object_id in blackboard");
    }

Using Ports in XML:

.. code-block:: xml

    <Sequence>
      <Action ID="DetectObject" object_id="{obj_id}"/>
      <Action ID="PickObject" object_id="{obj_id}"/>
    </Sequence>

Testing
-------

Unit Testing BT Nodes
^^^^^^^^^^^^^^^^^^^^^^

Use Google Test:

.. code-block:: cpp

    #include <gtest/gtest.h>
    #include "tiago_demos/bt_nodes.hpp"

    TEST(BTNodesTest, PublishMessageTest)
    {
      rclcpp::init(0, nullptr);
      auto node = std::make_shared<rclcpp::Node>("test_node");

      BT::NodeConfig config;
      auto bt_node = tiago_demos::PublishMessage("test", config, node);

      // Set input
      bt_node.setInput("message", "test_message");

      // Tick node
      auto status = bt_node.executeTick();

      EXPECT_EQ(status, BT::NodeStatus::SUCCESS);

      rclcpp::shutdown();
    }

Debugging
---------

Groot Monitoring
^^^^^^^^^^^^^^^^

Use Groot to visualize tree execution in real-time:

1. Add Groot publisher in your executor:

   .. code-block:: cpp

      #include "behaviortree_cpp/loggers/groot2_publisher.h"

      auto publisher_zmq = std::make_shared<BT::Groot2Publisher>(tree);

2. Launch Groot and connect to the publisher

Print Tree Structure
^^^^^^^^^^^^^^^^^^^^

.. code-block:: cpp

    BT::printTreeRecursively(tree.rootNode());

Best Practices
--------------

1. **Keep Nodes Simple**: Each node should have one responsibility
2. **Use Ports for Data**: Avoid global variables
3. **Handle Errors Gracefully**: Return FAILURE instead of throwing
4. **Use Decorators**: For retry logic, timeouts, etc.
5. **Test Incrementally**: Test each node individually before integration

Common Patterns
---------------

Retry Pattern
^^^^^^^^^^^^^

.. code-block:: xml

    <RetryUntilSuccessful num_attempts="3">
      <Action ID="UnreliableAction"/>
    </RetryUntilSuccessful>

Timeout Pattern
^^^^^^^^^^^^^^^

.. code-block:: xml

    <Timeout msec="5000">
      <Action ID="SlowAction"/>
    </Timeout>

Parallel Execution
^^^^^^^^^^^^^^^^^^

.. code-block:: xml

    <Parallel success_count="2">
      <Action ID="Action1"/>
      <Action ID="Action2"/>
      <Action ID="Action3"/>
    </Parallel>

Next Steps
----------

- :doc:`../user-guide/behavior_trees` - Learn XML tree structure
- :doc:`../theory/behavior_trees` - Understand BT theory
- :doc:`navigation` - Integrate navigation actions
- :doc:`manipulation` - Add manipulation behaviors
