// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/ICA.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ICA__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__ICA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/ica__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

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

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const ICA & msg,
  std::ostream & out)
{
  out << "{";
  // member: msgcnt
  {
    out << "msgcnt: ";
    rosidl_generator_traits::value_to_yaml(msg.msgcnt, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: partone
  {
    out << "partone: ";
    to_flow_style_yaml(msg.partone, out);
    out << ", ";
  }

  // member: path
  {
    out << "path: ";
    to_flow_style_yaml(msg.path, out);
    out << ", ";
  }

  // member: pathprediction
  {
    out << "pathprediction: ";
    to_flow_style_yaml(msg.pathprediction, out);
    out << ", ";
  }

  // member: intersectionid
  {
    out << "intersectionid: ";
    to_flow_style_yaml(msg.intersectionid, out);
    out << ", ";
  }

  // member: lanenumber
  {
    out << "lanenumber: ";
    to_flow_style_yaml(msg.lanenumber, out);
    out << ", ";
  }

  // member: eventflag
  {
    out << "eventflag: ";
    rosidl_generator_traits::value_to_yaml(msg.eventflag, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ICA & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: msgcnt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msgcnt: ";
    rosidl_generator_traits::value_to_yaml(msg.msgcnt, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: partone
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "partone:\n";
    to_block_style_yaml(msg.partone, out, indentation + 2);
  }

  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path:\n";
    to_block_style_yaml(msg.path, out, indentation + 2);
  }

  // member: pathprediction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pathprediction:\n";
    to_block_style_yaml(msg.pathprediction, out, indentation + 2);
  }

  // member: intersectionid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intersectionid:\n";
    to_block_style_yaml(msg.intersectionid, out, indentation + 2);
  }

  // member: lanenumber
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanenumber:\n";
    to_block_style_yaml(msg.lanenumber, out, indentation + 2);
  }

  // member: eventflag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eventflag: ";
    rosidl_generator_traits::value_to_yaml(msg.eventflag, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ICA & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::ICA & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::ICA & msg)
{
  return v2x_msg::msg::to_yaml(msg);
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
