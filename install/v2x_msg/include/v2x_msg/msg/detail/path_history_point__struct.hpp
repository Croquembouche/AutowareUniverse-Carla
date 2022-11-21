// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/PathHistoryPoint.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PATH_HISTORY_POINT__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__PATH_HISTORY_POINT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'accuracy'
#include "v2x_msg/msg/detail/positional_accuracy__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__PathHistoryPoint __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__PathHistoryPoint __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PathHistoryPoint_
{
  using Type = PathHistoryPoint_<ContainerAllocator>;

  explicit PathHistoryPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : accuracy(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latoffset = 0ll;
      this->lonoffset = 0ll;
      this->elevationoffset = 0ll;
      this->timeoffset = 0ll;
      this->speed = 0ll;
      this->heading = 0ll;
    }
  }

  explicit PathHistoryPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : accuracy(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latoffset = 0ll;
      this->lonoffset = 0ll;
      this->elevationoffset = 0ll;
      this->timeoffset = 0ll;
      this->speed = 0ll;
      this->heading = 0ll;
    }
  }

  // field types and members
  using _latoffset_type =
    int64_t;
  _latoffset_type latoffset;
  using _lonoffset_type =
    int64_t;
  _lonoffset_type lonoffset;
  using _elevationoffset_type =
    int64_t;
  _elevationoffset_type elevationoffset;
  using _timeoffset_type =
    int64_t;
  _timeoffset_type timeoffset;
  using _speed_type =
    int64_t;
  _speed_type speed;
  using _accuracy_type =
    v2x_msg::msg::PositionalAccuracy_<ContainerAllocator>;
  _accuracy_type accuracy;
  using _heading_type =
    int64_t;
  _heading_type heading;

  // setters for named parameter idiom
  Type & set__latoffset(
    const int64_t & _arg)
  {
    this->latoffset = _arg;
    return *this;
  }
  Type & set__lonoffset(
    const int64_t & _arg)
  {
    this->lonoffset = _arg;
    return *this;
  }
  Type & set__elevationoffset(
    const int64_t & _arg)
  {
    this->elevationoffset = _arg;
    return *this;
  }
  Type & set__timeoffset(
    const int64_t & _arg)
  {
    this->timeoffset = _arg;
    return *this;
  }
  Type & set__speed(
    const int64_t & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__accuracy(
    const v2x_msg::msg::PositionalAccuracy_<ContainerAllocator> & _arg)
  {
    this->accuracy = _arg;
    return *this;
  }
  Type & set__heading(
    const int64_t & _arg)
  {
    this->heading = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::PathHistoryPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::PathHistoryPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::PathHistoryPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::PathHistoryPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::PathHistoryPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::PathHistoryPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::PathHistoryPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::PathHistoryPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::PathHistoryPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::PathHistoryPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__PathHistoryPoint
    std::shared_ptr<v2x_msg::msg::PathHistoryPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__PathHistoryPoint
    std::shared_ptr<v2x_msg::msg::PathHistoryPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathHistoryPoint_ & other) const
  {
    if (this->latoffset != other.latoffset) {
      return false;
    }
    if (this->lonoffset != other.lonoffset) {
      return false;
    }
    if (this->elevationoffset != other.elevationoffset) {
      return false;
    }
    if (this->timeoffset != other.timeoffset) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->accuracy != other.accuracy) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathHistoryPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathHistoryPoint_

// alias to use template instance with default allocator
using PathHistoryPoint =
  v2x_msg::msg::PathHistoryPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__PATH_HISTORY_POINT__STRUCT_HPP_
