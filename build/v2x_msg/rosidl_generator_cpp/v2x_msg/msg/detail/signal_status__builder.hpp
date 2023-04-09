// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/SignalStatus.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SIGNAL_STATUS__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__SIGNAL_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/signal_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_SignalStatus_sigstatus
{
public:
  explicit Init_SignalStatus_sigstatus(::v2x_msg::msg::SignalStatus & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::SignalStatus sigstatus(::v2x_msg::msg::SignalStatus::_sigstatus_type arg)
  {
    msg_.sigstatus = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::SignalStatus msg_;
};

class Init_SignalStatus_id
{
public:
  explicit Init_SignalStatus_id(::v2x_msg::msg::SignalStatus & msg)
  : msg_(msg)
  {}
  Init_SignalStatus_sigstatus id(::v2x_msg::msg::SignalStatus::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SignalStatus_sigstatus(msg_);
  }

private:
  ::v2x_msg::msg::SignalStatus msg_;
};

class Init_SignalStatus_sequencenumber
{
public:
  Init_SignalStatus_sequencenumber()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SignalStatus_id sequencenumber(::v2x_msg::msg::SignalStatus::_sequencenumber_type arg)
  {
    msg_.sequencenumber = std::move(arg);
    return Init_SignalStatus_id(msg_);
  }

private:
  ::v2x_msg::msg::SignalStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::SignalStatus>()
{
  return v2x_msg::msg::builder::Init_SignalStatus_sequencenumber();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__SIGNAL_STATUS__BUILDER_HPP_
