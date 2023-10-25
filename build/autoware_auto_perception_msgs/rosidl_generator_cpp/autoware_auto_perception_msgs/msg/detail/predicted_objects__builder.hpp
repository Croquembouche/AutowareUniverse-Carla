// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_perception_msgs:msg/PredictedObjects.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECTS__BUILDER_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_perception_msgs/msg/detail/predicted_objects__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_PredictedObjects_objects
{
public:
  explicit Init_PredictedObjects_objects(::autoware_auto_perception_msgs::msg::PredictedObjects & msg)
  : msg_(msg)
  {}
  ::autoware_auto_perception_msgs::msg::PredictedObjects objects(::autoware_auto_perception_msgs::msg::PredictedObjects::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::PredictedObjects msg_;
};

class Init_PredictedObjects_header
{
public:
  Init_PredictedObjects_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PredictedObjects_objects header(::autoware_auto_perception_msgs::msg::PredictedObjects::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PredictedObjects_objects(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::PredictedObjects msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_perception_msgs::msg::PredictedObjects>()
{
  return autoware_auto_perception_msgs::msg::builder::Init_PredictedObjects_header();
}

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECTS__BUILDER_HPP_
