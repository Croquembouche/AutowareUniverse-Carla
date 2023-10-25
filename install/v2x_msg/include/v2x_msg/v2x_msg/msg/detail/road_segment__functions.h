// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from v2x_msg:msg/RoadSegment.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ROAD_SEGMENT__FUNCTIONS_H_
#define V2X_MSG__MSG__DETAIL__ROAD_SEGMENT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "v2x_msg/msg/rosidl_generator_c__visibility_control.h"

#include "v2x_msg/msg/detail/road_segment__struct.h"

/// Initialize msg/RoadSegment message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * v2x_msg__msg__RoadSegment
 * )) before or use
 * v2x_msg__msg__RoadSegment__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
bool
v2x_msg__msg__RoadSegment__init(v2x_msg__msg__RoadSegment * msg);

/// Finalize msg/RoadSegment message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
void
v2x_msg__msg__RoadSegment__fini(v2x_msg__msg__RoadSegment * msg);

/// Create msg/RoadSegment message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * v2x_msg__msg__RoadSegment__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
v2x_msg__msg__RoadSegment *
v2x_msg__msg__RoadSegment__create();

/// Destroy msg/RoadSegment message.
/**
 * It calls
 * v2x_msg__msg__RoadSegment__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
void
v2x_msg__msg__RoadSegment__destroy(v2x_msg__msg__RoadSegment * msg);

/// Check for msg/RoadSegment message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
bool
v2x_msg__msg__RoadSegment__are_equal(const v2x_msg__msg__RoadSegment * lhs, const v2x_msg__msg__RoadSegment * rhs);

/// Copy a msg/RoadSegment message.
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
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
bool
v2x_msg__msg__RoadSegment__copy(
  const v2x_msg__msg__RoadSegment * input,
  v2x_msg__msg__RoadSegment * output);

/// Initialize array of msg/RoadSegment messages.
/**
 * It allocates the memory for the number of elements and calls
 * v2x_msg__msg__RoadSegment__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
bool
v2x_msg__msg__RoadSegment__Sequence__init(v2x_msg__msg__RoadSegment__Sequence * array, size_t size);

/// Finalize array of msg/RoadSegment messages.
/**
 * It calls
 * v2x_msg__msg__RoadSegment__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
void
v2x_msg__msg__RoadSegment__Sequence__fini(v2x_msg__msg__RoadSegment__Sequence * array);

/// Create array of msg/RoadSegment messages.
/**
 * It allocates the memory for the array and calls
 * v2x_msg__msg__RoadSegment__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
v2x_msg__msg__RoadSegment__Sequence *
v2x_msg__msg__RoadSegment__Sequence__create(size_t size);

/// Destroy array of msg/RoadSegment messages.
/**
 * It calls
 * v2x_msg__msg__RoadSegment__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
void
v2x_msg__msg__RoadSegment__Sequence__destroy(v2x_msg__msg__RoadSegment__Sequence * array);

/// Check for msg/RoadSegment message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
bool
v2x_msg__msg__RoadSegment__Sequence__are_equal(const v2x_msg__msg__RoadSegment__Sequence * lhs, const v2x_msg__msg__RoadSegment__Sequence * rhs);

/// Copy an array of msg/RoadSegment messages.
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
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
bool
v2x_msg__msg__RoadSegment__Sequence__copy(
  const v2x_msg__msg__RoadSegment__Sequence * input,
  v2x_msg__msg__RoadSegment__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__ROAD_SEGMENT__FUNCTIONS_H_
