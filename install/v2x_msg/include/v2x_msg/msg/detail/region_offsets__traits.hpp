// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/RegionOffsets.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__REGION_OFFSETS__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__REGION_OFFSETS__TRAITS_HPP_

#include "v2x_msg/msg/detail/region_offsets__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::RegionOffsets & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: xoffset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xoffset: ";
    value_to_yaml(msg.xoffset, out);
    out << "\n";
  }

  // member: yoffset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yoffset: ";
    value_to_yaml(msg.yoffset, out);
    out << "\n";
  }

  // member: zoffset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "zoffset: ";
    value_to_yaml(msg.zoffset, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::RegionOffsets & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
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
