// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:msg/Obstacles.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__OBSTACLES__BUILDER_HPP_
#define MY_INTERFACES__MSG__DETAIL__OBSTACLES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/msg/detail/obstacles__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace msg
{

namespace builder
{

class Init_Obstacles_o_number
{
public:
  explicit Init_Obstacles_o_number(::my_interfaces::msg::Obstacles & msg)
  : msg_(msg)
  {}
  ::my_interfaces::msg::Obstacles o_number(::my_interfaces::msg::Obstacles::_o_number_type arg)
  {
    msg_.o_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::msg::Obstacles msg_;
};

class Init_Obstacles_oy_pose
{
public:
  explicit Init_Obstacles_oy_pose(::my_interfaces::msg::Obstacles & msg)
  : msg_(msg)
  {}
  Init_Obstacles_o_number oy_pose(::my_interfaces::msg::Obstacles::_oy_pose_type arg)
  {
    msg_.oy_pose = std::move(arg);
    return Init_Obstacles_o_number(msg_);
  }

private:
  ::my_interfaces::msg::Obstacles msg_;
};

class Init_Obstacles_ox_pose
{
public:
  explicit Init_Obstacles_ox_pose(::my_interfaces::msg::Obstacles & msg)
  : msg_(msg)
  {}
  Init_Obstacles_oy_pose ox_pose(::my_interfaces::msg::Obstacles::_ox_pose_type arg)
  {
    msg_.ox_pose = std::move(arg);
    return Init_Obstacles_oy_pose(msg_);
  }

private:
  ::my_interfaces::msg::Obstacles msg_;
};

class Init_Obstacles_o_radius
{
public:
  Init_Obstacles_o_radius()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Obstacles_ox_pose o_radius(::my_interfaces::msg::Obstacles::_o_radius_type arg)
  {
    msg_.o_radius = std::move(arg);
    return Init_Obstacles_ox_pose(msg_);
  }

private:
  ::my_interfaces::msg::Obstacles msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::msg::Obstacles>()
{
  return my_interfaces::msg::builder::Init_Obstacles_o_radius();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__OBSTACLES__BUILDER_HPP_
