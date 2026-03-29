// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/ICEStatus02.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__ICE_STATUS02__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__ICE_STATUS02__STRUCT_H_

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

/// Struct defined in msg/ICEStatus02 in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__ICEStatus02
{
  std_msgs__msg__Header header;
  double ice_oil_temp_deg_c;
  double ice_engine_speed_rpm;
  double ice_fuel_press_k_pa;
  double ice_water_temp_deg_c;
  double ice_oil_press_k_pa;
} sd_can_msgs__msg__ICEStatus02;

// Struct for a sequence of sd_can_msgs__msg__ICEStatus02.
typedef struct sd_can_msgs__msg__ICEStatus02__Sequence
{
  sd_can_msgs__msg__ICEStatus02 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__ICEStatus02__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__ICE_STATUS02__STRUCT_H_
