# Packages Description
## zed-ros2-examples
This package provides usage examples of the ZED camera with ROS 2.
It includes demo nodes showcasing depth sensing, object detection, and point cloud generation.

## zed-ros2-interfaces
This package defines the custom ROS 2 message and service types required for communication between nodes in the ZED ROS 2 environment.

## zed-ros2-wrapper
This package offers a ROS 2 wrapper for the ZED SDK, enabling seamless integration of ZED cameras into ROS 2 applications.
It provides nodes for camera control, image acquisition, and parameter configuration.

## zed2_camera_pkg
This package contains the `zed2_camera_node`, which estimates and publishes the distance between the user and the robot.

Editable parameters in `zed2_camera_node.cpp`:
```cpp
constexpr int LANDMARK_NUMBER = 1;               //Landmark number to be used for distance calculation
```

The body tracking overview is avaiable in: https://www.stereolabs.com/docs/body-tracking
