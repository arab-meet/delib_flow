#include <behaviortree_cpp/bt_factory.h>
#include <behaviortree_cpp/behavior_tree.h>
#include <behaviortree_cpp/xml_parsing.h>
#include <behaviortree_cpp/loggers/groot2_publisher.h>

#include <rclcpp/rclcpp.hpp>
#include <ament_index_cpp/get_package_share_directory.hpp>

#include "send_goal_node.cpp"
#include "check_battery_node.cpp"
#include "docking_node.cpp"
#include "monitor_charge_node.cpp"
#include "undock_node.cpp"

#include <signal.h>
#include <thread>
#include <chrono>

// Global flag for shutdown
std::atomic<bool> shutdown_requested(false);

void signalHandler(int signum)
{
    RCLCPP_INFO(rclcpp::get_logger("bt_main_node"), "Interrupt signal (%d) received. Shutting down...", signum);
    shutdown_requested = true;
    rclcpp::shutdown();
}

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);

    // Register signal handler
    signal(SIGINT, signalHandler);
    signal(SIGTERM, signalHandler);

    auto node = rclcpp::Node::make_shared("bt_main_node");

    BT::BehaviorTreeFactory factory;

    // Register all custom nodes
    factory.registerNodeType<SendGoalNode>("SendGoal");
    factory.registerNodeType<CheckBattery>("CheckBattery");
    factory.registerNodeType<DockAndRecharge>("DockAndRecharge");
    factory.registerNodeType<MonitorCharge>("MonitorCharge");
    factory.registerNodeType<UndockRobot>("UndockRobot");

    // Load XML tree
    std::string package_share_dir = ament_index_cpp::get_package_share_directory("tiago_behavior");
    std::string tree_file_path = package_share_dir + "/config/tree.xml";

    auto blackboard = BT::Blackboard::create();
    blackboard->set("node", node);

    auto tree = factory.createTreeFromFile(tree_file_path, blackboard);

    BT::Groot2Publisher publisher(tree);
    RCLCPP_INFO(node->get_logger(), "Groot2 Publisher started - Groot can connect on port 1667");

    RCLCPP_INFO(node->get_logger(), "Starting Behavior Tree...");

    BT::NodeStatus status = BT::NodeStatus::RUNNING;

    while (rclcpp::ok() && !shutdown_requested && status == BT::NodeStatus::RUNNING)
    {
        status = tree.tickOnce();
        rclcpp::spin_some(node);
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }

    if (shutdown_requested)
    {
        RCLCPP_INFO(node->get_logger(), "Behavior Tree interrupted by user");
        tree.haltTree();
    }
    else if (status == BT::NodeStatus::SUCCESS)
    {
        RCLCPP_INFO(node->get_logger(), "Behavior Tree finished SUCCESSFULLY");
    }
    else
    {
        RCLCPP_WARN(node->get_logger(), "Behavior Tree finished with FAILURE");
    }

    rclcpp::shutdown();
    return 0;
}
