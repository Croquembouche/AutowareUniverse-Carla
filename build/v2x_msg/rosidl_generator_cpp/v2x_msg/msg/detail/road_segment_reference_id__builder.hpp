// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/RoadSegmentReferenceID.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ROAD_SEGMENT_REFERENCE_ID__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__ROAD_SEGMENT_REFERENCE_ID__BUILDER_HPP_

#include "v2x_msg/msg/detail/road_segment_reference_id__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_RoadSegmentReferenceID_roadsegmentid
{
public:
  explicit Init_RoadSegmentReferenceID_roadsegmentid(::v2x_msg::msg::RoadSegmentReferenceID & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::RoadSegmentReferenceID roadsegmentid(::v2x_msg::msg::RoadSegmentReferenceID::_roadsegmentid_type arg)
  {
    msg_.roadsegmentid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::RoadSegmentReferenceID msg_;
};

class Init_RoadSegmentReferenceID_roadregulatorid
{
public:
  Init_RoadSegmentReferenceID_roadregulatorid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoadSegmentReferenceID_roadsegmentid roadregulatorid(::v2x_msg::msg::RoadSegmentReferenceID::_roadregulatorid_type arg)
  {
    msg_.roadregulatorid = std::move(arg);
    return Init_RoadSegmentReferenceID_roadsegmentid(msg_);
  }

private:
  ::v2x_msg::msg::RoadSegmentReferenceID msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::RoadSegmentReferenceID>()
{
  return v2x_msg::msg::builder::Init_RoadSegmentReferenceID_roadregulatorid();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__ROAD_SEGMENT_REFERENCE_ID__BUILDER_HPP_
