// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sd_can_msgs:msg/HLMsg03Updated.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/hl_msg03_updated__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sd_can_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sd_can_msgs/msg/detail/hl_msg03_updated__struct.h"
#include "sd_can_msgs/msg/detail/hl_msg03_updated__functions.h"
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


using _HLMsg03Updated__ros_msg_type = sd_can_msgs__msg__HLMsg03Updated;

static bool _HLMsg03Updated__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HLMsg03Updated__ros_msg_type * ros_message = static_cast<const _HLMsg03Updated__ros_msg_type *>(untyped_ros_message);
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

  // Field name: hl_alive_03
  {
    cdr << ros_message->hl_alive_03;
  }

  // Field name: hl_dbw_enable
  {
    cdr << (ros_message->hl_dbw_enable ? true : false);
  }

  // Field name: hl_push_to_pass_on
  {
    cdr << ros_message->hl_push_to_pass_on;
  }

  // Field name: hl_pdu12_activate_gnss
  {
    cdr << (ros_message->hl_pdu12_activate_gnss ? true : false);
  }

  // Field name: hl_pdu12_activate_oss
  {
    cdr << (ros_message->hl_pdu12_activate_oss ? true : false);
  }

  // Field name: hl_ice_enable
  {
    cdr << (ros_message->hl_ice_enable ? true : false);
  }

  // Field name: hl_pdu12_activate_lidar
  {
    cdr << (ros_message->hl_pdu12_activate_lidar ? true : false);
  }

  // Field name: hl_pdu12_activate_radar
  {
    cdr << (ros_message->hl_pdu12_activate_radar ? true : false);
  }

  // Field name: ice_start_fuel_level_l
  {
    cdr << ros_message->ice_start_fuel_level_l;
  }

  // Field name: hl_crancking_by_pass
  {
    cdr << (ros_message->hl_crancking_by_pass ? true : false);
  }

  // Field name: hl_switch_off_ok
  {
    cdr << (ros_message->hl_switch_off_ok ? true : false);
  }

  return true;
}

static bool _HLMsg03Updated__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HLMsg03Updated__ros_msg_type * ros_message = static_cast<_HLMsg03Updated__ros_msg_type *>(untyped_ros_message);
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

  // Field name: hl_alive_03
  {
    cdr >> ros_message->hl_alive_03;
  }

  // Field name: hl_dbw_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->hl_dbw_enable = tmp ? true : false;
  }

  // Field name: hl_push_to_pass_on
  {
    cdr >> ros_message->hl_push_to_pass_on;
  }

  // Field name: hl_pdu12_activate_gnss
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->hl_pdu12_activate_gnss = tmp ? true : false;
  }

  // Field name: hl_pdu12_activate_oss
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->hl_pdu12_activate_oss = tmp ? true : false;
  }

  // Field name: hl_ice_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->hl_ice_enable = tmp ? true : false;
  }

  // Field name: hl_pdu12_activate_lidar
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->hl_pdu12_activate_lidar = tmp ? true : false;
  }

  // Field name: hl_pdu12_activate_radar
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->hl_pdu12_activate_radar = tmp ? true : false;
  }

  // Field name: ice_start_fuel_level_l
  {
    cdr >> ros_message->ice_start_fuel_level_l;
  }

  // Field name: hl_crancking_by_pass
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->hl_crancking_by_pass = tmp ? true : false;
  }

  // Field name: hl_switch_off_ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->hl_switch_off_ok = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sd_can_msgs
size_t get_serialized_size_sd_can_msgs__msg__HLMsg03Updated(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HLMsg03Updated__ros_msg_type * ros_message = static_cast<const _HLMsg03Updated__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name hl_alive_03
  {
    size_t item_size = sizeof(ros_message->hl_alive_03);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hl_dbw_enable
  {
    size_t item_size = sizeof(ros_message->hl_dbw_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hl_push_to_pass_on
  {
    size_t item_size = sizeof(ros_message->hl_push_to_pass_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hl_pdu12_activate_gnss
  {
    size_t item_size = sizeof(ros_message->hl_pdu12_activate_gnss);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hl_pdu12_activate_oss
  {
    size_t item_size = sizeof(ros_message->hl_pdu12_activate_oss);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hl_ice_enable
  {
    size_t item_size = sizeof(ros_message->hl_ice_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hl_pdu12_activate_lidar
  {
    size_t item_size = sizeof(ros_message->hl_pdu12_activate_lidar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hl_pdu12_activate_radar
  {
    size_t item_size = sizeof(ros_message->hl_pdu12_activate_radar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_start_fuel_level_l
  {
    size_t item_size = sizeof(ros_message->ice_start_fuel_level_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hl_crancking_by_pass
  {
    size_t item_size = sizeof(ros_message->hl_crancking_by_pass);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hl_switch_off_ok
  {
    size_t item_size = sizeof(ros_message->hl_switch_off_ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _HLMsg03Updated__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sd_can_msgs__msg__HLMsg03Updated(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sd_can_msgs
size_t max_serialized_size_sd_can_msgs__msg__HLMsg03Updated(
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
  // member: hl_alive_03
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hl_dbw_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hl_push_to_pass_on
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hl_pdu12_activate_gnss
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hl_pdu12_activate_oss
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hl_ice_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hl_pdu12_activate_lidar
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hl_pdu12_activate_radar
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ice_start_fuel_level_l
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: hl_crancking_by_pass
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hl_switch_off_ok
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
    using DataType = sd_can_msgs__msg__HLMsg03Updated;
    is_plain =
      (
      offsetof(DataType, hl_switch_off_ok) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _HLMsg03Updated__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sd_can_msgs__msg__HLMsg03Updated(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_HLMsg03Updated = {
  "sd_can_msgs::msg",
  "HLMsg03Updated",
  _HLMsg03Updated__cdr_serialize,
  _HLMsg03Updated__cdr_deserialize,
  _HLMsg03Updated__get_serialized_size,
  _HLMsg03Updated__max_serialized_size
};

static rosidl_message_type_support_t _HLMsg03Updated__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HLMsg03Updated,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sd_can_msgs, msg, HLMsg03Updated)() {
  return &_HLMsg03Updated__type_support;
}

#if defined(__cplusplus)
}
#endif
