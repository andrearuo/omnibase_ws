// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_interfaces:msg/Alldata.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__ALLDATA__STRUCT_HPP_
#define MY_INTERFACES__MSG__DETAIL__ALLDATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_interfaces__msg__Alldata __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__msg__Alldata __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Alldata_
{
  using Type = Alldata_<ContainerAllocator>;

  explicit Alldata_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->all_v_real = 0.0f;
      this->all_v_max = 0.0f;
      this->all_h_barrier = 0.0f;
      this->all_x_pos = 0.0f;
      this->all_y_pos = 0.0f;
      this->all_theta_rot = 0.0f;
      this->all_distance_hr = 0.0f;
      this->all_global_counter = 0ll;
      this->all_temporal_operator_counter = 0ll;
      this->all_flag_finish = false;
      this->all_obs_x_closer = 0.0f;
      this->all_obs_y_closer = 0.0f;
    }
  }

  explicit Alldata_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->all_v_real = 0.0f;
      this->all_v_max = 0.0f;
      this->all_h_barrier = 0.0f;
      this->all_x_pos = 0.0f;
      this->all_y_pos = 0.0f;
      this->all_theta_rot = 0.0f;
      this->all_distance_hr = 0.0f;
      this->all_global_counter = 0ll;
      this->all_temporal_operator_counter = 0ll;
      this->all_flag_finish = false;
      this->all_obs_x_closer = 0.0f;
      this->all_obs_y_closer = 0.0f;
    }
  }

  // field types and members
  using _all_v_real_type =
    float;
  _all_v_real_type all_v_real;
  using _all_v_max_type =
    float;
  _all_v_max_type all_v_max;
  using _all_h_barrier_type =
    float;
  _all_h_barrier_type all_h_barrier;
  using _all_x_pos_type =
    float;
  _all_x_pos_type all_x_pos;
  using _all_y_pos_type =
    float;
  _all_y_pos_type all_y_pos;
  using _all_theta_rot_type =
    float;
  _all_theta_rot_type all_theta_rot;
  using _all_distance_hr_type =
    float;
  _all_distance_hr_type all_distance_hr;
  using _all_global_counter_type =
    int64_t;
  _all_global_counter_type all_global_counter;
  using _all_temporal_operator_counter_type =
    int64_t;
  _all_temporal_operator_counter_type all_temporal_operator_counter;
  using _all_flag_finish_type =
    bool;
  _all_flag_finish_type all_flag_finish;
  using _all_obs_x_closer_type =
    float;
  _all_obs_x_closer_type all_obs_x_closer;
  using _all_obs_y_closer_type =
    float;
  _all_obs_y_closer_type all_obs_y_closer;

  // setters for named parameter idiom
  Type & set__all_v_real(
    const float & _arg)
  {
    this->all_v_real = _arg;
    return *this;
  }
  Type & set__all_v_max(
    const float & _arg)
  {
    this->all_v_max = _arg;
    return *this;
  }
  Type & set__all_h_barrier(
    const float & _arg)
  {
    this->all_h_barrier = _arg;
    return *this;
  }
  Type & set__all_x_pos(
    const float & _arg)
  {
    this->all_x_pos = _arg;
    return *this;
  }
  Type & set__all_y_pos(
    const float & _arg)
  {
    this->all_y_pos = _arg;
    return *this;
  }
  Type & set__all_theta_rot(
    const float & _arg)
  {
    this->all_theta_rot = _arg;
    return *this;
  }
  Type & set__all_distance_hr(
    const float & _arg)
  {
    this->all_distance_hr = _arg;
    return *this;
  }
  Type & set__all_global_counter(
    const int64_t & _arg)
  {
    this->all_global_counter = _arg;
    return *this;
  }
  Type & set__all_temporal_operator_counter(
    const int64_t & _arg)
  {
    this->all_temporal_operator_counter = _arg;
    return *this;
  }
  Type & set__all_flag_finish(
    const bool & _arg)
  {
    this->all_flag_finish = _arg;
    return *this;
  }
  Type & set__all_obs_x_closer(
    const float & _arg)
  {
    this->all_obs_x_closer = _arg;
    return *this;
  }
  Type & set__all_obs_y_closer(
    const float & _arg)
  {
    this->all_obs_y_closer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::msg::Alldata_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::msg::Alldata_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::msg::Alldata_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::msg::Alldata_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::msg::Alldata_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::msg::Alldata_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::msg::Alldata_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::msg::Alldata_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::msg::Alldata_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::msg::Alldata_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__msg__Alldata
    std::shared_ptr<my_interfaces::msg::Alldata_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__msg__Alldata
    std::shared_ptr<my_interfaces::msg::Alldata_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Alldata_ & other) const
  {
    if (this->all_v_real != other.all_v_real) {
      return false;
    }
    if (this->all_v_max != other.all_v_max) {
      return false;
    }
    if (this->all_h_barrier != other.all_h_barrier) {
      return false;
    }
    if (this->all_x_pos != other.all_x_pos) {
      return false;
    }
    if (this->all_y_pos != other.all_y_pos) {
      return false;
    }
    if (this->all_theta_rot != other.all_theta_rot) {
      return false;
    }
    if (this->all_distance_hr != other.all_distance_hr) {
      return false;
    }
    if (this->all_global_counter != other.all_global_counter) {
      return false;
    }
    if (this->all_temporal_operator_counter != other.all_temporal_operator_counter) {
      return false;
    }
    if (this->all_flag_finish != other.all_flag_finish) {
      return false;
    }
    if (this->all_obs_x_closer != other.all_obs_x_closer) {
      return false;
    }
    if (this->all_obs_y_closer != other.all_obs_y_closer) {
      return false;
    }
    return true;
  }
  bool operator!=(const Alldata_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Alldata_

// alias to use template instance with default allocator
using Alldata =
  my_interfaces::msg::Alldata_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__ALLDATA__STRUCT_HPP_
