#ifndef TIAGO_DEMOS__UTILS_HPP
#define TIAGO_DEMOS__UTILS_HPP

#include <filesystem>
#include <stdexcept>
#include <yaml-cpp/yaml.h>
#include <chrono>
#include <cmath>

#include "ament_index_cpp/get_package_share_directory.hpp"
#include "rclcpp/rclcpp.hpp"
#include "behaviortree_cpp/blackboard.h"

#include "tf2/LinearMath/Quaternion.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"

namespace tiago_demos
{

std::filesystem::path getFilePath(const std::string& package_name, const std::string& filename)
{
  // check first the given path
  if(std::filesystem::exists(filename))
  {
    return filename;
  }
  // try appending the package directory
  const std::string package_dir = ament_index_cpp::get_package_share_directory(package_name);
  const auto package_path = std::filesystem::path(package_dir) / filename;
  if(std::filesystem::exists(package_path))
  {
    return package_path;
  }
  throw std::runtime_error("File not found: " + filename);
}

void loadTargetLocationsFromYAML(
  rclcpp::Node::SharedPtr node,
  const std::string& filename,
  BT::Blackboard::Ptr blackboard)
{
  try {
    YAML::Node locations = YAML::LoadFile(filename);

    if (!locations || !locations.IsMap()) {
      RCLCPP_ERROR(node->get_logger(), "Target locations YAML must be a map of name -> {frame_id, pose}");
      return;
    }

    for (auto it = locations.begin(); it != locations.end(); ++it) {
      try {
        const std::string name = it->first.as<std::string>();
        const YAML::Node entry = it->second;
        if (!entry["frame_id"] || !entry["pose"]) {
          RCLCPP_ERROR(node->get_logger(), "Entry '%s' missing 'frame_id' or 'pose', skipping", name.c_str());
          continue;
        }

        const std::string frame_id = entry["frame_id"].as<std::string>();
        const YAML::Node pose_node = entry["pose"];

        if (!pose_node["x"] || !pose_node["y"] || !pose_node["z"] || !pose_node["yaw_deg"]) {
          RCLCPP_ERROR(node->get_logger(), "Pose for '%s' missing x/y/z/yaw_deg, skipping", name.c_str());
          continue;
        }

        const double x = pose_node["x"].as<double>();
        const double y = pose_node["y"].as<double>();
        const double z = pose_node["z"].as<double>();
        const double yaw_deg = pose_node["yaw_deg"].as<double>();

        // yaw to quaternion (degrees -> radians)
        tf2::Quaternion q;
        q.setRPY(0.0, 0.0, yaw_deg * M_PI / 180.0);

      geometry_msgs::msg::PoseStamped pose;
      pose.header.frame_id = frame_id;
      pose.pose.position.x = x;
      pose.pose.position.y = y;
      pose.pose.position.z = z;
      pose.pose.orientation = tf2::toMsg(q);

        // add the name and pose
        blackboard->set<geometry_msgs::msg::PoseStamped>("loc." + name, pose);

        RCLCPP_INFO(
          node->get_logger(),
          "Loaded target location: %s (x=%.2f, y=%.2f, yaw=%.1f)",
          name.c_str(), x, y, yaw_deg);
      } catch (const YAML::Exception & ye) {
        RCLCPP_ERROR(node->get_logger(), "YAML error parsing location entry: %s", ye.what());
      }
    }
  } catch (const std::exception & e) {
    RCLCPP_ERROR(node->get_logger(), "Failed to load target locations YAML: %s", e.what());
  }
}

}  // namespace tiago_demos

#endif  // TIAGO_DEMOS__UTILS_HPP
