// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from zed_msgs:msg/SvoStatus.idl
// generated code does not contain a copyright notice

#ifndef ZED_MSGS__MSG__DETAIL__SVO_STATUS__STRUCT_HPP_
#define ZED_MSGS__MSG__DETAIL__SVO_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__zed_msgs__msg__SvoStatus __attribute__((deprecated))
#else
# define DEPRECATED__zed_msgs__msg__SvoStatus __declspec(deprecated)
#endif

namespace zed_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SvoStatus_
{
  using Type = SvoStatus_<ContainerAllocator>;

  explicit SvoStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->file_name = "";
      this->status = 0;
      this->frame_ts = 0ull;
      this->frame_id = 0ul;
      this->total_frames = 0ul;
      this->loop_active = false;
      this->loop_count = 0ul;
      this->real_time_mode = false;
    }
  }

  explicit SvoStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : file_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->file_name = "";
      this->status = 0;
      this->frame_ts = 0ull;
      this->frame_id = 0ul;
      this->total_frames = 0ul;
      this->loop_active = false;
      this->loop_count = 0ul;
      this->real_time_mode = false;
    }
  }

  // field types and members
  using _file_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _file_name_type file_name;
  using _status_type =
    uint8_t;
  _status_type status;
  using _frame_ts_type =
    uint64_t;
  _frame_ts_type frame_ts;
  using _frame_id_type =
    uint32_t;
  _frame_id_type frame_id;
  using _total_frames_type =
    uint32_t;
  _total_frames_type total_frames;
  using _loop_active_type =
    bool;
  _loop_active_type loop_active;
  using _loop_count_type =
    uint32_t;
  _loop_count_type loop_count;
  using _real_time_mode_type =
    bool;
  _real_time_mode_type real_time_mode;

  // setters for named parameter idiom
  Type & set__file_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->file_name = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__frame_ts(
    const uint64_t & _arg)
  {
    this->frame_ts = _arg;
    return *this;
  }
  Type & set__frame_id(
    const uint32_t & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }
  Type & set__total_frames(
    const uint32_t & _arg)
  {
    this->total_frames = _arg;
    return *this;
  }
  Type & set__loop_active(
    const bool & _arg)
  {
    this->loop_active = _arg;
    return *this;
  }
  Type & set__loop_count(
    const uint32_t & _arg)
  {
    this->loop_count = _arg;
    return *this;
  }
  Type & set__real_time_mode(
    const bool & _arg)
  {
    this->real_time_mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STATUS_PLAYING =
    0u;
  static constexpr uint8_t STATUS_PAUSED =
    1u;
  static constexpr uint8_t STATUS_END =
    2u;

  // pointer types
  using RawPtr =
    zed_msgs::msg::SvoStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const zed_msgs::msg::SvoStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<zed_msgs::msg::SvoStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<zed_msgs::msg::SvoStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      zed_msgs::msg::SvoStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<zed_msgs::msg::SvoStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      zed_msgs::msg::SvoStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<zed_msgs::msg::SvoStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<zed_msgs::msg::SvoStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<zed_msgs::msg::SvoStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__zed_msgs__msg__SvoStatus
    std::shared_ptr<zed_msgs::msg::SvoStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__zed_msgs__msg__SvoStatus
    std::shared_ptr<zed_msgs::msg::SvoStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SvoStatus_ & other) const
  {
    if (this->file_name != other.file_name) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->frame_ts != other.frame_ts) {
      return false;
    }
    if (this->frame_id != other.frame_id) {
      return false;
    }
    if (this->total_frames != other.total_frames) {
      return false;
    }
    if (this->loop_active != other.loop_active) {
      return false;
    }
    if (this->loop_count != other.loop_count) {
      return false;
    }
    if (this->real_time_mode != other.real_time_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const SvoStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SvoStatus_

// alias to use template instance with default allocator
using SvoStatus =
  zed_msgs::msg::SvoStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SvoStatus_<ContainerAllocator>::STATUS_PLAYING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SvoStatus_<ContainerAllocator>::STATUS_PAUSED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SvoStatus_<ContainerAllocator>::STATUS_END;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace zed_msgs

#endif  // ZED_MSGS__MSG__DETAIL__SVO_STATUS__STRUCT_HPP_
