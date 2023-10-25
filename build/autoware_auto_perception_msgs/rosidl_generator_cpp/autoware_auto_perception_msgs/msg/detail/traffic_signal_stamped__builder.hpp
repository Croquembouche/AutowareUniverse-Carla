// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_perception_msgs:msg/TrafficSignalStamped.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_STAMPED__BUILDER_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_perception_msgs/msg/detail/traffic_signal_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficSignalStamped_signal
{
public:
  explicit Init_TrafficSignalStamped_signal(::autoware_auto_perception_msgs::msg::TrafficSignalStamped & msg)
  : msg_(msg)
  {}
  ::autoware_auto_perception_msgs::msg::TrafficSignalStamped signal(::autoware_auto_perception_msgs::msg::TrafficSignalStamped::_signal_type arg)
  {
    msg_.signal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrafficSignalStamped msg_;
};

class Init_TrafficSignalStamped_header
{
public:
  Init_TrafficSignalStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficSignalStamped_signal header(::autoware_auto_perception_msgs::msg::TrafficSignalStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrafficSignalStamped_signal(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrafficSignalStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_perception_msgs::msg::TrafficSignalStamped>()
{
  return autoware_auto_perception_msgs::msg::builder::Init_TrafficSignalStamped_header();
}

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_STAMPED__BUILDER_HPP_
