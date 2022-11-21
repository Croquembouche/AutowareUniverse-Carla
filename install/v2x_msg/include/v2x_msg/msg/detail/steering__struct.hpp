// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/Steering.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__STEERING__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__STEERING__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__Steering __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__Steering __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Steering_
{
  using Type = Steering_<ContainerAllocator>;

  explicit Steering_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle = 0ll;
      this->confidence = 0ll;
      this->rate = 0ll;
      this->wheel = 0ll;
    }
  }

  explicit Steering_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle = 0ll;
      this->confidence = 0ll;
      this->rate = 0ll;
      this->wheel = 0ll;
    }
  }

  // field types and members
  using _angle_type =
    int64_t;
  _angle_type angle;
  using _confidence_type =
    int64_t;
  _confidence_type confidence;
  using _rate_type =
    int64_t;
  _rate_type rate;
  using _wheel_type =
    int64_t;
  _wheel_type wheel;

  // setters for named parameter idiom
  Type & set__angle(
    const int64_t & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__confidence(
    const int64_t & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__rate(
    const int64_t & _arg)
  {
    this->rate = _arg;
    return *this;
  }
  Type & set__wheel(
    const int64_t & _arg)
  {
    this->wheel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::Steering_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::Steering_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::Steering_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::Steering_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::Steering_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::Steering_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::Steering_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::Steering_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::Steering_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::Steering_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__Steering
    std::shared_ptr<v2x_msg::msg::Steering_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__Steering
    std::shared_ptr<v2x_msg::msg::Steering_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Steering_ & other) const
  {
    if (this->angle != other.angle) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->rate != other.rate) {
      return false;
    }
    if (this->wheel != other.wheel) {
      return false;
    }
    return true;
  }
  bool operator!=(const Steering_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Steering_

// alias to use template instance with default allocator
using Steering =
  v2x_msg::msg::Steering_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__STEERING__STRUCT_HPP_
