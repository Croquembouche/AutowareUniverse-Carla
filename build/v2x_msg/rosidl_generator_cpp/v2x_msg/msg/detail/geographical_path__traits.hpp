// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/GeographicalPath.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__GEOGRAPHICAL_PATH__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__GEOGRAPHICAL_PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/geographical_path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'id'
#include "v2x_msg/msg/detail/road_segment_reference_id__traits.hpp"
// Member 'anchor'
#include "v2x_msg/msg/detail/position3_d__traits.hpp"
// Member 'description'
#include "v2x_msg/msg/detail/description__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const GeographicalPath & msg,
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

  // member: anchor
  {
    out << "anchor: ";
    to_flow_style_yaml(msg.anchor, out);
    out << ", ";
  }

  // member: lanewidth
  {
    out << "lanewidth: ";
    rosidl_generator_traits::value_to_yaml(msg.lanewidth, out);
    out << ", ";
  }

  // member: directionality
  {
    out << "directionality: ";
    rosidl_generator_traits::value_to_yaml(msg.directionality, out);
    out << ", ";
  }

  // member: closedpath
  {
    out << "closedpath: ";
    rosidl_generator_traits::value_to_yaml(msg.closedpath, out);
    out << ", ";
  }

  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << ", ";
  }

  // member: description
  {
    out << "description: ";
    to_flow_style_yaml(msg.description, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GeographicalPath & msg,
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

  // member: anchor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "anchor:\n";
    to_block_style_yaml(msg.anchor, out, indentation + 2);
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

  // member: directionality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "directionality: ";
    rosidl_generator_traits::value_to_yaml(msg.directionality, out);
    out << "\n";
  }

  // member: closedpath
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "closedpath: ";
    rosidl_generator_traits::value_to_yaml(msg.closedpath, out);
    out << "\n";
  }

  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }

  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "description:\n";
    to_block_style_yaml(msg.description, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GeographicalPath & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::GeographicalPath & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::GeographicalPath & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::GeographicalPath>()
{
  return "v2x_msg::msg::GeographicalPath";
}

template<>
inline const char * name<v2x_msg::msg::GeographicalPath>()
{
  return "v2x_msg/msg/GeographicalPath";
}

template<>
struct has_fixed_size<v2x_msg::msg::GeographicalPath>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::GeographicalPath>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::GeographicalPath>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__GEOGRAPHICAL_PATH__TRAITS_HPP_
