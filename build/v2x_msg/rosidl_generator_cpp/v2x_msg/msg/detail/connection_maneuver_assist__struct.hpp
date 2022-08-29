// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/ConnectionManeuverAssist.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__CONNECTION_MANEUVER_ASSIST__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__CONNECTION_MANEUVER_ASSIST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__ConnectionManeuverAssist __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__ConnectionManeuverAssist __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConnectionManeuverAssist_
{
  using Type = ConnectionManeuverAssist_<ContainerAllocator>;

  explicit ConnectionManeuverAssist_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->connectionid = 0ll;
      this->queuelength = 0ll;
      this->availablestoragelength = 0ll;
      this->waitonstop = false;
      this->pedbicycledetect = false;
    }
  }

  explicit ConnectionManeuverAssist_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->connectionid = 0ll;
      this->queuelength = 0ll;
      this->availablestoragelength = 0ll;
      this->waitonstop = false;
      this->pedbicycledetect = false;
    }
  }

  // field types and members
  using _connectionid_type =
    int64_t;
  _connectionid_type connectionid;
  using _queuelength_type =
    int64_t;
  _queuelength_type queuelength;
  using _availablestoragelength_type =
    int64_t;
  _availablestoragelength_type availablestoragelength;
  using _waitonstop_type =
    bool;
  _waitonstop_type waitonstop;
  using _pedbicycledetect_type =
    bool;
  _pedbicycledetect_type pedbicycledetect;

  // setters for named parameter idiom
  Type & set__connectionid(
    const int64_t & _arg)
  {
    this->connectionid = _arg;
    return *this;
  }
  Type & set__queuelength(
    const int64_t & _arg)
  {
    this->queuelength = _arg;
    return *this;
  }
  Type & set__availablestoragelength(
    const int64_t & _arg)
  {
    this->availablestoragelength = _arg;
    return *this;
  }
  Type & set__waitonstop(
    const bool & _arg)
  {
    this->waitonstop = _arg;
    return *this;
  }
  Type & set__pedbicycledetect(
    const bool & _arg)
  {
    this->pedbicycledetect = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::ConnectionManeuverAssist_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::ConnectionManeuverAssist_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::ConnectionManeuverAssist_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::ConnectionManeuverAssist_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::ConnectionManeuverAssist_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::ConnectionManeuverAssist_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::ConnectionManeuverAssist_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::ConnectionManeuverAssist_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::ConnectionManeuverAssist_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::ConnectionManeuverAssist_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__ConnectionManeuverAssist
    std::shared_ptr<v2x_msg::msg::ConnectionManeuverAssist_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__ConnectionManeuverAssist
    std::shared_ptr<v2x_msg::msg::ConnectionManeuverAssist_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConnectionManeuverAssist_ & other) const
  {
    if (this->connectionid != other.connectionid) {
      return false;
    }
    if (this->queuelength != other.queuelength) {
      return false;
    }
    if (this->availablestoragelength != other.availablestoragelength) {
      return false;
    }
    if (this->waitonstop != other.waitonstop) {
      return false;
    }
    if (this->pedbicycledetect != other.pedbicycledetect) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConnectionManeuverAssist_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConnectionManeuverAssist_

// alias to use template instance with default allocator
using ConnectionManeuverAssist =
  v2x_msg::msg::ConnectionManeuverAssist_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__CONNECTION_MANEUVER_ASSIST__STRUCT_HPP_
