// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/RegionPointSet.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__REGION_POINT_SET__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__REGION_POINT_SET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/region_point_set__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'anchor'
#include "v2x_msg/msg/detail/position3_d__traits.hpp"
// Member 'nodelist'
#include "v2x_msg/msg/detail/region_offsets__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const RegionPointSet & msg,
  std::ostream & out)
{
  out << "{";
  // member: anchor
  {
    out << "anchor: ";
    to_flow_style_yaml(msg.anchor, out);
    out << ", ";
  }

  // member: scale
  {
    out << "scale: ";
    rosidl_generator_traits::value_to_yaml(msg.scale, out);
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RegionPointSet & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: anchor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "anchor:\n";
    to_block_style_yaml(msg.anchor, out, indentation + 2);
  }

  // member: scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scale: ";
    rosidl_generator_traits::value_to_yaml(msg.scale, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RegionPointSet & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::RegionPointSet & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::RegionPointSet & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::RegionPointSet>()
{
  return "v2x_msg::msg::RegionPointSet";
}

template<>
inline const char * name<v2x_msg::msg::RegionPointSet>()
{
  return "v2x_msg/msg/RegionPointSet";
}

template<>
struct has_fixed_size<v2x_msg::msg::RegionPointSet>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::RegionPointSet>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::RegionPointSet>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__REGION_POINT_SET__TRAITS_HPP_
