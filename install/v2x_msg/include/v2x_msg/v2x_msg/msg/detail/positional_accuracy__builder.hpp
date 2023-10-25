// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/PositionalAccuracy.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__POSITIONAL_ACCURACY__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__POSITIONAL_ACCURACY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/positional_accuracy__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_PositionalAccuracy_orientation
{
public:
  explicit Init_PositionalAccuracy_orientation(::v2x_msg::msg::PositionalAccuracy & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::PositionalAccuracy orientation(::v2x_msg::msg::PositionalAccuracy::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::PositionalAccuracy msg_;
};

class Init_PositionalAccuracy_semiminor
{
public:
  explicit Init_PositionalAccuracy_semiminor(::v2x_msg::msg::PositionalAccuracy & msg)
  : msg_(msg)
  {}
  Init_PositionalAccuracy_orientation semiminor(::v2x_msg::msg::PositionalAccuracy::_semiminor_type arg)
  {
    msg_.semiminor = std::move(arg);
    return Init_PositionalAccuracy_orientation(msg_);
  }

private:
  ::v2x_msg::msg::PositionalAccuracy msg_;
};

class Init_PositionalAccuracy_semimajor
{
public:
  Init_PositionalAccuracy_semimajor()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionalAccuracy_semiminor semimajor(::v2x_msg::msg::PositionalAccuracy::_semimajor_type arg)
  {
    msg_.semimajor = std::move(arg);
    return Init_PositionalAccuracy_semiminor(msg_);
  }

private:
  ::v2x_msg::msg::PositionalAccuracy msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::PositionalAccuracy>()
{
  return v2x_msg::msg::builder::Init_PositionalAccuracy_semimajor();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__POSITIONAL_ACCURACY__BUILDER_HPP_
