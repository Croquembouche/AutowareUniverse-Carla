// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/PSM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PSM__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__PSM__STRUCT_H_

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
// Member 'usestate'
// Member 'activitytype'
// Member 'activitysubtype'
// Member 'assisttype'
// Member 'sizing'
#include "rosidl_runtime_c/string.h"
// Member 'position'
#include "v2x_msg/msg/detail/position3_d__struct.h"
// Member 'accuracy'
#include "v2x_msg/msg/detail/positional_accuracy__struct.h"
// Member 'accelset'
#include "v2x_msg/msg/detail/acceleration_set4_way__struct.h"
// Member 'pathhistory'
#include "v2x_msg/msg/detail/path_history__struct.h"
// Member 'pathprediction'
#include "v2x_msg/msg/detail/path_prediction__struct.h"
// Member 'propulsion'
#include "v2x_msg/msg/detail/propelled_information__struct.h"

/// Struct defined in msg/PSM in the package v2x_msg.
typedef struct v2x_msg__msg__PSM
{
  int64_t basictype;
  int64_t secmark;
  int64_t msgcnt;
  rosidl_runtime_c__String id;
  v2x_msg__msg__Position3D position;
  v2x_msg__msg__PositionalAccuracy accuracy;
  int64_t speed;
  int64_t heading;
  v2x_msg__msg__AccelerationSet4Way accelset;
  v2x_msg__msg__PathHistory pathhistory;
  v2x_msg__msg__PathPrediction pathprediction;
  v2x_msg__msg__PropelledInformation propulsion;
  rosidl_runtime_c__String usestate;
  bool crossrequest;
  bool crossstate;
  int64_t clustersize;
  int64_t clusterradius;
  int64_t eventrespondertype;
  rosidl_runtime_c__String activitytype;
  rosidl_runtime_c__String activitysubtype;
  rosidl_runtime_c__String assisttype;
  rosidl_runtime_c__String sizing;
  int64_t attachment;
  int64_t attachmentradius;
  int64_t animaltype;
} v2x_msg__msg__PSM;

// Struct for a sequence of v2x_msg__msg__PSM.
typedef struct v2x_msg__msg__PSM__Sequence
{
  v2x_msg__msg__PSM * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__PSM__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__PSM__STRUCT_H_
