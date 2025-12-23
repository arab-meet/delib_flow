.. _dg-perception:

Perception (Implementation)
###########################

.. note::
   **See also:**
   
   * :doc:`User Guide <../user-guide/perception>`
   * :doc:`Theoretical Background <../theory/perception>`

Package Structure
-----------------

.. code-block:: text

    tiago_aruco_broadcast/
    ├── CMakeLists.txt
    ├── package.xml
    ├── config/
    │   └── aruco_params.yaml
    ├── src/
    │   └── aruco_broadcaster.cpp
    └── launch/
        └── aruco.launch.py

ArUco Detection Node
--------------------

Implementation
^^^^^^^^^^^^^^

.. code-block:: cpp

    #include <rclcpp/rclcpp.hpp>
    #include <sensor_msgs/msg/image.hpp>
    #include <cv_bridge/cv_bridge.h>
    #include <opencv2/aruco.hpp>
    #include <tf2_ros/transform_broadcaster.h>

    class ArucoBroadcaster : public rclcpp::Node
    {
    public:
      ArucoBroadcaster() : Node("aruco_broadcaster")
      {
        // Parameters
        declare_parameter("marker_size", 0.15);
        declare_parameter("dictionary_id", 4);
        
        marker_size_ = get_parameter("marker_size").as_double();
        
        // Setup ArUco detector
        int dict_id = get_parameter("dictionary_id").as_int();
        dictionary_ = cv::aruco::getPredefinedDictionary(dict_id);
        
        // Subscribers
        image_sub_ = create_subscription<sensor_msgs::msg::Image>(
          "/camera/image_raw", 10,
          std::bind(&ArucoBroadcaster::imageCallback, this, std::placeholders::_1));
        
        // TF Broadcaster
        tf_broadcaster_ = std::make_shared<tf2_ros::TransformBroadcaster>(this);
      }

    private:
      void imageCallback(const sensor_msgs::msg::Image::SharedPtr msg)
      {
        // Convert ROS image to OpenCV
        cv_bridge::CvImagePtr cv_ptr;
        try {
          cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::BGR8);
        } catch (cv_bridge::Exception& e) {
          RCLCPP_ERROR(get_logger(), "cv_bridge exception: %s", e.what());
          return;
        }

        // Detect markers
        std::vector<int> marker_ids;
        std::vector<std::vector<cv::Point2f>> marker_corners;
        cv::aruco::detectMarkers(cv_ptr->image, dictionary_, marker_corners, marker_ids);

        if (marker_ids.empty()) {
          return;
        }

        // Estimate poses
        std::vector<cv::Vec3d> rvecs, tvecs;
        cv::aruco::estimatePoseSingleMarkers(
          marker_corners, marker_size_, camera_matrix_, dist_coeffs_, rvecs, tvecs);

        // Broadcast TF for each marker
        for (size_t i = 0; i < marker_ids.size(); ++i) {
          geometry_msgs::msg::TransformStamped transform;
          transform.header.stamp = msg->header.stamp;
          transform.header.frame_id = "camera_link";
          transform.child_frame_id = "aruco_" + std::to_string(marker_ids[i]);
          
          // Convert OpenCV to ROS transform
          cv::Mat rotation_matrix;
          cv::Rodrigues(rvecs[i], rotation_matrix);
          tf2::Matrix3x3 tf_rotation(
            rotation_matrix.at<double>(0,0), rotation_matrix.at<double>(0,1), rotation_matrix.at<double>(0,2),
            rotation_matrix.at<double>(1,0), rotation_matrix.at<double>(1,1), rotation_matrix.at<double>(1,2),
            rotation_matrix.at<double>(2,0), rotation_matrix.at<double>(2,1), rotation_matrix.at<double>(2,2)
          );
          
          tf2::Quaternion q;
          tf_rotation.getRotation(q);
          
          transform.transform.translation.x = tvecs[i][0];
          transform.transform.translation.y = tvecs[i][1];
          transform.transform.translation.z = tvecs[i][2];
          transform.transform.rotation = tf2::toMsg(q);
          
          tf_broadcaster_->sendTransform(transform);
        }
      }

      rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr image_sub_;
      std::shared_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;
      cv::Ptr<cv::aruco::Dictionary> dictionary_;
      cv::Mat camera_matrix_, dist_coeffs_;
      double marker_size_;
    };

Camera Calibration Integration
-------------------------------

Loading calibration from file:

.. code-block:: cpp

    void loadCameraCalibration(const std::string& calib_file)
    {
      cv::FileStorage fs(calib_file, cv::FileStorage::READ);
      fs["camera_matrix"] >> camera_matrix_;
      fs["distortion_coefficients"] >> dist_coeffs_;
    }

Best Practices
--------------

1. **Calibrate Cameras Regularly**
2. **Filter Detections**: Use temporal consistency
3. **Publish Diagnostics**: Monitor detection rate
4. **Handle Missing Frames**: Don't crash on bad images

Next Steps
----------

- :doc:`../user-guide/perception` - Usage guide
- :doc:`../theory/perception` - Theory
