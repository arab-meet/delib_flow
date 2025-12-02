#include "grab2_bt_testing_pkg/pick_and_navigate.hpp"
#include <rclcpp/rclcpp.hpp>

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::NodeOptions options;

  auto node = std::make_shared<grab2_bt_testing::PickAndNavigate>(options);
  rclcpp::executors::MultiThreadedExecutor exec(rclcpp::ExecutorOptions(), 0, false,
    std::chrono::milliseconds(250));
  exec.add_node(node->node());

  exec.spin();
  exec.remove_node(node->node());

  rclcpp::shutdown();
  return 0;
}
