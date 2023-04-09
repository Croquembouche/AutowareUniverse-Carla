// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/RTCM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__RTCM__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__RTCM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/rtcm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_RTCM_msgs
{
public:
  explicit Init_RTCM_msgs(::v2x_msg::msg::RTCM & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::RTCM msgs(::v2x_msg::msg::RTCM::_msgs_type arg)
  {
    msg_.msgs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::RTCM msg_;
};

class Init_RTCM_rtcmheader
{
public:
  explicit Init_RTCM_rtcmheader(::v2x_msg::msg::RTCM & msg)
  : msg_(msg)
  {}
  Init_RTCM_msgs rtcmheader(::v2x_msg::msg::RTCM::_rtcmheader_type arg)
  {
    msg_.rtcmheader = std::move(arg);
    return Init_RTCM_msgs(msg_);
  }

private:
  ::v2x_msg::msg::RTCM msg_;
};

class Init_RTCM_anchorpoint
{
public:
  explicit Init_RTCM_anchorpoint(::v2x_msg::msg::RTCM & msg)
  : msg_(msg)
  {}
  Init_RTCM_rtcmheader anchorpoint(::v2x_msg::msg::RTCM::_anchorpoint_type arg)
  {
    msg_.anchorpoint = std::move(arg);
    return Init_RTCM_rtcmheader(msg_);
  }

private:
  ::v2x_msg::msg::RTCM msg_;
};

class Init_RTCM_timestamp
{
public:
  explicit Init_RTCM_timestamp(::v2x_msg::msg::RTCM & msg)
  : msg_(msg)
  {}
  Init_RTCM_anchorpoint timestamp(::v2x_msg::msg::RTCM::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RTCM_anchorpoint(msg_);
  }

private:
  ::v2x_msg::msg::RTCM msg_;
};

class Init_RTCM_rev
{
public:
  explicit Init_RTCM_rev(::v2x_msg::msg::RTCM & msg)
  : msg_(msg)
  {}
  Init_RTCM_timestamp rev(::v2x_msg::msg::RTCM::_rev_type arg)
  {
    msg_.rev = std::move(arg);
    return Init_RTCM_timestamp(msg_);
  }

private:
  ::v2x_msg::msg::RTCM msg_;
};

class Init_RTCM_msgcnt
{
public:
  Init_RTCM_msgcnt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RTCM_rev msgcnt(::v2x_msg::msg::RTCM::_msgcnt_type arg)
  {
    msg_.msgcnt = std::move(arg);
    return Init_RTCM_rev(msg_);
  }

private:
  ::v2x_msg::msg::RTCM msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::RTCM>()
{
  return v2x_msg::msg::builder::Init_RTCM_msgcnt();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__RTCM__BUILDER_HPP_
