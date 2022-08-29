// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/SignalRequestPackage.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SIGNAL_REQUEST_PACKAGE__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__SIGNAL_REQUEST_PACKAGE__BUILDER_HPP_

#include "v2x_msg/msg/detail/signal_request_package__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_SignalRequestPackage_duration
{
public:
  explicit Init_SignalRequestPackage_duration(::v2x_msg::msg::SignalRequestPackage & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::SignalRequestPackage duration(::v2x_msg::msg::SignalRequestPackage::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::SignalRequestPackage msg_;
};

class Init_SignalRequestPackage_second
{
public:
  explicit Init_SignalRequestPackage_second(::v2x_msg::msg::SignalRequestPackage & msg)
  : msg_(msg)
  {}
  Init_SignalRequestPackage_duration second(::v2x_msg::msg::SignalRequestPackage::_second_type arg)
  {
    msg_.second = std::move(arg);
    return Init_SignalRequestPackage_duration(msg_);
  }

private:
  ::v2x_msg::msg::SignalRequestPackage msg_;
};

class Init_SignalRequestPackage_minute
{
public:
  explicit Init_SignalRequestPackage_minute(::v2x_msg::msg::SignalRequestPackage & msg)
  : msg_(msg)
  {}
  Init_SignalRequestPackage_second minute(::v2x_msg::msg::SignalRequestPackage::_minute_type arg)
  {
    msg_.minute = std::move(arg);
    return Init_SignalRequestPackage_second(msg_);
  }

private:
  ::v2x_msg::msg::SignalRequestPackage msg_;
};

class Init_SignalRequestPackage_signalrequest
{
public:
  Init_SignalRequestPackage_signalrequest()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SignalRequestPackage_minute signalrequest(::v2x_msg::msg::SignalRequestPackage::_signalrequest_type arg)
  {
    msg_.signalrequest = std::move(arg);
    return Init_SignalRequestPackage_minute(msg_);
  }

private:
  ::v2x_msg::msg::SignalRequestPackage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::SignalRequestPackage>()
{
  return v2x_msg::msg::builder::Init_SignalRequestPackage_signalrequest();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__SIGNAL_REQUEST_PACKAGE__BUILDER_HPP_
