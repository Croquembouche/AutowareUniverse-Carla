// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from v2x_msg:msg/ExitServicecontent.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__EXIT_SERVICECONTENT__FUNCTIONS_H_
#define V2X_MSG__MSG__DETAIL__EXIT_SERVICECONTENT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "v2x_msg/msg/rosidl_generator_c__visibility_control.h"

#include "v2x_msg/msg/detail/exit_servicecontent__struct.h"

/// Initialize msg/ExitServicecontent message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * v2x_msg__msg__ExitServicecontent
 * )) before or use
 * v2x_msg__msg__ExitServicecontent__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
bool
v2x_msg__msg__ExitServicecontent__init(v2x_msg__msg__ExitServicecontent * msg);

/// Finalize msg/ExitServicecontent message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
void
v2x_msg__msg__ExitServicecontent__fini(v2x_msg__msg__ExitServicecontent * msg);

/// Create msg/ExitServicecontent message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * v2x_msg__msg__ExitServicecontent__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
v2x_msg__msg__ExitServicecontent *
v2x_msg__msg__ExitServicecontent__create();

/// Destroy msg/ExitServicecontent message.
/**
 * It calls
 * v2x_msg__msg__ExitServicecontent__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
void
v2x_msg__msg__ExitServicecontent__destroy(v2x_msg__msg__ExitServicecontent * msg);

/// Check for msg/ExitServicecontent message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
bool
v2x_msg__msg__ExitServicecontent__are_equal(const v2x_msg__msg__ExitServicecontent * lhs, const v2x_msg__msg__ExitServicecontent * rhs);

/// Copy a msg/ExitServicecontent message.
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
v2x_msg__msg__ExitServicecontent__copy(
  const v2x_msg__msg__ExitServicecontent * input,
  v2x_msg__msg__ExitServicecontent * output);

/// Initialize array of msg/ExitServicecontent messages.
/**
 * It allocates the memory for the number of elements and calls
 * v2x_msg__msg__ExitServicecontent__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
bool
v2x_msg__msg__ExitServicecontent__Sequence__init(v2x_msg__msg__ExitServicecontent__Sequence * array, size_t size);

/// Finalize array of msg/ExitServicecontent messages.
/**
 * It calls
 * v2x_msg__msg__ExitServicecontent__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
void
v2x_msg__msg__ExitServicecontent__Sequence__fini(v2x_msg__msg__ExitServicecontent__Sequence * array);

/// Create array of msg/ExitServicecontent messages.
/**
 * It allocates the memory for the array and calls
 * v2x_msg__msg__ExitServicecontent__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
v2x_msg__msg__ExitServicecontent__Sequence *
v2x_msg__msg__ExitServicecontent__Sequence__create(size_t size);

/// Destroy array of msg/ExitServicecontent messages.
/**
 * It calls
 * v2x_msg__msg__ExitServicecontent__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
void
v2x_msg__msg__ExitServicecontent__Sequence__destroy(v2x_msg__msg__ExitServicecontent__Sequence * array);

/// Check for msg/ExitServicecontent message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
bool
v2x_msg__msg__ExitServicecontent__Sequence__are_equal(const v2x_msg__msg__ExitServicecontent__Sequence * lhs, const v2x_msg__msg__ExitServicecontent__Sequence * rhs);

/// Copy an array of msg/ExitServicecontent messages.
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
v2x_msg__msg__ExitServicecontent__Sequence__copy(
  const v2x_msg__msg__ExitServicecontent__Sequence * input,
  v2x_msg__msg__ExitServicecontent__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__EXIT_SERVICECONTENT__FUNCTIONS_H_
