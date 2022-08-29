// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/SpeedandHeadingandThrottleConfidence.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SPEEDAND_HEADINGAND_THROTTLE_CONFIDENCE__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__SPEEDAND_HEADINGAND_THROTTLE_CONFIDENCE__BUILDER_HPP_

#include "v2x_msg/msg/detail/speedand_headingand_throttle_confidence__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_SpeedandHeadingandThrottleConfidence_throttle
{
public:
  explicit Init_SpeedandHeadingandThrottleConfidence_throttle(::v2x_msg::msg::SpeedandHeadingandThrottleConfidence & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::SpeedandHeadingandThrottleConfidence throttle(::v2x_msg::msg::SpeedandHeadingandThrottleConfidence::_throttle_type arg)
  {
    msg_.throttle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::SpeedandHeadingandThrottleConfidence msg_;
};

class Init_SpeedandHeadingandThrottleConfidence_speed
{
public:
  explicit Init_SpeedandHeadingandThrottleConfidence_speed(::v2x_msg::msg::SpeedandHeadingandThrottleConfidence & msg)
  : msg_(msg)
  {}
  Init_SpeedandHeadingandThrottleConfidence_throttle speed(::v2x_msg::msg::SpeedandHeadingandThrottleConfidence::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_SpeedandHeadingandThrottleConfidence_throttle(msg_);
  }

private:
  ::v2x_msg::msg::SpeedandHeadingandThrottleConfidence msg_;
};

class Init_SpeedandHeadingandThrottleConfidence_heading
{
public:
  Init_SpeedandHeadingandThrottleConfidence_heading()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpeedandHeadingandThrottleConfidence_speed heading(::v2x_msg::msg::SpeedandHeadingandThrottleConfidence::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_SpeedandHeadingandThrottleConfidence_speed(msg_);
  }

private:
  ::v2x_msg::msg::SpeedandHeadingandThrottleConfidence msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::SpeedandHeadingandThrottleConfidence>()
{
  return v2x_msg::msg::builder::Init_SpeedandHeadingandThrottleConfidence_heading();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__SPEEDAND_HEADINGAND_THROTTLE_CONFIDENCE__BUILDER_HPP_
