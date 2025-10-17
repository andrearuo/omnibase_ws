// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interfaces:msg/Alldata.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACES__MSG__DETAIL__ALLDATA__BUILDER_HPP_
#define MY_INTERFACES__MSG__DETAIL__ALLDATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_interfaces/msg/detail/alldata__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_interfaces
{

namespace msg
{

namespace builder
{

class Init_Alldata_all_obs_y_closer
{
public:
  explicit Init_Alldata_all_obs_y_closer(::my_interfaces::msg::Alldata & msg)
  : msg_(msg)
  {}
  ::my_interfaces::msg::Alldata all_obs_y_closer(::my_interfaces::msg::Alldata::_all_obs_y_closer_type arg)
  {
    msg_.all_obs_y_closer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interfaces::msg::Alldata msg_;
};

class Init_Alldata_all_obs_x_closer
{
public:
  explicit Init_Alldata_all_obs_x_closer(::my_interfaces::msg::Alldata & msg)
  : msg_(msg)
  {}
  Init_Alldata_all_obs_y_closer all_obs_x_closer(::my_interfaces::msg::Alldata::_all_obs_x_closer_type arg)
  {
    msg_.all_obs_x_closer = std::move(arg);
    return Init_Alldata_all_obs_y_closer(msg_);
  }

private:
  ::my_interfaces::msg::Alldata msg_;
};

class Init_Alldata_all_flag_finish
{
public:
  explicit Init_Alldata_all_flag_finish(::my_interfaces::msg::Alldata & msg)
  : msg_(msg)
  {}
  Init_Alldata_all_obs_x_closer all_flag_finish(::my_interfaces::msg::Alldata::_all_flag_finish_type arg)
  {
    msg_.all_flag_finish = std::move(arg);
    return Init_Alldata_all_obs_x_closer(msg_);
  }

private:
  ::my_interfaces::msg::Alldata msg_;
};

class Init_Alldata_all_temporal_operator_counter
{
public:
  explicit Init_Alldata_all_temporal_operator_counter(::my_interfaces::msg::Alldata & msg)
  : msg_(msg)
  {}
  Init_Alldata_all_flag_finish all_temporal_operator_counter(::my_interfaces::msg::Alldata::_all_temporal_operator_counter_type arg)
  {
    msg_.all_temporal_operator_counter = std::move(arg);
    return Init_Alldata_all_flag_finish(msg_);
  }

private:
  ::my_interfaces::msg::Alldata msg_;
};

class Init_Alldata_all_global_counter
{
public:
  explicit Init_Alldata_all_global_counter(::my_interfaces::msg::Alldata & msg)
  : msg_(msg)
  {}
  Init_Alldata_all_temporal_operator_counter all_global_counter(::my_interfaces::msg::Alldata::_all_global_counter_type arg)
  {
    msg_.all_global_counter = std::move(arg);
    return Init_Alldata_all_temporal_operator_counter(msg_);
  }

private:
  ::my_interfaces::msg::Alldata msg_;
};

class Init_Alldata_all_distance_hr
{
public:
  explicit Init_Alldata_all_distance_hr(::my_interfaces::msg::Alldata & msg)
  : msg_(msg)
  {}
  Init_Alldata_all_global_counter all_distance_hr(::my_interfaces::msg::Alldata::_all_distance_hr_type arg)
  {
    msg_.all_distance_hr = std::move(arg);
    return Init_Alldata_all_global_counter(msg_);
  }

private:
  ::my_interfaces::msg::Alldata msg_;
};

class Init_Alldata_all_theta_rot
{
public:
  explicit Init_Alldata_all_theta_rot(::my_interfaces::msg::Alldata & msg)
  : msg_(msg)
  {}
  Init_Alldata_all_distance_hr all_theta_rot(::my_interfaces::msg::Alldata::_all_theta_rot_type arg)
  {
    msg_.all_theta_rot = std::move(arg);
    return Init_Alldata_all_distance_hr(msg_);
  }

private:
  ::my_interfaces::msg::Alldata msg_;
};

class Init_Alldata_all_y_pos
{
public:
  explicit Init_Alldata_all_y_pos(::my_interfaces::msg::Alldata & msg)
  : msg_(msg)
  {}
  Init_Alldata_all_theta_rot all_y_pos(::my_interfaces::msg::Alldata::_all_y_pos_type arg)
  {
    msg_.all_y_pos = std::move(arg);
    return Init_Alldata_all_theta_rot(msg_);
  }

private:
  ::my_interfaces::msg::Alldata msg_;
};

class Init_Alldata_all_x_pos
{
public:
  explicit Init_Alldata_all_x_pos(::my_interfaces::msg::Alldata & msg)
  : msg_(msg)
  {}
  Init_Alldata_all_y_pos all_x_pos(::my_interfaces::msg::Alldata::_all_x_pos_type arg)
  {
    msg_.all_x_pos = std::move(arg);
    return Init_Alldata_all_y_pos(msg_);
  }

private:
  ::my_interfaces::msg::Alldata msg_;
};

class Init_Alldata_all_h_barrier
{
public:
  explicit Init_Alldata_all_h_barrier(::my_interfaces::msg::Alldata & msg)
  : msg_(msg)
  {}
  Init_Alldata_all_x_pos all_h_barrier(::my_interfaces::msg::Alldata::_all_h_barrier_type arg)
  {
    msg_.all_h_barrier = std::move(arg);
    return Init_Alldata_all_x_pos(msg_);
  }

private:
  ::my_interfaces::msg::Alldata msg_;
};

class Init_Alldata_all_v_max
{
public:
  explicit Init_Alldata_all_v_max(::my_interfaces::msg::Alldata & msg)
  : msg_(msg)
  {}
  Init_Alldata_all_h_barrier all_v_max(::my_interfaces::msg::Alldata::_all_v_max_type arg)
  {
    msg_.all_v_max = std::move(arg);
    return Init_Alldata_all_h_barrier(msg_);
  }

private:
  ::my_interfaces::msg::Alldata msg_;
};

class Init_Alldata_all_v_real
{
public:
  Init_Alldata_all_v_real()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Alldata_all_v_max all_v_real(::my_interfaces::msg::Alldata::_all_v_real_type arg)
  {
    msg_.all_v_real = std::move(arg);
    return Init_Alldata_all_v_max(msg_);
  }

private:
  ::my_interfaces::msg::Alldata msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interfaces::msg::Alldata>()
{
  return my_interfaces::msg::builder::Init_Alldata_all_v_real();
}

}  // namespace my_interfaces

#endif  // MY_INTERFACES__MSG__DETAIL__ALLDATA__BUILDER_HPP_
