// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_perception_msgs:msg/BoundingBoxArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__BOUNDING_BOX_ARRAY__BUILDER_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__BOUNDING_BOX_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_perception_msgs/msg/detail/bounding_box_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_BoundingBoxArray_boxes
{
public:
  explicit Init_BoundingBoxArray_boxes(::autoware_auto_perception_msgs::msg::BoundingBoxArray & msg)
  : msg_(msg)
  {}
  ::autoware_auto_perception_msgs::msg::BoundingBoxArray boxes(::autoware_auto_perception_msgs::msg::BoundingBoxArray::_boxes_type arg)
  {
    msg_.boxes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::BoundingBoxArray msg_;
};

class Init_BoundingBoxArray_header
{
public:
  Init_BoundingBoxArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundingBoxArray_boxes header(::autoware_auto_perception_msgs::msg::BoundingBoxArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BoundingBoxArray_boxes(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::BoundingBoxArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_perception_msgs::msg::BoundingBoxArray>()
{
  return autoware_auto_perception_msgs::msg::builder::Init_BoundingBoxArray_header();
}

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__BOUNDING_BOX_ARRAY__BUILDER_HPP_
