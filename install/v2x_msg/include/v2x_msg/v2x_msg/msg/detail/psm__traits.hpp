// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/PSM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PSM__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__PSM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/psm__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "v2x_msg/msg/detail/position3_d__traits.hpp"
// Member 'accuracy'
#include "v2x_msg/msg/detail/positional_accuracy__traits.hpp"
// Member 'accelset'
#include "v2x_msg/msg/detail/acceleration_set4_way__traits.hpp"
// Member 'pathhistory'
#include "v2x_msg/msg/detail/path_history__traits.hpp"
// Member 'pathprediction'
#include "v2x_msg/msg/detail/path_prediction__traits.hpp"
// Member 'propulsion'
#include "v2x_msg/msg/detail/propelled_information__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const PSM & msg,
  std::ostream & out)
{
  out << "{";
  // member: basictype
  {
    out << "basictype: ";
    rosidl_generator_traits::value_to_yaml(msg.basictype, out);
    out << ", ";
  }

  // member: secmark
  {
    out << "secmark: ";
    rosidl_generator_traits::value_to_yaml(msg.secmark, out);
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

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: accuracy
  {
    out << "accuracy: ";
    to_flow_style_yaml(msg.accuracy, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: accelset
  {
    out << "accelset: ";
    to_flow_style_yaml(msg.accelset, out);
    out << ", ";
  }

  // member: pathhistory
  {
    out << "pathhistory: ";
    to_flow_style_yaml(msg.pathhistory, out);
    out << ", ";
  }

  // member: pathprediction
  {
    out << "pathprediction: ";
    to_flow_style_yaml(msg.pathprediction, out);
    out << ", ";
  }

  // member: propulsion
  {
    out << "propulsion: ";
    to_flow_style_yaml(msg.propulsion, out);
    out << ", ";
  }

  // member: usestate
  {
    out << "usestate: ";
    rosidl_generator_traits::value_to_yaml(msg.usestate, out);
    out << ", ";
  }

  // member: crossrequest
  {
    out << "crossrequest: ";
    rosidl_generator_traits::value_to_yaml(msg.crossrequest, out);
    out << ", ";
  }

  // member: crossstate
  {
    out << "crossstate: ";
    rosidl_generator_traits::value_to_yaml(msg.crossstate, out);
    out << ", ";
  }

  // member: clustersize
  {
    out << "clustersize: ";
    rosidl_generator_traits::value_to_yaml(msg.clustersize, out);
    out << ", ";
  }

  // member: clusterradius
  {
    out << "clusterradius: ";
    rosidl_generator_traits::value_to_yaml(msg.clusterradius, out);
    out << ", ";
  }

  // member: eventrespondertype
  {
    out << "eventrespondertype: ";
    rosidl_generator_traits::value_to_yaml(msg.eventrespondertype, out);
    out << ", ";
  }

  // member: activitytype
  {
    out << "activitytype: ";
    rosidl_generator_traits::value_to_yaml(msg.activitytype, out);
    out << ", ";
  }

  // member: activitysubtype
  {
    out << "activitysubtype: ";
    rosidl_generator_traits::value_to_yaml(msg.activitysubtype, out);
    out << ", ";
  }

  // member: assisttype
  {
    out << "assisttype: ";
    rosidl_generator_traits::value_to_yaml(msg.assisttype, out);
    out << ", ";
  }

  // member: sizing
  {
    out << "sizing: ";
    rosidl_generator_traits::value_to_yaml(msg.sizing, out);
    out << ", ";
  }

  // member: attachment
  {
    out << "attachment: ";
    rosidl_generator_traits::value_to_yaml(msg.attachment, out);
    out << ", ";
  }

  // member: attachmentradius
  {
    out << "attachmentradius: ";
    rosidl_generator_traits::value_to_yaml(msg.attachmentradius, out);
    out << ", ";
  }

  // member: animaltype
  {
    out << "animaltype: ";
    rosidl_generator_traits::value_to_yaml(msg.animaltype, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PSM & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: basictype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "basictype: ";
    rosidl_generator_traits::value_to_yaml(msg.basictype, out);
    out << "\n";
  }

  // member: secmark
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "secmark: ";
    rosidl_generator_traits::value_to_yaml(msg.secmark, out);
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

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accuracy:\n";
    to_block_style_yaml(msg.accuracy, out, indentation + 2);
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
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

  // member: accelset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelset:\n";
    to_block_style_yaml(msg.accelset, out, indentation + 2);
  }

  // member: pathhistory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pathhistory:\n";
    to_block_style_yaml(msg.pathhistory, out, indentation + 2);
  }

  // member: pathprediction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pathprediction:\n";
    to_block_style_yaml(msg.pathprediction, out, indentation + 2);
  }

  // member: propulsion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "propulsion:\n";
    to_block_style_yaml(msg.propulsion, out, indentation + 2);
  }

  // member: usestate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "usestate: ";
    rosidl_generator_traits::value_to_yaml(msg.usestate, out);
    out << "\n";
  }

  // member: crossrequest
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crossrequest: ";
    rosidl_generator_traits::value_to_yaml(msg.crossrequest, out);
    out << "\n";
  }

  // member: crossstate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crossstate: ";
    rosidl_generator_traits::value_to_yaml(msg.crossstate, out);
    out << "\n";
  }

  // member: clustersize
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clustersize: ";
    rosidl_generator_traits::value_to_yaml(msg.clustersize, out);
    out << "\n";
  }

  // member: clusterradius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clusterradius: ";
    rosidl_generator_traits::value_to_yaml(msg.clusterradius, out);
    out << "\n";
  }

  // member: eventrespondertype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eventrespondertype: ";
    rosidl_generator_traits::value_to_yaml(msg.eventrespondertype, out);
    out << "\n";
  }

  // member: activitytype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "activitytype: ";
    rosidl_generator_traits::value_to_yaml(msg.activitytype, out);
    out << "\n";
  }

  // member: activitysubtype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "activitysubtype: ";
    rosidl_generator_traits::value_to_yaml(msg.activitysubtype, out);
    out << "\n";
  }

  // member: assisttype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "assisttype: ";
    rosidl_generator_traits::value_to_yaml(msg.assisttype, out);
    out << "\n";
  }

  // member: sizing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sizing: ";
    rosidl_generator_traits::value_to_yaml(msg.sizing, out);
    out << "\n";
  }

  // member: attachment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attachment: ";
    rosidl_generator_traits::value_to_yaml(msg.attachment, out);
    out << "\n";
  }

  // member: attachmentradius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attachmentradius: ";
    rosidl_generator_traits::value_to_yaml(msg.attachmentradius, out);
    out << "\n";
  }

  // member: animaltype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "animaltype: ";
    rosidl_generator_traits::value_to_yaml(msg.animaltype, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PSM & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::PSM & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::PSM & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::PSM>()
{
  return "v2x_msg::msg::PSM";
}

template<>
inline const char * name<v2x_msg::msg::PSM>()
{
  return "v2x_msg/msg/PSM";
}

template<>
struct has_fixed_size<v2x_msg::msg::PSM>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::PSM>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::PSM>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__PSM__TRAITS_HPP_
