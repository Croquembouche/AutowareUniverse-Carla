// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/GeographicalPath.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__GEOGRAPHICAL_PATH__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__GEOGRAPHICAL_PATH__STRUCT_HPP_

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
// Member 'anchor'
#include "v2x_msg/msg/detail/position3_d__struct.hpp"
// Member 'description'
#include "v2x_msg/msg/detail/description__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__GeographicalPath __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__GeographicalPath __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GeographicalPath_
{
  using Type = GeographicalPath_<ContainerAllocator>;

  explicit GeographicalPath_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_init),
    anchor(_init),
    description(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->lanewidth = 0ll;
      this->directionality = 0ll;
      this->closedpath = false;
      this->direction = "";
    }
  }

  explicit GeographicalPath_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    id(_alloc, _init),
    anchor(_alloc, _init),
    direction(_alloc),
    description(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->lanewidth = 0ll;
      this->directionality = 0ll;
      this->closedpath = false;
      this->direction = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _id_type =
    v2x_msg::msg::RoadSegmentReferenceID_<ContainerAllocator>;
  _id_type id;
  using _anchor_type =
    v2x_msg::msg::Position3D_<ContainerAllocator>;
  _anchor_type anchor;
  using _lanewidth_type =
    int64_t;
  _lanewidth_type lanewidth;
  using _directionality_type =
    int64_t;
  _directionality_type directionality;
  using _closedpath_type =
    bool;
  _closedpath_type closedpath;
  using _direction_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _direction_type direction;
  using _description_type =
    v2x_msg::msg::Description_<ContainerAllocator>;
  _description_type description;

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
  Type & set__anchor(
    const v2x_msg::msg::Position3D_<ContainerAllocator> & _arg)
  {
    this->anchor = _arg;
    return *this;
  }
  Type & set__lanewidth(
    const int64_t & _arg)
  {
    this->lanewidth = _arg;
    return *this;
  }
  Type & set__directionality(
    const int64_t & _arg)
  {
    this->directionality = _arg;
    return *this;
  }
  Type & set__closedpath(
    const bool & _arg)
  {
    this->closedpath = _arg;
    return *this;
  }
  Type & set__direction(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__description(
    const v2x_msg::msg::Description_<ContainerAllocator> & _arg)
  {
    this->description = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::GeographicalPath_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::GeographicalPath_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::GeographicalPath_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::GeographicalPath_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::GeographicalPath_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::GeographicalPath_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::GeographicalPath_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::GeographicalPath_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::GeographicalPath_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::GeographicalPath_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__GeographicalPath
    std::shared_ptr<v2x_msg::msg::GeographicalPath_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__GeographicalPath
    std::shared_ptr<v2x_msg::msg::GeographicalPath_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GeographicalPath_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->anchor != other.anchor) {
      return false;
    }
    if (this->lanewidth != other.lanewidth) {
      return false;
    }
    if (this->directionality != other.directionality) {
      return false;
    }
    if (this->closedpath != other.closedpath) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    return true;
  }
  bool operator!=(const GeographicalPath_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GeographicalPath_

// alias to use template instance with default allocator
using GeographicalPath =
  v2x_msg::msg::GeographicalPath_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__GEOGRAPHICAL_PATH__STRUCT_HPP_
