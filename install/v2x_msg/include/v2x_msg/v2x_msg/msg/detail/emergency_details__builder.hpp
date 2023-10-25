// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/EmergencyDetails.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__EMERGENCY_DETAILS__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__EMERGENCY_DETAILS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/emergency_details__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_EmergencyDetails_responsetype
{
public:
  explicit Init_EmergencyDetails_responsetype(::v2x_msg::msg::EmergencyDetails & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::EmergencyDetails responsetype(::v2x_msg::msg::EmergencyDetails::_responsetype_type arg)
  {
    msg_.responsetype = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::EmergencyDetails msg_;
};

class Init_EmergencyDetails_events
{
public:
  explicit Init_EmergencyDetails_events(::v2x_msg::msg::EmergencyDetails & msg)
  : msg_(msg)
  {}
  Init_EmergencyDetails_responsetype events(::v2x_msg::msg::EmergencyDetails::_events_type arg)
  {
    msg_.events = std::move(arg);
    return Init_EmergencyDetails_responsetype(msg_);
  }

private:
  ::v2x_msg::msg::EmergencyDetails msg_;
};

class Init_EmergencyDetails_multi
{
public:
  explicit Init_EmergencyDetails_multi(::v2x_msg::msg::EmergencyDetails & msg)
  : msg_(msg)
  {}
  Init_EmergencyDetails_events multi(::v2x_msg::msg::EmergencyDetails::_multi_type arg)
  {
    msg_.multi = std::move(arg);
    return Init_EmergencyDetails_events(msg_);
  }

private:
  ::v2x_msg::msg::EmergencyDetails msg_;
};

class Init_EmergencyDetails_lightsuse
{
public:
  explicit Init_EmergencyDetails_lightsuse(::v2x_msg::msg::EmergencyDetails & msg)
  : msg_(msg)
  {}
  Init_EmergencyDetails_multi lightsuse(::v2x_msg::msg::EmergencyDetails::_lightsuse_type arg)
  {
    msg_.lightsuse = std::move(arg);
    return Init_EmergencyDetails_multi(msg_);
  }

private:
  ::v2x_msg::msg::EmergencyDetails msg_;
};

class Init_EmergencyDetails_sirenuse
{
public:
  explicit Init_EmergencyDetails_sirenuse(::v2x_msg::msg::EmergencyDetails & msg)
  : msg_(msg)
  {}
  Init_EmergencyDetails_lightsuse sirenuse(::v2x_msg::msg::EmergencyDetails::_sirenuse_type arg)
  {
    msg_.sirenuse = std::move(arg);
    return Init_EmergencyDetails_lightsuse(msg_);
  }

private:
  ::v2x_msg::msg::EmergencyDetails msg_;
};

class Init_EmergencyDetails_notused
{
public:
  Init_EmergencyDetails_notused()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EmergencyDetails_sirenuse notused(::v2x_msg::msg::EmergencyDetails::_notused_type arg)
  {
    msg_.notused = std::move(arg);
    return Init_EmergencyDetails_sirenuse(msg_);
  }

private:
  ::v2x_msg::msg::EmergencyDetails msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::EmergencyDetails>()
{
  return v2x_msg::msg::builder::Init_EmergencyDetails_notused();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__EMERGENCY_DETAILS__BUILDER_HPP_
