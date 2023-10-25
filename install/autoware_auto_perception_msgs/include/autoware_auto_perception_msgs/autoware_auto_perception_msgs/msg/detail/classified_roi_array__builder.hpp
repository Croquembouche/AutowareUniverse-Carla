// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_perception_msgs:msg/ClassifiedRoiArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__CLASSIFIED_ROI_ARRAY__BUILDER_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__CLASSIFIED_ROI_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_perception_msgs/msg/detail/classified_roi_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_ClassifiedRoiArray_rois
{
public:
  explicit Init_ClassifiedRoiArray_rois(::autoware_auto_perception_msgs::msg::ClassifiedRoiArray & msg)
  : msg_(msg)
  {}
  ::autoware_auto_perception_msgs::msg::ClassifiedRoiArray rois(::autoware_auto_perception_msgs::msg::ClassifiedRoiArray::_rois_type arg)
  {
    msg_.rois = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::ClassifiedRoiArray msg_;
};

class Init_ClassifiedRoiArray_header
{
public:
  Init_ClassifiedRoiArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClassifiedRoiArray_rois header(::autoware_auto_perception_msgs::msg::ClassifiedRoiArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ClassifiedRoiArray_rois(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::ClassifiedRoiArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_perception_msgs::msg::ClassifiedRoiArray>()
{
  return autoware_auto_perception_msgs::msg::builder::Init_ClassifiedRoiArray_header();
}

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__CLASSIFIED_ROI_ARRAY__BUILDER_HPP_
