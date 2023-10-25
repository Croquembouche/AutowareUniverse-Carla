// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_mapping_msgs:msg/MapPrimitive.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__MAP_PRIMITIVE__BUILDER_HPP_
#define AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__MAP_PRIMITIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_mapping_msgs/msg/detail/map_primitive__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_mapping_msgs
{

namespace msg
{

namespace builder
{

class Init_MapPrimitive_primitive_type
{
public:
  explicit Init_MapPrimitive_primitive_type(::autoware_auto_mapping_msgs::msg::MapPrimitive & msg)
  : msg_(msg)
  {}
  ::autoware_auto_mapping_msgs::msg::MapPrimitive primitive_type(::autoware_auto_mapping_msgs::msg::MapPrimitive::_primitive_type_type arg)
  {
    msg_.primitive_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_mapping_msgs::msg::MapPrimitive msg_;
};

class Init_MapPrimitive_id
{
public:
  Init_MapPrimitive_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapPrimitive_primitive_type id(::autoware_auto_mapping_msgs::msg::MapPrimitive::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_MapPrimitive_primitive_type(msg_);
  }

private:
  ::autoware_auto_mapping_msgs::msg::MapPrimitive msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_mapping_msgs::msg::MapPrimitive>()
{
  return autoware_auto_mapping_msgs::msg::builder::Init_MapPrimitive_id();
}

}  // namespace autoware_auto_mapping_msgs

#endif  // AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__MAP_PRIMITIVE__BUILDER_HPP_
