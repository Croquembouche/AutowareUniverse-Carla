// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/IntersectionState.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__INTERSECTION_STATE__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__INTERSECTION_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'id'
#include "v2x_msg/msg/detail/intersection_reference_id__struct.hpp"
// Member 'status'
#include "v2x_msg/msg/detail/intersection_status_object__struct.hpp"
// Member 'enabledlanes'
#include "v2x_msg/msg/detail/lane_id__struct.hpp"
// Member 'states'
#include "v2x_msg/msg/detail/movement_state__struct.hpp"
// Member 'maneuverassistlist'
#include "v2x_msg/msg/detail/connection_maneuver_assist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__IntersectionState __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__IntersectionState __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IntersectionState_
{
  using Type = IntersectionState_<ContainerAllocator>;

  explicit IntersectionState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_init),
    status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->revision = 0ll;
      this->moy = 0ll;
      this->timestamp = 0ll;
    }
  }

  explicit IntersectionState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    id(_alloc, _init),
    status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->revision = 0ll;
      this->moy = 0ll;
      this->timestamp = 0ll;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _id_type =
    v2x_msg::msg::IntersectionReferenceID_<ContainerAllocator>;
  _id_type id;
  using _revision_type =
    int64_t;
  _revision_type revision;
  using _status_type =
    v2x_msg::msg::IntersectionStatusObject_<ContainerAllocator>;
  _status_type status;
  using _moy_type =
    int64_t;
  _moy_type moy;
  using _timestamp_type =
    int64_t;
  _timestamp_type timestamp;
  using _enabledlanes_type =
    std::vector<v2x_msg::msg::LaneID_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::LaneID_<ContainerAllocator>>>;
  _enabledlanes_type enabledlanes;
  using _states_type =
    std::vector<v2x_msg::msg::MovementState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::MovementState_<ContainerAllocator>>>;
  _states_type states;
  using _maneuverassistlist_type =
    std::vector<v2x_msg::msg::ConnectionManeuverAssist_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::ConnectionManeuverAssist_<ContainerAllocator>>>;
  _maneuverassistlist_type maneuverassistlist;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__id(
    const v2x_msg::msg::IntersectionReferenceID_<ContainerAllocator> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__revision(
    const int64_t & _arg)
  {
    this->revision = _arg;
    return *this;
  }
  Type & set__status(
    const v2x_msg::msg::IntersectionStatusObject_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__moy(
    const int64_t & _arg)
  {
    this->moy = _arg;
    return *this;
  }
  Type & set__timestamp(
    const int64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__enabledlanes(
    const std::vector<v2x_msg::msg::LaneID_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::LaneID_<ContainerAllocator>>> & _arg)
  {
    this->enabledlanes = _arg;
    return *this;
  }
  Type & set__states(
    const std::vector<v2x_msg::msg::MovementState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::MovementState_<ContainerAllocator>>> & _arg)
  {
    this->states = _arg;
    return *this;
  }
  Type & set__maneuverassistlist(
    const std::vector<v2x_msg::msg::ConnectionManeuverAssist_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::ConnectionManeuverAssist_<ContainerAllocator>>> & _arg)
  {
    this->maneuverassistlist = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::IntersectionState_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::IntersectionState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::IntersectionState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::IntersectionState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::IntersectionState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::IntersectionState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::IntersectionState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::IntersectionState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::IntersectionState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::IntersectionState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__IntersectionState
    std::shared_ptr<v2x_msg::msg::IntersectionState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__IntersectionState
    std::shared_ptr<v2x_msg::msg::IntersectionState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IntersectionState_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->revision != other.revision) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->moy != other.moy) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->enabledlanes != other.enabledlanes) {
      return false;
    }
    if (this->states != other.states) {
      return false;
    }
    if (this->maneuverassistlist != other.maneuverassistlist) {
      return false;
    }
    return true;
  }
  bool operator!=(const IntersectionState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IntersectionState_

// alias to use template instance with default allocator
using IntersectionState =
  v2x_msg::msg::IntersectionState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__INTERSECTION_STATE__STRUCT_HPP_
