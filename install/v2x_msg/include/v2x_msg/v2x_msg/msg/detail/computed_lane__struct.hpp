// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/ComputedLane.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__COMPUTED_LANE__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__COMPUTED_LANE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'offsetxaxis'
#include "v2x_msg/msg/detail/offset_xaxis__struct.hpp"
// Member 'offsetyaxis'
#include "v2x_msg/msg/detail/offset_yaxis__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__ComputedLane __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__ComputedLane __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ComputedLane_
{
  using Type = ComputedLane_<ContainerAllocator>;

  explicit ComputedLane_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : offsetxaxis(_init),
    offsetyaxis(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->referencelaneid = 0ll;
      this->rotatexy = 0ll;
      this->scalexaxis = 0ll;
      this->scaleyaxis = 0ll;
    }
  }

  explicit ComputedLane_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : offsetxaxis(_alloc, _init),
    offsetyaxis(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->referencelaneid = 0ll;
      this->rotatexy = 0ll;
      this->scalexaxis = 0ll;
      this->scaleyaxis = 0ll;
    }
  }

  // field types and members
  using _referencelaneid_type =
    int64_t;
  _referencelaneid_type referencelaneid;
  using _offsetxaxis_type =
    v2x_msg::msg::OffsetXaxis_<ContainerAllocator>;
  _offsetxaxis_type offsetxaxis;
  using _offsetyaxis_type =
    v2x_msg::msg::OffsetYaxis_<ContainerAllocator>;
  _offsetyaxis_type offsetyaxis;
  using _rotatexy_type =
    int64_t;
  _rotatexy_type rotatexy;
  using _scalexaxis_type =
    int64_t;
  _scalexaxis_type scalexaxis;
  using _scaleyaxis_type =
    int64_t;
  _scaleyaxis_type scaleyaxis;

  // setters for named parameter idiom
  Type & set__referencelaneid(
    const int64_t & _arg)
  {
    this->referencelaneid = _arg;
    return *this;
  }
  Type & set__offsetxaxis(
    const v2x_msg::msg::OffsetXaxis_<ContainerAllocator> & _arg)
  {
    this->offsetxaxis = _arg;
    return *this;
  }
  Type & set__offsetyaxis(
    const v2x_msg::msg::OffsetYaxis_<ContainerAllocator> & _arg)
  {
    this->offsetyaxis = _arg;
    return *this;
  }
  Type & set__rotatexy(
    const int64_t & _arg)
  {
    this->rotatexy = _arg;
    return *this;
  }
  Type & set__scalexaxis(
    const int64_t & _arg)
  {
    this->scalexaxis = _arg;
    return *this;
  }
  Type & set__scaleyaxis(
    const int64_t & _arg)
  {
    this->scaleyaxis = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::ComputedLane_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::ComputedLane_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::ComputedLane_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::ComputedLane_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::ComputedLane_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::ComputedLane_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::ComputedLane_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::ComputedLane_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::ComputedLane_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::ComputedLane_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__ComputedLane
    std::shared_ptr<v2x_msg::msg::ComputedLane_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__ComputedLane
    std::shared_ptr<v2x_msg::msg::ComputedLane_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ComputedLane_ & other) const
  {
    if (this->referencelaneid != other.referencelaneid) {
      return false;
    }
    if (this->offsetxaxis != other.offsetxaxis) {
      return false;
    }
    if (this->offsetyaxis != other.offsetyaxis) {
      return false;
    }
    if (this->rotatexy != other.rotatexy) {
      return false;
    }
    if (this->scalexaxis != other.scalexaxis) {
      return false;
    }
    if (this->scaleyaxis != other.scaleyaxis) {
      return false;
    }
    return true;
  }
  bool operator!=(const ComputedLane_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ComputedLane_

// alias to use template instance with default allocator
using ComputedLane =
  v2x_msg::msg::ComputedLane_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__COMPUTED_LANE__STRUCT_HPP_
