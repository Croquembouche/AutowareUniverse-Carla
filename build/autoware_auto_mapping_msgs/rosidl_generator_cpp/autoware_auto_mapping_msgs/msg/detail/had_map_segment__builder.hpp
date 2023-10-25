// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_mapping_msgs:msg/HADMapSegment.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__HAD_MAP_SEGMENT__BUILDER_HPP_
#define AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__HAD_MAP_SEGMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_mapping_msgs/msg/detail/had_map_segment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_mapping_msgs
{

namespace msg
{

namespace builder
{

class Init_HADMapSegment_preferred_primitive_id
{
public:
  explicit Init_HADMapSegment_preferred_primitive_id(::autoware_auto_mapping_msgs::msg::HADMapSegment & msg)
  : msg_(msg)
  {}
  ::autoware_auto_mapping_msgs::msg::HADMapSegment preferred_primitive_id(::autoware_auto_mapping_msgs::msg::HADMapSegment::_preferred_primitive_id_type arg)
  {
    msg_.preferred_primitive_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_mapping_msgs::msg::HADMapSegment msg_;
};

class Init_HADMapSegment_primitives
{
public:
  Init_HADMapSegment_primitives()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HADMapSegment_preferred_primitive_id primitives(::autoware_auto_mapping_msgs::msg::HADMapSegment::_primitives_type arg)
  {
    msg_.primitives = std::move(arg);
    return Init_HADMapSegment_preferred_primitive_id(msg_);
  }

private:
  ::autoware_auto_mapping_msgs::msg::HADMapSegment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_mapping_msgs::msg::HADMapSegment>()
{
  return autoware_auto_mapping_msgs::msg::builder::Init_HADMapSegment_primitives();
}

}  // namespace autoware_auto_mapping_msgs

#endif  // AUTOWARE_AUTO_MAPPING_MSGS__MSG__DETAIL__HAD_MAP_SEGMENT__BUILDER_HPP_
