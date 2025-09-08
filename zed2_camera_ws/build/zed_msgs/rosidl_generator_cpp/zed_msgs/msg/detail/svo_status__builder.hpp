// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zed_msgs:msg/SvoStatus.idl
// generated code does not contain a copyright notice

#ifndef ZED_MSGS__MSG__DETAIL__SVO_STATUS__BUILDER_HPP_
#define ZED_MSGS__MSG__DETAIL__SVO_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zed_msgs/msg/detail/svo_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zed_msgs
{

namespace msg
{

namespace builder
{

class Init_SvoStatus_real_time_mode
{
public:
  explicit Init_SvoStatus_real_time_mode(::zed_msgs::msg::SvoStatus & msg)
  : msg_(msg)
  {}
  ::zed_msgs::msg::SvoStatus real_time_mode(::zed_msgs::msg::SvoStatus::_real_time_mode_type arg)
  {
    msg_.real_time_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zed_msgs::msg::SvoStatus msg_;
};

class Init_SvoStatus_loop_count
{
public:
  explicit Init_SvoStatus_loop_count(::zed_msgs::msg::SvoStatus & msg)
  : msg_(msg)
  {}
  Init_SvoStatus_real_time_mode loop_count(::zed_msgs::msg::SvoStatus::_loop_count_type arg)
  {
    msg_.loop_count = std::move(arg);
    return Init_SvoStatus_real_time_mode(msg_);
  }

private:
  ::zed_msgs::msg::SvoStatus msg_;
};

class Init_SvoStatus_loop_active
{
public:
  explicit Init_SvoStatus_loop_active(::zed_msgs::msg::SvoStatus & msg)
  : msg_(msg)
  {}
  Init_SvoStatus_loop_count loop_active(::zed_msgs::msg::SvoStatus::_loop_active_type arg)
  {
    msg_.loop_active = std::move(arg);
    return Init_SvoStatus_loop_count(msg_);
  }

private:
  ::zed_msgs::msg::SvoStatus msg_;
};

class Init_SvoStatus_total_frames
{
public:
  explicit Init_SvoStatus_total_frames(::zed_msgs::msg::SvoStatus & msg)
  : msg_(msg)
  {}
  Init_SvoStatus_loop_active total_frames(::zed_msgs::msg::SvoStatus::_total_frames_type arg)
  {
    msg_.total_frames = std::move(arg);
    return Init_SvoStatus_loop_active(msg_);
  }

private:
  ::zed_msgs::msg::SvoStatus msg_;
};

class Init_SvoStatus_frame_id
{
public:
  explicit Init_SvoStatus_frame_id(::zed_msgs::msg::SvoStatus & msg)
  : msg_(msg)
  {}
  Init_SvoStatus_total_frames frame_id(::zed_msgs::msg::SvoStatus::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_SvoStatus_total_frames(msg_);
  }

private:
  ::zed_msgs::msg::SvoStatus msg_;
};

class Init_SvoStatus_frame_ts
{
public:
  explicit Init_SvoStatus_frame_ts(::zed_msgs::msg::SvoStatus & msg)
  : msg_(msg)
  {}
  Init_SvoStatus_frame_id frame_ts(::zed_msgs::msg::SvoStatus::_frame_ts_type arg)
  {
    msg_.frame_ts = std::move(arg);
    return Init_SvoStatus_frame_id(msg_);
  }

private:
  ::zed_msgs::msg::SvoStatus msg_;
};

class Init_SvoStatus_status
{
public:
  explicit Init_SvoStatus_status(::zed_msgs::msg::SvoStatus & msg)
  : msg_(msg)
  {}
  Init_SvoStatus_frame_ts status(::zed_msgs::msg::SvoStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SvoStatus_frame_ts(msg_);
  }

private:
  ::zed_msgs::msg::SvoStatus msg_;
};

class Init_SvoStatus_file_name
{
public:
  Init_SvoStatus_file_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SvoStatus_status file_name(::zed_msgs::msg::SvoStatus::_file_name_type arg)
  {
    msg_.file_name = std::move(arg);
    return Init_SvoStatus_status(msg_);
  }

private:
  ::zed_msgs::msg::SvoStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::zed_msgs::msg::SvoStatus>()
{
  return zed_msgs::msg::builder::Init_SvoStatus_file_name();
}

}  // namespace zed_msgs

#endif  // ZED_MSGS__MSG__DETAIL__SVO_STATUS__BUILDER_HPP_
