// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/BSUStatus01Updated.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BSU_STATUS01_UPDATED__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__BSU_STATUS01_UPDATED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BSU_HL_STOP_REQUEST_FALSE'.
enum
{
  sd_can_msgs__msg__BSUStatus01Updated__BSU_HL_STOP_REQUEST_FALSE = 0
};

/// Constant 'BSU_HL_STOP_REQUEST_TRUE'.
enum
{
  sd_can_msgs__msg__BSUStatus01Updated__BSU_HL_STOP_REQUEST_TRUE = 1
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/BSUStatus01Updated in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__BSUStatus01Updated
{
  std_msgs__msg__Header header;
  /// BSU Status Information
  /// BSU Switch Off Request (0..1)
  uint8_t bsu_switch_off_req;
  /// BSU Limp Mode Activated (0..1)
  uint8_t bsu_limp_mode_activated;
  /// BSU HL Stop Request (0..1)
  uint8_t bsu_hl_stop_request;
  /// BSU HL Warning (0..1)
  uint8_t bsu_hl_warning;
  /// BSU EM Stop Activated (0..1)
  uint8_t bsu_em_stop_activated;
  /// BSU ML Stop Activated (0..1)
  uint8_t bsu_ml_stop_activated;
  /// BSU Alive Counter (0..15)
  uint8_t bsu_alive_counter;
  /// BSU Status (0..1023)
  uint16_t bsu_status;
  /// ABS External Enable Acknowledgment (0..1)
  uint8_t abs_external_enable_ack;
} sd_can_msgs__msg__BSUStatus01Updated;

// Struct for a sequence of sd_can_msgs__msg__BSUStatus01Updated.
typedef struct sd_can_msgs__msg__BSUStatus01Updated__Sequence
{
  sd_can_msgs__msg__BSUStatus01Updated * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__BSUStatus01Updated__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__BSU_STATUS01_UPDATED__STRUCT_H_
