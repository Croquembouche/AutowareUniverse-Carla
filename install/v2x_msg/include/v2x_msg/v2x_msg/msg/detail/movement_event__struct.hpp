// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/MovementEvent.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__MOVEMENT_EVENT__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__MOVEMENT_EVENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timing'
#include "v2x_msg/msg/detail/time_change_details__struct.hpp"
// Member 'speeds'
#include "v2x_msg/msg/detail/advisory_speed__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__MovementEvent __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__MovementEvent __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MovementEvent_
{
  using Type = MovementEvent_<ContainerAllocator>;

  explicit MovementEvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timing(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->movementphasestate = 0ll;
    }
  }

  explicit MovementEvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timing(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->movementphasestate = 0ll;
    }
  }

  // field types and members
  using _movementphasestate_type =
    int64_t;
  _movementphasestate_type movementphasestate;
  using _timing_type =
    v2x_msg::msg::TimeChangeDetails_<ContainerAllocator>;
  _timing_type timing;
  using _speeds_type =
    std::vector<v2x_msg::msg::AdvisorySpeed_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::AdvisorySpeed_<ContainerAllocator>>>;
  _speeds_type speeds;

  // setters for named parameter idiom
  Type & set__movementphasestate(
    const int64_t & _arg)
  {
    this->movementphasestate = _arg;
    return *this;
  }
  Type & set__timing(
    const v2x_msg::msg::TimeChangeDetails_<ContainerAllocator> & _arg)
  {
    this->timing = _arg;
    return *this;
  }
  Type & set__speeds(
    const std::vector<v2x_msg::msg::AdvisorySpeed_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::AdvisorySpeed_<ContainerAllocator>>> & _arg)
  {
    this->speeds = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::MovementEvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::MovementEvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::MovementEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::MovementEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::MovementEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::MovementEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::MovementEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::MovementEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::MovementEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::MovementEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__MovementEvent
    std::shared_ptr<v2x_msg::msg::MovementEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__MovementEvent
    std::shared_ptr<v2x_msg::msg::MovementEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MovementEvent_ & other) const
  {
    if (this->movementphasestate != other.movementphasestate) {
      return false;
    }
    if (this->timing != other.timing) {
      return false;
    }
    if (this->speeds != other.speeds) {
      return false;
    }
    return true;
  }
  bool operator!=(const MovementEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MovementEvent_

// alias to use template instance with default allocator
using MovementEvent =
  v2x_msg::msg::MovementEvent_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__MOVEMENT_EVENT__STRUCT_HPP_
