// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/TransmissionAndSpeed.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__TRANSMISSION_AND_SPEED__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__TRANSMISSION_AND_SPEED__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__TransmissionAndSpeed __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__TransmissionAndSpeed __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TransmissionAndSpeed_
{
  using Type = TransmissionAndSpeed_<ContainerAllocator>;

  explicit TransmissionAndSpeed_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->transmission = 0ll;
      this->velocity = 0ll;
    }
  }

  explicit TransmissionAndSpeed_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->transmission = 0ll;
      this->velocity = 0ll;
    }
  }

  // field types and members
  using _transmission_type =
    int64_t;
  _transmission_type transmission;
  using _velocity_type =
    int64_t;
  _velocity_type velocity;

  // setters for named parameter idiom
  Type & set__transmission(
    const int64_t & _arg)
  {
    this->transmission = _arg;
    return *this;
  }
  Type & set__velocity(
    const int64_t & _arg)
  {
    this->velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::TransmissionAndSpeed_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::TransmissionAndSpeed_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::TransmissionAndSpeed_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::TransmissionAndSpeed_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::TransmissionAndSpeed_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::TransmissionAndSpeed_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::TransmissionAndSpeed_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::TransmissionAndSpeed_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::TransmissionAndSpeed_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::TransmissionAndSpeed_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__TransmissionAndSpeed
    std::shared_ptr<v2x_msg::msg::TransmissionAndSpeed_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__TransmissionAndSpeed
    std::shared_ptr<v2x_msg::msg::TransmissionAndSpeed_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TransmissionAndSpeed_ & other) const
  {
    if (this->transmission != other.transmission) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const TransmissionAndSpeed_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TransmissionAndSpeed_

// alias to use template instance with default allocator
using TransmissionAndSpeed =
  v2x_msg::msg::TransmissionAndSpeed_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__TRANSMISSION_AND_SPEED__STRUCT_HPP_
