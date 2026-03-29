// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sd_can_msgs:msg/KistlerStatus.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/kistler_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sd_can_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sd_can_msgs/msg/detail/kistler_status__struct.h"
#include "sd_can_msgs/msg/detail/kistler_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sd_can_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sd_can_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sd_can_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _KistlerStatus__ros_msg_type = sd_can_msgs__msg__KistlerStatus;

static bool _KistlerStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _KistlerStatus__ros_msg_type * ros_message = static_cast<const _KistlerStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: sensor_id
  {
    cdr << ros_message->sensor_id;
  }

  // Field name: temperature
  {
    cdr << ros_message->temperature;
  }

  // Field name: lamp_current
  {
    cdr << ros_message->lamp_current;
  }

  // Field name: filter_setting
  {
    cdr << ros_message->filter_setting;
  }

  // Field name: stst
  {
    cdr << ros_message->stst;
  }

  // Field name: filter_off_on
  {
    cdr << ros_message->filter_off_on;
  }

  // Field name: lamp_current_control
  {
    cdr << ros_message->lamp_current_control;
  }

  // Field name: temperature_ok
  {
    cdr << ros_message->temperature_ok;
  }

  // Field name: head_status
  {
    cdr << ros_message->head_status;
  }

  // Field name: angle_switched_off
  {
    cdr << ros_message->angle_switched_off;
  }

  // Field name: direction
  {
    cdr << ros_message->direction;
  }

  // Field name: ang_vel_correction
  {
    cdr << ros_message->ang_vel_correction;
  }

  // Field name: direction_motion
  {
    cdr << ros_message->direction_motion;
  }

  // Field name: direction_mounting
  {
    cdr << ros_message->direction_mounting;
  }

  // Field name: direction_head_is_valid
  {
    cdr << ros_message->direction_head_is_valid;
  }

  // Field name: direction_head
  {
    cdr << ros_message->direction_head;
  }

  return true;
}

static bool _KistlerStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _KistlerStatus__ros_msg_type * ros_message = static_cast<_KistlerStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: sensor_id
  {
    cdr >> ros_message->sensor_id;
  }

  // Field name: temperature
  {
    cdr >> ros_message->temperature;
  }

  // Field name: lamp_current
  {
    cdr >> ros_message->lamp_current;
  }

  // Field name: filter_setting
  {
    cdr >> ros_message->filter_setting;
  }

  // Field name: stst
  {
    cdr >> ros_message->stst;
  }

  // Field name: filter_off_on
  {
    cdr >> ros_message->filter_off_on;
  }

  // Field name: lamp_current_control
  {
    cdr >> ros_message->lamp_current_control;
  }

  // Field name: temperature_ok
  {
    cdr >> ros_message->temperature_ok;
  }

  // Field name: head_status
  {
    cdr >> ros_message->head_status;
  }

  // Field name: angle_switched_off
  {
    cdr >> ros_message->angle_switched_off;
  }

  // Field name: direction
  {
    cdr >> ros_message->direction;
  }

  // Field name: ang_vel_correction
  {
    cdr >> ros_message->ang_vel_correction;
  }

  // Field name: direction_motion
  {
    cdr >> ros_message->direction_motion;
  }

  // Field name: direction_mounting
  {
    cdr >> ros_message->direction_mounting;
  }

  // Field name: direction_head_is_valid
  {
    cdr >> ros_message->direction_head_is_valid;
  }

  // Field name: direction_head
  {
    cdr >> ros_message->direction_head;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sd_can_msgs
size_t get_serialized_size_sd_can_msgs__msg__KistlerStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _KistlerStatus__ros_msg_type * ros_message = static_cast<const _KistlerStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name sensor_id
  {
    size_t item_size = sizeof(ros_message->sensor_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature
  {
    size_t item_size = sizeof(ros_message->temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lamp_current
  {
    size_t item_size = sizeof(ros_message->lamp_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name filter_setting
  {
    size_t item_size = sizeof(ros_message->filter_setting);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stst
  {
    size_t item_size = sizeof(ros_message->stst);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name filter_off_on
  {
    size_t item_size = sizeof(ros_message->filter_off_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lamp_current_control
  {
    size_t item_size = sizeof(ros_message->lamp_current_control);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature_ok
  {
    size_t item_size = sizeof(ros_message->temperature_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name head_status
  {
    size_t item_size = sizeof(ros_message->head_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle_switched_off
  {
    size_t item_size = sizeof(ros_message->angle_switched_off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name direction
  {
    size_t item_size = sizeof(ros_message->direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ang_vel_correction
  {
    size_t item_size = sizeof(ros_message->ang_vel_correction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name direction_motion
  {
    size_t item_size = sizeof(ros_message->direction_motion);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name direction_mounting
  {
    size_t item_size = sizeof(ros_message->direction_mounting);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name direction_head_is_valid
  {
    size_t item_size = sizeof(ros_message->direction_head_is_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name direction_head
  {
    size_t item_size = sizeof(ros_message->direction_head);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _KistlerStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sd_can_msgs__msg__KistlerStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sd_can_msgs
size_t max_serialized_size_sd_can_msgs__msg__KistlerStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: sensor_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lamp_current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: filter_setting
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stst
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: filter_off_on
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lamp_current_control
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: temperature_ok
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: head_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: angle_switched_off
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: direction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ang_vel_correction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: direction_motion
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: direction_mounting
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: direction_head_is_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: direction_head
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sd_can_msgs__msg__KistlerStatus;
    is_plain =
      (
      offsetof(DataType, direction_head) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _KistlerStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sd_can_msgs__msg__KistlerStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_KistlerStatus = {
  "sd_can_msgs::msg",
  "KistlerStatus",
  _KistlerStatus__cdr_serialize,
  _KistlerStatus__cdr_deserialize,
  _KistlerStatus__get_serialized_size,
  _KistlerStatus__max_serialized_size
};

static rosidl_message_type_support_t _KistlerStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_KistlerStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sd_can_msgs, msg, KistlerStatus)() {
  return &_KistlerStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
