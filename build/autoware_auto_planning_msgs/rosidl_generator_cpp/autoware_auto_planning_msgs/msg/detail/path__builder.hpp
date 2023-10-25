// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_planning_msgs:msg/Path.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH__BUILDER_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_planning_msgs/msg/detail/path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_Path_right_bound
{
public:
  explicit Init_Path_right_bound(::autoware_auto_planning_msgs::msg::Path & msg)
  : msg_(msg)
  {}
  ::autoware_auto_planning_msgs::msg::Path right_bound(::autoware_auto_planning_msgs::msg::Path::_right_bound_type arg)
  {
    msg_.right_bound = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_planning_msgs::msg::Path msg_;
};

class Init_Path_left_bound
{
public:
  explicit Init_Path_left_bound(::autoware_auto_planning_msgs::msg::Path & msg)
  : msg_(msg)
  {}
  Init_Path_right_bound left_bound(::autoware_auto_planning_msgs::msg::Path::_left_bound_type arg)
  {
    msg_.left_bound = std::move(arg);
    return Init_Path_right_bound(msg_);
  }

private:
  ::autoware_auto_planning_msgs::msg::Path msg_;
};

class Init_Path_points
{
public:
  explicit Init_Path_points(::autoware_auto_planning_msgs::msg::Path & msg)
  : msg_(msg)
  {}
  Init_Path_left_bound points(::autoware_auto_planning_msgs::msg::Path::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_Path_left_bound(msg_);
  }

private:
  ::autoware_auto_planning_msgs::msg::Path msg_;
};

class Init_Path_header
{
public:
  Init_Path_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Path_points header(::autoware_auto_planning_msgs::msg::Path::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Path_points(msg_);
  }

private:
  ::autoware_auto_planning_msgs::msg::Path msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_planning_msgs::msg::Path>()
{
  return autoware_auto_planning_msgs::msg::builder::Init_Path_header();
}

}  // namespace autoware_auto_planning_msgs

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH__BUILDER_HPP_
