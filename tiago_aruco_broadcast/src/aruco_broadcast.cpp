#include "rclcpp/rclcpp.hpp"
#include <functional>
#include <memory>
#include <chrono>

#include "tf2/LinearMath/Quaternion.h"
#include "tf2_ros/transform_broadcaster.h"
#include "geometry_msgs/msg/transform_stamped.hpp"
#include "ros2_aruco_interfaces/msg/aruco_markers.hpp"

using namespace std::chrono_literals;
using std::placeholders::_1;

class camera : public rclcpp::Node
{

   public:
   camera() : Node("camera_node")
   {
      subscription_ = this->create_subscription<ros2_aruco_interfaces::msg::ArucoMarkers>("/aruco_markers",10
       ,std::bind(&camera::camera_callback, this, std::placeholders::_1));

      tf2_broadcaster_ = std::make_unique<tf2_ros::TransformBroadcaster>(*this);

      RCLCPP_INFO(get_logger(), "Node started!");

   }

   private:
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD

=======

>>>>>>> 2efb961 (updated aruco)
=======

>>>>>>> 4ccead3 (updated)
=======
   
>>>>>>> 2efb961 (updated aruco)
   void camera_callback( const ros2_aruco_interfaces::msg::ArucoMarkers &aruco )
   {

    geometry_msgs::msg::TransformStamped transform_stamped;

    transform_stamped.header.stamp = aruco.header.stamp;
    transform_stamped.header.frame_id = "head_front_camera_rgb_optical_frame";  // Color camera optical frame
    transform_stamped.child_frame_id = "Aruco_marker_frame";                      // Detected marker frame

    transform_stamped.transform.translation.x = aruco.poses[0].position.x;
    transform_stamped.transform.translation.y = aruco.poses[0].position.y;
    transform_stamped.transform.translation.z = aruco.poses[0].position.z;

    transform_stamped.transform.rotation.x = aruco.poses[0].orientation.x;
    transform_stamped.transform.rotation.y = aruco.poses[0].orientation.y;
    transform_stamped.transform.rotation.z = aruco.poses[0].orientation.z;
    transform_stamped.transform.rotation.w = aruco.poses[0].orientation.w;

    tf2_broadcaster_->sendTransform(transform_stamped);

   }

   rclcpp::Subscription<ros2_aruco_interfaces::msg::ArucoMarkers>::SharedPtr subscription_;
   std::unique_ptr<tf2_ros::TransformBroadcaster> tf2_broadcaster_;
   geometry_msgs::msg::Transform transform;

};


int main(int argc, char **argv)
{
    rclcpp::init(argc,argv);
    rclcpp::spin(std::make_shared<camera>());
    rclcpp::shutdown();

    return 0;
}
