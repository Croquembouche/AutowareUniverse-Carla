// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/GenericLane.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__GENERIC_LANE__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__GENERIC_LANE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/generic_lane__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'laneattributes'
#include "v2x_msg/msg/detail/lane_attributes__traits.hpp"
// Member 'nodelist'
#include "v2x_msg/msg/detail/node_list_xy__traits.hpp"
// Member 'connectsto'
#include "v2x_msg/msg/detail/connection__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const GenericLane & msg,
  std::ostream & out)
{
  out << "{";
  // member: laneid
  {
    out << "laneid: ";
    rosidl_generator_traits::value_to_yaml(msg.laneid, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: ingressapproach
  {
    out << "ingressapproach: ";
    rosidl_generator_traits::value_to_yaml(msg.ingressapproach, out);
    out << ", ";
  }

  // member: egressapproach
  {
    out << "egressapproach: ";
    rosidl_generator_traits::value_to_yaml(msg.egressapproach, out);
    out << ", ";
  }

  // member: laneattributes
  {
    out << "laneattributes: ";
    to_flow_style_yaml(msg.laneattributes, out);
    out << ", ";
  }

  // member: maneuvers
  {
    out << "maneuvers: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuvers, out);
    out << ", ";
  }

  // member: nodelist
  {
    if (msg.nodelist.size() == 0) {
      out << "nodelist: []";
    } else {
      out << "nodelist: [";
      size_t pending_items = msg.nodelist.size();
      for (auto item : msg.nodelist) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: connectsto
  {
    if (msg.connectsto.size() == 0) {
      out << "connectsto: []";
    } else {
      out << "connectsto: [";
      size_t pending_items = msg.connectsto.size();
      for (auto item : msg.connectsto) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: overlays
  {
    if (msg.overlays.size() == 0) {
      out << "overlays: []";
    } else {
      out << "overlays: [";
      size_t pending_items = msg.overlays.size();
      for (auto item : msg.overlays) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const GenericLane & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: laneid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laneid: ";
    rosidl_generator_traits::value_to_yaml(msg.laneid, out);
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

  // member: ingressapproach
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ingressapproach: ";
    rosidl_generator_traits::value_to_yaml(msg.ingressapproach, out);
    out << "\n";
  }

  // member: egressapproach
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "egressapproach: ";
    rosidl_generator_traits::value_to_yaml(msg.egressapproach, out);
    out << "\n";
  }

  // member: laneattributes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laneattributes:\n";
    to_block_style_yaml(msg.laneattributes, out, indentation + 2);
  }

  // member: maneuvers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuvers: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuvers, out);
    out << "\n";
  }

  // member: nodelist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.nodelist.size() == 0) {
      out << "nodelist: []\n";
    } else {
      out << "nodelist:\n";
      for (auto item : msg.nodelist) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: connectsto
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.connectsto.size() == 0) {
      out << "connectsto: []\n";
    } else {
      out << "connectsto:\n";
      for (auto item : msg.connectsto) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: overlays
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.overlays.size() == 0) {
      out << "overlays: []\n";
    } else {
      out << "overlays:\n";
      for (auto item : msg.overlays) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenericLane & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::GenericLane & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::GenericLane & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::GenericLane>()
{
  return "v2x_msg::msg::GenericLane";
}

template<>
inline const char * name<v2x_msg::msg::GenericLane>()
{
  return "v2x_msg/msg/GenericLane";
}

template<>
struct has_fixed_size<v2x_msg::msg::GenericLane>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::GenericLane>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::GenericLane>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__GENERIC_LANE__TRAITS_HPP_
