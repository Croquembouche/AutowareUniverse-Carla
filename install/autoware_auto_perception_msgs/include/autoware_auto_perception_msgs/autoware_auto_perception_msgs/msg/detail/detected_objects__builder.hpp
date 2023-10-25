// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_perception_msgs:msg/DetectedObjects.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECTS__BUILDER_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_perception_msgs/msg/detail/detected_objects__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectedObjects_objects
{
public:
  explicit Init_DetectedObjects_objects(::autoware_auto_perception_msgs::msg::DetectedObjects & msg)
  : msg_(msg)
  {}
  ::autoware_auto_perception_msgs::msg::DetectedObjects objects(::autoware_auto_perception_msgs::msg::DetectedObjects::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::DetectedObjects msg_;
};

class Init_DetectedObjects_header
{
public:
  Init_DetectedObjects_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectedObjects_objects header(::autoware_auto_perception_msgs::msg::DetectedObjects::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DetectedObjects_objects(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::DetectedObjects msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_perception_msgs::msg::DetectedObjects>()
{
  return autoware_auto_perception_msgs::msg::builder::Init_DetectedObjects_header();
}

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECTS__BUILDER_HPP_
