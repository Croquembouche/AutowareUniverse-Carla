// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/AccelSteerYawRateConfidence.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ACCEL_STEER_YAW_RATE_CONFIDENCE__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__ACCEL_STEER_YAW_RATE_CONFIDENCE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__AccelSteerYawRateConfidence __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__AccelSteerYawRateConfidence __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AccelSteerYawRateConfidence_
{
  using Type = AccelSteerYawRateConfidence_<ContainerAllocator>;

  explicit AccelSteerYawRateConfidence_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yawrate = 0ll;
      this->acceleration = 0ll;
      this->steeringwheelangle = 0ll;
    }
  }

  explicit AccelSteerYawRateConfidence_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yawrate = 0ll;
      this->acceleration = 0ll;
      this->steeringwheelangle = 0ll;
    }
  }

  // field types and members
  using _yawrate_type =
    int64_t;
  _yawrate_type yawrate;
  using _acceleration_type =
    int64_t;
  _acceleration_type acceleration;
  using _steeringwheelangle_type =
    int64_t;
  _steeringwheelangle_type steeringwheelangle;

  // setters for named parameter idiom
  Type & set__yawrate(
    const int64_t & _arg)
  {
    this->yawrate = _arg;
    return *this;
  }
  Type & set__acceleration(
    const int64_t & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__steeringwheelangle(
    const int64_t & _arg)
  {
    this->steeringwheelangle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::AccelSteerYawRateConfidence_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::AccelSteerYawRateConfidence_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::AccelSteerYawRateConfidence_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::AccelSteerYawRateConfidence_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::AccelSteerYawRateConfidence_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::AccelSteerYawRateConfidence_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::AccelSteerYawRateConfidence_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::AccelSteerYawRateConfidence_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::AccelSteerYawRateConfidence_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::AccelSteerYawRateConfidence_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__AccelSteerYawRateConfidence
    std::shared_ptr<v2x_msg::msg::AccelSteerYawRateConfidence_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__AccelSteerYawRateConfidence
    std::shared_ptr<v2x_msg::msg::AccelSteerYawRateConfidence_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AccelSteerYawRateConfidence_ & other) const
  {
    if (this->yawrate != other.yawrate) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->steeringwheelangle != other.steeringwheelangle) {
      return false;
    }
    return true;
  }
  bool operator!=(const AccelSteerYawRateConfidence_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AccelSteerYawRateConfidence_

// alias to use template instance with default allocator
using AccelSteerYawRateConfidence =
  v2x_msg::msg::AccelSteerYawRateConfidence_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__ACCEL_STEER_YAW_RATE_CONFIDENCE__STRUCT_HPP_
