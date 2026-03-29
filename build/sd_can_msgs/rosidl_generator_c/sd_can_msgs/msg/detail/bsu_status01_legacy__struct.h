// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/BSUStatus01Legacy.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BSU_STATUS01_LEGACY__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__BSU_STATUS01_LEGACY__STRUCT_H_

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
  sd_can_msgs__msg__BSUStatus01Legacy__BSU_HL_STOP_REQUEST_FALSE = 0
};

/// Constant 'BSU_HL_STOP_REQUEST_TRUE'.
enum
{
  sd_can_msgs__msg__BSUStatus01Legacy__BSU_HL_STOP_REQUEST_TRUE = 1
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/BSUStatus01Legacy in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__BSUStatus01Legacy
{
  std_msgs__msg__Header header;
  /// Range: 0..1 (0..1 bool)
  uint8_t bsu_hl_stop_request;
  /// Range: 0.1 (0..1 bool)
  uint8_t bsu_hl_warning;
  /// Range: 0..1 (0..1 enum)
  uint8_t bsu_em_stop_activated;
  /// Range: 0..1 (0..1 enum)
  uint8_t bsu_ml_stop_activated;
  /// Range: 0..15 (0..15 uint)
  uint8_t bsu_alive_counter;
  /// Range: 0..1023 (0..1023 uint)
  uint16_t bsu_status;
  /// Range: 0..1 (0..1 -)
  uint8_t abs_external_enable_ack;
} sd_can_msgs__msg__BSUStatus01Legacy;

// Struct for a sequence of sd_can_msgs__msg__BSUStatus01Legacy.
typedef struct sd_can_msgs__msg__BSUStatus01Legacy__Sequence
{
  sd_can_msgs__msg__BSUStatus01Legacy * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__BSUStatus01Legacy__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__BSU_STATUS01_LEGACY__STRUCT_H_
