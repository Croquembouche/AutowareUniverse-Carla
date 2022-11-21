// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/Circle.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__CIRCLE__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__CIRCLE__BUILDER_HPP_

#include "v2x_msg/msg/detail/circle__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_Circle_units
{
public:
  explicit Init_Circle_units(::v2x_msg::msg::Circle & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::Circle units(::v2x_msg::msg::Circle::_units_type arg)
  {
    msg_.units = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::Circle msg_;
};

class Init_Circle_radius
{
public:
  explicit Init_Circle_radius(::v2x_msg::msg::Circle & msg)
  : msg_(msg)
  {}
  Init_Circle_units radius(::v2x_msg::msg::Circle::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return Init_Circle_units(msg_);
  }

private:
  ::v2x_msg::msg::Circle msg_;
};

class Init_Circle_center
{
public:
  Init_Circle_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Circle_radius center(::v2x_msg::msg::Circle::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_Circle_radius(msg_);
  }

private:
  ::v2x_msg::msg::Circle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::Circle>()
{
  return v2x_msg::msg::builder::Init_Circle_center();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__CIRCLE__BUILDER_HPP_
