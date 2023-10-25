// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/RoadSegment.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ROAD_SEGMENT__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__ROAD_SEGMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_msg/msg/detail/road_segment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_RoadSegment_roadlaneset
{
public:
  explicit Init_RoadSegment_roadlaneset(::v2x_msg::msg::RoadSegment & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::RoadSegment roadlaneset(::v2x_msg::msg::RoadSegment::_roadlaneset_type arg)
  {
    msg_.roadlaneset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::RoadSegment msg_;
};

class Init_RoadSegment_speedlimits
{
public:
  explicit Init_RoadSegment_speedlimits(::v2x_msg::msg::RoadSegment & msg)
  : msg_(msg)
  {}
  Init_RoadSegment_roadlaneset speedlimits(::v2x_msg::msg::RoadSegment::_speedlimits_type arg)
  {
    msg_.speedlimits = std::move(arg);
    return Init_RoadSegment_roadlaneset(msg_);
  }

private:
  ::v2x_msg::msg::RoadSegment msg_;
};

class Init_RoadSegment_lanewidth
{
public:
  explicit Init_RoadSegment_lanewidth(::v2x_msg::msg::RoadSegment & msg)
  : msg_(msg)
  {}
  Init_RoadSegment_speedlimits lanewidth(::v2x_msg::msg::RoadSegment::_lanewidth_type arg)
  {
    msg_.lanewidth = std::move(arg);
    return Init_RoadSegment_speedlimits(msg_);
  }

private:
  ::v2x_msg::msg::RoadSegment msg_;
};

class Init_RoadSegment_refpoint
{
public:
  explicit Init_RoadSegment_refpoint(::v2x_msg::msg::RoadSegment & msg)
  : msg_(msg)
  {}
  Init_RoadSegment_lanewidth refpoint(::v2x_msg::msg::RoadSegment::_refpoint_type arg)
  {
    msg_.refpoint = std::move(arg);
    return Init_RoadSegment_lanewidth(msg_);
  }

private:
  ::v2x_msg::msg::RoadSegment msg_;
};

class Init_RoadSegment_revision
{
public:
  explicit Init_RoadSegment_revision(::v2x_msg::msg::RoadSegment & msg)
  : msg_(msg)
  {}
  Init_RoadSegment_refpoint revision(::v2x_msg::msg::RoadSegment::_revision_type arg)
  {
    msg_.revision = std::move(arg);
    return Init_RoadSegment_refpoint(msg_);
  }

private:
  ::v2x_msg::msg::RoadSegment msg_;
};

class Init_RoadSegment_id
{
public:
  explicit Init_RoadSegment_id(::v2x_msg::msg::RoadSegment & msg)
  : msg_(msg)
  {}
  Init_RoadSegment_revision id(::v2x_msg::msg::RoadSegment::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RoadSegment_revision(msg_);
  }

private:
  ::v2x_msg::msg::RoadSegment msg_;
};

class Init_RoadSegment_name
{
public:
  Init_RoadSegment_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoadSegment_id name(::v2x_msg::msg::RoadSegment::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_RoadSegment_id(msg_);
  }

private:
  ::v2x_msg::msg::RoadSegment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::RoadSegment>()
{
  return v2x_msg::msg::builder::Init_RoadSegment_name();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__ROAD_SEGMENT__BUILDER_HPP_
