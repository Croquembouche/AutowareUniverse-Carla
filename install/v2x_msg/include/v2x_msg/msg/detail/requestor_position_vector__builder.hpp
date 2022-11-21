// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/RequestorPositionVector.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__REQUESTOR_POSITION_VECTOR__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__REQUESTOR_POSITION_VECTOR__BUILDER_HPP_

#include "v2x_msg/msg/detail/requestor_position_vector__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_RequestorPositionVector_speed
{
public:
  explicit Init_RequestorPositionVector_speed(::v2x_msg::msg::RequestorPositionVector & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::RequestorPositionVector speed(::v2x_msg::msg::RequestorPositionVector::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::RequestorPositionVector msg_;
};

class Init_RequestorPositionVector_heading
{
public:
  explicit Init_RequestorPositionVector_heading(::v2x_msg::msg::RequestorPositionVector & msg)
  : msg_(msg)
  {}
  Init_RequestorPositionVector_speed heading(::v2x_msg::msg::RequestorPositionVector::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_RequestorPositionVector_speed(msg_);
  }

private:
  ::v2x_msg::msg::RequestorPositionVector msg_;
};

class Init_RequestorPositionVector_position
{
public:
  Init_RequestorPositionVector_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RequestorPositionVector_heading position(::v2x_msg::msg::RequestorPositionVector::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_RequestorPositionVector_heading(msg_);
  }

private:
  ::v2x_msg::msg::RequestorPositionVector msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::RequestorPositionVector>()
{
  return v2x_msg::msg::builder::Init_RequestorPositionVector_position();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__REQUESTOR_POSITION_VECTOR__BUILDER_HPP_
