// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_planning_msgs:msg/OrderMovement.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__ORDER_MOVEMENT__BUILDER_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__ORDER_MOVEMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_planning_msgs/msg/detail/order_movement__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_OrderMovement_order_movement
{
public:
  explicit Init_OrderMovement_order_movement(::autoware_auto_planning_msgs::msg::OrderMovement & msg)
  : msg_(msg)
  {}
  ::autoware_auto_planning_msgs::msg::OrderMovement order_movement(::autoware_auto_planning_msgs::msg::OrderMovement::_order_movement_type arg)
  {
    msg_.order_movement = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_planning_msgs::msg::OrderMovement msg_;
};

class Init_OrderMovement_header
{
public:
  Init_OrderMovement_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OrderMovement_order_movement header(::autoware_auto_planning_msgs::msg::OrderMovement::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OrderMovement_order_movement(msg_);
  }

private:
  ::autoware_auto_planning_msgs::msg::OrderMovement msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_planning_msgs::msg::OrderMovement>()
{
  return autoware_auto_planning_msgs::msg::builder::Init_OrderMovement_header();
}

}  // namespace autoware_auto_planning_msgs

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__ORDER_MOVEMENT__BUILDER_HPP_
