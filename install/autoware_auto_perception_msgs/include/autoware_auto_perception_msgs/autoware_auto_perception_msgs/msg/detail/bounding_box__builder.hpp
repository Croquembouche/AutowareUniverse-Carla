// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_perception_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__BOUNDING_BOX__BUILDER_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__BOUNDING_BOX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_perception_msgs/msg/detail/bounding_box__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_BoundingBox_class_likelihood
{
public:
  explicit Init_BoundingBox_class_likelihood(::autoware_auto_perception_msgs::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  ::autoware_auto_perception_msgs::msg::BoundingBox class_likelihood(::autoware_auto_perception_msgs::msg::BoundingBox::_class_likelihood_type arg)
  {
    msg_.class_likelihood = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::BoundingBox msg_;
};

class Init_BoundingBox_signal_label
{
public:
  explicit Init_BoundingBox_signal_label(::autoware_auto_perception_msgs::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_class_likelihood signal_label(::autoware_auto_perception_msgs::msg::BoundingBox::_signal_label_type arg)
  {
    msg_.signal_label = std::move(arg);
    return Init_BoundingBox_class_likelihood(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::BoundingBox msg_;
};

class Init_BoundingBox_vehicle_label
{
public:
  explicit Init_BoundingBox_vehicle_label(::autoware_auto_perception_msgs::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_signal_label vehicle_label(::autoware_auto_perception_msgs::msg::BoundingBox::_vehicle_label_type arg)
  {
    msg_.vehicle_label = std::move(arg);
    return Init_BoundingBox_signal_label(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::BoundingBox msg_;
};

class Init_BoundingBox_value
{
public:
  explicit Init_BoundingBox_value(::autoware_auto_perception_msgs::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_vehicle_label value(::autoware_auto_perception_msgs::msg::BoundingBox::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_BoundingBox_vehicle_label(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::BoundingBox msg_;
};

class Init_BoundingBox_variance
{
public:
  explicit Init_BoundingBox_variance(::autoware_auto_perception_msgs::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_value variance(::autoware_auto_perception_msgs::msg::BoundingBox::_variance_type arg)
  {
    msg_.variance = std::move(arg);
    return Init_BoundingBox_value(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::BoundingBox msg_;
};

class Init_BoundingBox_corners
{
public:
  explicit Init_BoundingBox_corners(::autoware_auto_perception_msgs::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_variance corners(::autoware_auto_perception_msgs::msg::BoundingBox::_corners_type arg)
  {
    msg_.corners = std::move(arg);
    return Init_BoundingBox_variance(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::BoundingBox msg_;
};

class Init_BoundingBox_heading_rate
{
public:
  explicit Init_BoundingBox_heading_rate(::autoware_auto_perception_msgs::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_corners heading_rate(::autoware_auto_perception_msgs::msg::BoundingBox::_heading_rate_type arg)
  {
    msg_.heading_rate = std::move(arg);
    return Init_BoundingBox_corners(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::BoundingBox msg_;
};

class Init_BoundingBox_heading
{
public:
  explicit Init_BoundingBox_heading(::autoware_auto_perception_msgs::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_heading_rate heading(::autoware_auto_perception_msgs::msg::BoundingBox::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_BoundingBox_heading_rate(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::BoundingBox msg_;
};

class Init_BoundingBox_velocity
{
public:
  explicit Init_BoundingBox_velocity(::autoware_auto_perception_msgs::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_heading velocity(::autoware_auto_perception_msgs::msg::BoundingBox::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_BoundingBox_heading(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::BoundingBox msg_;
};

class Init_BoundingBox_orientation
{
public:
  explicit Init_BoundingBox_orientation(::autoware_auto_perception_msgs::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_velocity orientation(::autoware_auto_perception_msgs::msg::BoundingBox::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_BoundingBox_velocity(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::BoundingBox msg_;
};

class Init_BoundingBox_size
{
public:
  explicit Init_BoundingBox_size(::autoware_auto_perception_msgs::msg::BoundingBox & msg)
  : msg_(msg)
  {}
  Init_BoundingBox_orientation size(::autoware_auto_perception_msgs::msg::BoundingBox::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_BoundingBox_orientation(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::BoundingBox msg_;
};

class Init_BoundingBox_centroid
{
public:
  Init_BoundingBox_centroid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundingBox_size centroid(::autoware_auto_perception_msgs::msg::BoundingBox::_centroid_type arg)
  {
    msg_.centroid = std::move(arg);
    return Init_BoundingBox_size(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::BoundingBox msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_perception_msgs::msg::BoundingBox>()
{
  return autoware_auto_perception_msgs::msg::builder::Init_BoundingBox_centroid();
}

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__BOUNDING_BOX__BUILDER_HPP_
