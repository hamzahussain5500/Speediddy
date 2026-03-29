// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/Badenia560BadeniaMisc.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_BADENIA_MISC__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_BADENIA_MISC__STRUCT_H_

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

/// Struct defined in msg/Badenia560BadeniaMisc in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__Badenia560BadeniaMisc
{
  std_msgs__msg__Header header;
  /// Lap Time from beacon, Range: -, Scale: 0.001, Offset: 0
  double lap_time;
  /// 0,0 - 13107,1, Range: -, Scale: 0.1, Offset: 0
  double lap_distance;
  /// 127 max laps, Range: -, Scale: 1, Offset: 0
  uint8_t lap_number;
  /// 0 - 16.383, Range: -, Scale: 0.001, Offset: 0
  double battery_voltage;
} sd_can_msgs__msg__Badenia560BadeniaMisc;

// Struct for a sequence of sd_can_msgs__msg__Badenia560BadeniaMisc.
typedef struct sd_can_msgs__msg__Badenia560BadeniaMisc__Sequence
{
  sd_can_msgs__msg__Badenia560BadeniaMisc * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__Badenia560BadeniaMisc__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_BADENIA_MISC__STRUCT_H_
