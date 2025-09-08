// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:srv/InputRequest.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__SRV__DETAIL__INPUT_REQUEST__BUILDER_HPP_
#define MY_INTERFACES__SRV__DETAIL__INPUT_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/srv/detail/input_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_InputRequest_Request_esp
{
public:
  explicit Init_InputRequest_Request_esp(::my_interfaces::srv::InputRequest_Request & msg)
  : msg_(msg)
  {}
  ::my_interfaces::srv::InputRequest_Request esp(::my_interfaces::srv::InputRequest_Request::_esp_type arg)
  {
    msg_.esp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::InputRequest_Request msg_;
};

class Init_InputRequest_Request_k
{
public:
  explicit Init_InputRequest_Request_k(::my_interfaces::srv::InputRequest_Request & msg)
  : msg_(msg)
  {}
  Init_InputRequest_Request_esp k(::my_interfaces::srv::InputRequest_Request::_k_type arg)
  {
    msg_.k = std::move(arg);
    return Init_InputRequest_Request_esp(msg_);
  }

private:
  ::my_interfaces::srv::InputRequest_Request msg_;
};

class Init_InputRequest_Request_margin
{
public:
  explicit Init_InputRequest_Request_margin(::my_interfaces::srv::InputRequest_Request & msg)
  : msg_(msg)
  {}
  Init_InputRequest_Request_k margin(::my_interfaces::srv::InputRequest_Request::_margin_type arg)
  {
    msg_.margin = std::move(arg);
    return Init_InputRequest_Request_k(msg_);
  }

private:
  ::my_interfaces::srv::InputRequest_Request msg_;
};

class Init_InputRequest_Request_b0_max
{
public:
  explicit Init_InputRequest_Request_b0_max(::my_interfaces::srv::InputRequest_Request & msg)
  : msg_(msg)
  {}
  Init_InputRequest_Request_margin b0_max(::my_interfaces::srv::InputRequest_Request::_b0_max_type arg)
  {
    msg_.b0_max = std::move(arg);
    return Init_InputRequest_Request_margin(msg_);
  }

private:
  ::my_interfaces::srv::InputRequest_Request msg_;
};

class Init_InputRequest_Request_b0_min
{
public:
  explicit Init_InputRequest_Request_b0_min(::my_interfaces::srv::InputRequest_Request & msg)
  : msg_(msg)
  {}
  Init_InputRequest_Request_b0_max b0_min(::my_interfaces::srv::InputRequest_Request::_b0_min_type arg)
  {
    msg_.b0_min = std::move(arg);
    return Init_InputRequest_Request_b0_max(msg_);
  }

private:
  ::my_interfaces::srv::InputRequest_Request msg_;
};

class Init_InputRequest_Request_eta
{
public:
  explicit Init_InputRequest_Request_eta(::my_interfaces::srv::InputRequest_Request & msg)
  : msg_(msg)
  {}
  Init_InputRequest_Request_b0_min eta(::my_interfaces::srv::InputRequest_Request::_eta_type arg)
  {
    msg_.eta = std::move(arg);
    return Init_InputRequest_Request_b0_min(msg_);
  }

private:
  ::my_interfaces::srv::InputRequest_Request msg_;
};

class Init_InputRequest_Request_angular_constraint
{
public:
  explicit Init_InputRequest_Request_angular_constraint(::my_interfaces::srv::InputRequest_Request & msg)
  : msg_(msg)
  {}
  Init_InputRequest_Request_eta angular_constraint(::my_interfaces::srv::InputRequest_Request::_angular_constraint_type arg)
  {
    msg_.angular_constraint = std::move(arg);
    return Init_InputRequest_Request_eta(msg_);
  }

private:
  ::my_interfaces::srv::InputRequest_Request msg_;
};

class Init_InputRequest_Request_velocity_constraint
{
public:
  explicit Init_InputRequest_Request_velocity_constraint(::my_interfaces::srv::InputRequest_Request & msg)
  : msg_(msg)
  {}
  Init_InputRequest_Request_angular_constraint velocity_constraint(::my_interfaces::srv::InputRequest_Request::_velocity_constraint_type arg)
  {
    msg_.velocity_constraint = std::move(arg);
    return Init_InputRequest_Request_angular_constraint(msg_);
  }

private:
  ::my_interfaces::srv::InputRequest_Request msg_;
};

class Init_InputRequest_Request_collision_avoidance
{
public:
  explicit Init_InputRequest_Request_collision_avoidance(::my_interfaces::srv::InputRequest_Request & msg)
  : msg_(msg)
  {}
  Init_InputRequest_Request_velocity_constraint collision_avoidance(::my_interfaces::srv::InputRequest_Request::_collision_avoidance_type arg)
  {
    msg_.collision_avoidance = std::move(arg);
    return Init_InputRequest_Request_velocity_constraint(msg_);
  }

private:
  ::my_interfaces::srv::InputRequest_Request msg_;
};

class Init_InputRequest_Request_epsilon
{
public:
  explicit Init_InputRequest_Request_epsilon(::my_interfaces::srv::InputRequest_Request & msg)
  : msg_(msg)
  {}
  Init_InputRequest_Request_collision_avoidance epsilon(::my_interfaces::srv::InputRequest_Request::_epsilon_type arg)
  {
    msg_.epsilon = std::move(arg);
    return Init_InputRequest_Request_collision_avoidance(msg_);
  }

private:
  ::my_interfaces::srv::InputRequest_Request msg_;
};

class Init_InputRequest_Request_tab
{
public:
  explicit Init_InputRequest_Request_tab(::my_interfaces::srv::InputRequest_Request & msg)
  : msg_(msg)
  {}
  Init_InputRequest_Request_epsilon tab(::my_interfaces::srv::InputRequest_Request::_tab_type arg)
  {
    msg_.tab = std::move(arg);
    return Init_InputRequest_Request_epsilon(msg_);
  }

private:
  ::my_interfaces::srv::InputRequest_Request msg_;
};

class Init_InputRequest_Request_tb
{
public:
  explicit Init_InputRequest_Request_tb(::my_interfaces::srv::InputRequest_Request & msg)
  : msg_(msg)
  {}
  Init_InputRequest_Request_tab tb(::my_interfaces::srv::InputRequest_Request::_tb_type arg)
  {
    msg_.tb = std::move(arg);
    return Init_InputRequest_Request_tab(msg_);
  }

private:
  ::my_interfaces::srv::InputRequest_Request msg_;
};

class Init_InputRequest_Request_ta
{
public:
  explicit Init_InputRequest_Request_ta(::my_interfaces::srv::InputRequest_Request & msg)
  : msg_(msg)
  {}
  Init_InputRequest_Request_tb ta(::my_interfaces::srv::InputRequest_Request::_ta_type arg)
  {
    msg_.ta = std::move(arg);
    return Init_InputRequest_Request_tb(msg_);
  }

private:
  ::my_interfaces::srv::InputRequest_Request msg_;
};

class Init_InputRequest_Request_goal2
{
public:
  explicit Init_InputRequest_Request_goal2(::my_interfaces::srv::InputRequest_Request & msg)
  : msg_(msg)
  {}
  Init_InputRequest_Request_ta goal2(::my_interfaces::srv::InputRequest_Request::_goal2_type arg)
  {
    msg_.goal2 = std::move(arg);
    return Init_InputRequest_Request_ta(msg_);
  }

private:
  ::my_interfaces::srv::InputRequest_Request msg_;
};

class Init_InputRequest_Request_goal
{
public:
  explicit Init_InputRequest_Request_goal(::my_interfaces::srv::InputRequest_Request & msg)
  : msg_(msg)
  {}
  Init_InputRequest_Request_goal2 goal(::my_interfaces::srv::InputRequest_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return Init_InputRequest_Request_goal2(msg_);
  }

private:
  ::my_interfaces::srv::InputRequest_Request msg_;
};

class Init_InputRequest_Request_temp_operator
{
public:
  Init_InputRequest_Request_temp_operator()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InputRequest_Request_goal temp_operator(::my_interfaces::srv::InputRequest_Request::_temp_operator_type arg)
  {
    msg_.temp_operator = std::move(arg);
    return Init_InputRequest_Request_goal(msg_);
  }

private:
  ::my_interfaces::srv::InputRequest_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::InputRequest_Request>()
{
  return my_interfaces::srv::builder::Init_InputRequest_Request_temp_operator();
}

}  // namespace my_interfaces


namespace my_interfaces
{

namespace srv
{

namespace builder
{

class Init_InputRequest_Response_answer
{
public:
  Init_InputRequest_Response_answer()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interfaces::srv::InputRequest_Response answer(::my_interfaces::srv::InputRequest_Response::_answer_type arg)
  {
    msg_.answer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::srv::InputRequest_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::srv::InputRequest_Response>()
{
  return my_interfaces::srv::builder::Init_InputRequest_Response_answer();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__SRV__DETAIL__INPUT_REQUEST__BUILDER_HPP_
