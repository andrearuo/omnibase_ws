// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_interfaces:msg/Input.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__INPUT__STRUCT_HPP_
#define MY_INTERFACES__MSG__DETAIL__INPUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_interfaces__msg__Input __attribute__((deprecated))
#else
# define DEPRECATED__my_interfaces__msg__Input __declspec(deprecated)
#endif

namespace my_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Input_
{
  using Type = Input_<ContainerAllocator>;

  explicit Input_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temp_operator = "";
      this->ta = 0ll;
      this->tb = 0ll;
      this->tab = 0ll;
    }
  }

  explicit Input_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : temp_operator(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temp_operator = "";
      this->ta = 0ll;
      this->tb = 0ll;
      this->tab = 0ll;
    }
  }

  // field types and members
  using _temp_operator_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _temp_operator_type temp_operator;
  using _goal_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _goal_type goal;
  using _goal2_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _goal2_type goal2;
  using _ta_type =
    int64_t;
  _ta_type ta;
  using _tb_type =
    int64_t;
  _tb_type tb;
  using _tab_type =
    int64_t;
  _tab_type tab;

  // setters for named parameter idiom
  Type & set__temp_operator(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->temp_operator = _arg;
    return *this;
  }
  Type & set__goal(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->goal = _arg;
    return *this;
  }
  Type & set__goal2(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->goal2 = _arg;
    return *this;
  }
  Type & set__ta(
    const int64_t & _arg)
  {
    this->ta = _arg;
    return *this;
  }
  Type & set__tb(
    const int64_t & _arg)
  {
    this->tb = _arg;
    return *this;
  }
  Type & set__tab(
    const int64_t & _arg)
  {
    this->tab = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_interfaces::msg::Input_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_interfaces::msg::Input_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_interfaces::msg::Input_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_interfaces::msg::Input_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_interfaces::msg::Input_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::msg::Input_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_interfaces::msg::Input_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_interfaces::msg::Input_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_interfaces::msg::Input_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_interfaces::msg::Input_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_interfaces__msg__Input
    std::shared_ptr<my_interfaces::msg::Input_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_interfaces__msg__Input
    std::shared_ptr<my_interfaces::msg::Input_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Input_ & other) const
  {
    if (this->temp_operator != other.temp_operator) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    if (this->goal2 != other.goal2) {
      return false;
    }
    if (this->ta != other.ta) {
      return false;
    }
    if (this->tb != other.tb) {
      return false;
    }
    if (this->tab != other.tab) {
      return false;
    }
    return true;
  }
  bool operator!=(const Input_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Input_

// alias to use template instance with default allocator
using Input =
  my_interfaces::msg::Input_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__INPUT__STRUCT_HPP_
