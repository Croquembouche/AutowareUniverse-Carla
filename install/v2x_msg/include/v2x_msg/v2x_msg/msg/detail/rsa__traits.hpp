// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/RSA.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__RSA__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__RSA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/rsa__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "v2x_msg/msg/detail/full_position_vector__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const RSA & msg,
  std::ostream & out)
{
  out << "{";
  // member: msgcnt
  {
    out << "msgcnt: ";
    rosidl_generator_traits::value_to_yaml(msg.msgcnt, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: typeevent
  {
    out << "typeevent: ";
    rosidl_generator_traits::value_to_yaml(msg.typeevent, out);
    out << ", ";
  }

  // member: desrciption
  {
    if (msg.desrciption.size() == 0) {
      out << "desrciption: []";
    } else {
      out << "desrciption: [";
      size_t pending_items = msg.desrciption.size();
      for (auto item : msg.desrciption) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: priority
  {
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: extent
  {
    out << "extent: ";
    rosidl_generator_traits::value_to_yaml(msg.extent, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: furtherinfoid
  {
    out << "furtherinfoid: ";
    rosidl_generator_traits::value_to_yaml(msg.furtherinfoid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RSA & msg,
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

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: typeevent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "typeevent: ";
    rosidl_generator_traits::value_to_yaml(msg.typeevent, out);
    out << "\n";
  }

  // member: desrciption
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.desrciption.size() == 0) {
      out << "desrciption: []\n";
    } else {
      out << "desrciption:\n";
      for (auto item : msg.desrciption) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
    out << "\n";
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: extent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "extent: ";
    rosidl_generator_traits::value_to_yaml(msg.extent, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: furtherinfoid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "furtherinfoid: ";
    rosidl_generator_traits::value_to_yaml(msg.furtherinfoid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RSA & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::RSA & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::RSA & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::RSA>()
{
  return "v2x_msg::msg::RSA";
}

template<>
inline const char * name<v2x_msg::msg::RSA>()
{
  return "v2x_msg/msg/RSA";
}

template<>
struct has_fixed_size<v2x_msg::msg::RSA>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::RSA>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::RSA>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__RSA__TRAITS_HPP_
