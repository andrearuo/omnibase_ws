cmake_minimum_required(VERSION 3.8)
project(cbf_stl_pkg)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++17
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# <-- Insert here your dependences -->
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(std_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(my_interfaces REQUIRED) 
find_package(eigen3_cmake_module REQUIRED)
find_package(Eigen3 REQUIRED)
INCLUDE_DIRECTORIES ( "/usr/include/eigen3" )
#  <-- ___________________________ -->

#************************************************************
# Building the alglib library
add_library(alglib
  src/alglib/alglibinternal.cpp
  src/alglib/alglibmisc.cpp
  src/alglib/ap.cpp
  src/alglib/dataanalysis.cpp
  src/alglib/diffequations.cpp
  src/alglib/fasttransforms.cpp
  src/alglib/integration.cpp
  src/alglib/interpolation.cpp
  src/alglib/kernels_avx2.cpp
  src/alglib/kernels_fma.cpp
  src/alglib/kernels_sse2.cpp
  src/alglib/linalg.cpp
  src/alglib/optimization.cpp
  src/alglib/solvers.cpp
  src/alglib/specialfunctions.cpp
  src/alglib/statistics.cpp
)

# Include headers
include_directories(include/alglib)
#************************************************************

# Insert here your executables and ament_target_dependencies
add_executable(cbf_stl_node src/cbf_stl_node.cpp)


ament_target_dependencies(cbf_stl_node geometry_msgs rclcpp rclcpp_action rclcpp_components std_msgs nav_msgs my_interfaces Eigen3)


target_link_libraries (cbf_stl_node Eigen3::Eigen alglib)


#  <-- ___________________________ -->


install(TARGETS 
  # <-- Insert here your executables -->
  cbf_stl_node
  # <-- ___________________________ -->
  DESTINATION lib/${PROJECT_NAME})

ament_export_dependencies(
  eigen3_cmake_module
  Eigen3
)

#Install launch file
install(DIRECTORY
	launch
	DESTINATION share/${PROJECT_NAME}/
)

ament_package()








