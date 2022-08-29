// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/MAP.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__MAP__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__MAP__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'intersections'
#include "v2x_msg/msg/detail/intersection_geometry__struct.hpp"
// Member 'roadsegments'
#include "v2x_msg/msg/detail/road_segment__struct.hpp"
// Member 'dataparameters'
#include "v2x_msg/msg/detail/data_parameters__struct.hpp"
// Member 'restrictionlist'
#include "v2x_msg/msg/detail/restriction_class_assignment__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__MAP __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__MAP __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MAP_
{
  using Type = MAP_<ContainerAllocator>;

  explicit MAP_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : dataparameters(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->msgissuerevision = 0ll;
      this->layertype = 0ll;
      this->layerid = 0ll;
    }
  }

  explicit MAP_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : dataparameters(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->msgissuerevision = 0ll;
      this->layertype = 0ll;
      this->layerid = 0ll;
    }
  }

  // field types and members
  using _timestamp_type =
    int64_t;
  _timestamp_type timestamp;
  using _msgissuerevision_type =
    int64_t;
  _msgissuerevision_type msgissuerevision;
  using _layertype_type =
    int64_t;
  _layertype_type layertype;
  using _layerid_type =
    int64_t;
  _layerid_type layerid;
  using _intersections_type =
    std::vector<v2x_msg::msg::IntersectionGeometry_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::IntersectionGeometry_<ContainerAllocator>>>;
  _intersections_type intersections;
  using _roadsegments_type =
    std::vector<v2x_msg::msg::RoadSegment_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::RoadSegment_<ContainerAllocator>>>;
  _roadsegments_type roadsegments;
  using _dataparameters_type =
    v2x_msg::msg::DataParameters_<ContainerAllocator>;
  _dataparameters_type dataparameters;
  using _restrictionlist_type =
    std::vector<v2x_msg::msg::RestrictionClassAssignment_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::RestrictionClassAssignment_<ContainerAllocator>>>;
  _restrictionlist_type restrictionlist;

  // setters for named parameter idiom
  Type & set__timestamp(
    const int64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__msgissuerevision(
    const int64_t & _arg)
  {
    this->msgissuerevision = _arg;
    return *this;
  }
  Type & set__layertype(
    const int64_t & _arg)
  {
    this->layertype = _arg;
    return *this;
  }
  Type & set__layerid(
    const int64_t & _arg)
  {
    this->layerid = _arg;
    return *this;
  }
  Type & set__intersections(
    const std::vector<v2x_msg::msg::IntersectionGeometry_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::IntersectionGeometry_<ContainerAllocator>>> & _arg)
  {
    this->intersections = _arg;
    return *this;
  }
  Type & set__roadsegments(
    const std::vector<v2x_msg::msg::RoadSegment_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::RoadSegment_<ContainerAllocator>>> & _arg)
  {
    this->roadsegments = _arg;
    return *this;
  }
  Type & set__dataparameters(
    const v2x_msg::msg::DataParameters_<ContainerAllocator> & _arg)
  {
    this->dataparameters = _arg;
    return *this;
  }
  Type & set__restrictionlist(
    const std::vector<v2x_msg::msg::RestrictionClassAssignment_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<v2x_msg::msg::RestrictionClassAssignment_<ContainerAllocator>>> & _arg)
  {
    this->restrictionlist = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::MAP_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::MAP_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::MAP_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::MAP_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::MAP_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::MAP_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::MAP_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::MAP_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::MAP_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::MAP_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__MAP
    std::shared_ptr<v2x_msg::msg::MAP_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__MAP
    std::shared_ptr<v2x_msg::msg::MAP_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MAP_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->msgissuerevision != other.msgissuerevision) {
      return false;
    }
    if (this->layertype != other.layertype) {
      return false;
    }
    if (this->layerid != other.layerid) {
      return false;
    }
    if (this->intersections != other.intersections) {
      return false;
    }
    if (this->roadsegments != other.roadsegments) {
      return false;
    }
    if (this->dataparameters != other.dataparameters) {
      return false;
    }
    if (this->restrictionlist != other.restrictionlist) {
      return false;
    }
    return true;
  }
  bool operator!=(const MAP_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MAP_

// alias to use template instance with default allocator
using MAP =
  v2x_msg::msg::MAP_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__MAP__STRUCT_HPP_
