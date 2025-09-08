// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:msg/Input.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__INPUT__BUILDER_HPP_
#define MY_INTERFACES__MSG__DETAIL__INPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/msg/detail/input__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace msg
{

namespace builder
{

class Init_Input_tab
{
public:
  explicit Init_Input_tab(::my_interfaces::msg::Input & msg)
  : msg_(msg)
  {}
  ::my_interfaces::msg::Input tab(::my_interfaces::msg::Input::_tab_type arg)
  {
    msg_.tab = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::msg::Input msg_;
};

class Init_Input_tb
{
public:
  explicit Init_Input_tb(::my_interfaces::msg::Input & msg)
  : msg_(msg)
  {}
  Init_Input_tab tb(::my_interfaces::msg::Input::_tb_type arg)
  {
    msg_.tb = std::move(arg);
    return Init_Input_tab(msg_);
  }

private:
  ::my_interfaces::msg::Input msg_;
};

class Init_Input_ta
{
public:
  explicit Init_Input_ta(::my_interfaces::msg::Input & msg)
  : msg_(msg)
  {}
  Init_Input_tb ta(::my_interfaces::msg::Input::_ta_type arg)
  {
    msg_.ta = std::move(arg);
    return Init_Input_tb(msg_);
  }

private:
  ::my_interfaces::msg::Input msg_;
};

class Init_Input_goal2
{
public:
  explicit Init_Input_goal2(::my_interfaces::msg::Input & msg)
  : msg_(msg)
  {}
  Init_Input_ta goal2(::my_interfaces::msg::Input::_goal2_type arg)
  {
    msg_.goal2 = std::move(arg);
    return Init_Input_ta(msg_);
  }

private:
  ::my_interfaces::msg::Input msg_;
};

class Init_Input_goal
{
public:
  explicit Init_Input_goal(::my_interfaces::msg::Input & msg)
  : msg_(msg)
  {}
  Init_Input_goal2 goal(::my_interfaces::msg::Input::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return Init_Input_goal2(msg_);
  }

private:
  ::my_interfaces::msg::Input msg_;
};

class Init_Input_temp_operator
{
public:
  Init_Input_temp_operator()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Input_goal temp_operator(::my_interfaces::msg::Input::_temp_operator_type arg)
  {
    msg_.temp_operator = std::move(arg);
    return Init_Input_goal(msg_);
  }

private:
  ::my_interfaces::msg::Input msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::msg::Input>()
{
  return my_interfaces::msg::builder::Init_Input_temp_operator();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__INPUT__BUILDER_HPP_
