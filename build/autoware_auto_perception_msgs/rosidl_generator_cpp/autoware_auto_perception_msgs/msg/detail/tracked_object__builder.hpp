// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_perception_msgs:msg/TrackedObject.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECT__BUILDER_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_perception_msgs/msg/detail/tracked_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackedObject_shape
{
public:
  explicit Init_TrackedObject_shape(::autoware_auto_perception_msgs::msg::TrackedObject & msg)
  : msg_(msg)
  {}
  ::autoware_auto_perception_msgs::msg::TrackedObject shape(::autoware_auto_perception_msgs::msg::TrackedObject::_shape_type arg)
  {
    msg_.shape = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrackedObject msg_;
};

class Init_TrackedObject_kinematics
{
public:
  explicit Init_TrackedObject_kinematics(::autoware_auto_perception_msgs::msg::TrackedObject & msg)
  : msg_(msg)
  {}
  Init_TrackedObject_shape kinematics(::autoware_auto_perception_msgs::msg::TrackedObject::_kinematics_type arg)
  {
    msg_.kinematics = std::move(arg);
    return Init_TrackedObject_shape(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrackedObject msg_;
};

class Init_TrackedObject_classification
{
public:
  explicit Init_TrackedObject_classification(::autoware_auto_perception_msgs::msg::TrackedObject & msg)
  : msg_(msg)
  {}
  Init_TrackedObject_kinematics classification(::autoware_auto_perception_msgs::msg::TrackedObject::_classification_type arg)
  {
    msg_.classification = std::move(arg);
    return Init_TrackedObject_kinematics(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrackedObject msg_;
};

class Init_TrackedObject_existence_probability
{
public:
  explicit Init_TrackedObject_existence_probability(::autoware_auto_perception_msgs::msg::TrackedObject & msg)
  : msg_(msg)
  {}
  Init_TrackedObject_classification existence_probability(::autoware_auto_perception_msgs::msg::TrackedObject::_existence_probability_type arg)
  {
    msg_.existence_probability = std::move(arg);
    return Init_TrackedObject_classification(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrackedObject msg_;
};

class Init_TrackedObject_object_id
{
public:
  Init_TrackedObject_object_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackedObject_existence_probability object_id(::autoware_auto_perception_msgs::msg::TrackedObject::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return Init_TrackedObject_existence_probability(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrackedObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_perception_msgs::msg::TrackedObject>()
{
  return autoware_auto_perception_msgs::msg::builder::Init_TrackedObject_object_id();
}

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECT__BUILDER_HPP_
