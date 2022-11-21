// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/LaneDataAttribute.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__LANE_DATA_ATTRIBUTE__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__LANE_DATA_ATTRIBUTE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'speedlimits'
#include "v2x_msg/msg/detail/speed_limit__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__LaneDataAttribute __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__LaneDataAttribute __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneDataAttribute_
{
  using Type = LaneDataAttribute_<ContainerAllocator>;

  explicit LaneDataAttribute_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pathendpointangle = 0ll;
      this->lanecrownpointcenter = 0ll;
      this->lancrownpointleft = 0ll;
      this->lanecrownpointright = 0ll;
      this->laneangle = 0ll;
    }
  }

  explicit LaneDataAttribute_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pathendpointangle = 0ll;
      this->lanecrownpointcenter = 0ll;
      this->lancrownpointleft = 0ll;
      this->lanecrownpointright = 0ll;
      this->laneangle = 0ll;
    }
  }

  // field types and members
  using _pathendpointangle_type =
    int64_t;
  _pathendpointangle_type pathendpointangle;
  using _lanecrownpointcenter_type =
    int64_t;
  _lanecrownpointcenter_type lanecrownpointcenter;
  using _lancrownpointleft_type =
    int64_t;
  _lancrownpointleft_type lancrownpointleft;
  using _lanecrownpointright_type =
    int64_t;
  _lanecrownpointright_type lanecrownpointright;
  using _laneangle_type =
    int64_t;
  _laneangle_type laneangle;
  using _speedlimits_type =
    std::vector<v2x_msg::msg::SpeedLimit_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::SpeedLimit_<ContainerAllocator>>>;
  _speedlimits_type speedlimits;

  // setters for named parameter idiom
  Type & set__pathendpointangle(
    const int64_t & _arg)
  {
    this->pathendpointangle = _arg;
    return *this;
  }
  Type & set__lanecrownpointcenter(
    const int64_t & _arg)
  {
    this->lanecrownpointcenter = _arg;
    return *this;
  }
  Type & set__lancrownpointleft(
    const int64_t & _arg)
  {
    this->lancrownpointleft = _arg;
    return *this;
  }
  Type & set__lanecrownpointright(
    const int64_t & _arg)
  {
    this->lanecrownpointright = _arg;
    return *this;
  }
  Type & set__laneangle(
    const int64_t & _arg)
  {
    this->laneangle = _arg;
    return *this;
  }
  Type & set__speedlimits(
    const std::vector<v2x_msg::msg::SpeedLimit_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::SpeedLimit_<ContainerAllocator>>> & _arg)
  {
    this->speedlimits = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::LaneDataAttribute_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::LaneDataAttribute_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::LaneDataAttribute_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::LaneDataAttribute_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::LaneDataAttribute_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::LaneDataAttribute_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::LaneDataAttribute_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::LaneDataAttribute_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::LaneDataAttribute_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::LaneDataAttribute_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__LaneDataAttribute
    std::shared_ptr<v2x_msg::msg::LaneDataAttribute_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__LaneDataAttribute
    std::shared_ptr<v2x_msg::msg::LaneDataAttribute_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneDataAttribute_ & other) const
  {
    if (this->pathendpointangle != other.pathendpointangle) {
      return false;
    }
    if (this->lanecrownpointcenter != other.lanecrownpointcenter) {
      return false;
    }
    if (this->lancrownpointleft != other.lancrownpointleft) {
      return false;
    }
    if (this->lanecrownpointright != other.lanecrownpointright) {
      return false;
    }
    if (this->laneangle != other.laneangle) {
      return false;
    }
    if (this->speedlimits != other.speedlimits) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneDataAttribute_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneDataAttribute_

// alias to use template instance with default allocator
using LaneDataAttribute =
  v2x_msg::msg::LaneDataAttribute_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__LANE_DATA_ATTRIBUTE__STRUCT_HPP_
