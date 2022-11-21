// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from v2x_msg:msg/RoadSegmentReferenceID.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ROAD_SEGMENT_REFERENCE_ID__FUNCTIONS_H_
#define V2X_MSG__MSG__DETAIL__ROAD_SEGMENT_REFERENCE_ID__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "v2x_msg/msg/rosidl_generator_c__visibility_control.h"

#include "v2x_msg/msg/detail/road_segment_reference_id__struct.h"

/// Initialize msg/RoadSegmentReferenceID message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * v2x_msg__msg__RoadSegmentReferenceID
 * )) before or use
 * v2x_msg__msg__RoadSegmentReferenceID__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
bool
v2x_msg__msg__RoadSegmentReferenceID__init(v2x_msg__msg__RoadSegmentReferenceID * msg);

/// Finalize msg/RoadSegmentReferenceID message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
void
v2x_msg__msg__RoadSegmentReferenceID__fini(v2x_msg__msg__RoadSegmentReferenceID * msg);

/// Create msg/RoadSegmentReferenceID message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * v2x_msg__msg__RoadSegmentReferenceID__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
v2x_msg__msg__RoadSegmentReferenceID *
v2x_msg__msg__RoadSegmentReferenceID__create();

/// Destroy msg/RoadSegmentReferenceID message.
/**
 * It calls
 * v2x_msg__msg__RoadSegmentReferenceID__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
void
v2x_msg__msg__RoadSegmentReferenceID__destroy(v2x_msg__msg__RoadSegmentReferenceID * msg);

/// Check for msg/RoadSegmentReferenceID message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
bool
v2x_msg__msg__RoadSegmentReferenceID__are_equal(const v2x_msg__msg__RoadSegmentReferenceID * lhs, const v2x_msg__msg__RoadSegmentReferenceID * rhs);

/// Copy a msg/RoadSegmentReferenceID message.
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
v2x_msg__msg__RoadSegmentReferenceID__copy(
  const v2x_msg__msg__RoadSegmentReferenceID * input,
  v2x_msg__msg__RoadSegmentReferenceID * output);

/// Initialize array of msg/RoadSegmentReferenceID messages.
/**
 * It allocates the memory for the number of elements and calls
 * v2x_msg__msg__RoadSegmentReferenceID__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
bool
v2x_msg__msg__RoadSegmentReferenceID__Sequence__init(v2x_msg__msg__RoadSegmentReferenceID__Sequence * array, size_t size);

/// Finalize array of msg/RoadSegmentReferenceID messages.
/**
 * It calls
 * v2x_msg__msg__RoadSegmentReferenceID__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
void
v2x_msg__msg__RoadSegmentReferenceID__Sequence__fini(v2x_msg__msg__RoadSegmentReferenceID__Sequence * array);

/// Create array of msg/RoadSegmentReferenceID messages.
/**
 * It allocates the memory for the array and calls
 * v2x_msg__msg__RoadSegmentReferenceID__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
v2x_msg__msg__RoadSegmentReferenceID__Sequence *
v2x_msg__msg__RoadSegmentReferenceID__Sequence__create(size_t size);

/// Destroy array of msg/RoadSegmentReferenceID messages.
/**
 * It calls
 * v2x_msg__msg__RoadSegmentReferenceID__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
void
v2x_msg__msg__RoadSegmentReferenceID__Sequence__destroy(v2x_msg__msg__RoadSegmentReferenceID__Sequence * array);

/// Check for msg/RoadSegmentReferenceID message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_msg
bool
v2x_msg__msg__RoadSegmentReferenceID__Sequence__are_equal(const v2x_msg__msg__RoadSegmentReferenceID__Sequence * lhs, const v2x_msg__msg__RoadSegmentReferenceID__Sequence * rhs);

/// Copy an array of msg/RoadSegmentReferenceID messages.
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
v2x_msg__msg__RoadSegmentReferenceID__Sequence__copy(
  const v2x_msg__msg__RoadSegmentReferenceID__Sequence * input,
  v2x_msg__msg__RoadSegmentReferenceID__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__ROAD_SEGMENT_REFERENCE_ID__FUNCTIONS_H_
