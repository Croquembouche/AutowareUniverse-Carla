// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/PrivilegedEvents.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PRIVILEGED_EVENTS__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__PRIVILEGED_EVENTS__BUILDER_HPP_

#include "v2x_msg/msg/detail/privileged_events__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_PrivilegedEvents_event
{
public:
  explicit Init_PrivilegedEvents_event(::v2x_msg::msg::PrivilegedEvents & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::PrivilegedEvents event(::v2x_msg::msg::PrivilegedEvents::_event_type arg)
  {
    msg_.event = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::PrivilegedEvents msg_;
};

class Init_PrivilegedEvents_notused
{
public:
  Init_PrivilegedEvents_notused()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PrivilegedEvents_event notused(::v2x_msg::msg::PrivilegedEvents::_notused_type arg)
  {
    msg_.notused = std::move(arg);
    return Init_PrivilegedEvents_event(msg_);
  }

private:
  ::v2x_msg::msg::PrivilegedEvents msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::PrivilegedEvents>()
{
  return v2x_msg::msg::builder::Init_PrivilegedEvents_notused();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__PRIVILEGED_EVENTS__BUILDER_HPP_
