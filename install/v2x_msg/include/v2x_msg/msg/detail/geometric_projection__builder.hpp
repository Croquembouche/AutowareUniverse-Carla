// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/GeometricProjection.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__GEOMETRIC_PROJECTION__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__GEOMETRIC_PROJECTION__BUILDER_HPP_

#include "v2x_msg/msg/detail/geometric_projection__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_GeometricProjection_circle
{
public:
  explicit Init_GeometricProjection_circle(::v2x_msg::msg::GeometricProjection & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::GeometricProjection circle(::v2x_msg::msg::GeometricProjection::_circle_type arg)
  {
    msg_.circle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::GeometricProjection msg_;
};

class Init_GeometricProjection_lanewidth
{
public:
  explicit Init_GeometricProjection_lanewidth(::v2x_msg::msg::GeometricProjection & msg)
  : msg_(msg)
  {}
  Init_GeometricProjection_circle lanewidth(::v2x_msg::msg::GeometricProjection::_lanewidth_type arg)
  {
    msg_.lanewidth = std::move(arg);
    return Init_GeometricProjection_circle(msg_);
  }

private:
  ::v2x_msg::msg::GeometricProjection msg_;
};

class Init_GeometricProjection_extent
{
public:
  explicit Init_GeometricProjection_extent(::v2x_msg::msg::GeometricProjection & msg)
  : msg_(msg)
  {}
  Init_GeometricProjection_lanewidth extent(::v2x_msg::msg::GeometricProjection::_extent_type arg)
  {
    msg_.extent = std::move(arg);
    return Init_GeometricProjection_lanewidth(msg_);
  }

private:
  ::v2x_msg::msg::GeometricProjection msg_;
};

class Init_GeometricProjection_direction
{
public:
  Init_GeometricProjection_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GeometricProjection_extent direction(::v2x_msg::msg::GeometricProjection::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_GeometricProjection_extent(msg_);
  }

private:
  ::v2x_msg::msg::GeometricProjection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::GeometricProjection>()
{
  return v2x_msg::msg::builder::Init_GeometricProjection_direction();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__GEOMETRIC_PROJECTION__BUILDER_HPP_
