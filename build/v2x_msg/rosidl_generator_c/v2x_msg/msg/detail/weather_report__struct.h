// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/WeatherReport.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__WEATHER_REPORT__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__WEATHER_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/WeatherReport in the package v2x_msg.
typedef struct v2x_msg__msg__WeatherReport
{
  int64_t israining;
  int64_t rainrate;
  int64_t precipsituation;
  int64_t solarradiation;
  int64_t friction;
} v2x_msg__msg__WeatherReport;

// Struct for a sequence of v2x_msg__msg__WeatherReport.
typedef struct v2x_msg__msg__WeatherReport__Sequence
{
  v2x_msg__msg__WeatherReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__WeatherReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__WEATHER_REPORT__STRUCT_H_
