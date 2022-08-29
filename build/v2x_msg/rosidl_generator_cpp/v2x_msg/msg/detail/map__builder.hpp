// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/MAP.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__MAP__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__MAP__BUILDER_HPP_

#include "v2x_msg/msg/detail/map__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_MAP_restrictionlist
{
public:
  explicit Init_MAP_restrictionlist(::v2x_msg::msg::MAP & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::MAP restrictionlist(::v2x_msg::msg::MAP::_restrictionlist_type arg)
  {
    msg_.restrictionlist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::MAP msg_;
};

class Init_MAP_dataparameters
{
public:
  explicit Init_MAP_dataparameters(::v2x_msg::msg::MAP & msg)
  : msg_(msg)
  {}
  Init_MAP_restrictionlist dataparameters(::v2x_msg::msg::MAP::_dataparameters_type arg)
  {
    msg_.dataparameters = std::move(arg);
    return Init_MAP_restrictionlist(msg_);
  }

private:
  ::v2x_msg::msg::MAP msg_;
};

class Init_MAP_roadsegments
{
public:
  explicit Init_MAP_roadsegments(::v2x_msg::msg::MAP & msg)
  : msg_(msg)
  {}
  Init_MAP_dataparameters roadsegments(::v2x_msg::msg::MAP::_roadsegments_type arg)
  {
    msg_.roadsegments = std::move(arg);
    return Init_MAP_dataparameters(msg_);
  }

private:
  ::v2x_msg::msg::MAP msg_;
};

class Init_MAP_intersections
{
public:
  explicit Init_MAP_intersections(::v2x_msg::msg::MAP & msg)
  : msg_(msg)
  {}
  Init_MAP_roadsegments intersections(::v2x_msg::msg::MAP::_intersections_type arg)
  {
    msg_.intersections = std::move(arg);
    return Init_MAP_roadsegments(msg_);
  }

private:
  ::v2x_msg::msg::MAP msg_;
};

class Init_MAP_layerid
{
public:
  explicit Init_MAP_layerid(::v2x_msg::msg::MAP & msg)
  : msg_(msg)
  {}
  Init_MAP_intersections layerid(::v2x_msg::msg::MAP::_layerid_type arg)
  {
    msg_.layerid = std::move(arg);
    return Init_MAP_intersections(msg_);
  }

private:
  ::v2x_msg::msg::MAP msg_;
};

class Init_MAP_layertype
{
public:
  explicit Init_MAP_layertype(::v2x_msg::msg::MAP & msg)
  : msg_(msg)
  {}
  Init_MAP_layerid layertype(::v2x_msg::msg::MAP::_layertype_type arg)
  {
    msg_.layertype = std::move(arg);
    return Init_MAP_layerid(msg_);
  }

private:
  ::v2x_msg::msg::MAP msg_;
};

class Init_MAP_msgissuerevision
{
public:
  explicit Init_MAP_msgissuerevision(::v2x_msg::msg::MAP & msg)
  : msg_(msg)
  {}
  Init_MAP_layertype msgissuerevision(::v2x_msg::msg::MAP::_msgissuerevision_type arg)
  {
    msg_.msgissuerevision = std::move(arg);
    return Init_MAP_layertype(msg_);
  }

private:
  ::v2x_msg::msg::MAP msg_;
};

class Init_MAP_timestamp
{
public:
  Init_MAP_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MAP_msgissuerevision timestamp(::v2x_msg::msg::MAP::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_MAP_msgissuerevision(msg_);
  }

private:
  ::v2x_msg::msg::MAP msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::MAP>()
{
  return v2x_msg::msg::builder::Init_MAP_timestamp();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__MAP__BUILDER_HPP_
