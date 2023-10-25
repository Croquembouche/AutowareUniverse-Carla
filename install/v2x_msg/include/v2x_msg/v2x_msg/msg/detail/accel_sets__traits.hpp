// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/AccelSets.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ACCEL_SETS__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__ACCEL_SETS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/accel_sets__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'angle'
#include "v2x_msg/msg/detail/acceleration_set4_way__traits.hpp"
// Member 'confidenceset'
#include "v2x_msg/msg/detail/confidence_set__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const AccelSets & msg,
  std::ostream & out)
{
  out << "{";
  // member: angle
  {
    out << "angle: ";
    to_flow_style_yaml(msg.angle, out);
    out << ", ";
  }

  // member: certaccelthres
  {
    out << "certaccelthres: ";
    rosidl_generator_traits::value_to_yaml(msg.certaccelthres, out);
    out << ", ";
  }

  // member: yawratecon
  {
    out << "yawratecon: ";
    rosidl_generator_traits::value_to_yaml(msg.yawratecon, out);
    out << ", ";
  }

  // member: hozaccelcon
  {
    out << "hozaccelcon: ";
    rosidl_generator_traits::value_to_yaml(msg.hozaccelcon, out);
    out << ", ";
  }

  // member: confidenceset
  {
    out << "confidenceset: ";
    to_flow_style_yaml(msg.confidenceset, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AccelSets & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle:\n";
    to_block_style_yaml(msg.angle, out, indentation + 2);
  }

  // member: certaccelthres
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "certaccelthres: ";
    rosidl_generator_traits::value_to_yaml(msg.certaccelthres, out);
    out << "\n";
  }

  // member: yawratecon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yawratecon: ";
    rosidl_generator_traits::value_to_yaml(msg.yawratecon, out);
    out << "\n";
  }

  // member: hozaccelcon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hozaccelcon: ";
    rosidl_generator_traits::value_to_yaml(msg.hozaccelcon, out);
    out << "\n";
  }

  // member: confidenceset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidenceset:\n";
    to_block_style_yaml(msg.confidenceset, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AccelSets & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::AccelSets & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::AccelSets & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::AccelSets>()
{
  return "v2x_msg::msg::AccelSets";
}

template<>
inline const char * name<v2x_msg::msg::AccelSets>()
{
  return "v2x_msg/msg/AccelSets";
}

template<>
struct has_fixed_size<v2x_msg::msg::AccelSets>
  : std::integral_constant<bool, has_fixed_size<v2x_msg::msg::AccelerationSet4Way>::value && has_fixed_size<v2x_msg::msg::ConfidenceSet>::value> {};

template<>
struct has_bounded_size<v2x_msg::msg::AccelSets>
  : std::integral_constant<bool, has_bounded_size<v2x_msg::msg::AccelerationSet4Way>::value && has_bounded_size<v2x_msg::msg::ConfidenceSet>::value> {};

template<>
struct is_message<v2x_msg::msg::AccelSets>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__ACCEL_SETS__TRAITS_HPP_
