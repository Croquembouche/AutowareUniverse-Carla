// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_geometry_msgs:msg/RelativePositionWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__RELATIVE_POSITION_WITH_COVARIANCE_STAMPED__BUILDER_HPP_
#define AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__RELATIVE_POSITION_WITH_COVARIANCE_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_geometry_msgs/msg/detail/relative_position_with_covariance_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_geometry_msgs
{

namespace msg
{

namespace builder
{

class Init_RelativePositionWithCovarianceStamped_covariance
{
public:
  explicit Init_RelativePositionWithCovarianceStamped_covariance(::autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped & msg)
  : msg_(msg)
  {}
  ::autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped covariance(::autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped::_covariance_type arg)
  {
    msg_.covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped msg_;
};

class Init_RelativePositionWithCovarianceStamped_position
{
public:
  explicit Init_RelativePositionWithCovarianceStamped_position(::autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped & msg)
  : msg_(msg)
  {}
  Init_RelativePositionWithCovarianceStamped_covariance position(::autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_RelativePositionWithCovarianceStamped_covariance(msg_);
  }

private:
  ::autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped msg_;
};

class Init_RelativePositionWithCovarianceStamped_child_frame_id
{
public:
  explicit Init_RelativePositionWithCovarianceStamped_child_frame_id(::autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped & msg)
  : msg_(msg)
  {}
  Init_RelativePositionWithCovarianceStamped_position child_frame_id(::autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped::_child_frame_id_type arg)
  {
    msg_.child_frame_id = std::move(arg);
    return Init_RelativePositionWithCovarianceStamped_position(msg_);
  }

private:
  ::autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped msg_;
};

class Init_RelativePositionWithCovarianceStamped_header
{
public:
  Init_RelativePositionWithCovarianceStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RelativePositionWithCovarianceStamped_child_frame_id header(::autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RelativePositionWithCovarianceStamped_child_frame_id(msg_);
  }

private:
  ::autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped>()
{
  return autoware_auto_geometry_msgs::msg::builder::Init_RelativePositionWithCovarianceStamped_header();
}

}  // namespace autoware_auto_geometry_msgs

#endif  // AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__RELATIVE_POSITION_WITH_COVARIANCE_STAMPED__BUILDER_HPP_
