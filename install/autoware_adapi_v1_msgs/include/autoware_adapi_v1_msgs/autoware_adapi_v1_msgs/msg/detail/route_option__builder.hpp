// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_adapi_v1_msgs:msg/RouteOption.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_OPTION__BUILDER_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_OPTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_adapi_v1_msgs/msg/detail/route_option__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_adapi_v1_msgs
{

namespace msg
{

namespace builder
{

class Init_RouteOption_allow_goal_modification
{
public:
  Init_RouteOption_allow_goal_modification()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::autoware_adapi_v1_msgs::msg::RouteOption allow_goal_modification(::autoware_adapi_v1_msgs::msg::RouteOption::_allow_goal_modification_type arg)
  {
    msg_.allow_goal_modification = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::RouteOption msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::msg::RouteOption>()
{
  return autoware_adapi_v1_msgs::msg::builder::Init_RouteOption_allow_goal_modification();
}

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_OPTION__BUILDER_HPP_
