// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/RoadSegmentReferenceID.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ROAD_SEGMENT_REFERENCE_ID__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__ROAD_SEGMENT_REFERENCE_ID__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__RoadSegmentReferenceID __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__RoadSegmentReferenceID __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoadSegmentReferenceID_
{
  using Type = RoadSegmentReferenceID_<ContainerAllocator>;

  explicit RoadSegmentReferenceID_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roadregulatorid = 0ll;
      this->roadsegmentid = 0ll;
    }
  }

  explicit RoadSegmentReferenceID_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roadregulatorid = 0ll;
      this->roadsegmentid = 0ll;
    }
  }

  // field types and members
  using _roadregulatorid_type =
    int64_t;
  _roadregulatorid_type roadregulatorid;
  using _roadsegmentid_type =
    int64_t;
  _roadsegmentid_type roadsegmentid;

  // setters for named parameter idiom
  Type & set__roadregulatorid(
    const int64_t & _arg)
  {
    this->roadregulatorid = _arg;
    return *this;
  }
  Type & set__roadsegmentid(
    const int64_t & _arg)
  {
    this->roadsegmentid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::RoadSegmentReferenceID_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::RoadSegmentReferenceID_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::RoadSegmentReferenceID_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::RoadSegmentReferenceID_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::RoadSegmentReferenceID_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::RoadSegmentReferenceID_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::RoadSegmentReferenceID_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::RoadSegmentReferenceID_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::RoadSegmentReferenceID_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::RoadSegmentReferenceID_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__RoadSegmentReferenceID
    std::shared_ptr<v2x_msg::msg::RoadSegmentReferenceID_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__RoadSegmentReferenceID
    std::shared_ptr<v2x_msg::msg::RoadSegmentReferenceID_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoadSegmentReferenceID_ & other) const
  {
    if (this->roadregulatorid != other.roadregulatorid) {
      return false;
    }
    if (this->roadsegmentid != other.roadsegmentid) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoadSegmentReferenceID_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoadSegmentReferenceID_

// alias to use template instance with default allocator
using RoadSegmentReferenceID =
  v2x_msg::msg::RoadSegmentReferenceID_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__ROAD_SEGMENT_REFERENCE_ID__STRUCT_HPP_
