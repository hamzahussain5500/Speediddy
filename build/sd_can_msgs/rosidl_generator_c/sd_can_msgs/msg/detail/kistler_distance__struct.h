// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/KistlerDistance.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__KISTLER_DISTANCE__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__KISTLER_DISTANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/KistlerDistance in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__KistlerDistance
{
  std_msgs__msg__Header header;
  /// Range: -2147480000..2147480000 (-2147480.0..2147480.0 m), Scale: 0.001, Offset: 0
  double distance;
} sd_can_msgs__msg__KistlerDistance;

// Struct for a sequence of sd_can_msgs__msg__KistlerDistance.
typedef struct sd_can_msgs__msg__KistlerDistance__Sequence
{
  sd_can_msgs__msg__KistlerDistance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__KistlerDistance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__KISTLER_DISTANCE__STRUCT_H_
