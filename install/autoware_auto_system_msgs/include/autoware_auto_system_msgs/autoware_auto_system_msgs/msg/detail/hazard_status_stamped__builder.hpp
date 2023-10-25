// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_system_msgs:msg/HazardStatusStamped.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS_STAMPED__BUILDER_HPP_
#define AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_system_msgs/msg/detail/hazard_status_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_system_msgs
{

namespace msg
{

namespace builder
{

class Init_HazardStatusStamped_status
{
public:
  explicit Init_HazardStatusStamped_status(::autoware_auto_system_msgs::msg::HazardStatusStamped & msg)
  : msg_(msg)
  {}
  ::autoware_auto_system_msgs::msg::HazardStatusStamped status(::autoware_auto_system_msgs::msg::HazardStatusStamped::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::HazardStatusStamped msg_;
};

class Init_HazardStatusStamped_stamp
{
public:
  Init_HazardStatusStamped_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HazardStatusStamped_status stamp(::autoware_auto_system_msgs::msg::HazardStatusStamped::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_HazardStatusStamped_status(msg_);
  }

private:
  ::autoware_auto_system_msgs::msg::HazardStatusStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_system_msgs::msg::HazardStatusStamped>()
{
  return autoware_auto_system_msgs::msg::builder::Init_HazardStatusStamped_stamp();
}

}  // namespace autoware_auto_system_msgs

#endif  // AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS_STAMPED__BUILDER_HPP_
