// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_planning_msgs:action/PlanTrajectory.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__ACTION__DETAIL__PLAN_TRAJECTORY__STRUCT_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__ACTION__DETAIL__PLAN_TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'sub_route'
#include "autoware_auto_planning_msgs/msg/detail/had_map_route__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_Goal __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_Goal __declspec(deprecated)
#endif

namespace autoware_auto_planning_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PlanTrajectory_Goal_
{
  using Type = PlanTrajectory_Goal_<ContainerAllocator>;

  explicit PlanTrajectory_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sub_route(_init)
  {
    (void)_init;
  }

  explicit PlanTrajectory_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sub_route(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _sub_route_type =
    autoware_auto_planning_msgs::msg::HADMapRoute_<ContainerAllocator>;
  _sub_route_type sub_route;

  // setters for named parameter idiom
  Type & set__sub_route(
    const autoware_auto_planning_msgs::msg::HADMapRoute_<ContainerAllocator> & _arg)
  {
    this->sub_route = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_planning_msgs::action::PlanTrajectory_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_planning_msgs::action::PlanTrajectory_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::PlanTrajectory_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::PlanTrajectory_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_Goal
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_Goal
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanTrajectory_Goal_ & other) const
  {
    if (this->sub_route != other.sub_route) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanTrajectory_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanTrajectory_Goal_

// alias to use template instance with default allocator
using PlanTrajectory_Goal =
  autoware_auto_planning_msgs::action::PlanTrajectory_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace autoware_auto_planning_msgs


// Include directives for member types
// Member 'trajectory'
#include "autoware_auto_planning_msgs/msg/detail/trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_Result __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_Result __declspec(deprecated)
#endif

namespace autoware_auto_planning_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PlanTrajectory_Result_
{
  using Type = PlanTrajectory_Result_<ContainerAllocator>;

  explicit PlanTrajectory_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  explicit PlanTrajectory_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  // field types and members
  using _result_type =
    uint8_t;
  _result_type result;
  using _trajectory_type =
    autoware_auto_planning_msgs::msg::Trajectory_<ContainerAllocator>;
  _trajectory_type trajectory;

  // setters for named parameter idiom
  Type & set__result(
    const uint8_t & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__trajectory(
    const autoware_auto_planning_msgs::msg::Trajectory_<ContainerAllocator> & _arg)
  {
    this->trajectory = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SUCCESS =
    0u;
  static constexpr uint8_t FAIL =
    1u;

  // pointer types
  using RawPtr =
    autoware_auto_planning_msgs::action::PlanTrajectory_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_planning_msgs::action::PlanTrajectory_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::PlanTrajectory_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::PlanTrajectory_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_Result
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_Result
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanTrajectory_Result_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->trajectory != other.trajectory) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanTrajectory_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanTrajectory_Result_

// alias to use template instance with default allocator
using PlanTrajectory_Result =
  autoware_auto_planning_msgs::action::PlanTrajectory_Result_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanTrajectory_Result_<ContainerAllocator>::SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanTrajectory_Result_<ContainerAllocator>::FAIL;
#endif  // __cplusplus < 201703L

}  // namespace action

}  // namespace autoware_auto_planning_msgs


#ifndef _WIN32
# define DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_Feedback __declspec(deprecated)
#endif

namespace autoware_auto_planning_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PlanTrajectory_Feedback_
{
  using Type = PlanTrajectory_Feedback_<ContainerAllocator>;

  explicit PlanTrajectory_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unused_variable = 0;
    }
  }

  explicit PlanTrajectory_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->unused_variable = 0;
    }
  }

  // field types and members
  using _unused_variable_type =
    uint8_t;
  _unused_variable_type unused_variable;

  // setters for named parameter idiom
  Type & set__unused_variable(
    const uint8_t & _arg)
  {
    this->unused_variable = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_planning_msgs::action::PlanTrajectory_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_planning_msgs::action::PlanTrajectory_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::PlanTrajectory_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::PlanTrajectory_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_Feedback
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_Feedback
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanTrajectory_Feedback_ & other) const
  {
    if (this->unused_variable != other.unused_variable) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanTrajectory_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanTrajectory_Feedback_

// alias to use template instance with default allocator
using PlanTrajectory_Feedback =
  autoware_auto_planning_msgs::action::PlanTrajectory_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace autoware_auto_planning_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "autoware_auto_planning_msgs/action/detail/plan_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request __declspec(deprecated)
#endif

namespace autoware_auto_planning_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PlanTrajectory_SendGoal_Request_
{
  using Type = PlanTrajectory_SendGoal_Request_<ContainerAllocator>;

  explicit PlanTrajectory_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit PlanTrajectory_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    autoware_auto_planning_msgs::action::PlanTrajectory_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const autoware_auto_planning_msgs::action::PlanTrajectory_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_planning_msgs::action::PlanTrajectory_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_planning_msgs::action::PlanTrajectory_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::PlanTrajectory_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::PlanTrajectory_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanTrajectory_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanTrajectory_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanTrajectory_SendGoal_Request_

// alias to use template instance with default allocator
using PlanTrajectory_SendGoal_Request =
  autoware_auto_planning_msgs::action::PlanTrajectory_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace autoware_auto_planning_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response __declspec(deprecated)
#endif

namespace autoware_auto_planning_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PlanTrajectory_SendGoal_Response_
{
  using Type = PlanTrajectory_SendGoal_Response_<ContainerAllocator>;

  explicit PlanTrajectory_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit PlanTrajectory_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_planning_msgs::action::PlanTrajectory_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_planning_msgs::action::PlanTrajectory_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::PlanTrajectory_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::PlanTrajectory_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanTrajectory_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanTrajectory_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanTrajectory_SendGoal_Response_

// alias to use template instance with default allocator
using PlanTrajectory_SendGoal_Response =
  autoware_auto_planning_msgs::action::PlanTrajectory_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace autoware_auto_planning_msgs

namespace autoware_auto_planning_msgs
{

namespace action
{

struct PlanTrajectory_SendGoal
{
  using Request = autoware_auto_planning_msgs::action::PlanTrajectory_SendGoal_Request;
  using Response = autoware_auto_planning_msgs::action::PlanTrajectory_SendGoal_Response;
};

}  // namespace action

}  // namespace autoware_auto_planning_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request __declspec(deprecated)
#endif

namespace autoware_auto_planning_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PlanTrajectory_GetResult_Request_
{
  using Type = PlanTrajectory_GetResult_Request_<ContainerAllocator>;

  explicit PlanTrajectory_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit PlanTrajectory_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_planning_msgs::action::PlanTrajectory_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_planning_msgs::action::PlanTrajectory_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::PlanTrajectory_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::PlanTrajectory_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanTrajectory_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanTrajectory_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanTrajectory_GetResult_Request_

// alias to use template instance with default allocator
using PlanTrajectory_GetResult_Request =
  autoware_auto_planning_msgs::action::PlanTrajectory_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace autoware_auto_planning_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "autoware_auto_planning_msgs/action/detail/plan_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response __declspec(deprecated)
#endif

namespace autoware_auto_planning_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PlanTrajectory_GetResult_Response_
{
  using Type = PlanTrajectory_GetResult_Response_<ContainerAllocator>;

  explicit PlanTrajectory_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit PlanTrajectory_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    autoware_auto_planning_msgs::action::PlanTrajectory_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const autoware_auto_planning_msgs::action::PlanTrajectory_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_planning_msgs::action::PlanTrajectory_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_planning_msgs::action::PlanTrajectory_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::PlanTrajectory_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::PlanTrajectory_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanTrajectory_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanTrajectory_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanTrajectory_GetResult_Response_

// alias to use template instance with default allocator
using PlanTrajectory_GetResult_Response =
  autoware_auto_planning_msgs::action::PlanTrajectory_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace autoware_auto_planning_msgs

namespace autoware_auto_planning_msgs
{

namespace action
{

struct PlanTrajectory_GetResult
{
  using Request = autoware_auto_planning_msgs::action::PlanTrajectory_GetResult_Request;
  using Response = autoware_auto_planning_msgs::action::PlanTrajectory_GetResult_Response;
};

}  // namespace action

}  // namespace autoware_auto_planning_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "autoware_auto_planning_msgs/action/detail/plan_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage __declspec(deprecated)
#endif

namespace autoware_auto_planning_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct PlanTrajectory_FeedbackMessage_
{
  using Type = PlanTrajectory_FeedbackMessage_<ContainerAllocator>;

  explicit PlanTrajectory_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit PlanTrajectory_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    autoware_auto_planning_msgs::action::PlanTrajectory_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const autoware_auto_planning_msgs::action::PlanTrajectory_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_planning_msgs::action::PlanTrajectory_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_planning_msgs::action::PlanTrajectory_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::PlanTrajectory_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::action::PlanTrajectory_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage
    std::shared_ptr<autoware_auto_planning_msgs::action::PlanTrajectory_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanTrajectory_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanTrajectory_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanTrajectory_FeedbackMessage_

// alias to use template instance with default allocator
using PlanTrajectory_FeedbackMessage =
  autoware_auto_planning_msgs::action::PlanTrajectory_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace autoware_auto_planning_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace autoware_auto_planning_msgs
{

namespace action
{

struct PlanTrajectory
{
  /// The goal message defined in the action definition.
  using Goal = autoware_auto_planning_msgs::action::PlanTrajectory_Goal;
  /// The result message defined in the action definition.
  using Result = autoware_auto_planning_msgs::action::PlanTrajectory_Result;
  /// The feedback message defined in the action definition.
  using Feedback = autoware_auto_planning_msgs::action::PlanTrajectory_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = autoware_auto_planning_msgs::action::PlanTrajectory_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = autoware_auto_planning_msgs::action::PlanTrajectory_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = autoware_auto_planning_msgs::action::PlanTrajectory_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct PlanTrajectory PlanTrajectory;

}  // namespace action

}  // namespace autoware_auto_planning_msgs

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__ACTION__DETAIL__PLAN_TRAJECTORY__STRUCT_HPP_
