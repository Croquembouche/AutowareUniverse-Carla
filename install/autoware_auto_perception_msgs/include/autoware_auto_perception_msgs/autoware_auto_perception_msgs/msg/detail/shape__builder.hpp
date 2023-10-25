// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_perception_msgs:msg/Shape.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__SHAPE__BUILDER_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__SHAPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_perception_msgs/msg/detail/shape__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_Shape_dimensions
{
public:
  explicit Init_Shape_dimensions(::autoware_auto_perception_msgs::msg::Shape & msg)
  : msg_(msg)
  {}
  ::autoware_auto_perception_msgs::msg::Shape dimensions(::autoware_auto_perception_msgs::msg::Shape::_dimensions_type arg)
  {
    msg_.dimensions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::Shape msg_;
};

class Init_Shape_footprint
{
public:
  explicit Init_Shape_footprint(::autoware_auto_perception_msgs::msg::Shape & msg)
  : msg_(msg)
  {}
  Init_Shape_dimensions footprint(::autoware_auto_perception_msgs::msg::Shape::_footprint_type arg)
  {
    msg_.footprint = std::move(arg);
    return Init_Shape_dimensions(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::Shape msg_;
};

class Init_Shape_type
{
public:
  Init_Shape_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Shape_footprint type(::autoware_auto_perception_msgs::msg::Shape::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Shape_footprint(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::Shape msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_perception_msgs::msg::Shape>()
{
  return autoware_auto_perception_msgs::msg::builder::Init_Shape_type();
}

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__SHAPE__BUILDER_HPP_
