// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/BSUStatus01.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BSU_STATUS01__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__BSU_STATUS01__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BSU_HL_STOP_REQUEST_FALSE'.
/**
  * Constants
 */
enum
{
  sd_can_msgs__msg__BSUStatus01__BSU_HL_STOP_REQUEST_FALSE = 0
};

/// Constant 'BSU_HL_STOP_REQUEST_TRUE'.
enum
{
  sd_can_msgs__msg__BSUStatus01__BSU_HL_STOP_REQUEST_TRUE = 1
};

/// Constant 'BSU_ML_STOP_ACTIVATED_LEVEL0'.
enum
{
  sd_can_msgs__msg__BSUStatus01__BSU_ML_STOP_ACTIVATED_LEVEL0 = 0
};

/// Constant 'BSU_ML_STOP_ACTIVATED_LEVEL1'.
enum
{
  sd_can_msgs__msg__BSUStatus01__BSU_ML_STOP_ACTIVATED_LEVEL1 = 1
};

/// Constant 'BSU_ML_STOP_ACTIVATED_LEVEL2'.
enum
{
  sd_can_msgs__msg__BSUStatus01__BSU_ML_STOP_ACTIVATED_LEVEL2 = 2
};

/// Constant 'BSU_ML_STOP_ACTIVATED_LEVEL3'.
enum
{
  sd_can_msgs__msg__BSUStatus01__BSU_ML_STOP_ACTIVATED_LEVEL3 = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/BSUStatus01 in the package sd_can_msgs.
typedef struct sd_can_msgs__msg__BSUStatus01
{
  std_msgs__msg__Header header;
  /// BSU Status Information
  /// BSU Limp Mode Activated (0..1) - enum
  uint8_t bsu_limp_mode_activated;
  /// BSU Switch Off Request (0..1)
  uint8_t bsu_switch_off_req;
  /// ABS External Enable Acknowledgment (0..1)
  uint8_t abs_external_enable_ack;
  /// BSU ML Stop Activated (0..3) - 2 bits
  uint8_t bsu_ml_stop_activated;
  /// BSU EM Stop Activated (0..1) - enum
  uint8_t bsu_em_stop_activated;
  /// BSU Alive Counter (0..15) - 4 bits
  uint8_t bsu_alive_counter;
  /// BSU HL Warning (0..1) - bool
  uint8_t bsu_hl_warning;
  /// BSU HL Stop Request (0..1) - bool
  uint8_t bsu_hl_stop_request;
  /// BSU Status (0..1023) - 10 bits
  uint16_t bsu_status;
} sd_can_msgs__msg__BSUStatus01;

// Struct for a sequence of sd_can_msgs__msg__BSUStatus01.
typedef struct sd_can_msgs__msg__BSUStatus01__Sequence
{
  sd_can_msgs__msg__BSUStatus01 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__BSUStatus01__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__BSU_STATUS01__STRUCT_H_
