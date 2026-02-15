#include "rclcpp/rclcpp.hpp"
#include <functional>
#include <memory>
#include <chrono>
#include <string>
#include <unordered_map>
#include <cmath>

#include "tf2/LinearMath/Quaternion.h"
#include "tf2_ros/transform_broadcaster.h"
#include "geometry_msgs/msg/transform_stamped.hpp"
#include "ros2_aruco_interfaces/msg/aruco_markers.hpp"

using namespace std::chrono_literals;
using std::placeholders::_1;

struct SmoothedPose
{
  double x, y, z;
  tf2::Quaternion orientation;
  bool initialized;
};

class ArucoBroadcast : public rclcpp::Node
{

   public:
   ArucoBroadcast() : Node("aruco_broadcast")
   {
      this->declare_parameter("ema_alpha", 0.3);
      this->declare_parameter("reinit_threshold", 0.5);

      alpha_ = this->get_parameter("ema_alpha").as_double();
      reinit_threshold_ = this->get_parameter("reinit_threshold").as_double();

      subscription_ = this->create_subscription<ros2_aruco_interfaces::msg::ArucoMarkers>
      ("/aruco_markers", 10,
       std::bind(&ArucoBroadcast::camera_callback, this, std::placeholders::_1));

      tf2_broadcaster_ = std::make_unique<tf2_ros::TransformBroadcaster>(*this);

      RCLCPP_INFO(get_logger(),
                  "Node started! EMA alpha=%.2f, reinit_threshold=%.3fm",
                  alpha_, reinit_threshold_);
   }

   private:
   void camera_callback( const ros2_aruco_interfaces::msg::ArucoMarkers &aruco )
   {
    if (aruco.poses.empty() || aruco.marker_ids.empty())
    {
      return;
    }

    if (aruco.poses.size() != aruco.marker_ids.size())
    {
      RCLCPP_WARN(get_logger(), "Mismatch between poses and marker_ids sizes");
      return;
    }

    for ( size_t i=0; i<aruco.poses.size(); ++i)
    {
      int marker_id = aruco.marker_ids[i];
      double raw_x = aruco.poses[i].position.x;
      double raw_y = aruco.poses[i].position.y;
      double raw_z = aruco.poses[i].position.z;

      tf2::Quaternion raw_quat(
        aruco.poses[i].orientation.x,
        aruco.poses[i].orientation.y,
        aruco.poses[i].orientation.z,
        aruco.poses[i].orientation.w);

      auto it = smoothed_poses_.find(marker_id);
      if (it == smoothed_poses_.end()) {
        // First detection for this marker — initialize directly
        smoothed_poses_[marker_id] = {raw_x, raw_y, raw_z, raw_quat, true};
      } else {
        SmoothedPose &s = it->second;

        double dx = raw_x - s.x;
        double dy = raw_y - s.y;
        double dz = raw_z - s.z;
        double dist = std::sqrt(dx * dx + dy * dy + dz * dz);

        if (dist > reinit_threshold_) {
          // Large jump (head moved) — reinitialize smoother with new detection
          RCLCPP_INFO_THROTTLE(get_logger(), *this->get_clock(), 1000,
            "Marker %d: reinitializing smoother (jump=%.3fm)",
            marker_id, dist);
          s.x = raw_x;
          s.y = raw_y;
          s.z = raw_z;
          s.orientation = raw_quat;
        } else {
          // Normal detection — apply EMA smoothing
          s.x = alpha_ * raw_x + (1.0 - alpha_) * s.x;
          s.y = alpha_ * raw_y + (1.0 - alpha_) * s.y;
          s.z = alpha_ * raw_z + (1.0 - alpha_) * s.z;
          s.orientation = s.orientation.slerp(raw_quat, alpha_);
        }
      }

      const SmoothedPose &s = smoothed_poses_[marker_id];

      geometry_msgs::msg::TransformStamped transform_stamped;
      transform_stamped.header.stamp = aruco.header.stamp;
      transform_stamped.header.frame_id = "head_front_camera_rgb_optical_frame";
      transform_stamped.child_frame_id = "Aruco_marker_" + std::to_string(marker_id);

      transform_stamped.transform.translation.x = s.x;
      transform_stamped.transform.translation.y = s.y;
      transform_stamped.transform.translation.z = s.z;

      transform_stamped.transform.rotation.x = s.orientation.x();
      transform_stamped.transform.rotation.y = s.orientation.y();
      transform_stamped.transform.rotation.z = s.orientation.z();
      transform_stamped.transform.rotation.w = s.orientation.w();

      tf2_broadcaster_->sendTransform(transform_stamped);
    }
   }

   double alpha_;
   double reinit_threshold_;
   std::unordered_map<int, SmoothedPose> smoothed_poses_;
   rclcpp::Subscription<ros2_aruco_interfaces::msg::ArucoMarkers>::SharedPtr subscription_;
   std::unique_ptr<tf2_ros::TransformBroadcaster> tf2_broadcaster_;
};


int main(int argc, char **argv)
{
    rclcpp::init(argc,argv);
    rclcpp::spin(std::make_shared<ArucoBroadcast>());
    rclcpp::shutdown();

    return 0;
}
