// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/ComputedLane.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__COMPUTED_LANE__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__COMPUTED_LANE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/computed_lane__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'offsetxaxis'
#include "v2x_msg/msg/detail/offset_xaxis__traits.hpp"
// Member 'offsetyaxis'
#include "v2x_msg/msg/detail/offset_yaxis__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const ComputedLane & msg,
  std::ostream & out)
{
  out << "{";
  // member: referencelaneid
  {
    out << "referencelaneid: ";
    rosidl_generator_traits::value_to_yaml(msg.referencelaneid, out);
    out << ", ";
  }

  // member: offsetxaxis
  {
    out << "offsetxaxis: ";
    to_flow_style_yaml(msg.offsetxaxis, out);
    out << ", ";
  }

  // member: offsetyaxis
  {
    out << "offsetyaxis: ";
    to_flow_style_yaml(msg.offsetyaxis, out);
    out << ", ";
  }

  // member: rotatexy
  {
    out << "rotatexy: ";
    rosidl_generator_traits::value_to_yaml(msg.rotatexy, out);
    out << ", ";
  }

  // member: scalexaxis
  {
    out << "scalexaxis: ";
    rosidl_generator_traits::value_to_yaml(msg.scalexaxis, out);
    out << ", ";
  }

  // member: scaleyaxis
  {
    out << "scaleyaxis: ";
    rosidl_generator_traits::value_to_yaml(msg.scaleyaxis, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ComputedLane & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: referencelaneid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "referencelaneid: ";
    rosidl_generator_traits::value_to_yaml(msg.referencelaneid, out);
    out << "\n";
  }

  // member: offsetxaxis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offsetxaxis:\n";
    to_block_style_yaml(msg.offsetxaxis, out, indentation + 2);
  }

  // member: offsetyaxis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offsetyaxis:\n";
    to_block_style_yaml(msg.offsetyaxis, out, indentation + 2);
  }

  // member: rotatexy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotatexy: ";
    rosidl_generator_traits::value_to_yaml(msg.rotatexy, out);
    out << "\n";
  }

  // member: scalexaxis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scalexaxis: ";
    rosidl_generator_traits::value_to_yaml(msg.scalexaxis, out);
    out << "\n";
  }

  // member: scaleyaxis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scaleyaxis: ";
    rosidl_generator_traits::value_to_yaml(msg.scaleyaxis, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ComputedLane & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::ComputedLane & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::ComputedLane & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::ComputedLane>()
{
  return "v2x_msg::msg::ComputedLane";
}

template<>
inline const char * name<v2x_msg::msg::ComputedLane>()
{
  return "v2x_msg/msg/ComputedLane";
}

template<>
struct has_fixed_size<v2x_msg::msg::ComputedLane>
  : std::integral_constant<bool, has_fixed_size<v2x_msg::msg::OffsetXaxis>::value && has_fixed_size<v2x_msg::msg::OffsetYaxis>::value> {};

template<>
struct has_bounded_size<v2x_msg::msg::ComputedLane>
  : std::integral_constant<bool, has_bounded_size<v2x_msg::msg::OffsetXaxis>::value && has_bounded_size<v2x_msg::msg::OffsetYaxis>::value> {};

template<>
struct is_message<v2x_msg::msg::ComputedLane>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__COMPUTED_LANE__TRAITS_HPP_
