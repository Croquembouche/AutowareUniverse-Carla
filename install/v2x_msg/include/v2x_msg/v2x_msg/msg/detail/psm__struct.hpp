// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/PSM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PSM__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__PSM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "v2x_msg/msg/detail/position3_d__struct.hpp"
// Member 'accuracy'
#include "v2x_msg/msg/detail/positional_accuracy__struct.hpp"
// Member 'accelset'
#include "v2x_msg/msg/detail/acceleration_set4_way__struct.hpp"
// Member 'pathhistory'
#include "v2x_msg/msg/detail/path_history__struct.hpp"
// Member 'pathprediction'
#include "v2x_msg/msg/detail/path_prediction__struct.hpp"
// Member 'propulsion'
#include "v2x_msg/msg/detail/propelled_information__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__PSM __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__PSM __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PSM_
{
  using Type = PSM_<ContainerAllocator>;

  explicit PSM_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init),
    accuracy(_init),
    accelset(_init),
    pathhistory(_init),
    pathprediction(_init),
    propulsion(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->basictype = 0ll;
      this->secmark = 0ll;
      this->msgcnt = 0ll;
      this->id = "";
      this->speed = 0ll;
      this->heading = 0ll;
      this->usestate = "";
      this->crossrequest = false;
      this->crossstate = false;
      this->clustersize = 0ll;
      this->clusterradius = 0ll;
      this->eventrespondertype = 0ll;
      this->activitytype = "";
      this->activitysubtype = "";
      this->assisttype = "";
      this->sizing = "";
      this->attachment = 0ll;
      this->attachmentradius = 0ll;
      this->animaltype = 0ll;
    }
  }

  explicit PSM_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    position(_alloc, _init),
    accuracy(_alloc, _init),
    accelset(_alloc, _init),
    pathhistory(_alloc, _init),
    pathprediction(_alloc, _init),
    propulsion(_alloc, _init),
    usestate(_alloc),
    activitytype(_alloc),
    activitysubtype(_alloc),
    assisttype(_alloc),
    sizing(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->basictype = 0ll;
      this->secmark = 0ll;
      this->msgcnt = 0ll;
      this->id = "";
      this->speed = 0ll;
      this->heading = 0ll;
      this->usestate = "";
      this->crossrequest = false;
      this->crossstate = false;
      this->clustersize = 0ll;
      this->clusterradius = 0ll;
      this->eventrespondertype = 0ll;
      this->activitytype = "";
      this->activitysubtype = "";
      this->assisttype = "";
      this->sizing = "";
      this->attachment = 0ll;
      this->attachmentradius = 0ll;
      this->animaltype = 0ll;
    }
  }

  // field types and members
  using _basictype_type =
    int64_t;
  _basictype_type basictype;
  using _secmark_type =
    int64_t;
  _secmark_type secmark;
  using _msgcnt_type =
    int64_t;
  _msgcnt_type msgcnt;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _position_type =
    v2x_msg::msg::Position3D_<ContainerAllocator>;
  _position_type position;
  using _accuracy_type =
    v2x_msg::msg::PositionalAccuracy_<ContainerAllocator>;
  _accuracy_type accuracy;
  using _speed_type =
    int64_t;
  _speed_type speed;
  using _heading_type =
    int64_t;
  _heading_type heading;
  using _accelset_type =
    v2x_msg::msg::AccelerationSet4Way_<ContainerAllocator>;
  _accelset_type accelset;
  using _pathhistory_type =
    v2x_msg::msg::PathHistory_<ContainerAllocator>;
  _pathhistory_type pathhistory;
  using _pathprediction_type =
    v2x_msg::msg::PathPrediction_<ContainerAllocator>;
  _pathprediction_type pathprediction;
  using _propulsion_type =
    v2x_msg::msg::PropelledInformation_<ContainerAllocator>;
  _propulsion_type propulsion;
  using _usestate_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _usestate_type usestate;
  using _crossrequest_type =
    bool;
  _crossrequest_type crossrequest;
  using _crossstate_type =
    bool;
  _crossstate_type crossstate;
  using _clustersize_type =
    int64_t;
  _clustersize_type clustersize;
  using _clusterradius_type =
    int64_t;
  _clusterradius_type clusterradius;
  using _eventrespondertype_type =
    int64_t;
  _eventrespondertype_type eventrespondertype;
  using _activitytype_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _activitytype_type activitytype;
  using _activitysubtype_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _activitysubtype_type activitysubtype;
  using _assisttype_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _assisttype_type assisttype;
  using _sizing_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sizing_type sizing;
  using _attachment_type =
    int64_t;
  _attachment_type attachment;
  using _attachmentradius_type =
    int64_t;
  _attachmentradius_type attachmentradius;
  using _animaltype_type =
    int64_t;
  _animaltype_type animaltype;

  // setters for named parameter idiom
  Type & set__basictype(
    const int64_t & _arg)
  {
    this->basictype = _arg;
    return *this;
  }
  Type & set__secmark(
    const int64_t & _arg)
  {
    this->secmark = _arg;
    return *this;
  }
  Type & set__msgcnt(
    const int64_t & _arg)
  {
    this->msgcnt = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__position(
    const v2x_msg::msg::Position3D_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__accuracy(
    const v2x_msg::msg::PositionalAccuracy_<ContainerAllocator> & _arg)
  {
    this->accuracy = _arg;
    return *this;
  }
  Type & set__speed(
    const int64_t & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__heading(
    const int64_t & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__accelset(
    const v2x_msg::msg::AccelerationSet4Way_<ContainerAllocator> & _arg)
  {
    this->accelset = _arg;
    return *this;
  }
  Type & set__pathhistory(
    const v2x_msg::msg::PathHistory_<ContainerAllocator> & _arg)
  {
    this->pathhistory = _arg;
    return *this;
  }
  Type & set__pathprediction(
    const v2x_msg::msg::PathPrediction_<ContainerAllocator> & _arg)
  {
    this->pathprediction = _arg;
    return *this;
  }
  Type & set__propulsion(
    const v2x_msg::msg::PropelledInformation_<ContainerAllocator> & _arg)
  {
    this->propulsion = _arg;
    return *this;
  }
  Type & set__usestate(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->usestate = _arg;
    return *this;
  }
  Type & set__crossrequest(
    const bool & _arg)
  {
    this->crossrequest = _arg;
    return *this;
  }
  Type & set__crossstate(
    const bool & _arg)
  {
    this->crossstate = _arg;
    return *this;
  }
  Type & set__clustersize(
    const int64_t & _arg)
  {
    this->clustersize = _arg;
    return *this;
  }
  Type & set__clusterradius(
    const int64_t & _arg)
  {
    this->clusterradius = _arg;
    return *this;
  }
  Type & set__eventrespondertype(
    const int64_t & _arg)
  {
    this->eventrespondertype = _arg;
    return *this;
  }
  Type & set__activitytype(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->activitytype = _arg;
    return *this;
  }
  Type & set__activitysubtype(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->activitysubtype = _arg;
    return *this;
  }
  Type & set__assisttype(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->assisttype = _arg;
    return *this;
  }
  Type & set__sizing(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sizing = _arg;
    return *this;
  }
  Type & set__attachment(
    const int64_t & _arg)
  {
    this->attachment = _arg;
    return *this;
  }
  Type & set__attachmentradius(
    const int64_t & _arg)
  {
    this->attachmentradius = _arg;
    return *this;
  }
  Type & set__animaltype(
    const int64_t & _arg)
  {
    this->animaltype = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::PSM_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::PSM_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::PSM_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::PSM_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::PSM_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::PSM_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::PSM_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::PSM_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::PSM_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::PSM_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__PSM
    std::shared_ptr<v2x_msg::msg::PSM_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__PSM
    std::shared_ptr<v2x_msg::msg::PSM_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PSM_ & other) const
  {
    if (this->basictype != other.basictype) {
      return false;
    }
    if (this->secmark != other.secmark) {
      return false;
    }
    if (this->msgcnt != other.msgcnt) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->accuracy != other.accuracy) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->accelset != other.accelset) {
      return false;
    }
    if (this->pathhistory != other.pathhistory) {
      return false;
    }
    if (this->pathprediction != other.pathprediction) {
      return false;
    }
    if (this->propulsion != other.propulsion) {
      return false;
    }
    if (this->usestate != other.usestate) {
      return false;
    }
    if (this->crossrequest != other.crossrequest) {
      return false;
    }
    if (this->crossstate != other.crossstate) {
      return false;
    }
    if (this->clustersize != other.clustersize) {
      return false;
    }
    if (this->clusterradius != other.clusterradius) {
      return false;
    }
    if (this->eventrespondertype != other.eventrespondertype) {
      return false;
    }
    if (this->activitytype != other.activitytype) {
      return false;
    }
    if (this->activitysubtype != other.activitysubtype) {
      return false;
    }
    if (this->assisttype != other.assisttype) {
      return false;
    }
    if (this->sizing != other.sizing) {
      return false;
    }
    if (this->attachment != other.attachment) {
      return false;
    }
    if (this->attachmentradius != other.attachmentradius) {
      return false;
    }
    if (this->animaltype != other.animaltype) {
      return false;
    }
    return true;
  }
  bool operator!=(const PSM_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PSM_

// alias to use template instance with default allocator
using PSM =
  v2x_msg::msg::PSM_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__PSM__STRUCT_HPP_
