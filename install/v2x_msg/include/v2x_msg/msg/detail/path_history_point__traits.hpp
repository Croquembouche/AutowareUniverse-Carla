// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/PathHistoryPoint.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PATH_HISTORY_POINT__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__PATH_HISTORY_POINT__TRAITS_HPP_

#include "v2x_msg/msg/detail/path_history_point__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'accuracy'
#include "v2x_msg/msg/detail/positional_accuracy__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::PathHistoryPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: latoffset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latoffset: ";
    value_to_yaml(msg.latoffset, out);
    out << "\n";
  }

  // member: lonoffset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lonoffset: ";
    value_to_yaml(msg.lonoffset, out);
    out << "\n";
  }

  // member: elevationoffset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elevationoffset: ";
    value_to_yaml(msg.elevationoffset, out);
    out << "\n";
  }

  // member: timeoffset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeoffset: ";
    value_to_yaml(msg.timeoffset, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accuracy:\n";
    to_yaml(msg.accuracy, out, indentation + 2);
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    value_to_yaml(msg.heading, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::PathHistoryPoint & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::PathHistoryPoint>()
{
  return "v2x_msg::msg::PathHistoryPoint";
}

template<>
inline const char * name<v2x_msg::msg::PathHistoryPoint>()
{
  return "v2x_msg/msg/PathHistoryPoint";
}

template<>
struct has_fixed_size<v2x_msg::msg::PathHistoryPoint>
  : std::integral_constant<bool, has_fixed_size<v2x_msg::msg::PositionalAccuracy>::value> {};

template<>
struct has_bounded_size<v2x_msg::msg::PathHistoryPoint>
  : std::integral_constant<bool, has_bounded_size<v2x_msg::msg::PositionalAccuracy>::value> {};

template<>
struct is_message<v2x_msg::msg::PathHistoryPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__PATH_HISTORY_POINT__TRAITS_HPP_
