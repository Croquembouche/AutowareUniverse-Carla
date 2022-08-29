// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/PSM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PSM__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__PSM__TRAITS_HPP_

#include "v2x_msg/msg/detail/psm__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

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

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::PSM & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: basictype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "basictype: ";
    value_to_yaml(msg.basictype, out);
    out << "\n";
  }

  // member: secmark
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "secmark: ";
    value_to_yaml(msg.secmark, out);
    out << "\n";
  }

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

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_yaml(msg.position, out, indentation + 2);
  }

  // member: accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accuracy:\n";
    to_yaml(msg.accuracy, out, indentation + 2);
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    value_to_yaml(msg.speed, out);
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

  // member: accelset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelset:\n";
    to_yaml(msg.accelset, out, indentation + 2);
  }

  // member: pathhistory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pathhistory:\n";
    to_yaml(msg.pathhistory, out, indentation + 2);
  }

  // member: pathprediction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pathprediction:\n";
    to_yaml(msg.pathprediction, out, indentation + 2);
  }

  // member: propulsion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "propulsion:\n";
    to_yaml(msg.propulsion, out, indentation + 2);
  }

  // member: usestate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "usestate: ";
    value_to_yaml(msg.usestate, out);
    out << "\n";
  }

  // member: crossrequest
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crossrequest: ";
    value_to_yaml(msg.crossrequest, out);
    out << "\n";
  }

  // member: crossstate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crossstate: ";
    value_to_yaml(msg.crossstate, out);
    out << "\n";
  }

  // member: clustersize
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clustersize: ";
    value_to_yaml(msg.clustersize, out);
    out << "\n";
  }

  // member: clusterradius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clusterradius: ";
    value_to_yaml(msg.clusterradius, out);
    out << "\n";
  }

  // member: eventrespondertype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eventrespondertype: ";
    value_to_yaml(msg.eventrespondertype, out);
    out << "\n";
  }

  // member: activitytype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "activitytype: ";
    value_to_yaml(msg.activitytype, out);
    out << "\n";
  }

  // member: activitysubtype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "activitysubtype: ";
    value_to_yaml(msg.activitysubtype, out);
    out << "\n";
  }

  // member: assisttype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "assisttype: ";
    value_to_yaml(msg.assisttype, out);
    out << "\n";
  }

  // member: sizing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sizing: ";
    value_to_yaml(msg.sizing, out);
    out << "\n";
  }

  // member: attachment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attachment: ";
    value_to_yaml(msg.attachment, out);
    out << "\n";
  }

  // member: attachmentradius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attachmentradius: ";
    value_to_yaml(msg.attachmentradius, out);
    out << "\n";
  }

  // member: animaltype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "animaltype: ";
    value_to_yaml(msg.animaltype, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::PSM & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
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
