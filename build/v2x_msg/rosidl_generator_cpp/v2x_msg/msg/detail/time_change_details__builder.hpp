// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/TimeChangeDetails.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__TIME_CHANGE_DETAILS__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__TIME_CHANGE_DETAILS__BUILDER_HPP_

#include "v2x_msg/msg/detail/time_change_details__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_TimeChangeDetails_nexttime
{
public:
  explicit Init_TimeChangeDetails_nexttime(::v2x_msg::msg::TimeChangeDetails & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::TimeChangeDetails nexttime(::v2x_msg::msg::TimeChangeDetails::_nexttime_type arg)
  {
    msg_.nexttime = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::TimeChangeDetails msg_;
};

class Init_TimeChangeDetails_confidence
{
public:
  explicit Init_TimeChangeDetails_confidence(::v2x_msg::msg::TimeChangeDetails & msg)
  : msg_(msg)
  {}
  Init_TimeChangeDetails_nexttime confidence(::v2x_msg::msg::TimeChangeDetails::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_TimeChangeDetails_nexttime(msg_);
  }

private:
  ::v2x_msg::msg::TimeChangeDetails msg_;
};

class Init_TimeChangeDetails_likelytime
{
public:
  explicit Init_TimeChangeDetails_likelytime(::v2x_msg::msg::TimeChangeDetails & msg)
  : msg_(msg)
  {}
  Init_TimeChangeDetails_confidence likelytime(::v2x_msg::msg::TimeChangeDetails::_likelytime_type arg)
  {
    msg_.likelytime = std::move(arg);
    return Init_TimeChangeDetails_confidence(msg_);
  }

private:
  ::v2x_msg::msg::TimeChangeDetails msg_;
};

class Init_TimeChangeDetails_maxendtime
{
public:
  explicit Init_TimeChangeDetails_maxendtime(::v2x_msg::msg::TimeChangeDetails & msg)
  : msg_(msg)
  {}
  Init_TimeChangeDetails_likelytime maxendtime(::v2x_msg::msg::TimeChangeDetails::_maxendtime_type arg)
  {
    msg_.maxendtime = std::move(arg);
    return Init_TimeChangeDetails_likelytime(msg_);
  }

private:
  ::v2x_msg::msg::TimeChangeDetails msg_;
};

class Init_TimeChangeDetails_minendtime
{
public:
  explicit Init_TimeChangeDetails_minendtime(::v2x_msg::msg::TimeChangeDetails & msg)
  : msg_(msg)
  {}
  Init_TimeChangeDetails_maxendtime minendtime(::v2x_msg::msg::TimeChangeDetails::_minendtime_type arg)
  {
    msg_.minendtime = std::move(arg);
    return Init_TimeChangeDetails_maxendtime(msg_);
  }

private:
  ::v2x_msg::msg::TimeChangeDetails msg_;
};

class Init_TimeChangeDetails_startime
{
public:
  Init_TimeChangeDetails_startime()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimeChangeDetails_minendtime startime(::v2x_msg::msg::TimeChangeDetails::_startime_type arg)
  {
    msg_.startime = std::move(arg);
    return Init_TimeChangeDetails_minendtime(msg_);
  }

private:
  ::v2x_msg::msg::TimeChangeDetails msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::TimeChangeDetails>()
{
  return v2x_msg::msg::builder::Init_TimeChangeDetails_startime();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__TIME_CHANGE_DETAILS__BUILDER_HPP_
