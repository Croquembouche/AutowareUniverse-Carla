// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_adapi_v1_msgs:msg/RouteData.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_DATA__BUILDER_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_adapi_v1_msgs/msg/detail/route_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_adapi_v1_msgs
{

namespace msg
{

namespace builder
{

class Init_RouteData_segments
{
public:
  explicit Init_RouteData_segments(::autoware_adapi_v1_msgs::msg::RouteData & msg)
  : msg_(msg)
  {}
  ::autoware_adapi_v1_msgs::msg::RouteData segments(::autoware_adapi_v1_msgs::msg::RouteData::_segments_type arg)
  {
    msg_.segments = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::RouteData msg_;
};

class Init_RouteData_goal
{
public:
  explicit Init_RouteData_goal(::autoware_adapi_v1_msgs::msg::RouteData & msg)
  : msg_(msg)
  {}
  Init_RouteData_segments goal(::autoware_adapi_v1_msgs::msg::RouteData::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return Init_RouteData_segments(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::RouteData msg_;
};

class Init_RouteData_start
{
public:
  Init_RouteData_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RouteData_goal start(::autoware_adapi_v1_msgs::msg::RouteData::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_RouteData_goal(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::RouteData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::msg::RouteData>()
{
  return autoware_adapi_v1_msgs::msg::builder::Init_RouteData_start();
}

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_DATA__BUILDER_HPP_
