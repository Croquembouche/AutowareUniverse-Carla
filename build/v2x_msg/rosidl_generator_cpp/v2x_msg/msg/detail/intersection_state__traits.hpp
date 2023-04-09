// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/IntersectionState.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__INTERSECTION_STATE__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__INTERSECTION_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/intersection_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

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

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const IntersectionState & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    to_flow_style_yaml(msg.id, out);
    out << ", ";
  }

  // member: revision
  {
    out << "revision: ";
    rosidl_generator_traits::value_to_yaml(msg.revision, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: moy
  {
    out << "moy: ";
    rosidl_generator_traits::value_to_yaml(msg.moy, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: enabledlanes
  {
    if (msg.enabledlanes.size() == 0) {
      out << "enabledlanes: []";
    } else {
      out << "enabledlanes: [";
      size_t pending_items = msg.enabledlanes.size();
      for (auto item : msg.enabledlanes) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: states
  {
    if (msg.states.size() == 0) {
      out << "states: []";
    } else {
      out << "states: [";
      size_t pending_items = msg.states.size();
      for (auto item : msg.states) {
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
    if (msg.maneuverassistlist.size() == 0) {
      out << "maneuverassistlist: []";
    } else {
      out << "maneuverassistlist: [";
      size_t pending_items = msg.maneuverassistlist.size();
      for (auto item : msg.maneuverassistlist) {
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
  const IntersectionState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id:\n";
    to_block_style_yaml(msg.id, out, indentation + 2);
  }

  // member: revision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "revision: ";
    rosidl_generator_traits::value_to_yaml(msg.revision, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: moy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moy: ";
    rosidl_generator_traits::value_to_yaml(msg.moy, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
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
        to_block_style_yaml(item, out, indentation + 2);
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
        to_block_style_yaml(item, out, indentation + 2);
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
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IntersectionState & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::IntersectionState & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::IntersectionState & msg)
{
  return v2x_msg::msg::to_yaml(msg);
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
