// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/AntennaOffsetSet.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ANTENNA_OFFSET_SET__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__ANTENNA_OFFSET_SET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/antenna_offset_set__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const AntennaOffsetSet & msg,
  std::ostream & out)
{
  out << "{";
  // member: antoffsetx
  {
    out << "antoffsetx: ";
    rosidl_generator_traits::value_to_yaml(msg.antoffsetx, out);
    out << ", ";
  }

  // member: antoffsety
  {
    out << "antoffsety: ";
    rosidl_generator_traits::value_to_yaml(msg.antoffsety, out);
    out << ", ";
  }

  // member: antoffsetz
  {
    out << "antoffsetz: ";
    rosidl_generator_traits::value_to_yaml(msg.antoffsetz, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AntennaOffsetSet & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: antoffsetx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "antoffsetx: ";
    rosidl_generator_traits::value_to_yaml(msg.antoffsetx, out);
    out << "\n";
  }

  // member: antoffsety
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "antoffsety: ";
    rosidl_generator_traits::value_to_yaml(msg.antoffsety, out);
    out << "\n";
  }

  // member: antoffsetz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "antoffsetz: ";
    rosidl_generator_traits::value_to_yaml(msg.antoffsetz, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AntennaOffsetSet & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::AntennaOffsetSet & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::AntennaOffsetSet & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::AntennaOffsetSet>()
{
  return "v2x_msg::msg::AntennaOffsetSet";
}

template<>
inline const char * name<v2x_msg::msg::AntennaOffsetSet>()
{
  return "v2x_msg/msg/AntennaOffsetSet";
}

template<>
struct has_fixed_size<v2x_msg::msg::AntennaOffsetSet>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::AntennaOffsetSet>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::AntennaOffsetSet>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__ANTENNA_OFFSET_SET__TRAITS_HPP_
