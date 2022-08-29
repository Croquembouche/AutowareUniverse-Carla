// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from v2x_msg:msg/IntersectionStatusObject.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__INTERSECTION_STATUS_OBJECT__FUNCTIONS_H_
#define V2X_MSG__MSG__DETAIL__INTERSECTION_STATUS_OBJECT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "v2x_msg/msg/rosidl_generator_c__visibility_control.h"

#include "v2x_msg/msg/detail/intersection_status_object__struct.h"

/// Initialize msg/IntersectionStatusObject message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * v2x_msg__msg__IntersectionStatusObject
 * )) before or use
 * v2x_msg__msg__IntersectionStatusObject__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
bool
v2x_msg__msg__IntersectionStatusObject__init(v2x_msg__msg__IntersectionStatusObject * msg);

/// Finalize msg/IntersectionStatusObject message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
void
v2x_msg__msg__IntersectionStatusObject__fini(v2x_msg__msg__IntersectionStatusObject * msg);

/// Create msg/IntersectionStatusObject message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * v2x_msg__msg__IntersectionStatusObject__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
v2x_msg__msg__IntersectionStatusObject *
v2x_msg__msg__IntersectionStatusObject__create();

/// Destroy msg/IntersectionStatusObject message.
/**
 * It calls
 * v2x_msg__msg__IntersectionStatusObject__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
void
v2x_msg__msg__IntersectionStatusObject__destroy(v2x_msg__msg__IntersectionStatusObject * msg);

/// Check for msg/IntersectionStatusObject message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
bool
v2x_msg__msg__IntersectionStatusObject__are_equal(const v2x_msg__msg__IntersectionStatusObject * lhs, const v2x_msg__msg__IntersectionStatusObject * rhs);

/// Copy a msg/IntersectionStatusObject message.
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
v2x_msg__msg__IntersectionStatusObject__copy(
  const v2x_msg__msg__IntersectionStatusObject * input,
  v2x_msg__msg__IntersectionStatusObject * output);

/// Initialize array of msg/IntersectionStatusObject messages.
/**
 * It allocates the memory for the number of elements and calls
 * v2x_msg__msg__IntersectionStatusObject__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
bool
v2x_msg__msg__IntersectionStatusObject__Sequence__init(v2x_msg__msg__IntersectionStatusObject__Sequence * array, size_t size);

/// Finalize array of msg/IntersectionStatusObject messages.
/**
 * It calls
 * v2x_msg__msg__IntersectionStatusObject__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
void
v2x_msg__msg__IntersectionStatusObject__Sequence__fini(v2x_msg__msg__IntersectionStatusObject__Sequence * array);

/// Create array of msg/IntersectionStatusObject messages.
/**
 * It allocates the memory for the array and calls
 * v2x_msg__msg__IntersectionStatusObject__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
v2x_msg__msg__IntersectionStatusObject__Sequence *
v2x_msg__msg__IntersectionStatusObject__Sequence__create(size_t size);

/// Destroy array of msg/IntersectionStatusObject messages.
/**
 * It calls
 * v2x_msg__msg__IntersectionStatusObject__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
void
v2x_msg__msg__IntersectionStatusObject__Sequence__destroy(v2x_msg__msg__IntersectionStatusObject__Sequence * array);

/// Check for msg/IntersectionStatusObject message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
bool
v2x_msg__msg__IntersectionStatusObject__Sequence__are_equal(const v2x_msg__msg__IntersectionStatusObject__Sequence * lhs, const v2x_msg__msg__IntersectionStatusObject__Sequence * rhs);

/// Copy an array of msg/IntersectionStatusObject messages.
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
v2x_msg__msg__IntersectionStatusObject__Sequence__copy(
  const v2x_msg__msg__IntersectionStatusObject__Sequence * input,
  v2x_msg__msg__IntersectionStatusObject__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__INTERSECTION_STATUS_OBJECT__FUNCTIONS_H_
