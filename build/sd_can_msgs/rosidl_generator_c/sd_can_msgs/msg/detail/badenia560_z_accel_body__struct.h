// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/Badenia560ZAccelBody.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_Z_ACCEL_BODY__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_Z_ACCEL_BODY__STRUCT_H_

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

/// Struct defined in msg/Badenia560ZAccelBody in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__Badenia560ZAccelBody
{
  std_msgs__msg__Header header;
  /// Range: -, Scale: 0.001, Offset: 0
  double gz_body_fr;
  /// Range: -, Scale: 0.001, Offset: 0
  double gz_body_rr;
} sd_can_msgs__msg__Badenia560ZAccelBody;

// Struct for a sequence of sd_can_msgs__msg__Badenia560ZAccelBody.
typedef struct sd_can_msgs__msg__Badenia560ZAccelBody__Sequence
{
  sd_can_msgs__msg__Badenia560ZAccelBody * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__Badenia560ZAccelBody__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_Z_ACCEL_BODY__STRUCT_H_
