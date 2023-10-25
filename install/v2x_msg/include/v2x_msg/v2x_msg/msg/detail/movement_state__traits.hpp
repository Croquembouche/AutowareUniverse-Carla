// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/MovementState.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__MOVEMENT_STATE__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__MOVEMENT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/movement_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'statetimespeed'
#include "v2x_msg/msg/detail/movement_event__traits.hpp"
// Member 'maneuverassistlist'
#include "v2x_msg/msg/detail/connection_maneuver_assist__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const MovementState & msg,
  std::ostream & out)
{
  out << "{";
  // member: movementname
  {
    out << "movementname: ";
    rosidl_generator_traits::value_to_yaml(msg.movementname, out);
    out << ", ";
  }

  // member: signalgroupid
  {
    out << "signalgroupid: ";
    rosidl_generator_traits::value_to_yaml(msg.signalgroupid, out);
    out << ", ";
  }

  // member: statetimespeed
  {
    if (msg.statetimespeed.size() == 0) {
      out << "statetimespeed: []";
    } else {
      out << "statetimespeed: [";
      size_t pending_items = msg.statetimespeed.size();
      for (auto item : msg.statetimespeed) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: maneuverassistlist
  {
    out << "maneuverassistlist: ";
    to_flow_style_yaml(msg.maneuverassistlist, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MovementState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: movementname
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "movementname: ";
    rosidl_generator_traits::value_to_yaml(msg.movementname, out);
    out << "\n";
  }

  // member: signalgroupid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signalgroupid: ";
    rosidl_generator_traits::value_to_yaml(msg.signalgroupid, out);
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
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: maneuverassistlist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuverassistlist:\n";
    to_block_style_yaml(msg.maneuverassistlist, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MovementState & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::MovementState & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::MovementState & msg)
{
  return v2x_msg::msg::to_yaml(msg);
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
