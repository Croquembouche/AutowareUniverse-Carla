// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/RoadSegment.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ROAD_SEGMENT__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__ROAD_SEGMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'id'
#include "v2x_msg/msg/detail/road_segment_reference_id__struct.hpp"
// Member 'refpoint'
#include "v2x_msg/msg/detail/position3_d__struct.hpp"
// Member 'speedlimits'
#include "v2x_msg/msg/detail/speed_limit__struct.hpp"
// Member 'roadlaneset'
#include "v2x_msg/msg/detail/generic_lane__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__RoadSegment __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__RoadSegment __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoadSegment_
{
  using Type = RoadSegment_<ContainerAllocator>;

  explicit RoadSegment_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_init),
    refpoint(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->revision = 0ll;
      this->lanewidth = 0ll;
    }
  }

  explicit RoadSegment_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    id(_alloc, _init),
    refpoint(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->revision = 0ll;
      this->lanewidth = 0ll;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _id_type =
    v2x_msg::msg::RoadSegmentReferenceID_<ContainerAllocator>;
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
  using _roadlaneset_type =
    std::vector<v2x_msg::msg::GenericLane_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::GenericLane_<ContainerAllocator>>>;
  _roadlaneset_type roadlaneset;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__id(
    const v2x_msg::msg::RoadSegmentReferenceID_<ContainerAllocator> & _arg)
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
  Type & set__roadlaneset(
    const std::vector<v2x_msg::msg::GenericLane_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::GenericLane_<ContainerAllocator>>> & _arg)
  {
    this->roadlaneset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::RoadSegment_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::RoadSegment_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::RoadSegment_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::RoadSegment_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::RoadSegment_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::RoadSegment_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::RoadSegment_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::RoadSegment_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::RoadSegment_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::RoadSegment_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__RoadSegment
    std::shared_ptr<v2x_msg::msg::RoadSegment_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__RoadSegment
    std::shared_ptr<v2x_msg::msg::RoadSegment_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoadSegment_ & other) const
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
    if (this->roadlaneset != other.roadlaneset) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoadSegment_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoadSegment_

// alias to use template instance with default allocator
using RoadSegment =
  v2x_msg::msg::RoadSegment_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__ROAD_SEGMENT__STRUCT_HPP_
