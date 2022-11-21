// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/NMEA.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__NMEA__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__NMEA__BUILDER_HPP_

#include "v2x_msg/msg/detail/nmea__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_NMEA_payload
{
public:
  explicit Init_NMEA_payload(::v2x_msg::msg::NMEA & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::NMEA payload(::v2x_msg::msg::NMEA::_payload_type arg)
  {
    msg_.payload = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::NMEA msg_;
};

class Init_NMEA_wdcount
{
public:
  explicit Init_NMEA_wdcount(::v2x_msg::msg::NMEA & msg)
  : msg_(msg)
  {}
  Init_NMEA_payload wdcount(::v2x_msg::msg::NMEA::_wdcount_type arg)
  {
    msg_.wdcount = std::move(arg);
    return Init_NMEA_payload(msg_);
  }

private:
  ::v2x_msg::msg::NMEA msg_;
};

class Init_NMEA_msg
{
public:
  explicit Init_NMEA_msg(::v2x_msg::msg::NMEA & msg)
  : msg_(msg)
  {}
  Init_NMEA_wdcount msg(::v2x_msg::msg::NMEA::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_NMEA_wdcount(msg_);
  }

private:
  ::v2x_msg::msg::NMEA msg_;
};

class Init_NMEA_rev
{
public:
  explicit Init_NMEA_rev(::v2x_msg::msg::NMEA & msg)
  : msg_(msg)
  {}
  Init_NMEA_msg rev(::v2x_msg::msg::NMEA::_rev_type arg)
  {
    msg_.rev = std::move(arg);
    return Init_NMEA_msg(msg_);
  }

private:
  ::v2x_msg::msg::NMEA msg_;
};

class Init_NMEA_timestamp
{
public:
  Init_NMEA_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NMEA_rev timestamp(::v2x_msg::msg::NMEA::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_NMEA_rev(msg_);
  }

private:
  ::v2x_msg::msg::NMEA msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::NMEA>()
{
  return v2x_msg::msg::builder::Init_NMEA_timestamp();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__NMEA__BUILDER_HPP_
