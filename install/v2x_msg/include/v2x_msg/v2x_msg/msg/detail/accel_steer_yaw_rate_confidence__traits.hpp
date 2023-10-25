// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/AccelSteerYawRateConfidence.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ACCEL_STEER_YAW_RATE_CONFIDENCE__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__ACCEL_STEER_YAW_RATE_CONFIDENCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/accel_steer_yaw_rate_confidence__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const AccelSteerYawRateConfidence & msg,
  std::ostream & out)
{
  out << "{";
  // member: yawrate
  {
    out << "yawrate: ";
    rosidl_generator_traits::value_to_yaml(msg.yawrate, out);
    out << ", ";
  }

  // member: acceleration
  {
    out << "acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration, out);
    out << ", ";
  }

  // member: steeringwheelangle
  {
    out << "steeringwheelangle: ";
    rosidl_generator_traits::value_to_yaml(msg.steeringwheelangle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AccelSteerYawRateConfidence & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: yawrate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yawrate: ";
    rosidl_generator_traits::value_to_yaml(msg.yawrate, out);
    out << "\n";
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration, out);
    out << "\n";
  }

  // member: steeringwheelangle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steeringwheelangle: ";
    rosidl_generator_traits::value_to_yaml(msg.steeringwheelangle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AccelSteerYawRateConfidence & msg, bool use_flow_style = false)
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

}  // namespace v2x_msg

namespace rosidl_generator_traits
{

[[deprecated("use v2x_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const v2x_msg::msg::AccelSteerYawRateConfidence & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::AccelSteerYawRateConfidence & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::AccelSteerYawRateConfidence>()
{
  return "v2x_msg::msg::AccelSteerYawRateConfidence";
}

template<>
inline const char * name<v2x_msg::msg::AccelSteerYawRateConfidence>()
{
  return "v2x_msg/msg/AccelSteerYawRateConfidence";
}

template<>
struct has_fixed_size<v2x_msg::msg::AccelSteerYawRateConfidence>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::AccelSteerYawRateConfidence>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::AccelSteerYawRateConfidence>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__ACCEL_STEER_YAW_RATE_CONFIDENCE__TRAITS_HPP_
