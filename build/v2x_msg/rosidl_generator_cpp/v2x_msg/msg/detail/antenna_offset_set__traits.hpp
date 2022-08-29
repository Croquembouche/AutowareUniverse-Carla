// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/AntennaOffsetSet.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ANTENNA_OFFSET_SET__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__ANTENNA_OFFSET_SET__TRAITS_HPP_

#include "v2x_msg/msg/detail/antenna_offset_set__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::AntennaOffsetSet & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: antoffsetx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "antoffsetx: ";
    value_to_yaml(msg.antoffsetx, out);
    out << "\n";
  }

  // member: antoffsety
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "antoffsety: ";
    value_to_yaml(msg.antoffsety, out);
    out << "\n";
  }

  // member: antoffsetz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "antoffsetz: ";
    value_to_yaml(msg.antoffsetz, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::AntennaOffsetSet & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
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
