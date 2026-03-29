// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sd_map_msgs:msg/SnLaneState.idl
// generated code does not contain a copyright notice
#include "sd_map_msgs/msg/detail/sn_lane_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sd_map_msgs/msg/detail/sn_lane_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace sd_map_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sd_map_msgs::msg::SnState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sd_map_msgs::msg::SnState &);
size_t get_serialized_size(
  const sd_map_msgs::msg::SnState &,
  size_t current_alignment);
size_t
max_serialized_size_SnState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sd_map_msgs


namespace sd_map_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sd_map_msgs
cdr_serialize(
  const sd_map_msgs::msg::SnLaneState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: sn_state
  sd_map_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.sn_state,
    cdr);
  // Member: is_inside_borders
  cdr << (ros_message.is_inside_borders ? true : false);
  // Member: dist_to_border
  cdr << ros_message.dist_to_border;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sd_map_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sd_map_msgs::msg::SnLaneState & ros_message)
{
  // Member: sn_state
  sd_map_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.sn_state);

  // Member: is_inside_borders
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_inside_borders = tmp ? true : false;
  }

  // Member: dist_to_border
  cdr >> ros_message.dist_to_border;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sd_map_msgs
get_serialized_size(
  const sd_map_msgs::msg::SnLaneState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: sn_state

  current_alignment +=
    sd_map_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.sn_state, current_alignment);
  // Member: is_inside_borders
  {
    size_t item_size = sizeof(ros_message.is_inside_borders);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dist_to_border
  {
    size_t item_size = sizeof(ros_message.dist_to_border);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sd_map_msgs
max_serialized_size_SnLaneState(
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


  // Member: sn_state
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        sd_map_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SnState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: is_inside_borders
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dist_to_border
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
    using DataType = sd_map_msgs::msg::SnLaneState;
    is_plain =
      (
      offsetof(DataType, dist_to_border) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SnLaneState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sd_map_msgs::msg::SnLaneState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SnLaneState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sd_map_msgs::msg::SnLaneState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SnLaneState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sd_map_msgs::msg::SnLaneState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SnLaneState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SnLaneState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SnLaneState__callbacks = {
  "sd_map_msgs::msg",
  "SnLaneState",
  _SnLaneState__cdr_serialize,
  _SnLaneState__cdr_deserialize,
  _SnLaneState__get_serialized_size,
  _SnLaneState__max_serialized_size
};

static rosidl_message_type_support_t _SnLaneState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SnLaneState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sd_map_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sd_map_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<sd_map_msgs::msg::SnLaneState>()
{
  return &sd_map_msgs::msg::typesupport_fastrtps_cpp::_SnLaneState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sd_map_msgs, msg, SnLaneState)() {
  return &sd_map_msgs::msg::typesupport_fastrtps_cpp::_SnLaneState__handle;
}

#ifdef __cplusplus
}
#endif
