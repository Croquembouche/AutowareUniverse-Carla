// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/ConnectingLane.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__CONNECTING_LANE__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__CONNECTING_LANE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'maneuver'
#include "v2x_msg/msg/detail/allowed_maneuvers__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__ConnectingLane __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__ConnectingLane __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConnectingLane_
{
  using Type = ConnectingLane_<ContainerAllocator>;

  explicit ConnectingLane_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : maneuver(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->laneid = 0ll;
    }
  }

  explicit ConnectingLane_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : maneuver(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->laneid = 0ll;
    }
  }

  // field types and members
  using _laneid_type =
    int64_t;
  _laneid_type laneid;
  using _maneuver_type =
    v2x_msg::msg::AllowedManeuvers_<ContainerAllocator>;
  _maneuver_type maneuver;

  // setters for named parameter idiom
  Type & set__laneid(
    const int64_t & _arg)
  {
    this->laneid = _arg;
    return *this;
  }
  Type & set__maneuver(
    const v2x_msg::msg::AllowedManeuvers_<ContainerAllocator> & _arg)
  {
    this->maneuver = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::ConnectingLane_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::ConnectingLane_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::ConnectingLane_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::ConnectingLane_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::ConnectingLane_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::ConnectingLane_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::ConnectingLane_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::ConnectingLane_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::ConnectingLane_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::ConnectingLane_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__ConnectingLane
    std::shared_ptr<v2x_msg::msg::ConnectingLane_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__ConnectingLane
    std::shared_ptr<v2x_msg::msg::ConnectingLane_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConnectingLane_ & other) const
  {
    if (this->laneid != other.laneid) {
      return false;
    }
    if (this->maneuver != other.maneuver) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConnectingLane_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConnectingLane_

// alias to use template instance with default allocator
using ConnectingLane =
  v2x_msg::msg::ConnectingLane_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__CONNECTING_LANE__STRUCT_HPP_
