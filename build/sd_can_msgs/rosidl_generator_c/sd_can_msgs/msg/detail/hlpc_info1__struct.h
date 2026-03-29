// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/HLPCInfo1.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__HLPC_INFO1__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__HLPC_INFO1__STRUCT_H_

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

/// Struct defined in msg/HLPCInfo1 in the package sd_can_msgs.
/**
  * HLPC Info1 (NEW in v5)
  * Frame ID: 0x700
  * High-Level Perception Computer sensor status information
  * Reports status of perception sensors (lidars, radars, GPS)
  * Frequency: 1 Hz
 */
typedef struct sd_can_msgs__msg__HLPCInfo1
{
  std_msgs__msg__Header header;
  /// ========== NETWORK STATUS ==========
  /// Network ping time, Range: -, Scale: 1, Offset: 0, Freq: 1 Hz
  uint16_t hlpc_network_ping;
  /// ========== LIDAR STATUS ==========
  /// Status values: 0x00 = Inactive, 0x01 = Active, 0x02 = Error, 0x03 = Reserved
  /// Left Lidar Status, Range: 0..3, Scale: 1, Offset: 0
  uint8_t hlpc_lidar_status_left;
  /// Front Lidar Status, Range: 0..3, Scale: 1, Offset: 0
  uint8_t hlpc_lidar_status_front;
  /// Right Lidar Status, Range: 0..3, Scale: 1, Offset: 0
  uint8_t hlpc_lidar_status_right;
  /// ========== RADAR STATUS ==========
  /// Status values: 0x00 = Inactive, 0x01 = Active, 0x02 = Error, 0x03 = Reserved
  /// Front Radar Status, Range: 0..3, Scale: 1, Offset: 0
  uint8_t hlpc_radar_status_front;
  /// Left Radar Status, Range: 0..3, Scale: 1, Offset: 0
  uint8_t hlpc_radar_status_left;
  /// Right Radar Status, Range: 0..3, Scale: 1, Offset: 0
  uint8_t hlpc_radar_status_right;
  /// Rear Radar Status, Range: 0..3, Scale: 1, Offset: 0
  uint8_t hlpc_radar_status_rear;
  /// ========== GPS STATUS ==========
  /// VectorNav GPS Fix Status, Range: 0..8, Scale: 1, Offset: 0
  uint8_t hlpc_vector_nav_fix;
  /// ========== ALIVE SIGNAL ==========
  /// HLPC CAN4 Alive Counter, Range: 0..15, Scale: 1, Offset: 0
  uint8_t hlpc_alive_c4;
} sd_can_msgs__msg__HLPCInfo1;

// Struct for a sequence of sd_can_msgs__msg__HLPCInfo1.
typedef struct sd_can_msgs__msg__HLPCInfo1__Sequence
{
  sd_can_msgs__msg__HLPCInfo1 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__HLPCInfo1__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__HLPC_INFO1__STRUCT_H_
