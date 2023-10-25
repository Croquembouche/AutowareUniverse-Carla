// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_geometry_msgs:msg/Quaternion32.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__QUATERNION32__BUILDER_HPP_
#define AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__QUATERNION32__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_geometry_msgs/msg/detail/quaternion32__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_geometry_msgs
{

namespace msg
{

namespace builder
{

class Init_Quaternion32_w
{
public:
  explicit Init_Quaternion32_w(::autoware_auto_geometry_msgs::msg::Quaternion32 & msg)
  : msg_(msg)
  {}
  ::autoware_auto_geometry_msgs::msg::Quaternion32 w(::autoware_auto_geometry_msgs::msg::Quaternion32::_w_type arg)
  {
    msg_.w = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_geometry_msgs::msg::Quaternion32 msg_;
};

class Init_Quaternion32_z
{
public:
  explicit Init_Quaternion32_z(::autoware_auto_geometry_msgs::msg::Quaternion32 & msg)
  : msg_(msg)
  {}
  Init_Quaternion32_w z(::autoware_auto_geometry_msgs::msg::Quaternion32::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Quaternion32_w(msg_);
  }

private:
  ::autoware_auto_geometry_msgs::msg::Quaternion32 msg_;
};

class Init_Quaternion32_y
{
public:
  explicit Init_Quaternion32_y(::autoware_auto_geometry_msgs::msg::Quaternion32 & msg)
  : msg_(msg)
  {}
  Init_Quaternion32_z y(::autoware_auto_geometry_msgs::msg::Quaternion32::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Quaternion32_z(msg_);
  }

private:
  ::autoware_auto_geometry_msgs::msg::Quaternion32 msg_;
};

class Init_Quaternion32_x
{
public:
  Init_Quaternion32_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Quaternion32_y x(::autoware_auto_geometry_msgs::msg::Quaternion32::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Quaternion32_y(msg_);
  }

private:
  ::autoware_auto_geometry_msgs::msg::Quaternion32 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_geometry_msgs::msg::Quaternion32>()
{
  return autoware_auto_geometry_msgs::msg::builder::Init_Quaternion32_x();
}

}  // namespace autoware_auto_geometry_msgs

#endif  // AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__QUATERNION32__BUILDER_HPP_
