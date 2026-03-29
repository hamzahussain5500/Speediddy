// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sd_can_msgs:msg/FlagInfoOutput.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__FLAG_INFO_OUTPUT__STRUCT_H_
#define SD_CAN_MSGS__MSG__DETAIL__FLAG_INFO_OUTPUT__STRUCT_H_

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

/// Struct defined in msg/FlagInfoOutput in the package sd_can_msgs.
/**
  * Flag Info Output Message
  * CAN ID: 0x7C (124)
  * This message contains race management flag information and LED status
  * New in DBC v3 - provides race control and marshalling information
 */
typedef struct sd_can_msgs__msg__FlagInfoOutput
{
  std_msgs__msg__Header header;
  /// LED status output from EMM Car Marshalling Equipment
  /// Range: 0-255
  uint8_t led_status;
  /// EMM Car Marshalling Equipment outputs free running counter
  /// Range: 0-255
  uint8_t free_running_counter;
  /// Spare field 1 for CAN ID 0x7C
  uint8_t spare1_0x7_c;
  /// Spare field 2 for CAN ID 0x7C
  uint8_t spare2_0x7_c;
  /// Session Management - Session Type
  /// Values: 0=No Session, 64=Practice, 128=Qualifying, 192=Race
  uint8_t sm_session_type;
  /// Session Management - Track Flag
  /// Values: 0=No Flag, 5=Red Flag, 7=Safety Car Out, 11=Full Course Yellow, 13=Code 60
  uint8_t sm_track_flag;
  /// Session Management - Car Flag
  /// Values include: 0=Off, 3=Blue, 16=Chequered, 18=Black&White, 26=Blue Static,
  /// 29=Yellow Speed Offender, 30=Go To Pit, 31=Long Lap, 32=Change Position,
  /// 33=Long Lap x2, 34=Drive Through, 35=Ride Through, 38=Time Penalty,
  /// 39=Loudness, 40=In Pit Penalty, 129=Orange Flag, 130=Purple Flag,
  /// 131=Safe Stop Flag, 132=Emergency Stop Flag
  uint8_t sm_car_flag;
  /// CRC checksum for Session Management data
  /// Range: 0-255
  uint8_t crc_sm;
} sd_can_msgs__msg__FlagInfoOutput;

// Struct for a sequence of sd_can_msgs__msg__FlagInfoOutput.
typedef struct sd_can_msgs__msg__FlagInfoOutput__Sequence
{
  sd_can_msgs__msg__FlagInfoOutput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sd_can_msgs__msg__FlagInfoOutput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__FLAG_INFO_OUTPUT__STRUCT_H_
