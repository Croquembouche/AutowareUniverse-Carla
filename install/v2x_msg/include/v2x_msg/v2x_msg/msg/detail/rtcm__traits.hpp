// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/RTCM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__RTCM__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__RTCM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/rtcm__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'anchorpoint'
#include "v2x_msg/msg/detail/full_position_vector__traits.hpp"
// Member 'rtcmheader'
#include "v2x_msg/msg/detail/rtc_mheader__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const RTCM & msg,
  std::ostream & out)
{
  out << "{";
  // member: msgcnt
  {
    out << "msgcnt: ";
    rosidl_generator_traits::value_to_yaml(msg.msgcnt, out);
    out << ", ";
  }

  // member: rev
  {
    out << "rev: ";
    rosidl_generator_traits::value_to_yaml(msg.rev, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: anchorpoint
  {
    out << "anchorpoint: ";
    to_flow_style_yaml(msg.anchorpoint, out);
    out << ", ";
  }

  // member: rtcmheader
  {
    out << "rtcmheader: ";
    to_flow_style_yaml(msg.rtcmheader, out);
    out << ", ";
  }

  // member: msgs
  {
    if (msg.msgs.size() == 0) {
      out << "msgs: []";
    } else {
      out << "msgs: [";
      size_t pending_items = msg.msgs.size();
      for (auto item : msg.msgs) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const RTCM & msg,
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

  // member: rev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rev: ";
    rosidl_generator_traits::value_to_yaml(msg.rev, out);
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

  // member: anchorpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "anchorpoint:\n";
    to_block_style_yaml(msg.anchorpoint, out, indentation + 2);
  }

  // member: rtcmheader
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rtcmheader:\n";
    to_block_style_yaml(msg.rtcmheader, out, indentation + 2);
  }

  // member: msgs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.msgs.size() == 0) {
      out << "msgs: []\n";
    } else {
      out << "msgs:\n";
      for (auto item : msg.msgs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RTCM & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::RTCM & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::RTCM & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::RTCM>()
{
  return "v2x_msg::msg::RTCM";
}

template<>
inline const char * name<v2x_msg::msg::RTCM>()
{
  return "v2x_msg/msg/RTCM";
}

template<>
struct has_fixed_size<v2x_msg::msg::RTCM>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::RTCM>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::RTCM>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__RTCM__TRAITS_HPP_
