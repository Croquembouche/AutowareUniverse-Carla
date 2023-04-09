// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/SPAT.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SPAT__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__SPAT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/spat__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'intersections'
#include "v2x_msg/msg/detail/intersection_state__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const SPAT & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: intersections
  {
    if (msg.intersections.size() == 0) {
      out << "intersections: []";
    } else {
      out << "intersections: [";
      size_t pending_items = msg.intersections.size();
      for (auto item : msg.intersections) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SPAT & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: intersections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.intersections.size() == 0) {
      out << "intersections: []\n";
    } else {
      out << "intersections:\n";
      for (auto item : msg.intersections) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SPAT & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::SPAT & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::SPAT & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::SPAT>()
{
  return "v2x_msg::msg::SPAT";
}

template<>
inline const char * name<v2x_msg::msg::SPAT>()
{
  return "v2x_msg/msg/SPAT";
}

template<>
struct has_fixed_size<v2x_msg::msg::SPAT>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::SPAT>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::SPAT>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__SPAT__TRAITS_HPP_
