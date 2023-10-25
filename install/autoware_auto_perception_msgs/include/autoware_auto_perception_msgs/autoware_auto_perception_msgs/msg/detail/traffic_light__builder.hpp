// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_perception_msgs:msg/TrafficLight.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__BUILDER_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_perception_msgs/msg/detail/traffic_light__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficLight_confidence
{
public:
  explicit Init_TrafficLight_confidence(::autoware_auto_perception_msgs::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  ::autoware_auto_perception_msgs::msg::TrafficLight confidence(::autoware_auto_perception_msgs::msg::TrafficLight::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrafficLight msg_;
};

class Init_TrafficLight_status
{
public:
  explicit Init_TrafficLight_status(::autoware_auto_perception_msgs::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  Init_TrafficLight_confidence status(::autoware_auto_perception_msgs::msg::TrafficLight::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TrafficLight_confidence(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrafficLight msg_;
};

class Init_TrafficLight_shape
{
public:
  explicit Init_TrafficLight_shape(::autoware_auto_perception_msgs::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  Init_TrafficLight_status shape(::autoware_auto_perception_msgs::msg::TrafficLight::_shape_type arg)
  {
    msg_.shape = std::move(arg);
    return Init_TrafficLight_status(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrafficLight msg_;
};

class Init_TrafficLight_color
{
public:
  Init_TrafficLight_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficLight_shape color(::autoware_auto_perception_msgs::msg::TrafficLight::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_TrafficLight_shape(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrafficLight msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_perception_msgs::msg::TrafficLight>()
{
  return autoware_auto_perception_msgs::msg::builder::Init_TrafficLight_color();
}

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__BUILDER_HPP_
