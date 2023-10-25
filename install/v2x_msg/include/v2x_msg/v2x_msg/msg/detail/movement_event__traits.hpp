// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/MovementEvent.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__MOVEMENT_EVENT__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__MOVEMENT_EVENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/movement_event__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timing'
#include "v2x_msg/msg/detail/time_change_details__traits.hpp"
// Member 'speeds'
#include "v2x_msg/msg/detail/advisory_speed__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const MovementEvent & msg,
  std::ostream & out)
{
  out << "{";
  // member: movementphasestate
  {
    out << "movementphasestate: ";
    rosidl_generator_traits::value_to_yaml(msg.movementphasestate, out);
    out << ", ";
  }

  // member: timing
  {
    out << "timing: ";
    to_flow_style_yaml(msg.timing, out);
    out << ", ";
  }

  // member: speeds
  {
    if (msg.speeds.size() == 0) {
      out << "speeds: []";
    } else {
      out << "speeds: [";
      size_t pending_items = msg.speeds.size();
      for (auto item : msg.speeds) {
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
  const MovementEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: movementphasestate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "movementphasestate: ";
    rosidl_generator_traits::value_to_yaml(msg.movementphasestate, out);
    out << "\n";
  }

  // member: timing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timing:\n";
    to_block_style_yaml(msg.timing, out, indentation + 2);
  }

  // member: speeds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.speeds.size() == 0) {
      out << "speeds: []\n";
    } else {
      out << "speeds:\n";
      for (auto item : msg.speeds) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MovementEvent & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::MovementEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::MovementEvent & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::MovementEvent>()
{
  return "v2x_msg::msg::MovementEvent";
}

template<>
inline const char * name<v2x_msg::msg::MovementEvent>()
{
  return "v2x_msg/msg/MovementEvent";
}

template<>
struct has_fixed_size<v2x_msg::msg::MovementEvent>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::MovementEvent>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::MovementEvent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__MOVEMENT_EVENT__TRAITS_HPP_
