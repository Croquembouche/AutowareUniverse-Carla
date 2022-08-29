// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/IntersectionGeometry.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__INTERSECTION_GEOMETRY__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__INTERSECTION_GEOMETRY__STRUCT_HPP_

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
// Member 'refpoint'
#include "v2x_msg/msg/detail/position3_d__struct.hpp"
// Member 'speedlimits'
#include "v2x_msg/msg/detail/speed_limit__struct.hpp"
// Member 'laneset'
#include "v2x_msg/msg/detail/generic_lane__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__IntersectionGeometry __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__IntersectionGeometry __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IntersectionGeometry_
{
  using Type = IntersectionGeometry_<ContainerAllocator>;

  explicit IntersectionGeometry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_init),
    refpoint(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->revision = 0ll;
      this->lanewidth = 0ll;
      this->preemptprioritydata = "";
    }
  }

  explicit IntersectionGeometry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    id(_alloc, _init),
    refpoint(_alloc, _init),
    preemptprioritydata(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->revision = 0ll;
      this->lanewidth = 0ll;
      this->preemptprioritydata = "";
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
  using _refpoint_type =
    v2x_msg::msg::Position3D_<ContainerAllocator>;
  _refpoint_type refpoint;
  using _lanewidth_type =
    int64_t;
  _lanewidth_type lanewidth;
  using _speedlimits_type =
    std::vector<v2x_msg::msg::SpeedLimit_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::SpeedLimit_<ContainerAllocator>>>;
  _speedlimits_type speedlimits;
  using _laneset_type =
    std::vector<v2x_msg::msg::GenericLane_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::GenericLane_<ContainerAllocator>>>;
  _laneset_type laneset;
  using _preemptprioritydata_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _preemptprioritydata_type preemptprioritydata;

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
  Type & set__refpoint(
    const v2x_msg::msg::Position3D_<ContainerAllocator> & _arg)
  {
    this->refpoint = _arg;
    return *this;
  }
  Type & set__lanewidth(
    const int64_t & _arg)
  {
    this->lanewidth = _arg;
    return *this;
  }
  Type & set__speedlimits(
    const std::vector<v2x_msg::msg::SpeedLimit_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::SpeedLimit_<ContainerAllocator>>> & _arg)
  {
    this->speedlimits = _arg;
    return *this;
  }
  Type & set__laneset(
    const std::vector<v2x_msg::msg::GenericLane_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::GenericLane_<ContainerAllocator>>> & _arg)
  {
    this->laneset = _arg;
    return *this;
  }
  Type & set__preemptprioritydata(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->preemptprioritydata = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::IntersectionGeometry_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::IntersectionGeometry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::IntersectionGeometry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::IntersectionGeometry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::IntersectionGeometry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::IntersectionGeometry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::IntersectionGeometry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::IntersectionGeometry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::IntersectionGeometry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::IntersectionGeometry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__IntersectionGeometry
    std::shared_ptr<v2x_msg::msg::IntersectionGeometry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__IntersectionGeometry
    std::shared_ptr<v2x_msg::msg::IntersectionGeometry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IntersectionGeometry_ & other) const
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
    if (this->refpoint != other.refpoint) {
      return false;
    }
    if (this->lanewidth != other.lanewidth) {
      return false;
    }
    if (this->speedlimits != other.speedlimits) {
      return false;
    }
    if (this->laneset != other.laneset) {
      return false;
    }
    if (this->preemptprioritydata != other.preemptprioritydata) {
      return false;
    }
    return true;
  }
  bool operator!=(const IntersectionGeometry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IntersectionGeometry_

// alias to use template instance with default allocator
using IntersectionGeometry =
  v2x_msg::msg::IntersectionGeometry_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__INTERSECTION_GEOMETRY__STRUCT_HPP_
