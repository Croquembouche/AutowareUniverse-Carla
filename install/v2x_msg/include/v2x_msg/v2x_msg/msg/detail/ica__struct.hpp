// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/ICA.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ICA__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__ICA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'partone'
#include "v2x_msg/msg/detail/bsm_core_data__struct.hpp"
// Member 'path'
#include "v2x_msg/msg/detail/path_history__struct.hpp"
// Member 'pathprediction'
#include "v2x_msg/msg/detail/path_prediction__struct.hpp"
// Member 'intersectionid'
#include "v2x_msg/msg/detail/intersection_reference_id__struct.hpp"
// Member 'lanenumber'
#include "v2x_msg/msg/detail/approach_or_lane__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__ICA __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__ICA __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ICA_
{
  using Type = ICA_<ContainerAllocator>;

  explicit ICA_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : partone(_init),
    path(_init),
    pathprediction(_init),
    intersectionid(_init),
    lanenumber(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msgcnt = 0ll;
      this->id = "";
      this->timestamp = 0ll;
      this->eventflag = "";
    }
  }

  explicit ICA_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    partone(_alloc, _init),
    path(_alloc, _init),
    pathprediction(_alloc, _init),
    intersectionid(_alloc, _init),
    lanenumber(_alloc, _init),
    eventflag(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msgcnt = 0ll;
      this->id = "";
      this->timestamp = 0ll;
      this->eventflag = "";
    }
  }

  // field types and members
  using _msgcnt_type =
    int64_t;
  _msgcnt_type msgcnt;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _timestamp_type =
    int64_t;
  _timestamp_type timestamp;
  using _partone_type =
    v2x_msg::msg::BSMCoreData_<ContainerAllocator>;
  _partone_type partone;
  using _path_type =
    v2x_msg::msg::PathHistory_<ContainerAllocator>;
  _path_type path;
  using _pathprediction_type =
    v2x_msg::msg::PathPrediction_<ContainerAllocator>;
  _pathprediction_type pathprediction;
  using _intersectionid_type =
    v2x_msg::msg::IntersectionReferenceID_<ContainerAllocator>;
  _intersectionid_type intersectionid;
  using _lanenumber_type =
    v2x_msg::msg::ApproachOrLane_<ContainerAllocator>;
  _lanenumber_type lanenumber;
  using _eventflag_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _eventflag_type eventflag;

  // setters for named parameter idiom
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
  Type & set__timestamp(
    const int64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__partone(
    const v2x_msg::msg::BSMCoreData_<ContainerAllocator> & _arg)
  {
    this->partone = _arg;
    return *this;
  }
  Type & set__path(
    const v2x_msg::msg::PathHistory_<ContainerAllocator> & _arg)
  {
    this->path = _arg;
    return *this;
  }
  Type & set__pathprediction(
    const v2x_msg::msg::PathPrediction_<ContainerAllocator> & _arg)
  {
    this->pathprediction = _arg;
    return *this;
  }
  Type & set__intersectionid(
    const v2x_msg::msg::IntersectionReferenceID_<ContainerAllocator> & _arg)
  {
    this->intersectionid = _arg;
    return *this;
  }
  Type & set__lanenumber(
    const v2x_msg::msg::ApproachOrLane_<ContainerAllocator> & _arg)
  {
    this->lanenumber = _arg;
    return *this;
  }
  Type & set__eventflag(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->eventflag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::ICA_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::ICA_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::ICA_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::ICA_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::ICA_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::ICA_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::ICA_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::ICA_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::ICA_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::ICA_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__ICA
    std::shared_ptr<v2x_msg::msg::ICA_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__ICA
    std::shared_ptr<v2x_msg::msg::ICA_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ICA_ & other) const
  {
    if (this->msgcnt != other.msgcnt) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->partone != other.partone) {
      return false;
    }
    if (this->path != other.path) {
      return false;
    }
    if (this->pathprediction != other.pathprediction) {
      return false;
    }
    if (this->intersectionid != other.intersectionid) {
      return false;
    }
    if (this->lanenumber != other.lanenumber) {
      return false;
    }
    if (this->eventflag != other.eventflag) {
      return false;
    }
    return true;
  }
  bool operator!=(const ICA_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ICA_

// alias to use template instance with default allocator
using ICA =
  v2x_msg::msg::ICA_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__ICA__STRUCT_HPP_
