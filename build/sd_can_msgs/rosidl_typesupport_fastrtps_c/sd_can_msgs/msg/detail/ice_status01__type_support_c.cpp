// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sd_can_msgs:msg/ICEStatus01.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/ice_status01__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sd_can_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sd_can_msgs/msg/detail/ice_status01__struct.h"
#include "sd_can_msgs/msg/detail/ice_status01__functions.h"
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


using _ICEStatus01__ros_msg_type = sd_can_msgs__msg__ICEStatus01;

static bool _ICEStatus01__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ICEStatus01__ros_msg_type * ros_message = static_cast<const _ICEStatus01__ros_msg_type *>(untyped_ros_message);
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

  // Field name: ice_actual_gear
  {
    cdr << ros_message->ice_actual_gear;
  }

  // Field name: ice_target_gear_ack
  {
    cdr << ros_message->ice_target_gear_ack;
  }

  // Field name: ice_actual_throttle
  {
    cdr << ros_message->ice_actual_throttle;
  }

  // Field name: ice_target_throttle_ack
  {
    cdr << ros_message->ice_target_throttle_ack;
  }

  // Field name: ice_push_to_pass_req
  {
    cdr << ros_message->ice_push_to_pass_req;
  }

  // Field name: ice_push_to_pass_ack
  {
    cdr << ros_message->ice_push_to_pass_ack;
  }

  // Field name: ice_water_press_k_pa
  {
    cdr << ros_message->ice_water_press_k_pa;
  }

  // Field name: ice_available_fuel_l
  {
    cdr << ros_message->ice_available_fuel_l;
  }

  // Field name: ice_downshift_available
  {
    cdr << ros_message->ice_downshift_available;
  }

  return true;
}

static bool _ICEStatus01__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ICEStatus01__ros_msg_type * ros_message = static_cast<_ICEStatus01__ros_msg_type *>(untyped_ros_message);
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

  // Field name: ice_actual_gear
  {
    cdr >> ros_message->ice_actual_gear;
  }

  // Field name: ice_target_gear_ack
  {
    cdr >> ros_message->ice_target_gear_ack;
  }

  // Field name: ice_actual_throttle
  {
    cdr >> ros_message->ice_actual_throttle;
  }

  // Field name: ice_target_throttle_ack
  {
    cdr >> ros_message->ice_target_throttle_ack;
  }

  // Field name: ice_push_to_pass_req
  {
    cdr >> ros_message->ice_push_to_pass_req;
  }

  // Field name: ice_push_to_pass_ack
  {
    cdr >> ros_message->ice_push_to_pass_ack;
  }

  // Field name: ice_water_press_k_pa
  {
    cdr >> ros_message->ice_water_press_k_pa;
  }

  // Field name: ice_available_fuel_l
  {
    cdr >> ros_message->ice_available_fuel_l;
  }

  // Field name: ice_downshift_available
  {
    cdr >> ros_message->ice_downshift_available;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sd_can_msgs
size_t get_serialized_size_sd_can_msgs__msg__ICEStatus01(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ICEStatus01__ros_msg_type * ros_message = static_cast<const _ICEStatus01__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name ice_actual_gear
  {
    size_t item_size = sizeof(ros_message->ice_actual_gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_target_gear_ack
  {
    size_t item_size = sizeof(ros_message->ice_target_gear_ack);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_actual_throttle
  {
    size_t item_size = sizeof(ros_message->ice_actual_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_target_throttle_ack
  {
    size_t item_size = sizeof(ros_message->ice_target_throttle_ack);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_push_to_pass_req
  {
    size_t item_size = sizeof(ros_message->ice_push_to_pass_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_push_to_pass_ack
  {
    size_t item_size = sizeof(ros_message->ice_push_to_pass_ack);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_water_press_k_pa
  {
    size_t item_size = sizeof(ros_message->ice_water_press_k_pa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_available_fuel_l
  {
    size_t item_size = sizeof(ros_message->ice_available_fuel_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ice_downshift_available
  {
    size_t item_size = sizeof(ros_message->ice_downshift_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ICEStatus01__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sd_can_msgs__msg__ICEStatus01(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sd_can_msgs
size_t max_serialized_size_sd_can_msgs__msg__ICEStatus01(
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
  // member: ice_actual_gear
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ice_target_gear_ack
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ice_actual_throttle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ice_target_throttle_ack
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ice_push_to_pass_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ice_push_to_pass_ack
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ice_water_press_k_pa
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ice_available_fuel_l
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ice_downshift_available
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sd_can_msgs__msg__ICEStatus01;
    is_plain =
      (
      offsetof(DataType, ice_downshift_available) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ICEStatus01__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sd_can_msgs__msg__ICEStatus01(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ICEStatus01 = {
  "sd_can_msgs::msg",
  "ICEStatus01",
  _ICEStatus01__cdr_serialize,
  _ICEStatus01__cdr_deserialize,
  _ICEStatus01__get_serialized_size,
  _ICEStatus01__max_serialized_size
};

static rosidl_message_type_support_t _ICEStatus01__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ICEStatus01,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sd_can_msgs, msg, ICEStatus01)() {
  return &_ICEStatus01__type_support;
}

#if defined(__cplusplus)
}
#endif
