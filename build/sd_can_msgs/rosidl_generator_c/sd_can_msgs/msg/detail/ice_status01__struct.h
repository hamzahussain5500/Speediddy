// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/ICEStatus01.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__ICE_STATUS01__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__ICE_STATUS01__STRUCT_H_

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

/// Struct defined in msg/ICEStatus01 in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__ICEStatus01
{
  std_msgs__msg__Header header;
  double ice_actual_gear;
  double ice_target_gear_ack;
  double ice_actual_throttle;
  double ice_target_throttle_ack;
  double ice_push_to_pass_req;
  double ice_push_to_pass_ack;
  double ice_water_press_k_pa;
  double ice_available_fuel_l;
  double ice_downshift_available;
} sd_can_msgs__msg__ICEStatus01;

// Struct for a sequence of sd_can_msgs__msg__ICEStatus01.
typedef struct sd_can_msgs__msg__ICEStatus01__Sequence
{
  sd_can_msgs__msg__ICEStatus01 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__ICEStatus01__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__ICE_STATUS01__STRUCT_H_
