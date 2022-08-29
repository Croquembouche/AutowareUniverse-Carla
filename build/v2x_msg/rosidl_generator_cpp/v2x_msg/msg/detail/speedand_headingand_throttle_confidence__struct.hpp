// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/SpeedandHeadingandThrottleConfidence.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SPEEDAND_HEADINGAND_THROTTLE_CONFIDENCE__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__SPEEDAND_HEADINGAND_THROTTLE_CONFIDENCE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__SpeedandHeadingandThrottleConfidence __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__SpeedandHeadingandThrottleConfidence __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpeedandHeadingandThrottleConfidence_
{
  using Type = SpeedandHeadingandThrottleConfidence_<ContainerAllocator>;

  explicit SpeedandHeadingandThrottleConfidence_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heading = 0ll;
      this->speed = 0ll;
      this->throttle = 0ll;
    }
  }

  explicit SpeedandHeadingandThrottleConfidence_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heading = 0ll;
      this->speed = 0ll;
      this->throttle = 0ll;
    }
  }

  // field types and members
  using _heading_type =
    int64_t;
  _heading_type heading;
  using _speed_type =
    int64_t;
  _speed_type speed;
  using _throttle_type =
    int64_t;
  _throttle_type throttle;

  // setters for named parameter idiom
  Type & set__heading(
    const int64_t & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__speed(
    const int64_t & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__throttle(
    const int64_t & _arg)
  {
    this->throttle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__SpeedandHeadingandThrottleConfidence
    std::shared_ptr<v2x_msg::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__SpeedandHeadingandThrottleConfidence
    std::shared_ptr<v2x_msg::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpeedandHeadingandThrottleConfidence_ & other) const
  {
    if (this->heading != other.heading) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->throttle != other.throttle) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpeedandHeadingandThrottleConfidence_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpeedandHeadingandThrottleConfidence_

// alias to use template instance with default allocator
using SpeedandHeadingandThrottleConfidence =
  v2x_msg::msg::SpeedandHeadingandThrottleConfidence_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__SPEEDAND_HEADINGAND_THROTTLE_CONFIDENCE__STRUCT_HPP_
