// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from autoware_adapi_v1_msgs:srv/SetRoute.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__SET_ROUTE__FUNCTIONS_H_
#define AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__SET_ROUTE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "autoware_adapi_v1_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "autoware_adapi_v1_msgs/srv/detail/set_route__struct.h"

/// Initialize srv/SetRoute message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * autoware_adapi_v1_msgs__srv__SetRoute_Request
 * )) before or use
 * autoware_adapi_v1_msgs__srv__SetRoute_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
bool
autoware_adapi_v1_msgs__srv__SetRoute_Request__init(autoware_adapi_v1_msgs__srv__SetRoute_Request * msg);

/// Finalize srv/SetRoute message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
void
autoware_adapi_v1_msgs__srv__SetRoute_Request__fini(autoware_adapi_v1_msgs__srv__SetRoute_Request * msg);

/// Create srv/SetRoute message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * autoware_adapi_v1_msgs__srv__SetRoute_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
autoware_adapi_v1_msgs__srv__SetRoute_Request *
autoware_adapi_v1_msgs__srv__SetRoute_Request__create();

/// Destroy srv/SetRoute message.
/**
 * It calls
 * autoware_adapi_v1_msgs__srv__SetRoute_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
void
autoware_adapi_v1_msgs__srv__SetRoute_Request__destroy(autoware_adapi_v1_msgs__srv__SetRoute_Request * msg);

/// Check for srv/SetRoute message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
bool
autoware_adapi_v1_msgs__srv__SetRoute_Request__are_equal(const autoware_adapi_v1_msgs__srv__SetRoute_Request * lhs, const autoware_adapi_v1_msgs__srv__SetRoute_Request * rhs);

/// Copy a srv/SetRoute message.
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
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
bool
autoware_adapi_v1_msgs__srv__SetRoute_Request__copy(
  const autoware_adapi_v1_msgs__srv__SetRoute_Request * input,
  autoware_adapi_v1_msgs__srv__SetRoute_Request * output);

/// Initialize array of srv/SetRoute messages.
/**
 * It allocates the memory for the number of elements and calls
 * autoware_adapi_v1_msgs__srv__SetRoute_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
bool
autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence__init(autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetRoute messages.
/**
 * It calls
 * autoware_adapi_v1_msgs__srv__SetRoute_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
void
autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence__fini(autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence * array);

/// Create array of srv/SetRoute messages.
/**
 * It allocates the memory for the array and calls
 * autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence *
autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetRoute messages.
/**
 * It calls
 * autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
void
autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence__destroy(autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence * array);

/// Check for srv/SetRoute message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
bool
autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence__are_equal(const autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence * lhs, const autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence * rhs);

/// Copy an array of srv/SetRoute messages.
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
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
bool
autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence__copy(
  const autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence * input,
  autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence * output);

/// Initialize srv/SetRoute message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * autoware_adapi_v1_msgs__srv__SetRoute_Response
 * )) before or use
 * autoware_adapi_v1_msgs__srv__SetRoute_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
bool
autoware_adapi_v1_msgs__srv__SetRoute_Response__init(autoware_adapi_v1_msgs__srv__SetRoute_Response * msg);

/// Finalize srv/SetRoute message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
void
autoware_adapi_v1_msgs__srv__SetRoute_Response__fini(autoware_adapi_v1_msgs__srv__SetRoute_Response * msg);

/// Create srv/SetRoute message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * autoware_adapi_v1_msgs__srv__SetRoute_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
autoware_adapi_v1_msgs__srv__SetRoute_Response *
autoware_adapi_v1_msgs__srv__SetRoute_Response__create();

/// Destroy srv/SetRoute message.
/**
 * It calls
 * autoware_adapi_v1_msgs__srv__SetRoute_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
void
autoware_adapi_v1_msgs__srv__SetRoute_Response__destroy(autoware_adapi_v1_msgs__srv__SetRoute_Response * msg);

/// Check for srv/SetRoute message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
bool
autoware_adapi_v1_msgs__srv__SetRoute_Response__are_equal(const autoware_adapi_v1_msgs__srv__SetRoute_Response * lhs, const autoware_adapi_v1_msgs__srv__SetRoute_Response * rhs);

/// Copy a srv/SetRoute message.
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
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
bool
autoware_adapi_v1_msgs__srv__SetRoute_Response__copy(
  const autoware_adapi_v1_msgs__srv__SetRoute_Response * input,
  autoware_adapi_v1_msgs__srv__SetRoute_Response * output);

/// Initialize array of srv/SetRoute messages.
/**
 * It allocates the memory for the number of elements and calls
 * autoware_adapi_v1_msgs__srv__SetRoute_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
bool
autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence__init(autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetRoute messages.
/**
 * It calls
 * autoware_adapi_v1_msgs__srv__SetRoute_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
void
autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence__fini(autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence * array);

/// Create array of srv/SetRoute messages.
/**
 * It allocates the memory for the array and calls
 * autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence *
autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetRoute messages.
/**
 * It calls
 * autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
void
autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence__destroy(autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence * array);

/// Check for srv/SetRoute message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
bool
autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence__are_equal(const autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence * lhs, const autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence * rhs);

/// Copy an array of srv/SetRoute messages.
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
ROSIDL_GENERATOR_C_PUBLIC_autoware_adapi_v1_msgs
bool
autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence__copy(
  const autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence * input,
  autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__SET_ROUTE__FUNCTIONS_H_
