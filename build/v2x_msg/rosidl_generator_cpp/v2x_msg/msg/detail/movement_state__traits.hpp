// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/MovementState.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__MOVEMENT_STATE__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__MOVEMENT_STATE__TRAITS_HPP_

#include "v2x_msg/msg/detail/movement_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'statetimespeed'
#include "v2x_msg/msg/detail/movement_event__traits.hpp"
// Member 'maneuverassistlist'
#include "v2x_msg/msg/detail/connection_maneuver_assist__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::MovementState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: movementname
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "movementname: ";
    value_to_yaml(msg.movementname, out);
    out << "\n";
  }

  // member: signalgroupid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signalgroupid: ";
    value_to_yaml(msg.signalgroupid, out);
    out << "\n";
  }

  // member: statetimespeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.statetimespeed.size() == 0) {
      out << "statetimespeed: []\n";
    } else {
      out << "statetimespeed:\n";
      for (auto item : msg.statetimespeed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: maneuverassistlist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuverassistlist:\n";
    to_yaml(msg.maneuverassistlist, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::MovementState & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::MovementState>()
{
  return "v2x_msg::msg::MovementState";
}

template<>
inline const char * name<v2x_msg::msg::MovementState>()
{
  return "v2x_msg/msg/MovementState";
}

template<>
struct has_fixed_size<v2x_msg::msg::MovementState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::MovementState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::MovementState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__MOVEMENT_STATE__TRAITS_HPP_
