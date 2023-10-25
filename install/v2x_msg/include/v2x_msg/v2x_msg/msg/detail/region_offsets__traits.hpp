// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/RegionOffsets.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__REGION_OFFSETS__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__REGION_OFFSETS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/region_offsets__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const RegionOffsets & msg,
  std::ostream & out)
{
  out << "{";
  // member: xoffset
  {
    out << "xoffset: ";
    rosidl_generator_traits::value_to_yaml(msg.xoffset, out);
    out << ", ";
  }

  // member: yoffset
  {
    out << "yoffset: ";
    rosidl_generator_traits::value_to_yaml(msg.yoffset, out);
    out << ", ";
  }

  // member: zoffset
  {
    out << "zoffset: ";
    rosidl_generator_traits::value_to_yaml(msg.zoffset, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RegionOffsets & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: xoffset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xoffset: ";
    rosidl_generator_traits::value_to_yaml(msg.xoffset, out);
    out << "\n";
  }

  // member: yoffset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yoffset: ";
    rosidl_generator_traits::value_to_yaml(msg.yoffset, out);
    out << "\n";
  }

  // member: zoffset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "zoffset: ";
    rosidl_generator_traits::value_to_yaml(msg.zoffset, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RegionOffsets & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::RegionOffsets & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::RegionOffsets & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::RegionOffsets>()
{
  return "v2x_msg::msg::RegionOffsets";
}

template<>
inline const char * name<v2x_msg::msg::RegionOffsets>()
{
  return "v2x_msg/msg/RegionOffsets";
}

template<>
struct has_fixed_size<v2x_msg::msg::RegionOffsets>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::RegionOffsets>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::RegionOffsets>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__REGION_OFFSETS__TRAITS_HPP_
