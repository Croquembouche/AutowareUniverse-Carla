// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from v2x_msg:msg/IntersectionGeometry.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__INTERSECTION_GEOMETRY__FUNCTIONS_H_
#define V2X_MSG__MSG__DETAIL__INTERSECTION_GEOMETRY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "v2x_msg/msg/rosidl_generator_c__visibility_control.h"

#include "v2x_msg/msg/detail/intersection_geometry__struct.h"

/// Initialize msg/IntersectionGeometry message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * v2x_msg__msg__IntersectionGeometry
 * )) before or use
 * v2x_msg__msg__IntersectionGeometry__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
bool
v2x_msg__msg__IntersectionGeometry__init(v2x_msg__msg__IntersectionGeometry * msg);

/// Finalize msg/IntersectionGeometry message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
void
v2x_msg__msg__IntersectionGeometry__fini(v2x_msg__msg__IntersectionGeometry * msg);

/// Create msg/IntersectionGeometry message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * v2x_msg__msg__IntersectionGeometry__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
v2x_msg__msg__IntersectionGeometry *
v2x_msg__msg__IntersectionGeometry__create();

/// Destroy msg/IntersectionGeometry message.
/**
 * It calls
 * v2x_msg__msg__IntersectionGeometry__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
void
v2x_msg__msg__IntersectionGeometry__destroy(v2x_msg__msg__IntersectionGeometry * msg);

/// Check for msg/IntersectionGeometry message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
bool
v2x_msg__msg__IntersectionGeometry__are_equal(const v2x_msg__msg__IntersectionGeometry * lhs, const v2x_msg__msg__IntersectionGeometry * rhs);

/// Copy a msg/IntersectionGeometry message.
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
v2x_msg__msg__IntersectionGeometry__copy(
  const v2x_msg__msg__IntersectionGeometry * input,
  v2x_msg__msg__IntersectionGeometry * output);

/// Initialize array of msg/IntersectionGeometry messages.
/**
 * It allocates the memory for the number of elements and calls
 * v2x_msg__msg__IntersectionGeometry__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
bool
v2x_msg__msg__IntersectionGeometry__Sequence__init(v2x_msg__msg__IntersectionGeometry__Sequence * array, size_t size);

/// Finalize array of msg/IntersectionGeometry messages.
/**
 * It calls
 * v2x_msg__msg__IntersectionGeometry__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
void
v2x_msg__msg__IntersectionGeometry__Sequence__fini(v2x_msg__msg__IntersectionGeometry__Sequence * array);

/// Create array of msg/IntersectionGeometry messages.
/**
 * It allocates the memory for the array and calls
 * v2x_msg__msg__IntersectionGeometry__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
v2x_msg__msg__IntersectionGeometry__Sequence *
v2x_msg__msg__IntersectionGeometry__Sequence__create(size_t size);

/// Destroy array of msg/IntersectionGeometry messages.
/**
 * It calls
 * v2x_msg__msg__IntersectionGeometry__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
void
v2x_msg__msg__IntersectionGeometry__Sequence__destroy(v2x_msg__msg__IntersectionGeometry__Sequence * array);

/// Check for msg/IntersectionGeometry message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
bool
v2x_msg__msg__IntersectionGeometry__Sequence__are_equal(const v2x_msg__msg__IntersectionGeometry__Sequence * lhs, const v2x_msg__msg__IntersectionGeometry__Sequence * rhs);

/// Copy an array of msg/IntersectionGeometry messages.
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
v2x_msg__msg__IntersectionGeometry__Sequence__copy(
  const v2x_msg__msg__IntersectionGeometry__Sequence * input,
  v2x_msg__msg__IntersectionGeometry__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__INTERSECTION_GEOMETRY__FUNCTIONS_H_
