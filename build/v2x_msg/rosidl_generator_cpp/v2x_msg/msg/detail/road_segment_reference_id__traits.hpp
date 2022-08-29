// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/RoadSegmentReferenceID.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ROAD_SEGMENT_REFERENCE_ID__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__ROAD_SEGMENT_REFERENCE_ID__TRAITS_HPP_

#include "v2x_msg/msg/detail/road_segment_reference_id__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::RoadSegmentReferenceID & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: roadregulatorid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roadregulatorid: ";
    value_to_yaml(msg.roadregulatorid, out);
    out << "\n";
  }

  // member: roadsegmentid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roadsegmentid: ";
    value_to_yaml(msg.roadsegmentid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::RoadSegmentReferenceID & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::RoadSegmentReferenceID>()
{
  return "v2x_msg::msg::RoadSegmentReferenceID";
}

template<>
inline const char * name<v2x_msg::msg::RoadSegmentReferenceID>()
{
  return "v2x_msg/msg/RoadSegmentReferenceID";
}

template<>
struct has_fixed_size<v2x_msg::msg::RoadSegmentReferenceID>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::RoadSegmentReferenceID>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::RoadSegmentReferenceID>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__ROAD_SEGMENT_REFERENCE_ID__TRAITS_HPP_
