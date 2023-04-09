// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/IntersectionGeometry.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__INTERSECTION_GEOMETRY__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__INTERSECTION_GEOMETRY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/intersection_geometry__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'id'
#include "v2x_msg/msg/detail/intersection_reference_id__traits.hpp"
// Member 'refpoint'
#include "v2x_msg/msg/detail/position3_d__traits.hpp"
// Member 'speedlimits'
#include "v2x_msg/msg/detail/speed_limit__traits.hpp"
// Member 'laneset'
#include "v2x_msg/msg/detail/generic_lane__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const IntersectionGeometry & msg,
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

  // member: refpoint
  {
    out << "refpoint: ";
    to_flow_style_yaml(msg.refpoint, out);
    out << ", ";
  }

  // member: lanewidth
  {
    out << "lanewidth: ";
    rosidl_generator_traits::value_to_yaml(msg.lanewidth, out);
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
    out << ", ";
  }

  // member: laneset
  {
    if (msg.laneset.size() == 0) {
      out << "laneset: []";
    } else {
      out << "laneset: [";
      size_t pending_items = msg.laneset.size();
      for (auto item : msg.laneset) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: preemptprioritydata
  {
    out << "preemptprioritydata: ";
    rosidl_generator_traits::value_to_yaml(msg.preemptprioritydata, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IntersectionGeometry & msg,
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

  // member: refpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "refpoint:\n";
    to_block_style_yaml(msg.refpoint, out, indentation + 2);
  }

  // member: lanewidth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanewidth: ";
    rosidl_generator_traits::value_to_yaml(msg.lanewidth, out);
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

  // member: laneset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.laneset.size() == 0) {
      out << "laneset: []\n";
    } else {
      out << "laneset:\n";
      for (auto item : msg.laneset) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: preemptprioritydata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "preemptprioritydata: ";
    rosidl_generator_traits::value_to_yaml(msg.preemptprioritydata, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IntersectionGeometry & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::IntersectionGeometry & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::IntersectionGeometry & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::IntersectionGeometry>()
{
  return "v2x_msg::msg::IntersectionGeometry";
}

template<>
inline const char * name<v2x_msg::msg::IntersectionGeometry>()
{
  return "v2x_msg/msg/IntersectionGeometry";
}

template<>
struct has_fixed_size<v2x_msg::msg::IntersectionGeometry>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::IntersectionGeometry>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::IntersectionGeometry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__INTERSECTION_GEOMETRY__TRAITS_HPP_
