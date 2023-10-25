// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_perception_msgs:msg/TrackedObjects.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECTS__BUILDER_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_perception_msgs/msg/detail/tracked_objects__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackedObjects_objects
{
public:
  explicit Init_TrackedObjects_objects(::autoware_auto_perception_msgs::msg::TrackedObjects & msg)
  : msg_(msg)
  {}
  ::autoware_auto_perception_msgs::msg::TrackedObjects objects(::autoware_auto_perception_msgs::msg::TrackedObjects::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrackedObjects msg_;
};

class Init_TrackedObjects_header
{
public:
  Init_TrackedObjects_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackedObjects_objects header(::autoware_auto_perception_msgs::msg::TrackedObjects::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrackedObjects_objects(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrackedObjects msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_perception_msgs::msg::TrackedObjects>()
{
  return autoware_auto_perception_msgs::msg::builder::Init_TrackedObjects_header();
}

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECTS__BUILDER_HPP_
