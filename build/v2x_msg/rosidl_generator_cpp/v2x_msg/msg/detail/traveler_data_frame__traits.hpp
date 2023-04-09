// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/TravelerDataFrame.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__TRAVELER_DATA_FRAME__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__TRAVELER_DATA_FRAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/traveler_data_frame__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'msgid'
#include "v2x_msg/msg/detail/msg_id__traits.hpp"
// Member 'regions'
#include "v2x_msg/msg/detail/geographical_path__traits.hpp"
// Member 'content'
#include "v2x_msg/msg/detail/content__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const TravelerDataFrame & msg,
  std::ostream & out)
{
  out << "{";
  // member: notused
  {
    out << "notused: ";
    rosidl_generator_traits::value_to_yaml(msg.notused, out);
    out << ", ";
  }

  // member: frametype
  {
    out << "frametype: ";
    rosidl_generator_traits::value_to_yaml(msg.frametype, out);
    out << ", ";
  }

  // member: msgid
  {
    out << "msgid: ";
    to_flow_style_yaml(msg.msgid, out);
    out << ", ";
  }

  // member: startyear
  {
    out << "startyear: ";
    rosidl_generator_traits::value_to_yaml(msg.startyear, out);
    out << ", ";
  }

  // member: starttime
  {
    out << "starttime: ";
    rosidl_generator_traits::value_to_yaml(msg.starttime, out);
    out << ", ";
  }

  // member: durationtime
  {
    out << "durationtime: ";
    rosidl_generator_traits::value_to_yaml(msg.durationtime, out);
    out << ", ";
  }

  // member: priority
  {
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
    out << ", ";
  }

  // member: notused1
  {
    out << "notused1: ";
    rosidl_generator_traits::value_to_yaml(msg.notused1, out);
    out << ", ";
  }

  // member: regions
  {
    if (msg.regions.size() == 0) {
      out << "regions: []";
    } else {
      out << "regions: [";
      size_t pending_items = msg.regions.size();
      for (auto item : msg.regions) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: notused2
  {
    out << "notused2: ";
    rosidl_generator_traits::value_to_yaml(msg.notused2, out);
    out << ", ";
  }

  // member: notused3
  {
    out << "notused3: ";
    rosidl_generator_traits::value_to_yaml(msg.notused3, out);
    out << ", ";
  }

  // member: content
  {
    out << "content: ";
    to_flow_style_yaml(msg.content, out);
    out << ", ";
  }

  // member: url
  {
    out << "url: ";
    rosidl_generator_traits::value_to_yaml(msg.url, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TravelerDataFrame & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: notused
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "notused: ";
    rosidl_generator_traits::value_to_yaml(msg.notused, out);
    out << "\n";
  }

  // member: frametype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frametype: ";
    rosidl_generator_traits::value_to_yaml(msg.frametype, out);
    out << "\n";
  }

  // member: msgid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msgid:\n";
    to_block_style_yaml(msg.msgid, out, indentation + 2);
  }

  // member: startyear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "startyear: ";
    rosidl_generator_traits::value_to_yaml(msg.startyear, out);
    out << "\n";
  }

  // member: starttime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "starttime: ";
    rosidl_generator_traits::value_to_yaml(msg.starttime, out);
    out << "\n";
  }

  // member: durationtime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "durationtime: ";
    rosidl_generator_traits::value_to_yaml(msg.durationtime, out);
    out << "\n";
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

  // member: notused1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "notused1: ";
    rosidl_generator_traits::value_to_yaml(msg.notused1, out);
    out << "\n";
  }

  // member: regions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.regions.size() == 0) {
      out << "regions: []\n";
    } else {
      out << "regions:\n";
      for (auto item : msg.regions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: notused2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "notused2: ";
    rosidl_generator_traits::value_to_yaml(msg.notused2, out);
    out << "\n";
  }

  // member: notused3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "notused3: ";
    rosidl_generator_traits::value_to_yaml(msg.notused3, out);
    out << "\n";
  }

  // member: content
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "content:\n";
    to_block_style_yaml(msg.content, out, indentation + 2);
  }

  // member: url
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "url: ";
    rosidl_generator_traits::value_to_yaml(msg.url, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TravelerDataFrame & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::TravelerDataFrame & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::TravelerDataFrame & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::TravelerDataFrame>()
{
  return "v2x_msg::msg::TravelerDataFrame";
}

template<>
inline const char * name<v2x_msg::msg::TravelerDataFrame>()
{
  return "v2x_msg/msg/TravelerDataFrame";
}

template<>
struct has_fixed_size<v2x_msg::msg::TravelerDataFrame>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::TravelerDataFrame>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::TravelerDataFrame>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__TRAVELER_DATA_FRAME__TRAITS_HPP_
