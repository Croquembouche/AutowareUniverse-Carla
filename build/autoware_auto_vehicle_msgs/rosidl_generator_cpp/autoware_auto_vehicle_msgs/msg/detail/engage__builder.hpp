// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_vehicle_msgs:msg/Engage.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__ENGAGE__BUILDER_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__ENGAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_vehicle_msgs/msg/detail/engage__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_Engage_engage
{
public:
  explicit Init_Engage_engage(::autoware_auto_vehicle_msgs::msg::Engage & msg)
  : msg_(msg)
  {}
  ::autoware_auto_vehicle_msgs::msg::Engage engage(::autoware_auto_vehicle_msgs::msg::Engage::_engage_type arg)
  {
    msg_.engage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::Engage msg_;
};

class Init_Engage_stamp
{
public:
  Init_Engage_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Engage_engage stamp(::autoware_auto_vehicle_msgs::msg::Engage::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Engage_engage(msg_);
  }

private:
  ::autoware_auto_vehicle_msgs::msg::Engage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_vehicle_msgs::msg::Engage>()
{
  return autoware_auto_vehicle_msgs::msg::builder::Init_Engage_stamp();
}

}  // namespace autoware_auto_vehicle_msgs

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__ENGAGE__BUILDER_HPP_
