// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_msg:msg/PathPrediction.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PATH_PREDICTION__BUILDER_HPP_
#define V2X_MSG__MSG__DETAIL__PATH_PREDICTION__BUILDER_HPP_

#include "v2x_msg/msg/detail/path_prediction__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace v2x_msg
{

namespace msg
{

namespace builder
{

class Init_PathPrediction_confidence
{
public:
  explicit Init_PathPrediction_confidence(::v2x_msg::msg::PathPrediction & msg)
  : msg_(msg)
  {}
  ::v2x_msg::msg::PathPrediction confidence(::v2x_msg::msg::PathPrediction::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_msg::msg::PathPrediction msg_;
};

class Init_PathPrediction_radiusofcurve
{
public:
  Init_PathPrediction_radiusofcurve()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathPrediction_confidence radiusofcurve(::v2x_msg::msg::PathPrediction::_radiusofcurve_type arg)
  {
    msg_.radiusofcurve = std::move(arg);
    return Init_PathPrediction_confidence(msg_);
  }

private:
  ::v2x_msg::msg::PathPrediction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_msg::msg::PathPrediction>()
{
  return v2x_msg::msg::builder::Init_PathPrediction_radiusofcurve();
}

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__PATH_PREDICTION__BUILDER_HPP_
