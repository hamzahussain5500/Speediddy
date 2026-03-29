// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/Badenia560RideRear.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_RIDE_REAR__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_RIDE_REAR__STRUCT_H_

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

/// Struct defined in msg/Badenia560RideRear in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__Badenia560RideRear
{
  std_msgs__msg__Header header;
  /// 0,0 - 6553,5mm, Range: -, Scale: 0.1, Offset: 0
  double ride_height_rear;
  /// 0,0 - 6553,5mm, Range: -, Scale: 0.1, Offset: 0
  double damper_stroke_r3rd;
  /// 0,0 - 6553,5mm, Range: -, Scale: 0.1, Offset: 0
  double damper_stroke_rl;
  /// 0,0 - 6553,5mm, Range: -, Scale: 0.1, Offset: 0
  double damper_stroke_rr;
} sd_can_msgs__msg__Badenia560RideRear;

// Struct for a sequence of sd_can_msgs__msg__Badenia560RideRear.
typedef struct sd_can_msgs__msg__Badenia560RideRear__Sequence
{
  sd_can_msgs__msg__Badenia560RideRear * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__Badenia560RideRear__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_RIDE_REAR__STRUCT_H_
