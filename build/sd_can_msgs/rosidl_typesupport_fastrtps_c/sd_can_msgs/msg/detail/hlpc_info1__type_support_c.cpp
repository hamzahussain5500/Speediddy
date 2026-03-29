// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sd_can_msgs:msg/HLPCInfo1.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/hlpc_info1__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sd_can_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sd_can_msgs/msg/detail/hlpc_info1__struct.h"
#include "sd_can_msgs/msg/detail/hlpc_info1__functions.h"
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


using _HLPCInfo1__ros_msg_type = sd_can_msgs__msg__HLPCInfo1;

static bool _HLPCInfo1__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HLPCInfo1__ros_msg_type * ros_message = static_cast<const _HLPCInfo1__ros_msg_type *>(untyped_ros_message);
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

  // Field name: hlpc_network_ping
  {
    cdr << ros_message->hlpc_network_ping;
  }

  // Field name: hlpc_lidar_status_left
  {
    cdr << ros_message->hlpc_lidar_status_left;
  }

  // Field name: hlpc_lidar_status_front
  {
    cdr << ros_message->hlpc_lidar_status_front;
  }

  // Field name: hlpc_lidar_status_right
  {
    cdr << ros_message->hlpc_lidar_status_right;
  }

  // Field name: hlpc_radar_status_front
  {
    cdr << ros_message->hlpc_radar_status_front;
  }

  // Field name: hlpc_radar_status_left
  {
    cdr << ros_message->hlpc_radar_status_left;
  }

  // Field name: hlpc_radar_status_right
  {
    cdr << ros_message->hlpc_radar_status_right;
  }

  // Field name: hlpc_radar_status_rear
  {
    cdr << ros_message->hlpc_radar_status_rear;
  }

  // Field name: hlpc_vector_nav_fix
  {
    cdr << ros_message->hlpc_vector_nav_fix;
  }

  // Field name: hlpc_alive_c4
  {
    cdr << ros_message->hlpc_alive_c4;
  }

  return true;
}

static bool _HLPCInfo1__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HLPCInfo1__ros_msg_type * ros_message = static_cast<_HLPCInfo1__ros_msg_type *>(untyped_ros_message);
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

  // Field name: hlpc_network_ping
  {
    cdr >> ros_message->hlpc_network_ping;
  }

  // Field name: hlpc_lidar_status_left
  {
    cdr >> ros_message->hlpc_lidar_status_left;
  }

  // Field name: hlpc_lidar_status_front
  {
    cdr >> ros_message->hlpc_lidar_status_front;
  }

  // Field name: hlpc_lidar_status_right
  {
    cdr >> ros_message->hlpc_lidar_status_right;
  }

  // Field name: hlpc_radar_status_front
  {
    cdr >> ros_message->hlpc_radar_status_front;
  }

  // Field name: hlpc_radar_status_left
  {
    cdr >> ros_message->hlpc_radar_status_left;
  }

  // Field name: hlpc_radar_status_right
  {
    cdr >> ros_message->hlpc_radar_status_right;
  }

  // Field name: hlpc_radar_status_rear
  {
    cdr >> ros_message->hlpc_radar_status_rear;
  }

  // Field name: hlpc_vector_nav_fix
  {
    cdr >> ros_message->hlpc_vector_nav_fix;
  }

  // Field name: hlpc_alive_c4
  {
    cdr >> ros_message->hlpc_alive_c4;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sd_can_msgs
size_t get_serialized_size_sd_can_msgs__msg__HLPCInfo1(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HLPCInfo1__ros_msg_type * ros_message = static_cast<const _HLPCInfo1__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name hlpc_network_ping
  {
    size_t item_size = sizeof(ros_message->hlpc_network_ping);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hlpc_lidar_status_left
  {
    size_t item_size = sizeof(ros_message->hlpc_lidar_status_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hlpc_lidar_status_front
  {
    size_t item_size = sizeof(ros_message->hlpc_lidar_status_front);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hlpc_lidar_status_right
  {
    size_t item_size = sizeof(ros_message->hlpc_lidar_status_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hlpc_radar_status_front
  {
    size_t item_size = sizeof(ros_message->hlpc_radar_status_front);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hlpc_radar_status_left
  {
    size_t item_size = sizeof(ros_message->hlpc_radar_status_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hlpc_radar_status_right
  {
    size_t item_size = sizeof(ros_message->hlpc_radar_status_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hlpc_radar_status_rear
  {
    size_t item_size = sizeof(ros_message->hlpc_radar_status_rear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hlpc_vector_nav_fix
  {
    size_t item_size = sizeof(ros_message->hlpc_vector_nav_fix);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hlpc_alive_c4
  {
    size_t item_size = sizeof(ros_message->hlpc_alive_c4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _HLPCInfo1__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sd_can_msgs__msg__HLPCInfo1(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sd_can_msgs
size_t max_serialized_size_sd_can_msgs__msg__HLPCInfo1(
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
  // member: hlpc_network_ping
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: hlpc_lidar_status_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hlpc_lidar_status_front
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hlpc_lidar_status_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hlpc_radar_status_front
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hlpc_radar_status_left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hlpc_radar_status_right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hlpc_radar_status_rear
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hlpc_vector_nav_fix
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hlpc_alive_c4
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
    using DataType = sd_can_msgs__msg__HLPCInfo1;
    is_plain =
      (
      offsetof(DataType, hlpc_alive_c4) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _HLPCInfo1__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sd_can_msgs__msg__HLPCInfo1(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_HLPCInfo1 = {
  "sd_can_msgs::msg",
  "HLPCInfo1",
  _HLPCInfo1__cdr_serialize,
  _HLPCInfo1__cdr_deserialize,
  _HLPCInfo1__get_serialized_size,
  _HLPCInfo1__max_serialized_size
};

static rosidl_message_type_support_t _HLPCInfo1__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HLPCInfo1,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sd_can_msgs, msg, HLPCInfo1)() {
  return &_HLPCInfo1__type_support;
}

#if defined(__cplusplus)
}
#endif
