// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/LaneDataAttribute.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__LANE_DATA_ATTRIBUTE__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__LANE_DATA_ATTRIBUTE__TRAITS_HPP_

#include "v2x_msg/msg/detail/lane_data_attribute__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'speedlimits'
#include "v2x_msg/msg/detail/speed_limit__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::LaneDataAttribute & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pathendpointangle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pathendpointangle: ";
    value_to_yaml(msg.pathendpointangle, out);
    out << "\n";
  }

  // member: lanecrownpointcenter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanecrownpointcenter: ";
    value_to_yaml(msg.lanecrownpointcenter, out);
    out << "\n";
  }

  // member: lancrownpointleft
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lancrownpointleft: ";
    value_to_yaml(msg.lancrownpointleft, out);
    out << "\n";
  }

  // member: lanecrownpointright
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanecrownpointright: ";
    value_to_yaml(msg.lanecrownpointright, out);
    out << "\n";
  }

  // member: laneangle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laneangle: ";
    value_to_yaml(msg.laneangle, out);
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
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::LaneDataAttribute & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
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
