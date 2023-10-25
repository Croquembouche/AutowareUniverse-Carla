// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_perception_msgs:msg/TrackedObjectKinematics.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECT_KINEMATICS__TRAITS_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECT_KINEMATICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_auto_perception_msgs/msg/detail/tracked_object_kinematics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose_with_covariance'
#include "geometry_msgs/msg/detail/pose_with_covariance__traits.hpp"
// Member 'twist_with_covariance'
#include "geometry_msgs/msg/detail/twist_with_covariance__traits.hpp"
// Member 'acceleration_with_covariance'
#include "geometry_msgs/msg/detail/accel_with_covariance__traits.hpp"

namespace autoware_auto_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrackedObjectKinematics & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose_with_covariance
  {
    out << "pose_with_covariance: ";
    to_flow_style_yaml(msg.pose_with_covariance, out);
    out << ", ";
  }

  // member: orientation_availability
  {
    out << "orientation_availability: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation_availability, out);
    out << ", ";
  }

  // member: twist_with_covariance
  {
    out << "twist_with_covariance: ";
    to_flow_style_yaml(msg.twist_with_covariance, out);
    out << ", ";
  }

  // member: acceleration_with_covariance
  {
    out << "acceleration_with_covariance: ";
    to_flow_style_yaml(msg.acceleration_with_covariance, out);
    out << ", ";
  }

  // member: is_stationary
  {
    out << "is_stationary: ";
    rosidl_generator_traits::value_to_yaml(msg.is_stationary, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrackedObjectKinematics & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose_with_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_with_covariance:\n";
    to_block_style_yaml(msg.pose_with_covariance, out, indentation + 2);
  }

  // member: orientation_availability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation_availability: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation_availability, out);
    out << "\n";
  }

  // member: twist_with_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist_with_covariance:\n";
    to_block_style_yaml(msg.twist_with_covariance, out, indentation + 2);
  }

  // member: acceleration_with_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_with_covariance:\n";
    to_block_style_yaml(msg.acceleration_with_covariance, out, indentation + 2);
  }

  // member: is_stationary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_stationary: ";
    rosidl_generator_traits::value_to_yaml(msg.is_stationary, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrackedObjectKinematics & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace autoware_auto_perception_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_auto_perception_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_auto_perception_msgs::msg::TrackedObjectKinematics & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_auto_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_auto_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_auto_perception_msgs::msg::TrackedObjectKinematics & msg)
{
  return autoware_auto_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_auto_perception_msgs::msg::TrackedObjectKinematics>()
{
  return "autoware_auto_perception_msgs::msg::TrackedObjectKinematics";
}

template<>
inline const char * name<autoware_auto_perception_msgs::msg::TrackedObjectKinematics>()
{
  return "autoware_auto_perception_msgs/msg/TrackedObjectKinematics";
}

template<>
struct has_fixed_size<autoware_auto_perception_msgs::msg::TrackedObjectKinematics>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::AccelWithCovariance>::value && has_fixed_size<geometry_msgs::msg::PoseWithCovariance>::value && has_fixed_size<geometry_msgs::msg::TwistWithCovariance>::value> {};

template<>
struct has_bounded_size<autoware_auto_perception_msgs::msg::TrackedObjectKinematics>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::AccelWithCovariance>::value && has_bounded_size<geometry_msgs::msg::PoseWithCovariance>::value && has_bounded_size<geometry_msgs::msg::TwistWithCovariance>::value> {};

template<>
struct is_message<autoware_auto_perception_msgs::msg::TrackedObjectKinematics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRACKED_OBJECT_KINEMATICS__TRAITS_HPP_
