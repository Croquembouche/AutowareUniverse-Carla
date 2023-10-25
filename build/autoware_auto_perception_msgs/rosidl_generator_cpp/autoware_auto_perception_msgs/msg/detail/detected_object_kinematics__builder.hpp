// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_perception_msgs:msg/DetectedObjectKinematics.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT_KINEMATICS__BUILDER_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT_KINEMATICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_perception_msgs/msg/detail/detected_object_kinematics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectedObjectKinematics_has_twist_covariance
{
public:
  explicit Init_DetectedObjectKinematics_has_twist_covariance(::autoware_auto_perception_msgs::msg::DetectedObjectKinematics & msg)
  : msg_(msg)
  {}
  ::autoware_auto_perception_msgs::msg::DetectedObjectKinematics has_twist_covariance(::autoware_auto_perception_msgs::msg::DetectedObjectKinematics::_has_twist_covariance_type arg)
  {
    msg_.has_twist_covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::DetectedObjectKinematics msg_;
};

class Init_DetectedObjectKinematics_has_twist
{
public:
  explicit Init_DetectedObjectKinematics_has_twist(::autoware_auto_perception_msgs::msg::DetectedObjectKinematics & msg)
  : msg_(msg)
  {}
  Init_DetectedObjectKinematics_has_twist_covariance has_twist(::autoware_auto_perception_msgs::msg::DetectedObjectKinematics::_has_twist_type arg)
  {
    msg_.has_twist = std::move(arg);
    return Init_DetectedObjectKinematics_has_twist_covariance(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::DetectedObjectKinematics msg_;
};

class Init_DetectedObjectKinematics_twist_with_covariance
{
public:
  explicit Init_DetectedObjectKinematics_twist_with_covariance(::autoware_auto_perception_msgs::msg::DetectedObjectKinematics & msg)
  : msg_(msg)
  {}
  Init_DetectedObjectKinematics_has_twist twist_with_covariance(::autoware_auto_perception_msgs::msg::DetectedObjectKinematics::_twist_with_covariance_type arg)
  {
    msg_.twist_with_covariance = std::move(arg);
    return Init_DetectedObjectKinematics_has_twist(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::DetectedObjectKinematics msg_;
};

class Init_DetectedObjectKinematics_orientation_availability
{
public:
  explicit Init_DetectedObjectKinematics_orientation_availability(::autoware_auto_perception_msgs::msg::DetectedObjectKinematics & msg)
  : msg_(msg)
  {}
  Init_DetectedObjectKinematics_twist_with_covariance orientation_availability(::autoware_auto_perception_msgs::msg::DetectedObjectKinematics::_orientation_availability_type arg)
  {
    msg_.orientation_availability = std::move(arg);
    return Init_DetectedObjectKinematics_twist_with_covariance(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::DetectedObjectKinematics msg_;
};

class Init_DetectedObjectKinematics_has_position_covariance
{
public:
  explicit Init_DetectedObjectKinematics_has_position_covariance(::autoware_auto_perception_msgs::msg::DetectedObjectKinematics & msg)
  : msg_(msg)
  {}
  Init_DetectedObjectKinematics_orientation_availability has_position_covariance(::autoware_auto_perception_msgs::msg::DetectedObjectKinematics::_has_position_covariance_type arg)
  {
    msg_.has_position_covariance = std::move(arg);
    return Init_DetectedObjectKinematics_orientation_availability(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::DetectedObjectKinematics msg_;
};

class Init_DetectedObjectKinematics_pose_with_covariance
{
public:
  Init_DetectedObjectKinematics_pose_with_covariance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectedObjectKinematics_has_position_covariance pose_with_covariance(::autoware_auto_perception_msgs::msg::DetectedObjectKinematics::_pose_with_covariance_type arg)
  {
    msg_.pose_with_covariance = std::move(arg);
    return Init_DetectedObjectKinematics_has_position_covariance(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::DetectedObjectKinematics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_perception_msgs::msg::DetectedObjectKinematics>()
{
  return autoware_auto_perception_msgs::msg::builder::Init_DetectedObjectKinematics_pose_with_covariance();
}

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__DETECTED_OBJECT_KINEMATICS__BUILDER_HPP_
