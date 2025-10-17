// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from zed_msgs:msg/HealthStatusStamped.idl
// generated code does not contain a copyright notice

#ifndef ZED_MSGS__MSG__DETAIL__HEALTH_STATUS_STAMPED__STRUCT_HPP_
#define ZED_MSGS__MSG__DETAIL__HEALTH_STATUS_STAMPED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__zed_msgs__msg__HealthStatusStamped __attribute__((deprecated))
#else
# define DEPRECATED__zed_msgs__msg__HealthStatusStamped __declspec(deprecated)
#endif

namespace zed_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HealthStatusStamped_
{
  using Type = HealthStatusStamped_<ContainerAllocator>;

  explicit HealthStatusStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->serial_number = 0ul;
      this->camera_name = "";
      this->low_image_quality = false;
      this->low_lighting = false;
      this->low_depth_reliability = false;
      this->low_motion_sensors_reliability = false;
    }
  }

  explicit HealthStatusStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    camera_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->serial_number = 0ul;
      this->camera_name = "";
      this->low_image_quality = false;
      this->low_lighting = false;
      this->low_depth_reliability = false;
      this->low_motion_sensors_reliability = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _serial_number_type =
    uint32_t;
  _serial_number_type serial_number;
  using _camera_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _camera_name_type camera_name;
  using _low_image_quality_type =
    bool;
  _low_image_quality_type low_image_quality;
  using _low_lighting_type =
    bool;
  _low_lighting_type low_lighting;
  using _low_depth_reliability_type =
    bool;
  _low_depth_reliability_type low_depth_reliability;
  using _low_motion_sensors_reliability_type =
    bool;
  _low_motion_sensors_reliability_type low_motion_sensors_reliability;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__serial_number(
    const uint32_t & _arg)
  {
    this->serial_number = _arg;
    return *this;
  }
  Type & set__camera_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->camera_name = _arg;
    return *this;
  }
  Type & set__low_image_quality(
    const bool & _arg)
  {
    this->low_image_quality = _arg;
    return *this;
  }
  Type & set__low_lighting(
    const bool & _arg)
  {
    this->low_lighting = _arg;
    return *this;
  }
  Type & set__low_depth_reliability(
    const bool & _arg)
  {
    this->low_depth_reliability = _arg;
    return *this;
  }
  Type & set__low_motion_sensors_reliability(
    const bool & _arg)
  {
    this->low_motion_sensors_reliability = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    zed_msgs::msg::HealthStatusStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const zed_msgs::msg::HealthStatusStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zed_msgs::msg::HealthStatusStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zed_msgs::msg::HealthStatusStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zed_msgs::msg::HealthStatusStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zed_msgs::msg::HealthStatusStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zed_msgs::msg::HealthStatusStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zed_msgs::msg::HealthStatusStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zed_msgs::msg::HealthStatusStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zed_msgs::msg::HealthStatusStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zed_msgs__msg__HealthStatusStamped
    std::shared_ptr<zed_msgs::msg::HealthStatusStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zed_msgs__msg__HealthStatusStamped
    std::shared_ptr<zed_msgs::msg::HealthStatusStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HealthStatusStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->serial_number != other.serial_number) {
      return false;
    }
    if (this->camera_name != other.camera_name) {
      return false;
    }
    if (this->low_image_quality != other.low_image_quality) {
      return false;
    }
    if (this->low_lighting != other.low_lighting) {
      return false;
    }
    if (this->low_depth_reliability != other.low_depth_reliability) {
      return false;
    }
    if (this->low_motion_sensors_reliability != other.low_motion_sensors_reliability) {
      return false;
    }
    return true;
  }
  bool operator!=(const HealthStatusStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HealthStatusStamped_

// alias to use template instance with default allocator
using HealthStatusStamped =
  zed_msgs::msg::HealthStatusStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace zed_msgs

#endif  // ZED_MSGS__MSG__DETAIL__HEALTH_STATUS_STAMPED__STRUCT_HPP_
