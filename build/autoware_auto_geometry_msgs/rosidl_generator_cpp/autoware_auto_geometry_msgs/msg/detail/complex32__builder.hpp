// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_geometry_msgs:msg/Complex32.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__COMPLEX32__BUILDER_HPP_
#define AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__COMPLEX32__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_geometry_msgs/msg/detail/complex32__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_geometry_msgs
{

namespace msg
{

namespace builder
{

class Init_Complex32_imag
{
public:
  explicit Init_Complex32_imag(::autoware_auto_geometry_msgs::msg::Complex32 & msg)
  : msg_(msg)
  {}
  ::autoware_auto_geometry_msgs::msg::Complex32 imag(::autoware_auto_geometry_msgs::msg::Complex32::_imag_type arg)
  {
    msg_.imag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_geometry_msgs::msg::Complex32 msg_;
};

class Init_Complex32_real
{
public:
  Init_Complex32_real()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Complex32_imag real(::autoware_auto_geometry_msgs::msg::Complex32::_real_type arg)
  {
    msg_.real = std::move(arg);
    return Init_Complex32_imag(msg_);
  }

private:
  ::autoware_auto_geometry_msgs::msg::Complex32 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_geometry_msgs::msg::Complex32>()
{
  return autoware_auto_geometry_msgs::msg::builder::Init_Complex32_real();
}

}  // namespace autoware_auto_geometry_msgs

#endif  // AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__COMPLEX32__BUILDER_HPP_
