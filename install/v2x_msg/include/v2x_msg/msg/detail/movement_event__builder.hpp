// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/MovementEvent.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__MOVEMENT_EVENT__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__MOVEMENT_EVENT__BUILDER_HPP_

#include "v2x_msg/msg/detail/movement_event__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_MovementEvent_speeds
{
public:
  explicit Init_MovementEvent_speeds(::v2x_msg::msg::MovementEvent & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::MovementEvent speeds(::v2x_msg::msg::MovementEvent::_speeds_type arg)
  {
    msg_.speeds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::MovementEvent msg_;
};

class Init_MovementEvent_timing
{
public:
  explicit Init_MovementEvent_timing(::v2x_msg::msg::MovementEvent & msg)
  : msg_(msg)
  {}
  Init_MovementEvent_speeds timing(::v2x_msg::msg::MovementEvent::_timing_type arg)
  {
    msg_.timing = std::move(arg);
    return Init_MovementEvent_speeds(msg_);
  }

private:
  ::v2x_msg::msg::MovementEvent msg_;
};

class Init_MovementEvent_movementphasestate
{
public:
  Init_MovementEvent_movementphasestate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MovementEvent_timing movementphasestate(::v2x_msg::msg::MovementEvent::_movementphasestate_type arg)
  {
    msg_.movementphasestate = std::move(arg);
    return Init_MovementEvent_timing(msg_);
  }

private:
  ::v2x_msg::msg::MovementEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::MovementEvent>()
{
  return v2x_msg::msg::builder::Init_MovementEvent_movementphasestate();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__MOVEMENT_EVENT__BUILDER_HPP_
