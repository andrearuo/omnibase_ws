cmake_minimum_required(VERSION 3.8)
project(my_interfaces)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(builtin_interfaces REQUIRED)

# Generate interfaces
rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/InputRequest.srv"
  "msg/Obstacles.msg"
  "msg/Input.msg"
  "msg/Alldata.msg"
  DEPENDENCIES geometry_msgs std_msgs builtin_interfaces
)

ament_export_dependencies(rosidl_default_runtime)

ament_package()
