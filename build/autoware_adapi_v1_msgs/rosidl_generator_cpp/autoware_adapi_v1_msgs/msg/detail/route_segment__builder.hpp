// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_adapi_v1_msgs:msg/RouteSegment.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_SEGMENT__BUILDER_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_SEGMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_adapi_v1_msgs/msg/detail/route_segment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_adapi_v1_msgs
{

namespace msg
{

namespace builder
{

class Init_RouteSegment_alternatives
{
public:
  explicit Init_RouteSegment_alternatives(::autoware_adapi_v1_msgs::msg::RouteSegment & msg)
  : msg_(msg)
  {}
  ::autoware_adapi_v1_msgs::msg::RouteSegment alternatives(::autoware_adapi_v1_msgs::msg::RouteSegment::_alternatives_type arg)
  {
    msg_.alternatives = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::RouteSegment msg_;
};

class Init_RouteSegment_preferred
{
public:
  Init_RouteSegment_preferred()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RouteSegment_alternatives preferred(::autoware_adapi_v1_msgs::msg::RouteSegment::_preferred_type arg)
  {
    msg_.preferred = std::move(arg);
    return Init_RouteSegment_alternatives(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::RouteSegment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::msg::RouteSegment>()
{
  return autoware_adapi_v1_msgs::msg::builder::Init_RouteSegment_preferred();
}

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_SEGMENT__BUILDER_HPP_
