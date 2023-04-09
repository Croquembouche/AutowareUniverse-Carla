// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/Steering.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__STEERING__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__STEERING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/steering__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_Steering_wheel
{
public:
  explicit Init_Steering_wheel(::v2x_msg::msg::Steering & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::Steering wheel(::v2x_msg::msg::Steering::_wheel_type arg)
  {
    msg_.wheel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::Steering msg_;
};

class Init_Steering_rate
{
public:
  explicit Init_Steering_rate(::v2x_msg::msg::Steering & msg)
  : msg_(msg)
  {}
  Init_Steering_wheel rate(::v2x_msg::msg::Steering::_rate_type arg)
  {
    msg_.rate = std::move(arg);
    return Init_Steering_wheel(msg_);
  }

private:
  ::v2x_msg::msg::Steering msg_;
};

class Init_Steering_confidence
{
public:
  explicit Init_Steering_confidence(::v2x_msg::msg::Steering & msg)
  : msg_(msg)
  {}
  Init_Steering_rate confidence(::v2x_msg::msg::Steering::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_Steering_rate(msg_);
  }

private:
  ::v2x_msg::msg::Steering msg_;
};

class Init_Steering_angle
{
public:
  Init_Steering_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Steering_confidence angle(::v2x_msg::msg::Steering::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_Steering_confidence(msg_);
  }

private:
  ::v2x_msg::msg::Steering msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::Steering>()
{
  return v2x_msg::msg::builder::Init_Steering_angle();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__STEERING__BUILDER_HPP_
