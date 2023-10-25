// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from autoware_auto_vehicle_msgs:msg/HandBrakeReport.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HAND_BRAKE_REPORT__FUNCTIONS_H_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HAND_BRAKE_REPORT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "autoware_auto_vehicle_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "autoware_auto_vehicle_msgs/msg/detail/hand_brake_report__struct.h"

/// Initialize msg/HandBrakeReport message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * autoware_auto_vehicle_msgs__msg__HandBrakeReport
 * )) before or use
 * autoware_auto_vehicle_msgs__msg__HandBrakeReport__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_vehicle_msgs
bool
autoware_auto_vehicle_msgs__msg__HandBrakeReport__init(autoware_auto_vehicle_msgs__msg__HandBrakeReport * msg);

/// Finalize msg/HandBrakeReport message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_vehicle_msgs
void
autoware_auto_vehicle_msgs__msg__HandBrakeReport__fini(autoware_auto_vehicle_msgs__msg__HandBrakeReport * msg);

/// Create msg/HandBrakeReport message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * autoware_auto_vehicle_msgs__msg__HandBrakeReport__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_vehicle_msgs
autoware_auto_vehicle_msgs__msg__HandBrakeReport *
autoware_auto_vehicle_msgs__msg__HandBrakeReport__create();

/// Destroy msg/HandBrakeReport message.
/**
 * It calls
 * autoware_auto_vehicle_msgs__msg__HandBrakeReport__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_vehicle_msgs
void
autoware_auto_vehicle_msgs__msg__HandBrakeReport__destroy(autoware_auto_vehicle_msgs__msg__HandBrakeReport * msg);

/// Check for msg/HandBrakeReport message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_vehicle_msgs
bool
autoware_auto_vehicle_msgs__msg__HandBrakeReport__are_equal(const autoware_auto_vehicle_msgs__msg__HandBrakeReport * lhs, const autoware_auto_vehicle_msgs__msg__HandBrakeReport * rhs);

/// Copy a msg/HandBrakeReport message.
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
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_vehicle_msgs
bool
autoware_auto_vehicle_msgs__msg__HandBrakeReport__copy(
  const autoware_auto_vehicle_msgs__msg__HandBrakeReport * input,
  autoware_auto_vehicle_msgs__msg__HandBrakeReport * output);

/// Initialize array of msg/HandBrakeReport messages.
/**
 * It allocates the memory for the number of elements and calls
 * autoware_auto_vehicle_msgs__msg__HandBrakeReport__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_vehicle_msgs
bool
autoware_auto_vehicle_msgs__msg__HandBrakeReport__Sequence__init(autoware_auto_vehicle_msgs__msg__HandBrakeReport__Sequence * array, size_t size);

/// Finalize array of msg/HandBrakeReport messages.
/**
 * It calls
 * autoware_auto_vehicle_msgs__msg__HandBrakeReport__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_vehicle_msgs
void
autoware_auto_vehicle_msgs__msg__HandBrakeReport__Sequence__fini(autoware_auto_vehicle_msgs__msg__HandBrakeReport__Sequence * array);

/// Create array of msg/HandBrakeReport messages.
/**
 * It allocates the memory for the array and calls
 * autoware_auto_vehicle_msgs__msg__HandBrakeReport__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_vehicle_msgs
autoware_auto_vehicle_msgs__msg__HandBrakeReport__Sequence *
autoware_auto_vehicle_msgs__msg__HandBrakeReport__Sequence__create(size_t size);

/// Destroy array of msg/HandBrakeReport messages.
/**
 * It calls
 * autoware_auto_vehicle_msgs__msg__HandBrakeReport__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_vehicle_msgs
void
autoware_auto_vehicle_msgs__msg__HandBrakeReport__Sequence__destroy(autoware_auto_vehicle_msgs__msg__HandBrakeReport__Sequence * array);

/// Check for msg/HandBrakeReport message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_vehicle_msgs
bool
autoware_auto_vehicle_msgs__msg__HandBrakeReport__Sequence__are_equal(const autoware_auto_vehicle_msgs__msg__HandBrakeReport__Sequence * lhs, const autoware_auto_vehicle_msgs__msg__HandBrakeReport__Sequence * rhs);

/// Copy an array of msg/HandBrakeReport messages.
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
ROSIDL_GENERATOR_C_PUBLIC_autoware_auto_vehicle_msgs
bool
autoware_auto_vehicle_msgs__msg__HandBrakeReport__Sequence__copy(
  const autoware_auto_vehicle_msgs__msg__HandBrakeReport__Sequence * input,
  autoware_auto_vehicle_msgs__msg__HandBrakeReport__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HAND_BRAKE_REPORT__FUNCTIONS_H_
