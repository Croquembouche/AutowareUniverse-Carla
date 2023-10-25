// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_perception_msgs:msg/LookingTrafficSignal.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__LOOKING_TRAFFIC_SIGNAL__BUILDER_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__LOOKING_TRAFFIC_SIGNAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_perception_msgs/msg/detail/looking_traffic_signal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_LookingTrafficSignal_result
{
public:
  explicit Init_LookingTrafficSignal_result(::autoware_auto_perception_msgs::msg::LookingTrafficSignal & msg)
  : msg_(msg)
  {}
  ::autoware_auto_perception_msgs::msg::LookingTrafficSignal result(::autoware_auto_perception_msgs::msg::LookingTrafficSignal::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::LookingTrafficSignal msg_;
};

class Init_LookingTrafficSignal_external
{
public:
  explicit Init_LookingTrafficSignal_external(::autoware_auto_perception_msgs::msg::LookingTrafficSignal & msg)
  : msg_(msg)
  {}
  Init_LookingTrafficSignal_result external(::autoware_auto_perception_msgs::msg::LookingTrafficSignal::_external_type arg)
  {
    msg_.external = std::move(arg);
    return Init_LookingTrafficSignal_result(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::LookingTrafficSignal msg_;
};

class Init_LookingTrafficSignal_perception
{
public:
  explicit Init_LookingTrafficSignal_perception(::autoware_auto_perception_msgs::msg::LookingTrafficSignal & msg)
  : msg_(msg)
  {}
  Init_LookingTrafficSignal_external perception(::autoware_auto_perception_msgs::msg::LookingTrafficSignal::_perception_type arg)
  {
    msg_.perception = std::move(arg);
    return Init_LookingTrafficSignal_external(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::LookingTrafficSignal msg_;
};

class Init_LookingTrafficSignal_is_module_running
{
public:
  explicit Init_LookingTrafficSignal_is_module_running(::autoware_auto_perception_msgs::msg::LookingTrafficSignal & msg)
  : msg_(msg)
  {}
  Init_LookingTrafficSignal_perception is_module_running(::autoware_auto_perception_msgs::msg::LookingTrafficSignal::_is_module_running_type arg)
  {
    msg_.is_module_running = std::move(arg);
    return Init_LookingTrafficSignal_perception(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::LookingTrafficSignal msg_;
};

class Init_LookingTrafficSignal_header
{
public:
  Init_LookingTrafficSignal_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LookingTrafficSignal_is_module_running header(::autoware_auto_perception_msgs::msg::LookingTrafficSignal::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LookingTrafficSignal_is_module_running(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::LookingTrafficSignal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_perception_msgs::msg::LookingTrafficSignal>()
{
  return autoware_auto_perception_msgs::msg::builder::Init_LookingTrafficSignal_header();
}

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__LOOKING_TRAFFIC_SIGNAL__BUILDER_HPP_
