// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/ICA.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ICA__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__ICA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
// Member 'eventflag'
#include "rosidl_runtime_c/string.h"
// Member 'partone'
#include "v2x_msg/msg/detail/bsm_core_data__struct.h"
// Member 'path'
#include "v2x_msg/msg/detail/path_history__struct.h"
// Member 'pathprediction'
#include "v2x_msg/msg/detail/path_prediction__struct.h"
// Member 'intersectionid'
#include "v2x_msg/msg/detail/intersection_reference_id__struct.h"
// Member 'lanenumber'
#include "v2x_msg/msg/detail/approach_or_lane__struct.h"

/// Struct defined in msg/ICA in the package v2x_msg.
typedef struct v2x_msg__msg__ICA
{
  int64_t msgcnt;
  rosidl_runtime_c__String id;
  int64_t timestamp;
  v2x_msg__msg__BSMCoreData partone;
  v2x_msg__msg__PathHistory path;
  v2x_msg__msg__PathPrediction pathprediction;
  v2x_msg__msg__IntersectionReferenceID intersectionid;
  v2x_msg__msg__ApproachOrLane lanenumber;
  rosidl_runtime_c__String eventflag;
} v2x_msg__msg__ICA;

// Struct for a sequence of v2x_msg__msg__ICA.
typedef struct v2x_msg__msg__ICA__Sequence
{
  v2x_msg__msg__ICA * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__ICA__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__ICA__STRUCT_H_
