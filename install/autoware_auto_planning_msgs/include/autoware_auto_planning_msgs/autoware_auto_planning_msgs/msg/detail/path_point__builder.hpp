// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_planning_msgs:msg/PathPoint.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__BUILDER_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_planning_msgs/msg/detail/path_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_PathPoint_is_final
{
public:
  explicit Init_PathPoint_is_final(::autoware_auto_planning_msgs::msg::PathPoint & msg)
  : msg_(msg)
  {}
  ::autoware_auto_planning_msgs::msg::PathPoint is_final(::autoware_auto_planning_msgs::msg::PathPoint::_is_final_type arg)
  {
    msg_.is_final = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_planning_msgs::msg::PathPoint msg_;
};

class Init_PathPoint_heading_rate_rps
{
public:
  explicit Init_PathPoint_heading_rate_rps(::autoware_auto_planning_msgs::msg::PathPoint & msg)
  : msg_(msg)
  {}
  Init_PathPoint_is_final heading_rate_rps(::autoware_auto_planning_msgs::msg::PathPoint::_heading_rate_rps_type arg)
  {
    msg_.heading_rate_rps = std::move(arg);
    return Init_PathPoint_is_final(msg_);
  }

private:
  ::autoware_auto_planning_msgs::msg::PathPoint msg_;
};

class Init_PathPoint_lateral_velocity_mps
{
public:
  explicit Init_PathPoint_lateral_velocity_mps(::autoware_auto_planning_msgs::msg::PathPoint & msg)
  : msg_(msg)
  {}
  Init_PathPoint_heading_rate_rps lateral_velocity_mps(::autoware_auto_planning_msgs::msg::PathPoint::_lateral_velocity_mps_type arg)
  {
    msg_.lateral_velocity_mps = std::move(arg);
    return Init_PathPoint_heading_rate_rps(msg_);
  }

private:
  ::autoware_auto_planning_msgs::msg::PathPoint msg_;
};

class Init_PathPoint_longitudinal_velocity_mps
{
public:
  explicit Init_PathPoint_longitudinal_velocity_mps(::autoware_auto_planning_msgs::msg::PathPoint & msg)
  : msg_(msg)
  {}
  Init_PathPoint_lateral_velocity_mps longitudinal_velocity_mps(::autoware_auto_planning_msgs::msg::PathPoint::_longitudinal_velocity_mps_type arg)
  {
    msg_.longitudinal_velocity_mps = std::move(arg);
    return Init_PathPoint_lateral_velocity_mps(msg_);
  }

private:
  ::autoware_auto_planning_msgs::msg::PathPoint msg_;
};

class Init_PathPoint_pose
{
public:
  Init_PathPoint_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathPoint_longitudinal_velocity_mps pose(::autoware_auto_planning_msgs::msg::PathPoint::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_PathPoint_longitudinal_velocity_mps(msg_);
  }

private:
  ::autoware_auto_planning_msgs::msg::PathPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_planning_msgs::msg::PathPoint>()
{
  return autoware_auto_planning_msgs::msg::builder::Init_PathPoint_pose();
}

}  // namespace autoware_auto_planning_msgs

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__BUILDER_HPP_
