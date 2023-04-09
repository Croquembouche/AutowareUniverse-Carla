// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/ApproachOrLane.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__APPROACH_OR_LANE__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__APPROACH_OR_LANE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__ApproachOrLane __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__ApproachOrLane __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ApproachOrLane_
{
  using Type = ApproachOrLane_<ContainerAllocator>;

  explicit ApproachOrLane_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->approach = 0ll;
      this->lane = 0ll;
    }
  }

  explicit ApproachOrLane_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->approach = 0ll;
      this->lane = 0ll;
    }
  }

  // field types and members
  using _approach_type =
    int64_t;
  _approach_type approach;
  using _lane_type =
    int64_t;
  _lane_type lane;

  // setters for named parameter idiom
  Type & set__approach(
    const int64_t & _arg)
  {
    this->approach = _arg;
    return *this;
  }
  Type & set__lane(
    const int64_t & _arg)
  {
    this->lane = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::ApproachOrLane_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::ApproachOrLane_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::ApproachOrLane_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::ApproachOrLane_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::ApproachOrLane_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::ApproachOrLane_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::ApproachOrLane_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::ApproachOrLane_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::ApproachOrLane_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::ApproachOrLane_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__ApproachOrLane
    std::shared_ptr<v2x_msg::msg::ApproachOrLane_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__ApproachOrLane
    std::shared_ptr<v2x_msg::msg::ApproachOrLane_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApproachOrLane_ & other) const
  {
    if (this->approach != other.approach) {
      return false;
    }
    if (this->lane != other.lane) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApproachOrLane_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApproachOrLane_

// alias to use template instance with default allocator
using ApproachOrLane =
  v2x_msg::msg::ApproachOrLane_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__APPROACH_OR_LANE__STRUCT_HPP_
