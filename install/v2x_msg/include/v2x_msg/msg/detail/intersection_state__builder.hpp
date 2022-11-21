// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/IntersectionState.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__INTERSECTION_STATE__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__INTERSECTION_STATE__BUILDER_HPP_

#include "v2x_msg/msg/detail/intersection_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_IntersectionState_maneuverassistlist
{
public:
  explicit Init_IntersectionState_maneuverassistlist(::v2x_msg::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::IntersectionState maneuverassistlist(::v2x_msg::msg::IntersectionState::_maneuverassistlist_type arg)
  {
    msg_.maneuverassistlist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionState msg_;
};

class Init_IntersectionState_states
{
public:
  explicit Init_IntersectionState_states(::v2x_msg::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_maneuverassistlist states(::v2x_msg::msg::IntersectionState::_states_type arg)
  {
    msg_.states = std::move(arg);
    return Init_IntersectionState_maneuverassistlist(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionState msg_;
};

class Init_IntersectionState_enabledlanes
{
public:
  explicit Init_IntersectionState_enabledlanes(::v2x_msg::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_states enabledlanes(::v2x_msg::msg::IntersectionState::_enabledlanes_type arg)
  {
    msg_.enabledlanes = std::move(arg);
    return Init_IntersectionState_states(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionState msg_;
};

class Init_IntersectionState_timestamp
{
public:
  explicit Init_IntersectionState_timestamp(::v2x_msg::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_enabledlanes timestamp(::v2x_msg::msg::IntersectionState::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_IntersectionState_enabledlanes(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionState msg_;
};

class Init_IntersectionState_moy
{
public:
  explicit Init_IntersectionState_moy(::v2x_msg::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_timestamp moy(::v2x_msg::msg::IntersectionState::_moy_type arg)
  {
    msg_.moy = std::move(arg);
    return Init_IntersectionState_timestamp(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionState msg_;
};

class Init_IntersectionState_status
{
public:
  explicit Init_IntersectionState_status(::v2x_msg::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_moy status(::v2x_msg::msg::IntersectionState::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_IntersectionState_moy(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionState msg_;
};

class Init_IntersectionState_revision
{
public:
  explicit Init_IntersectionState_revision(::v2x_msg::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_status revision(::v2x_msg::msg::IntersectionState::_revision_type arg)
  {
    msg_.revision = std::move(arg);
    return Init_IntersectionState_status(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionState msg_;
};

class Init_IntersectionState_id
{
public:
  explicit Init_IntersectionState_id(::v2x_msg::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_revision id(::v2x_msg::msg::IntersectionState::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_IntersectionState_revision(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionState msg_;
};

class Init_IntersectionState_name
{
public:
  Init_IntersectionState_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IntersectionState_id name(::v2x_msg::msg::IntersectionState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_IntersectionState_id(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::IntersectionState>()
{
  return v2x_msg::msg::builder::Init_IntersectionState_name();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__INTERSECTION_STATE__BUILDER_HPP_
