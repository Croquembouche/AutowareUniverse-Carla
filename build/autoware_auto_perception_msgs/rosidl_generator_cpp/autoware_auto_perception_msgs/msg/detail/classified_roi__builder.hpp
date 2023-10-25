// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_perception_msgs:msg/ClassifiedRoi.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__CLASSIFIED_ROI__BUILDER_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__CLASSIFIED_ROI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_perception_msgs/msg/detail/classified_roi__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_ClassifiedRoi_polygon
{
public:
  explicit Init_ClassifiedRoi_polygon(::autoware_auto_perception_msgs::msg::ClassifiedRoi & msg)
  : msg_(msg)
  {}
  ::autoware_auto_perception_msgs::msg::ClassifiedRoi polygon(::autoware_auto_perception_msgs::msg::ClassifiedRoi::_polygon_type arg)
  {
    msg_.polygon = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::ClassifiedRoi msg_;
};

class Init_ClassifiedRoi_classifications
{
public:
  Init_ClassifiedRoi_classifications()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClassifiedRoi_polygon classifications(::autoware_auto_perception_msgs::msg::ClassifiedRoi::_classifications_type arg)
  {
    msg_.classifications = std::move(arg);
    return Init_ClassifiedRoi_polygon(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::ClassifiedRoi msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_perception_msgs::msg::ClassifiedRoi>()
{
  return autoware_auto_perception_msgs::msg::builder::Init_ClassifiedRoi_classifications();
}

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__CLASSIFIED_ROI__BUILDER_HPP_
