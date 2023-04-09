// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/GenericLane.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__GENERIC_LANE__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__GENERIC_LANE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'laneattributes'
#include "v2x_msg/msg/detail/lane_attributes__struct.hpp"
// Member 'nodelist'
#include "v2x_msg/msg/detail/node_list_xy__struct.hpp"
// Member 'connectsto'
#include "v2x_msg/msg/detail/connection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__GenericLane __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__GenericLane __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GenericLane_
{
  using Type = GenericLane_<ContainerAllocator>;

  explicit GenericLane_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : laneattributes(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->laneid = 0ll;
      this->name = "";
      this->ingressapproach = 0ll;
      this->egressapproach = 0ll;
      this->maneuvers = "";
    }
  }

  explicit GenericLane_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    laneattributes(_alloc, _init),
    maneuvers(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->laneid = 0ll;
      this->name = "";
      this->ingressapproach = 0ll;
      this->egressapproach = 0ll;
      this->maneuvers = "";
    }
  }

  // field types and members
  using _laneid_type =
    int64_t;
  _laneid_type laneid;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _ingressapproach_type =
    int64_t;
  _ingressapproach_type ingressapproach;
  using _egressapproach_type =
    int64_t;
  _egressapproach_type egressapproach;
  using _laneattributes_type =
    v2x_msg::msg::LaneAttributes_<ContainerAllocator>;
  _laneattributes_type laneattributes;
  using _maneuvers_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _maneuvers_type maneuvers;
  using _nodelist_type =
    std::vector<v2x_msg::msg::NodeListXY_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::NodeListXY_<ContainerAllocator>>>;
  _nodelist_type nodelist;
  using _connectsto_type =
    std::vector<v2x_msg::msg::Connection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::Connection_<ContainerAllocator>>>;
  _connectsto_type connectsto;
  using _overlays_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _overlays_type overlays;

  // setters for named parameter idiom
  Type & set__laneid(
    const int64_t & _arg)
  {
    this->laneid = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__ingressapproach(
    const int64_t & _arg)
  {
    this->ingressapproach = _arg;
    return *this;
  }
  Type & set__egressapproach(
    const int64_t & _arg)
  {
    this->egressapproach = _arg;
    return *this;
  }
  Type & set__laneattributes(
    const v2x_msg::msg::LaneAttributes_<ContainerAllocator> & _arg)
  {
    this->laneattributes = _arg;
    return *this;
  }
  Type & set__maneuvers(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->maneuvers = _arg;
    return *this;
  }
  Type & set__nodelist(
    const std::vector<v2x_msg::msg::NodeListXY_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::NodeListXY_<ContainerAllocator>>> & _arg)
  {
    this->nodelist = _arg;
    return *this;
  }
  Type & set__connectsto(
    const std::vector<v2x_msg::msg::Connection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::Connection_<ContainerAllocator>>> & _arg)
  {
    this->connectsto = _arg;
    return *this;
  }
  Type & set__overlays(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->overlays = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::GenericLane_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::GenericLane_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::GenericLane_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::GenericLane_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::GenericLane_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::GenericLane_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::GenericLane_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::GenericLane_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::GenericLane_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::GenericLane_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__GenericLane
    std::shared_ptr<v2x_msg::msg::GenericLane_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__GenericLane
    std::shared_ptr<v2x_msg::msg::GenericLane_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenericLane_ & other) const
  {
    if (this->laneid != other.laneid) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->ingressapproach != other.ingressapproach) {
      return false;
    }
    if (this->egressapproach != other.egressapproach) {
      return false;
    }
    if (this->laneattributes != other.laneattributes) {
      return false;
    }
    if (this->maneuvers != other.maneuvers) {
      return false;
    }
    if (this->nodelist != other.nodelist) {
      return false;
    }
    if (this->connectsto != other.connectsto) {
      return false;
    }
    if (this->overlays != other.overlays) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenericLane_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenericLane_

// alias to use template instance with default allocator
using GenericLane =
  v2x_msg::msg::GenericLane_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__GENERIC_LANE__STRUCT_HPP_
