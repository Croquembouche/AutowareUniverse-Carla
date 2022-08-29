// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/ICA.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ICA__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__ICA__TRAITS_HPP_

#include "v2x_msg/msg/detail/ica__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'partone'
#include "v2x_msg/msg/detail/bsm_core_data__traits.hpp"
// Member 'path'
#include "v2x_msg/msg/detail/path_history__traits.hpp"
// Member 'pathprediction'
#include "v2x_msg/msg/detail/path_prediction__traits.hpp"
// Member 'intersectionid'
#include "v2x_msg/msg/detail/intersection_reference_id__traits.hpp"
// Member 'lanenumber'
#include "v2x_msg/msg/detail/approach_or_lane__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::ICA & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: msgcnt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msgcnt: ";
    value_to_yaml(msg.msgcnt, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: partone
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "partone:\n";
    to_yaml(msg.partone, out, indentation + 2);
  }

  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path:\n";
    to_yaml(msg.path, out, indentation + 2);
  }

  // member: pathprediction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pathprediction:\n";
    to_yaml(msg.pathprediction, out, indentation + 2);
  }

  // member: intersectionid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intersectionid:\n";
    to_yaml(msg.intersectionid, out, indentation + 2);
  }

  // member: lanenumber
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanenumber:\n";
    to_yaml(msg.lanenumber, out, indentation + 2);
  }

  // member: eventflag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eventflag: ";
    value_to_yaml(msg.eventflag, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::ICA & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::ICA>()
{
  return "v2x_msg::msg::ICA";
}

template<>
inline const char * name<v2x_msg::msg::ICA>()
{
  return "v2x_msg/msg/ICA";
}

template<>
struct has_fixed_size<v2x_msg::msg::ICA>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::ICA>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::ICA>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__ICA__TRAITS_HPP_
