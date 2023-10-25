// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_planning_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__ROUTE__BUILDER_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__ROUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_planning_msgs/msg/detail/route__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_Route_primitives
{
public:
  explicit Init_Route_primitives(::autoware_auto_planning_msgs::msg::Route & msg)
  : msg_(msg)
  {}
  ::autoware_auto_planning_msgs::msg::Route primitives(::autoware_auto_planning_msgs::msg::Route::_primitives_type arg)
  {
    msg_.primitives = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_planning_msgs::msg::Route msg_;
};

class Init_Route_goal_point
{
public:
  explicit Init_Route_goal_point(::autoware_auto_planning_msgs::msg::Route & msg)
  : msg_(msg)
  {}
  Init_Route_primitives goal_point(::autoware_auto_planning_msgs::msg::Route::_goal_point_type arg)
  {
    msg_.goal_point = std::move(arg);
    return Init_Route_primitives(msg_);
  }

private:
  ::autoware_auto_planning_msgs::msg::Route msg_;
};

class Init_Route_start_point
{
public:
  explicit Init_Route_start_point(::autoware_auto_planning_msgs::msg::Route & msg)
  : msg_(msg)
  {}
  Init_Route_goal_point start_point(::autoware_auto_planning_msgs::msg::Route::_start_point_type arg)
  {
    msg_.start_point = std::move(arg);
    return Init_Route_goal_point(msg_);
  }

private:
  ::autoware_auto_planning_msgs::msg::Route msg_;
};

class Init_Route_header
{
public:
  Init_Route_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Route_start_point header(::autoware_auto_planning_msgs::msg::Route::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Route_start_point(msg_);
  }

private:
  ::autoware_auto_planning_msgs::msg::Route msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_planning_msgs::msg::Route>()
{
  return autoware_auto_planning_msgs::msg::builder::Init_Route_header();
}

}  // namespace autoware_auto_planning_msgs

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__ROUTE__BUILDER_HPP_
