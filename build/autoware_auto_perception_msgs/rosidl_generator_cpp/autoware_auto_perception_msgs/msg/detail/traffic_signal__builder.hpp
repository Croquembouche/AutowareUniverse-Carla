// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_perception_msgs:msg/TrafficSignal.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL__BUILDER_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_perception_msgs/msg/detail/traffic_signal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficSignal_lights
{
public:
  explicit Init_TrafficSignal_lights(::autoware_auto_perception_msgs::msg::TrafficSignal & msg)
  : msg_(msg)
  {}
  ::autoware_auto_perception_msgs::msg::TrafficSignal lights(::autoware_auto_perception_msgs::msg::TrafficSignal::_lights_type arg)
  {
    msg_.lights = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrafficSignal msg_;
};

class Init_TrafficSignal_map_primitive_id
{
public:
  Init_TrafficSignal_map_primitive_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficSignal_lights map_primitive_id(::autoware_auto_perception_msgs::msg::TrafficSignal::_map_primitive_id_type arg)
  {
    msg_.map_primitive_id = std::move(arg);
    return Init_TrafficSignal_lights(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrafficSignal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_perception_msgs::msg::TrafficSignal>()
{
  return autoware_auto_perception_msgs::msg::builder::Init_TrafficSignal_map_primitive_id();
}

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL__BUILDER_HPP_
