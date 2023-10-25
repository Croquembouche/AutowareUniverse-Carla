// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_planning_msgs:msg/HADMapRoute.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__HAD_MAP_ROUTE__BUILDER_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__HAD_MAP_ROUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_planning_msgs/msg/detail/had_map_route__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_HADMapRoute_segments
{
public:
  explicit Init_HADMapRoute_segments(::autoware_auto_planning_msgs::msg::HADMapRoute & msg)
  : msg_(msg)
  {}
  ::autoware_auto_planning_msgs::msg::HADMapRoute segments(::autoware_auto_planning_msgs::msg::HADMapRoute::_segments_type arg)
  {
    msg_.segments = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_planning_msgs::msg::HADMapRoute msg_;
};

class Init_HADMapRoute_goal_pose
{
public:
  explicit Init_HADMapRoute_goal_pose(::autoware_auto_planning_msgs::msg::HADMapRoute & msg)
  : msg_(msg)
  {}
  Init_HADMapRoute_segments goal_pose(::autoware_auto_planning_msgs::msg::HADMapRoute::_goal_pose_type arg)
  {
    msg_.goal_pose = std::move(arg);
    return Init_HADMapRoute_segments(msg_);
  }

private:
  ::autoware_auto_planning_msgs::msg::HADMapRoute msg_;
};

class Init_HADMapRoute_start_pose
{
public:
  explicit Init_HADMapRoute_start_pose(::autoware_auto_planning_msgs::msg::HADMapRoute & msg)
  : msg_(msg)
  {}
  Init_HADMapRoute_goal_pose start_pose(::autoware_auto_planning_msgs::msg::HADMapRoute::_start_pose_type arg)
  {
    msg_.start_pose = std::move(arg);
    return Init_HADMapRoute_goal_pose(msg_);
  }

private:
  ::autoware_auto_planning_msgs::msg::HADMapRoute msg_;
};

class Init_HADMapRoute_header
{
public:
  Init_HADMapRoute_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HADMapRoute_start_pose header(::autoware_auto_planning_msgs::msg::HADMapRoute::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HADMapRoute_start_pose(msg_);
  }

private:
  ::autoware_auto_planning_msgs::msg::HADMapRoute msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_planning_msgs::msg::HADMapRoute>()
{
  return autoware_auto_planning_msgs::msg::builder::Init_HADMapRoute_header();
}

}  // namespace autoware_auto_planning_msgs

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__HAD_MAP_ROUTE__BUILDER_HPP_
