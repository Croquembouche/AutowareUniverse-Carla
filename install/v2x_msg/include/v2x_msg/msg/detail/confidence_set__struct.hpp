// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/ConfidenceSet.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__CONFIDENCE_SET__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__CONFIDENCE_SET__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'accelconfidence'
#include "v2x_msg/msg/detail/accel_steer_yaw_rate_confidence__struct.hpp"
// Member 'speedconfidence'
#include "v2x_msg/msg/detail/speedand_headingand_throttle_confidence__struct.hpp"
// Member 'posconfidence'
#include "v2x_msg/msg/detail/position_confidence_set__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__ConfidenceSet __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__ConfidenceSet __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConfidenceSet_
{
  using Type = ConfidenceSet_<ContainerAllocator>;

  explicit ConfidenceSet_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : accelconfidence(_init),
    speedconfidence(_init),
    posconfidence(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timeconfidence = 0ll;
      this->steerconfidence = 0ll;
      this->headingconfidence = 0ll;
      this->throttleconfidence = 0ll;
    }
  }

  explicit ConfidenceSet_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : accelconfidence(_alloc, _init),
    speedconfidence(_alloc, _init),
    posconfidence(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timeconfidence = 0ll;
      this->steerconfidence = 0ll;
      this->headingconfidence = 0ll;
      this->throttleconfidence = 0ll;
    }
  }

  // field types and members
  using _accelconfidence_type =
    v2x_msg::msg::AccelSteerYawRateConfidence_<ContainerAllocator>;
  _accelconfidence_type accelconfidence;
  using _speedconfidence_type =
    v2x_msg::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator>;
  _speedconfidence_type speedconfidence;
  using _timeconfidence_type =
    int64_t;
  _timeconfidence_type timeconfidence;
  using _posconfidence_type =
    v2x_msg::msg::PositionConfidenceSet_<ContainerAllocator>;
  _posconfidence_type posconfidence;
  using _steerconfidence_type =
    int64_t;
  _steerconfidence_type steerconfidence;
  using _headingconfidence_type =
    int64_t;
  _headingconfidence_type headingconfidence;
  using _throttleconfidence_type =
    int64_t;
  _throttleconfidence_type throttleconfidence;

  // setters for named parameter idiom
  Type & set__accelconfidence(
    const v2x_msg::msg::AccelSteerYawRateConfidence_<ContainerAllocator> & _arg)
  {
    this->accelconfidence = _arg;
    return *this;
  }
  Type & set__speedconfidence(
    const v2x_msg::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator> & _arg)
  {
    this->speedconfidence = _arg;
    return *this;
  }
  Type & set__timeconfidence(
    const int64_t & _arg)
  {
    this->timeconfidence = _arg;
    return *this;
  }
  Type & set__posconfidence(
    const v2x_msg::msg::PositionConfidenceSet_<ContainerAllocator> & _arg)
  {
    this->posconfidence = _arg;
    return *this;
  }
  Type & set__steerconfidence(
    const int64_t & _arg)
  {
    this->steerconfidence = _arg;
    return *this;
  }
  Type & set__headingconfidence(
    const int64_t & _arg)
  {
    this->headingconfidence = _arg;
    return *this;
  }
  Type & set__throttleconfidence(
    const int64_t & _arg)
  {
    this->throttleconfidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::ConfidenceSet_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::ConfidenceSet_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::ConfidenceSet_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::ConfidenceSet_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::ConfidenceSet_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::ConfidenceSet_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::ConfidenceSet_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::ConfidenceSet_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::ConfidenceSet_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::ConfidenceSet_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__ConfidenceSet
    std::shared_ptr<v2x_msg::msg::ConfidenceSet_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__ConfidenceSet
    std::shared_ptr<v2x_msg::msg::ConfidenceSet_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConfidenceSet_ & other) const
  {
    if (this->accelconfidence != other.accelconfidence) {
      return false;
    }
    if (this->speedconfidence != other.speedconfidence) {
      return false;
    }
    if (this->timeconfidence != other.timeconfidence) {
      return false;
    }
    if (this->posconfidence != other.posconfidence) {
      return false;
    }
    if (this->steerconfidence != other.steerconfidence) {
      return false;
    }
    if (this->headingconfidence != other.headingconfidence) {
      return false;
    }
    if (this->throttleconfidence != other.throttleconfidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConfidenceSet_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConfidenceSet_

// alias to use template instance with default allocator
using ConfidenceSet =
  v2x_msg::msg::ConfidenceSet_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__CONFIDENCE_SET__STRUCT_HPP_
