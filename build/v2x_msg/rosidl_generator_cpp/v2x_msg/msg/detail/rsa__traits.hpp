// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/RSA.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__RSA__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__RSA__TRAITS_HPP_

#include "v2x_msg/msg/detail/rsa__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'position'
#include "v2x_msg/msg/detail/full_position_vector__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::RSA & msg,
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

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: typeevent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "typeevent: ";
    value_to_yaml(msg.typeevent, out);
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
        value_to_yaml(item, out);
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
    value_to_yaml(msg.priority, out);
    out << "\n";
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: extent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "extent: ";
    value_to_yaml(msg.extent, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_yaml(msg.position, out, indentation + 2);
  }

  // member: furtherinfoid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "furtherinfoid: ";
    value_to_yaml(msg.furtherinfoid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::RSA & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
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
