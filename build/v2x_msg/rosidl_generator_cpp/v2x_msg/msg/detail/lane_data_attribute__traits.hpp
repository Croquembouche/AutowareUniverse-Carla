// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/LaneDataAttribute.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__LANE_DATA_ATTRIBUTE__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__LANE_DATA_ATTRIBUTE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/lane_data_attribute__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'speedlimits'
#include "v2x_msg/msg/detail/speed_limit__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneDataAttribute & msg,
  std::ostream & out)
{
  out << "{";
  // member: pathendpointangle
  {
    out << "pathendpointangle: ";
    rosidl_generator_traits::value_to_yaml(msg.pathendpointangle, out);
    out << ", ";
  }

  // member: lanecrownpointcenter
  {
    out << "lanecrownpointcenter: ";
    rosidl_generator_traits::value_to_yaml(msg.lanecrownpointcenter, out);
    out << ", ";
  }

  // member: lancrownpointleft
  {
    out << "lancrownpointleft: ";
    rosidl_generator_traits::value_to_yaml(msg.lancrownpointleft, out);
    out << ", ";
  }

  // member: lanecrownpointright
  {
    out << "lanecrownpointright: ";
    rosidl_generator_traits::value_to_yaml(msg.lanecrownpointright, out);
    out << ", ";
  }

  // member: laneangle
  {
    out << "laneangle: ";
    rosidl_generator_traits::value_to_yaml(msg.laneangle, out);
    out << ", ";
  }

  // member: speedlimits
  {
    if (msg.speedlimits.size() == 0) {
      out << "speedlimits: []";
    } else {
      out << "speedlimits: [";
      size_t pending_items = msg.speedlimits.size();
      for (auto item : msg.speedlimits) {
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
  const LaneDataAttribute & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pathendpointangle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pathendpointangle: ";
    rosidl_generator_traits::value_to_yaml(msg.pathendpointangle, out);
    out << "\n";
  }

  // member: lanecrownpointcenter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanecrownpointcenter: ";
    rosidl_generator_traits::value_to_yaml(msg.lanecrownpointcenter, out);
    out << "\n";
  }

  // member: lancrownpointleft
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lancrownpointleft: ";
    rosidl_generator_traits::value_to_yaml(msg.lancrownpointleft, out);
    out << "\n";
  }

  // member: lanecrownpointright
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanecrownpointright: ";
    rosidl_generator_traits::value_to_yaml(msg.lanecrownpointright, out);
    out << "\n";
  }

  // member: laneangle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laneangle: ";
    rosidl_generator_traits::value_to_yaml(msg.laneangle, out);
    out << "\n";
  }

  // member: speedlimits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.speedlimits.size() == 0) {
      out << "speedlimits: []\n";
    } else {
      out << "speedlimits:\n";
      for (auto item : msg.speedlimits) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneDataAttribute & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::LaneDataAttribute & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::LaneDataAttribute & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::LaneDataAttribute>()
{
  return "v2x_msg::msg::LaneDataAttribute";
}

template<>
inline const char * name<v2x_msg::msg::LaneDataAttribute>()
{
  return "v2x_msg/msg/LaneDataAttribute";
}

template<>
struct has_fixed_size<v2x_msg::msg::LaneDataAttribute>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::LaneDataAttribute>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::LaneDataAttribute>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__LANE_DATA_ATTRIBUTE__TRAITS_HPP_
