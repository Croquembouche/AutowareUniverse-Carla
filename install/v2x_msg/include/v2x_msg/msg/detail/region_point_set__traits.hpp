// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/RegionPointSet.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__REGION_POINT_SET__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__REGION_POINT_SET__TRAITS_HPP_

#include "v2x_msg/msg/detail/region_point_set__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'anchor'
#include "v2x_msg/msg/detail/position3_d__traits.hpp"
// Member 'nodelist'
#include "v2x_msg/msg/detail/region_offsets__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::RegionPointSet & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: anchor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "anchor:\n";
    to_yaml(msg.anchor, out, indentation + 2);
  }

  // member: scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scale: ";
    value_to_yaml(msg.scale, out);
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
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::RegionPointSet & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
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
