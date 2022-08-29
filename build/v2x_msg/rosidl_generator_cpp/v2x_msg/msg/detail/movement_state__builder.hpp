// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/MovementState.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__MOVEMENT_STATE__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__MOVEMENT_STATE__BUILDER_HPP_

#include "v2x_msg/msg/detail/movement_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_MovementState_maneuverassistlist
{
public:
  explicit Init_MovementState_maneuverassistlist(::v2x_msg::msg::MovementState & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::MovementState maneuverassistlist(::v2x_msg::msg::MovementState::_maneuverassistlist_type arg)
  {
    msg_.maneuverassistlist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::MovementState msg_;
};

class Init_MovementState_statetimespeed
{
public:
  explicit Init_MovementState_statetimespeed(::v2x_msg::msg::MovementState & msg)
  : msg_(msg)
  {}
  Init_MovementState_maneuverassistlist statetimespeed(::v2x_msg::msg::MovementState::_statetimespeed_type arg)
  {
    msg_.statetimespeed = std::move(arg);
    return Init_MovementState_maneuverassistlist(msg_);
  }

private:
  ::v2x_msg::msg::MovementState msg_;
};

class Init_MovementState_signalgroupid
{
public:
  explicit Init_MovementState_signalgroupid(::v2x_msg::msg::MovementState & msg)
  : msg_(msg)
  {}
  Init_MovementState_statetimespeed signalgroupid(::v2x_msg::msg::MovementState::_signalgroupid_type arg)
  {
    msg_.signalgroupid = std::move(arg);
    return Init_MovementState_statetimespeed(msg_);
  }

private:
  ::v2x_msg::msg::MovementState msg_;
};

class Init_MovementState_movementname
{
public:
  Init_MovementState_movementname()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MovementState_signalgroupid movementname(::v2x_msg::msg::MovementState::_movementname_type arg)
  {
    msg_.movementname = std::move(arg);
    return Init_MovementState_signalgroupid(msg_);
  }

private:
  ::v2x_msg::msg::MovementState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::MovementState>()
{
  return v2x_msg::msg::builder::Init_MovementState_movementname();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__MOVEMENT_STATE__BUILDER_HPP_
