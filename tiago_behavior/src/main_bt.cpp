#include <behaviortree_cpp/bt_factory.h>
#include <behaviortree_cpp/xml_parsing.h>
#include <behaviortree_cpp/loggers/groot2_publisher.h>
#include <ament_index_cpp/get_package_share_directory.hpp>
#include <rclcpp/rclcpp.hpp>
#include <nav2_util/string_utils.hpp>
#include <behaviortree_cpp/utils/shared_library.h>
#include <tiago_behavior/plugins_list.hpp>
#include <signal.h>
#include <thread>
#include <chrono>
#include <atomic>
#include <filesystem>

std::atomic<bool> shutdown_requested(false);
void signalHandler(int signum)
{
    (void)signum;
    rclcpp::shutdown();
    shutdown_requested = true;
}

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    signal(SIGINT, signalHandler);
    signal(SIGTERM, signalHandler);

    auto node = rclcpp::Node::make_shared("bt_main_node");
    BT::BehaviorTreeFactory factory;


    // ------------------ Register tiago_behavior BT plugins ------------------
    RCLCPP_INFO_ONCE(node->get_logger(), "Registering tiago_behavior BT plugins");
    std::vector<std::string> plugins_list = nav2_util::split(tiago::details::BT_BUILTIN_PLUGINS, ';');

    for (const auto & plugin : plugins_list)
    {
        RCLCPP_DEBUG(node->get_logger(), "Registering tiago_behavior BT plugin: %s", plugin.c_str());
        factory.registerFromPlugin(BT::SharedLibrary::getOSName(plugin));
    }

    std::string tree_file_path =
        ament_index_cpp::get_package_share_directory("tiago_behavior") + "/config/tree.xml";

    auto blackboard = BT::Blackboard::create();
    blackboard->set("node", node);

    auto tree = factory.createTreeFromFile(tree_file_path, blackboard);

    BT::Groot2Publisher publisher(tree);

    BT::NodeStatus status = BT::NodeStatus::RUNNING;
    while (rclcpp::ok() && !shutdown_requested && status == BT::NodeStatus::RUNNING)
    {
        status = tree.tickOnce();
        rclcpp::spin_some(node);
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }

    if (shutdown_requested)
        tree.haltTree();

    rclcpp::shutdown();
    return 0;
}
