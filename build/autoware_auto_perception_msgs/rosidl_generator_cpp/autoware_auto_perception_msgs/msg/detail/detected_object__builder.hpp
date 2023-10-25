// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_perception_msgs:msg/DetectedObject.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT__BUILDER_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_perception_msgs/msg/detail/detected_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectedObject_shape
{
public:
  explicit Init_DetectedObject_shape(::autoware_auto_perception_msgs::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  ::autoware_auto_perception_msgs::msg::DetectedObject shape(::autoware_auto_perception_msgs::msg::DetectedObject::_shape_type arg)
  {
    msg_.shape = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::DetectedObject msg_;
};

class Init_DetectedObject_kinematics
{
public:
  explicit Init_DetectedObject_kinematics(::autoware_auto_perception_msgs::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_shape kinematics(::autoware_auto_perception_msgs::msg::DetectedObject::_kinematics_type arg)
  {
    msg_.kinematics = std::move(arg);
    return Init_DetectedObject_shape(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::DetectedObject msg_;
};

class Init_DetectedObject_classification
{
public:
  explicit Init_DetectedObject_classification(::autoware_auto_perception_msgs::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_kinematics classification(::autoware_auto_perception_msgs::msg::DetectedObject::_classification_type arg)
  {
    msg_.classification = std::move(arg);
    return Init_DetectedObject_kinematics(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::DetectedObject msg_;
};

class Init_DetectedObject_existence_probability
{
public:
  Init_DetectedObject_existence_probability()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectedObject_classification existence_probability(::autoware_auto_perception_msgs::msg::DetectedObject::_existence_probability_type arg)
  {
    msg_.existence_probability = std::move(arg);
    return Init_DetectedObject_classification(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::DetectedObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_perception_msgs::msg::DetectedObject>()
{
  return autoware_auto_perception_msgs::msg::builder::Init_DetectedObject_existence_probability();
}

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT__BUILDER_HPP_
