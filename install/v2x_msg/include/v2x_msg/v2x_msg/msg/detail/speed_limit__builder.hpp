// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/SpeedLimit.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SPEED_LIMIT__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__SPEED_LIMIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/speed_limit__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_SpeedLimit_speed
{
public:
  explicit Init_SpeedLimit_speed(::v2x_msg::msg::SpeedLimit & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::SpeedLimit speed(::v2x_msg::msg::SpeedLimit::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::SpeedLimit msg_;
};

class Init_SpeedLimit_type
{
public:
  Init_SpeedLimit_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpeedLimit_speed type(::v2x_msg::msg::SpeedLimit::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SpeedLimit_speed(msg_);
  }

private:
  ::v2x_msg::msg::SpeedLimit msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::SpeedLimit>()
{
  return v2x_msg::msg::builder::Init_SpeedLimit_type();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__SPEED_LIMIT__BUILDER_HPP_
