// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/Connection.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__CONNECTION__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__CONNECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'connectinglane'
#include "v2x_msg/msg/detail/connecting_lane__struct.hpp"
// Member 'remoteintersection'
#include "v2x_msg/msg/detail/intersection_reference_id__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__Connection __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__Connection __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Connection_
{
  using Type = Connection_<ContainerAllocator>;

  explicit Connection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : connectinglane(_init),
    remoteintersection(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->signalgroup = 0ll;
      this->userclass = 0ll;
      this->laneconnectonid = 0ll;
    }
  }

  explicit Connection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : connectinglane(_alloc, _init),
    remoteintersection(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->signalgroup = 0ll;
      this->userclass = 0ll;
      this->laneconnectonid = 0ll;
    }
  }

  // field types and members
  using _connectinglane_type =
    v2x_msg::msg::ConnectingLane_<ContainerAllocator>;
  _connectinglane_type connectinglane;
  using _remoteintersection_type =
    v2x_msg::msg::IntersectionReferenceID_<ContainerAllocator>;
  _remoteintersection_type remoteintersection;
  using _signalgroup_type =
    int64_t;
  _signalgroup_type signalgroup;
  using _userclass_type =
    int64_t;
  _userclass_type userclass;
  using _laneconnectonid_type =
    int64_t;
  _laneconnectonid_type laneconnectonid;

  // setters for named parameter idiom
  Type & set__connectinglane(
    const v2x_msg::msg::ConnectingLane_<ContainerAllocator> & _arg)
  {
    this->connectinglane = _arg;
    return *this;
  }
  Type & set__remoteintersection(
    const v2x_msg::msg::IntersectionReferenceID_<ContainerAllocator> & _arg)
  {
    this->remoteintersection = _arg;
    return *this;
  }
  Type & set__signalgroup(
    const int64_t & _arg)
  {
    this->signalgroup = _arg;
    return *this;
  }
  Type & set__userclass(
    const int64_t & _arg)
  {
    this->userclass = _arg;
    return *this;
  }
  Type & set__laneconnectonid(
    const int64_t & _arg)
  {
    this->laneconnectonid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::Connection_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::Connection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::Connection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::Connection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::Connection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::Connection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::Connection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::Connection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::Connection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::Connection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__Connection
    std::shared_ptr<v2x_msg::msg::Connection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__Connection
    std::shared_ptr<v2x_msg::msg::Connection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Connection_ & other) const
  {
    if (this->connectinglane != other.connectinglane) {
      return false;
    }
    if (this->remoteintersection != other.remoteintersection) {
      return false;
    }
    if (this->signalgroup != other.signalgroup) {
      return false;
    }
    if (this->userclass != other.userclass) {
      return false;
    }
    if (this->laneconnectonid != other.laneconnectonid) {
      return false;
    }
    return true;
  }
  bool operator!=(const Connection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Connection_

// alias to use template instance with default allocator
using Connection =
  v2x_msg::msg::Connection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__CONNECTION__STRUCT_HPP_
