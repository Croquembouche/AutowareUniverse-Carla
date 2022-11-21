// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/SignalStatusPackage.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SIGNAL_STATUS_PACKAGE__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__SIGNAL_STATUS_PACKAGE__BUILDER_HPP_

#include "v2x_msg/msg/detail/signal_status_package__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_SignalStatusPackage_status
{
public:
  explicit Init_SignalStatusPackage_status(::v2x_msg::msg::SignalStatusPackage & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::SignalStatusPackage status(::v2x_msg::msg::SignalStatusPackage::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::SignalStatusPackage msg_;
};

class Init_SignalStatusPackage_duration
{
public:
  explicit Init_SignalStatusPackage_duration(::v2x_msg::msg::SignalStatusPackage & msg)
  : msg_(msg)
  {}
  Init_SignalStatusPackage_status duration(::v2x_msg::msg::SignalStatusPackage::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_SignalStatusPackage_status(msg_);
  }

private:
  ::v2x_msg::msg::SignalStatusPackage msg_;
};

class Init_SignalStatusPackage_second
{
public:
  explicit Init_SignalStatusPackage_second(::v2x_msg::msg::SignalStatusPackage & msg)
  : msg_(msg)
  {}
  Init_SignalStatusPackage_duration second(::v2x_msg::msg::SignalStatusPackage::_second_type arg)
  {
    msg_.second = std::move(arg);
    return Init_SignalStatusPackage_duration(msg_);
  }

private:
  ::v2x_msg::msg::SignalStatusPackage msg_;
};

class Init_SignalStatusPackage_minute
{
public:
  explicit Init_SignalStatusPackage_minute(::v2x_msg::msg::SignalStatusPackage & msg)
  : msg_(msg)
  {}
  Init_SignalStatusPackage_second minute(::v2x_msg::msg::SignalStatusPackage::_minute_type arg)
  {
    msg_.minute = std::move(arg);
    return Init_SignalStatusPackage_second(msg_);
  }

private:
  ::v2x_msg::msg::SignalStatusPackage msg_;
};

class Init_SignalStatusPackage_outboundon
{
public:
  explicit Init_SignalStatusPackage_outboundon(::v2x_msg::msg::SignalStatusPackage & msg)
  : msg_(msg)
  {}
  Init_SignalStatusPackage_minute outboundon(::v2x_msg::msg::SignalStatusPackage::_outboundon_type arg)
  {
    msg_.outboundon = std::move(arg);
    return Init_SignalStatusPackage_minute(msg_);
  }

private:
  ::v2x_msg::msg::SignalStatusPackage msg_;
};

class Init_SignalStatusPackage_inboundon
{
public:
  explicit Init_SignalStatusPackage_inboundon(::v2x_msg::msg::SignalStatusPackage & msg)
  : msg_(msg)
  {}
  Init_SignalStatusPackage_outboundon inboundon(::v2x_msg::msg::SignalStatusPackage::_inboundon_type arg)
  {
    msg_.inboundon = std::move(arg);
    return Init_SignalStatusPackage_outboundon(msg_);
  }

private:
  ::v2x_msg::msg::SignalStatusPackage msg_;
};

class Init_SignalStatusPackage_requester
{
public:
  Init_SignalStatusPackage_requester()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SignalStatusPackage_inboundon requester(::v2x_msg::msg::SignalStatusPackage::_requester_type arg)
  {
    msg_.requester = std::move(arg);
    return Init_SignalStatusPackage_inboundon(msg_);
  }

private:
  ::v2x_msg::msg::SignalStatusPackage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::SignalStatusPackage>()
{
  return v2x_msg::msg::builder::Init_SignalStatusPackage_requester();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__SIGNAL_STATUS_PACKAGE__BUILDER_HPP_
