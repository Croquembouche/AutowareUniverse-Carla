// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/SnapshotTime.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SNAPSHOT_TIME__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__SNAPSHOT_TIME__TRAITS_HPP_

#include "v2x_msg/msg/detail/snapshot_time__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::SnapshotTime & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: speed1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed1: ";
    value_to_yaml(msg.speed1, out);
    out << "\n";
  }

  // member: time1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time1: ";
    value_to_yaml(msg.time1, out);
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

  // member: time2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time2: ";
    value_to_yaml(msg.time2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::SnapshotTime & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::SnapshotTime>()
{
  return "v2x_msg::msg::SnapshotTime";
}

template<>
inline const char * name<v2x_msg::msg::SnapshotTime>()
{
  return "v2x_msg/msg/SnapshotTime";
}

template<>
struct has_fixed_size<v2x_msg::msg::SnapshotTime>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::SnapshotTime>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::SnapshotTime>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__SNAPSHOT_TIME__TRAITS_HPP_
