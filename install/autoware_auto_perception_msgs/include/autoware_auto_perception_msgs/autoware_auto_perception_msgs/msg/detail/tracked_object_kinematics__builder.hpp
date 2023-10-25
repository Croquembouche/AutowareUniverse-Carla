// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_auto_perception_msgs:msg/TrackedObjectKinematics.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECT_KINEMATICS__BUILDER_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECT_KINEMATICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_auto_perception_msgs/msg/detail/tracked_object_kinematics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_auto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackedObjectKinematics_is_stationary
{
public:
  explicit Init_TrackedObjectKinematics_is_stationary(::autoware_auto_perception_msgs::msg::TrackedObjectKinematics & msg)
  : msg_(msg)
  {}
  ::autoware_auto_perception_msgs::msg::TrackedObjectKinematics is_stationary(::autoware_auto_perception_msgs::msg::TrackedObjectKinematics::_is_stationary_type arg)
  {
    msg_.is_stationary = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrackedObjectKinematics msg_;
};

class Init_TrackedObjectKinematics_acceleration_with_covariance
{
public:
  explicit Init_TrackedObjectKinematics_acceleration_with_covariance(::autoware_auto_perception_msgs::msg::TrackedObjectKinematics & msg)
  : msg_(msg)
  {}
  Init_TrackedObjectKinematics_is_stationary acceleration_with_covariance(::autoware_auto_perception_msgs::msg::TrackedObjectKinematics::_acceleration_with_covariance_type arg)
  {
    msg_.acceleration_with_covariance = std::move(arg);
    return Init_TrackedObjectKinematics_is_stationary(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrackedObjectKinematics msg_;
};

class Init_TrackedObjectKinematics_twist_with_covariance
{
public:
  explicit Init_TrackedObjectKinematics_twist_with_covariance(::autoware_auto_perception_msgs::msg::TrackedObjectKinematics & msg)
  : msg_(msg)
  {}
  Init_TrackedObjectKinematics_acceleration_with_covariance twist_with_covariance(::autoware_auto_perception_msgs::msg::TrackedObjectKinematics::_twist_with_covariance_type arg)
  {
    msg_.twist_with_covariance = std::move(arg);
    return Init_TrackedObjectKinematics_acceleration_with_covariance(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrackedObjectKinematics msg_;
};

class Init_TrackedObjectKinematics_orientation_availability
{
public:
  explicit Init_TrackedObjectKinematics_orientation_availability(::autoware_auto_perception_msgs::msg::TrackedObjectKinematics & msg)
  : msg_(msg)
  {}
  Init_TrackedObjectKinematics_twist_with_covariance orientation_availability(::autoware_auto_perception_msgs::msg::TrackedObjectKinematics::_orientation_availability_type arg)
  {
    msg_.orientation_availability = std::move(arg);
    return Init_TrackedObjectKinematics_twist_with_covariance(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrackedObjectKinematics msg_;
};

class Init_TrackedObjectKinematics_pose_with_covariance
{
public:
  Init_TrackedObjectKinematics_pose_with_covariance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackedObjectKinematics_orientation_availability pose_with_covariance(::autoware_auto_perception_msgs::msg::TrackedObjectKinematics::_pose_with_covariance_type arg)
  {
    msg_.pose_with_covariance = std::move(arg);
    return Init_TrackedObjectKinematics_orientation_availability(msg_);
  }

private:
  ::autoware_auto_perception_msgs::msg::TrackedObjectKinematics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_auto_perception_msgs::msg::TrackedObjectKinematics>()
{
  return autoware_auto_perception_msgs::msg::builder::Init_TrackedObjectKinematics_pose_with_covariance();
}

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECT_KINEMATICS__BUILDER_HPP_
