#include "rclcpp/rclcpp.hpp"
#include <functional>
#include <memory>
#include <chrono>
#include <string>

#include "tf2/LinearMath/Quaternion.h"
#include "tf2_ros/transform_broadcaster.h"
#include "geometry_msgs/msg/transform_stamped.hpp"
#include "ros2_aruco_interfaces/msg/aruco_markers.hpp"

using namespace std::chrono_literals;
using std::placeholders::_1;

class camera : public rclcpp::Node
{

   public:
   camera() : Node("aruco_broadcast")
   {
      subscription_ = this->create_subscription<ros2_aruco_interfaces::msg::ArucoMarkers>
      ("/aruco_markers", 10,
       std::bind(&camera::camera_callback, this, std::placeholders::_1));

      tf2_broadcaster_ = std::make_unique<tf2_ros::TransformBroadcaster>(*this);

      RCLCPP_INFO(get_logger(), "Node started!");

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
    geometry_msgs::msg::TransformStamped transform_stamped;

    transform_stamped.header.stamp = aruco.header.stamp;
    transform_stamped.header.frame_id = "head_front_camera_rgb_optical_frame";  // Color camera optical frame
    transform_stamped.child_frame_id = "Aruco_marker_" + std::to_string(aruco.marker_ids[i]);  // Detected marker frame

    transform_stamped.transform.translation.x = aruco.poses[i].position.x;
    transform_stamped.transform.translation.y = aruco.poses[i].position.y;
    transform_stamped.transform.translation.z = aruco.poses[i].position.z;

    transform_stamped.transform.rotation.x = aruco.poses[i].orientation.x;
    transform_stamped.transform.rotation.y = aruco.poses[i].orientation.y;
    transform_stamped.transform.rotation.z = aruco.poses[i].orientation.z;
    transform_stamped.transform.rotation.w = aruco.poses[i].orientation.w;

    tf2_broadcaster_->sendTransform(transform_stamped);

    }

   }

   rclcpp::Subscription<ros2_aruco_interfaces::msg::ArucoMarkers>::SharedPtr subscription_;
   std::unique_ptr<tf2_ros::TransformBroadcaster> tf2_broadcaster_;
   // geometry_msgs::msg::Transform transform;

};


int main(int argc, char **argv)
{
    rclcpp::init(argc,argv);
    rclcpp::spin(std::make_shared<camera>());
    rclcpp::shutdown();

    return 0;
}
