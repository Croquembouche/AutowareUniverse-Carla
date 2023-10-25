// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_perception_msgs:msg/TrafficLightRoiArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ROI_ARRAY__BUILDER_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ROI_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_perception_msgs/msg/detail/traffic_light_roi_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficLightRoiArray_rois
{
public:
  explicit Init_TrafficLightRoiArray_rois(::autoware_auto_perception_msgs::msg::TrafficLightRoiArray & msg)
  : msg_(msg)
  {}
  ::autoware_auto_perception_msgs::msg::TrafficLightRoiArray rois(::autoware_auto_perception_msgs::msg::TrafficLightRoiArray::_rois_type arg)
  {
    msg_.rois = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrafficLightRoiArray msg_;
};

class Init_TrafficLightRoiArray_header
{
public:
  Init_TrafficLightRoiArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficLightRoiArray_rois header(::autoware_auto_perception_msgs::msg::TrafficLightRoiArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrafficLightRoiArray_rois(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrafficLightRoiArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_perception_msgs::msg::TrafficLightRoiArray>()
{
  return autoware_auto_perception_msgs::msg::builder::Init_TrafficLightRoiArray_header();
}

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ROI_ARRAY__BUILDER_HPP_
