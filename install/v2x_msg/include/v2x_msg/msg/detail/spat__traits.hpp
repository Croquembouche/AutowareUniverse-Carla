// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/SPAT.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SPAT__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__SPAT__TRAITS_HPP_

#include "v2x_msg/msg/detail/spat__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'intersections'
#include "v2x_msg/msg/detail/intersection_state__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::SPAT & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
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
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::SPAT & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
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
