// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/CSR.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__CSR__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__CSR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/csr__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'requests'
#include "v2x_msg/msg/detail/requested_item__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const CSR & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

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

  // member: requests
  {
    if (msg.requests.size() == 0) {
      out << "requests: []";
    } else {
      out << "requests: [";
      size_t pending_items = msg.requests.size();
      for (auto item : msg.requests) {
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
  const CSR & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

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

  // member: requests
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.requests.size() == 0) {
      out << "requests: []\n";
    } else {
      out << "requests:\n";
      for (auto item : msg.requests) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CSR & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::CSR & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::CSR & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::CSR>()
{
  return "v2x_msg::msg::CSR";
}

template<>
inline const char * name<v2x_msg::msg::CSR>()
{
  return "v2x_msg/msg/CSR";
}

template<>
struct has_fixed_size<v2x_msg::msg::CSR>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::CSR>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::CSR>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__CSR__TRAITS_HPP_
