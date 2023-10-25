// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/TIM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__TIM__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__TIM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/tim__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'dataframes'
#include "v2x_msg/msg/detail/traveler_data_frame__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const TIM & msg,
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

  // member: packetid
  {
    out << "packetid: ";
    rosidl_generator_traits::value_to_yaml(msg.packetid, out);
    out << ", ";
  }

  // member: urlb
  {
    out << "urlb: ";
    rosidl_generator_traits::value_to_yaml(msg.urlb, out);
    out << ", ";
  }

  // member: dataframes
  {
    if (msg.dataframes.size() == 0) {
      out << "dataframes: []";
    } else {
      out << "dataframes: [";
      size_t pending_items = msg.dataframes.size();
      for (auto item : msg.dataframes) {
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
  const TIM & msg,
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

  // member: packetid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "packetid: ";
    rosidl_generator_traits::value_to_yaml(msg.packetid, out);
    out << "\n";
  }

  // member: urlb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "urlb: ";
    rosidl_generator_traits::value_to_yaml(msg.urlb, out);
    out << "\n";
  }

  // member: dataframes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dataframes.size() == 0) {
      out << "dataframes: []\n";
    } else {
      out << "dataframes:\n";
      for (auto item : msg.dataframes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TIM & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::TIM & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::TIM & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::TIM>()
{
  return "v2x_msg::msg::TIM";
}

template<>
inline const char * name<v2x_msg::msg::TIM>()
{
  return "v2x_msg/msg/TIM";
}

template<>
struct has_fixed_size<v2x_msg::msg::TIM>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::TIM>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::TIM>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__TIM__TRAITS_HPP_
