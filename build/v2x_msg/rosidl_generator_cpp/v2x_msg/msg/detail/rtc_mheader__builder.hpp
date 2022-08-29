// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/RTCMheader.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__RTC_MHEADER__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__RTC_MHEADER__BUILDER_HPP_

#include "v2x_msg/msg/detail/rtc_mheader__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_RTCMheader_offsetset
{
public:
  explicit Init_RTCMheader_offsetset(::v2x_msg::msg::RTCMheader & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::RTCMheader offsetset(::v2x_msg::msg::RTCMheader::_offsetset_type arg)
  {
    msg_.offsetset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::RTCMheader msg_;
};

class Init_RTCMheader_status
{
public:
  Init_RTCMheader_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RTCMheader_offsetset status(::v2x_msg::msg::RTCMheader::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RTCMheader_offsetset(msg_);
  }

private:
  ::v2x_msg::msg::RTCMheader msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::RTCMheader>()
{
  return v2x_msg::msg::builder::Init_RTCMheader_status();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__RTC_MHEADER__BUILDER_HPP_
