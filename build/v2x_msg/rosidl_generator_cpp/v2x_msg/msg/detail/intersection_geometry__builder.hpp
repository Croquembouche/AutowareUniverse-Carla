// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/IntersectionGeometry.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__INTERSECTION_GEOMETRY__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__INTERSECTION_GEOMETRY__BUILDER_HPP_

#include "v2x_msg/msg/detail/intersection_geometry__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_IntersectionGeometry_preemptprioritydata
{
public:
  explicit Init_IntersectionGeometry_preemptprioritydata(::v2x_msg::msg::IntersectionGeometry & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::IntersectionGeometry preemptprioritydata(::v2x_msg::msg::IntersectionGeometry::_preemptprioritydata_type arg)
  {
    msg_.preemptprioritydata = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionGeometry msg_;
};

class Init_IntersectionGeometry_laneset
{
public:
  explicit Init_IntersectionGeometry_laneset(::v2x_msg::msg::IntersectionGeometry & msg)
  : msg_(msg)
  {}
  Init_IntersectionGeometry_preemptprioritydata laneset(::v2x_msg::msg::IntersectionGeometry::_laneset_type arg)
  {
    msg_.laneset = std::move(arg);
    return Init_IntersectionGeometry_preemptprioritydata(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionGeometry msg_;
};

class Init_IntersectionGeometry_speedlimits
{
public:
  explicit Init_IntersectionGeometry_speedlimits(::v2x_msg::msg::IntersectionGeometry & msg)
  : msg_(msg)
  {}
  Init_IntersectionGeometry_laneset speedlimits(::v2x_msg::msg::IntersectionGeometry::_speedlimits_type arg)
  {
    msg_.speedlimits = std::move(arg);
    return Init_IntersectionGeometry_laneset(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionGeometry msg_;
};

class Init_IntersectionGeometry_lanewidth
{
public:
  explicit Init_IntersectionGeometry_lanewidth(::v2x_msg::msg::IntersectionGeometry & msg)
  : msg_(msg)
  {}
  Init_IntersectionGeometry_speedlimits lanewidth(::v2x_msg::msg::IntersectionGeometry::_lanewidth_type arg)
  {
    msg_.lanewidth = std::move(arg);
    return Init_IntersectionGeometry_speedlimits(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionGeometry msg_;
};

class Init_IntersectionGeometry_refpoint
{
public:
  explicit Init_IntersectionGeometry_refpoint(::v2x_msg::msg::IntersectionGeometry & msg)
  : msg_(msg)
  {}
  Init_IntersectionGeometry_lanewidth refpoint(::v2x_msg::msg::IntersectionGeometry::_refpoint_type arg)
  {
    msg_.refpoint = std::move(arg);
    return Init_IntersectionGeometry_lanewidth(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionGeometry msg_;
};

class Init_IntersectionGeometry_revision
{
public:
  explicit Init_IntersectionGeometry_revision(::v2x_msg::msg::IntersectionGeometry & msg)
  : msg_(msg)
  {}
  Init_IntersectionGeometry_refpoint revision(::v2x_msg::msg::IntersectionGeometry::_revision_type arg)
  {
    msg_.revision = std::move(arg);
    return Init_IntersectionGeometry_refpoint(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionGeometry msg_;
};

class Init_IntersectionGeometry_id
{
public:
  explicit Init_IntersectionGeometry_id(::v2x_msg::msg::IntersectionGeometry & msg)
  : msg_(msg)
  {}
  Init_IntersectionGeometry_revision id(::v2x_msg::msg::IntersectionGeometry::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_IntersectionGeometry_revision(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionGeometry msg_;
};

class Init_IntersectionGeometry_name
{
public:
  Init_IntersectionGeometry_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IntersectionGeometry_id name(::v2x_msg::msg::IntersectionGeometry::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_IntersectionGeometry_id(msg_);
  }

private:
  ::v2x_msg::msg::IntersectionGeometry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::IntersectionGeometry>()
{
  return v2x_msg::msg::builder::Init_IntersectionGeometry_name();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__INTERSECTION_GEOMETRY__BUILDER_HPP_
