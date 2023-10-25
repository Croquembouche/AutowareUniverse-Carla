// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/AdvisorySpeed.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ADVISORY_SPEED__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__ADVISORY_SPEED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/advisory_speed__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const AdvisorySpeed & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: zonelength
  {
    out << "zonelength: ";
    rosidl_generator_traits::value_to_yaml(msg.zonelength, out);
    out << ", ";
  }

  // member: restrictionclassid
  {
    out << "restrictionclassid: ";
    rosidl_generator_traits::value_to_yaml(msg.restrictionclassid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AdvisorySpeed & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: zonelength
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "zonelength: ";
    rosidl_generator_traits::value_to_yaml(msg.zonelength, out);
    out << "\n";
  }

  // member: restrictionclassid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "restrictionclassid: ";
    rosidl_generator_traits::value_to_yaml(msg.restrictionclassid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AdvisorySpeed & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::AdvisorySpeed & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::AdvisorySpeed & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::AdvisorySpeed>()
{
  return "v2x_msg::msg::AdvisorySpeed";
}

template<>
inline const char * name<v2x_msg::msg::AdvisorySpeed>()
{
  return "v2x_msg/msg/AdvisorySpeed";
}

template<>
struct has_fixed_size<v2x_msg::msg::AdvisorySpeed>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::AdvisorySpeed>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::AdvisorySpeed>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__ADVISORY_SPEED__TRAITS_HPP_
