// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/IntersectionState.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__INTERSECTION_STATE__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__INTERSECTION_STATE__TRAITS_HPP_

#include "v2x_msg/msg/detail/intersection_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'id'
#include "v2x_msg/msg/detail/intersection_reference_id__traits.hpp"
// Member 'status'
#include "v2x_msg/msg/detail/intersection_status_object__traits.hpp"
// Member 'enabledlanes'
#include "v2x_msg/msg/detail/lane_id__traits.hpp"
// Member 'states'
#include "v2x_msg/msg/detail/movement_state__traits.hpp"
// Member 'maneuverassistlist'
#include "v2x_msg/msg/detail/connection_maneuver_assist__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::IntersectionState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id:\n";
    to_yaml(msg.id, out, indentation + 2);
  }

  // member: revision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "revision: ";
    value_to_yaml(msg.revision, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_yaml(msg.status, out, indentation + 2);
  }

  // member: moy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moy: ";
    value_to_yaml(msg.moy, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: enabledlanes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.enabledlanes.size() == 0) {
      out << "enabledlanes: []\n";
    } else {
      out << "enabledlanes:\n";
      for (auto item : msg.enabledlanes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.states.size() == 0) {
      out << "states: []\n";
    } else {
      out << "states:\n";
      for (auto item : msg.states) {
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
    if (msg.maneuverassistlist.size() == 0) {
      out << "maneuverassistlist: []\n";
    } else {
      out << "maneuverassistlist:\n";
      for (auto item : msg.maneuverassistlist) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::IntersectionState & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::IntersectionState>()
{
  return "v2x_msg::msg::IntersectionState";
}

template<>
inline const char * name<v2x_msg::msg::IntersectionState>()
{
  return "v2x_msg/msg/IntersectionState";
}

template<>
struct has_fixed_size<v2x_msg::msg::IntersectionState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::IntersectionState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::IntersectionState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__INTERSECTION_STATE__TRAITS_HPP_
