// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/Badenia560RideFront.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_RIDE_FRONT__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_RIDE_FRONT__STRUCT_H_

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

/// Struct defined in msg/Badenia560RideFront in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__Badenia560RideFront
{
  std_msgs__msg__Header header;
  /// 0,0 - 6553,5mm, Range: -, Scale: 0.1, Offset: 0
  double ride_height_front;
  /// 0.0 - 6553,5mm, Range: -, Scale: 0.1, Offset: 0
  double damper_stroke_f3rd;
  /// 0.0 - 6553,5mm, Range: -, Scale: 0.1, Offset: 0
  double damper_stroke_fl;
  /// 0.0 - 6553,5mm, Range: -, Scale: 0.1, Offset: 0
  double damper_stroke_fr;
} sd_can_msgs__msg__Badenia560RideFront;

// Struct for a sequence of sd_can_msgs__msg__Badenia560RideFront.
typedef struct sd_can_msgs__msg__Badenia560RideFront__Sequence
{
  sd_can_msgs__msg__Badenia560RideFront * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__Badenia560RideFront__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_RIDE_FRONT__STRUCT_H_
