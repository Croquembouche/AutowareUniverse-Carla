// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_adapi_v1_msgs:msg/RoutePrimitive.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_PRIMITIVE__BUILDER_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_PRIMITIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_adapi_v1_msgs/msg/detail/route_primitive__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_adapi_v1_msgs
{

namespace msg
{

namespace builder
{

class Init_RoutePrimitive_type
{
public:
  explicit Init_RoutePrimitive_type(::autoware_adapi_v1_msgs::msg::RoutePrimitive & msg)
  : msg_(msg)
  {}
  ::autoware_adapi_v1_msgs::msg::RoutePrimitive type(::autoware_adapi_v1_msgs::msg::RoutePrimitive::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::RoutePrimitive msg_;
};

class Init_RoutePrimitive_id
{
public:
  Init_RoutePrimitive_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoutePrimitive_type id(::autoware_adapi_v1_msgs::msg::RoutePrimitive::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RoutePrimitive_type(msg_);
  }

private:
  ::autoware_adapi_v1_msgs::msg::RoutePrimitive msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_adapi_v1_msgs::msg::RoutePrimitive>()
{
  return autoware_adapi_v1_msgs::msg::builder::Init_RoutePrimitive_id();
}

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_PRIMITIVE__BUILDER_HPP_
