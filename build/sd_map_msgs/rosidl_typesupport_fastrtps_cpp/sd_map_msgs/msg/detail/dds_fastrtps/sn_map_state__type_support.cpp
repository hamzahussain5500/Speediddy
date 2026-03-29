// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sd_map_msgs:msg/SnMapState.idl
// generated code does not contain a copyright notice
#include "sd_map_msgs/msg/detail/sn_map_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sd_map_msgs/msg/detail/sn_map_state__struct.hpp"

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
  const sd_map_msgs::msg::SnLaneState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sd_map_msgs::msg::SnLaneState &);
size_t get_serialized_size(
  const sd_map_msgs::msg::SnLaneState &,
  size_t current_alignment);
size_t
max_serialized_size_SnLaneState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sd_map_msgs

// functions for sd_map_msgs::msg::SnLaneState already declared above


namespace sd_map_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sd_map_msgs
cdr_serialize(
  const sd_map_msgs::msg::SnMapState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: current_lane
  cdr << ros_message.current_lane;
  // Member: track_sn_state
  sd_map_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.track_sn_state,
    cdr);
  // Member: pitlane_sn_state
  sd_map_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.pitlane_sn_state,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sd_map_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sd_map_msgs::msg::SnMapState & ros_message)
{
  // Member: current_lane
  cdr >> ros_message.current_lane;

  // Member: track_sn_state
  sd_map_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.track_sn_state);

  // Member: pitlane_sn_state
  sd_map_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.pitlane_sn_state);

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sd_map_msgs
get_serialized_size(
  const sd_map_msgs::msg::SnMapState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: current_lane
  {
    size_t item_size = sizeof(ros_message.current_lane);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: track_sn_state

  current_alignment +=
    sd_map_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.track_sn_state, current_alignment);
  // Member: pitlane_sn_state

  current_alignment +=
    sd_map_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.pitlane_sn_state, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sd_map_msgs
max_serialized_size_SnMapState(
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


  // Member: current_lane
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: track_sn_state
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        sd_map_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SnLaneState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: pitlane_sn_state
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        sd_map_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SnLaneState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sd_map_msgs::msg::SnMapState;
    is_plain =
      (
      offsetof(DataType, pitlane_sn_state) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SnMapState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sd_map_msgs::msg::SnMapState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SnMapState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sd_map_msgs::msg::SnMapState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SnMapState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sd_map_msgs::msg::SnMapState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SnMapState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SnMapState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SnMapState__callbacks = {
  "sd_map_msgs::msg",
  "SnMapState",
  _SnMapState__cdr_serialize,
  _SnMapState__cdr_deserialize,
  _SnMapState__get_serialized_size,
  _SnMapState__max_serialized_size
};

static rosidl_message_type_support_t _SnMapState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SnMapState__callbacks,
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
get_message_type_support_handle<sd_map_msgs::msg::SnMapState>()
{
  return &sd_map_msgs::msg::typesupport_fastrtps_cpp::_SnMapState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sd_map_msgs, msg, SnMapState)() {
  return &sd_map_msgs::msg::typesupport_fastrtps_cpp::_SnMapState__handle;
}

#ifdef __cplusplus
}
#endif
