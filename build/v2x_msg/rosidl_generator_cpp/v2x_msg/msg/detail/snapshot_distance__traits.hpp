// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/SnapshotDistance.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SNAPSHOT_DISTANCE__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__SNAPSHOT_DISTANCE__TRAITS_HPP_

#include "v2x_msg/msg/detail/snapshot_distance__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::SnapshotDistance & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance1: ";
    value_to_yaml(msg.distance1, out);
    out << "\n";
  }

  // member: speed1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed1: ";
    value_to_yaml(msg.speed1, out);
    out << "\n";
  }

  // member: distance2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance2: ";
    value_to_yaml(msg.distance2, out);
    out << "\n";
  }

  // member: speed2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed2: ";
    value_to_yaml(msg.speed2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::SnapshotDistance & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::SnapshotDistance>()
{
  return "v2x_msg::msg::SnapshotDistance";
}

template<>
inline const char * name<v2x_msg::msg::SnapshotDistance>()
{
  return "v2x_msg/msg/SnapshotDistance";
}

template<>
struct has_fixed_size<v2x_msg::msg::SnapshotDistance>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::SnapshotDistance>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::SnapshotDistance>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__SNAPSHOT_DISTANCE__TRAITS_HPP_
