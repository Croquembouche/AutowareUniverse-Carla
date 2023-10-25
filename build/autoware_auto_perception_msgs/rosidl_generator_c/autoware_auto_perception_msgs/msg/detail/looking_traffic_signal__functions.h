// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from autoware_auto_perception_msgs:msg/LookingTrafficSignal.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__LOOKING_TRAFFIC_SIGNAL__FUNCTIONS_H_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__LOOKING_TRAFFIC_SIGNAL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "autoware_auto_perception_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "autoware_auto_perception_msgs/msg/detail/looking_traffic_signal__struct.h"

/// Initialize msg/LookingTrafficSignal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * autoware_auto_perception_msgs__msg__LookingTrafficSignal
 * )) before or use
 * autoware_auto_perception_msgs__msg__LookingTrafficSignal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_perception_msgs
bool
autoware_auto_perception_msgs__msg__LookingTrafficSignal__init(autoware_auto_perception_msgs__msg__LookingTrafficSignal * msg);

/// Finalize msg/LookingTrafficSignal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_perception_msgs
void
autoware_auto_perception_msgs__msg__LookingTrafficSignal__fini(autoware_auto_perception_msgs__msg__LookingTrafficSignal * msg);

/// Create msg/LookingTrafficSignal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * autoware_auto_perception_msgs__msg__LookingTrafficSignal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_perception_msgs
autoware_auto_perception_msgs__msg__LookingTrafficSignal *
autoware_auto_perception_msgs__msg__LookingTrafficSignal__create();

/// Destroy msg/LookingTrafficSignal message.
/**
 * It calls
 * autoware_auto_perception_msgs__msg__LookingTrafficSignal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_perception_msgs
void
autoware_auto_perception_msgs__msg__LookingTrafficSignal__destroy(autoware_auto_perception_msgs__msg__LookingTrafficSignal * msg);

/// Check for msg/LookingTrafficSignal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_perception_msgs
bool
autoware_auto_perception_msgs__msg__LookingTrafficSignal__are_equal(const autoware_auto_perception_msgs__msg__LookingTrafficSignal * lhs, const autoware_auto_perception_msgs__msg__LookingTrafficSignal * rhs);

/// Copy a msg/LookingTrafficSignal message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_perception_msgs
bool
autoware_auto_perception_msgs__msg__LookingTrafficSignal__copy(
  const autoware_auto_perception_msgs__msg__LookingTrafficSignal * input,
  autoware_auto_perception_msgs__msg__LookingTrafficSignal * output);

/// Initialize array of msg/LookingTrafficSignal messages.
/**
 * It allocates the memory for the number of elements and calls
 * autoware_auto_perception_msgs__msg__LookingTrafficSignal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_perception_msgs
bool
autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence__init(autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence * array, size_t size);

/// Finalize array of msg/LookingTrafficSignal messages.
/**
 * It calls
 * autoware_auto_perception_msgs__msg__LookingTrafficSignal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_perception_msgs
void
autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence__fini(autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence * array);

/// Create array of msg/LookingTrafficSignal messages.
/**
 * It allocates the memory for the array and calls
 * autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_perception_msgs
autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence *
autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence__create(size_t size);

/// Destroy array of msg/LookingTrafficSignal messages.
/**
 * It calls
 * autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_perception_msgs
void
autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence__destroy(autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence * array);

/// Check for msg/LookingTrafficSignal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_perception_msgs
bool
autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence__are_equal(const autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence * lhs, const autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence * rhs);

/// Copy an array of msg/LookingTrafficSignal messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_perception_msgs
bool
autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence__copy(
  const autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence * input,
  autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__LOOKING_TRAFFIC_SIGNAL__FUNCTIONS_H_
