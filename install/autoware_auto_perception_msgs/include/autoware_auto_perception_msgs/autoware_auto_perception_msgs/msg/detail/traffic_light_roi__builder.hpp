// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_perception_msgs:msg/TrafficLightRoi.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ROI__BUILDER_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ROI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_perception_msgs/msg/detail/traffic_light_roi__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficLightRoi_id
{
public:
  explicit Init_TrafficLightRoi_id(::autoware_auto_perception_msgs::msg::TrafficLightRoi & msg)
  : msg_(msg)
  {}
  ::autoware_auto_perception_msgs::msg::TrafficLightRoi id(::autoware_auto_perception_msgs::msg::TrafficLightRoi::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrafficLightRoi msg_;
};

class Init_TrafficLightRoi_roi
{
public:
  Init_TrafficLightRoi_roi()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficLightRoi_id roi(::autoware_auto_perception_msgs::msg::TrafficLightRoi::_roi_type arg)
  {
    msg_.roi = std::move(arg);
    return Init_TrafficLightRoi_id(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrafficLightRoi msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_perception_msgs::msg::TrafficLightRoi>()
{
  return autoware_auto_perception_msgs::msg::builder::Init_TrafficLightRoi_roi();
}

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ROI__BUILDER_HPP_
