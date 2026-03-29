// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sd_can_msgs:msg/MM710TX3YAZ.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/mm710_tx3_yaz__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sd_can_msgs/msg/detail/mm710_tx3_yaz__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace sd_can_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sd_can_msgs
cdr_serialize(
  const sd_can_msgs::msg::MM710TX3YAZ & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: crc
  cdr << ros_message.crc;
  // Member: az_stat
  cdr << ros_message.az_stat;
  // Member: msg_cnt
  cdr << ros_message.msg_cnt;
  // Member: az
  cdr << ros_message.az;
  // Member: pitch_rate_stat
  cdr << ros_message.pitch_rate_stat;
  // Member: hw_index
  cdr << ros_message.hw_index;
  // Member: pitch_rate
  cdr << ros_message.pitch_rate;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sd_can_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sd_can_msgs::msg::MM710TX3YAZ & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: crc
  cdr >> ros_message.crc;

  // Member: az_stat
  cdr >> ros_message.az_stat;

  // Member: msg_cnt
  cdr >> ros_message.msg_cnt;

  // Member: az
  cdr >> ros_message.az;

  // Member: pitch_rate_stat
  cdr >> ros_message.pitch_rate_stat;

  // Member: hw_index
  cdr >> ros_message.hw_index;

  // Member: pitch_rate
  cdr >> ros_message.pitch_rate;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sd_can_msgs
get_serialized_size(
  const sd_can_msgs::msg::MM710TX3YAZ & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: crc
  {
    size_t item_size = sizeof(ros_message.crc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: az_stat
  {
    size_t item_size = sizeof(ros_message.az_stat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: msg_cnt
  {
    size_t item_size = sizeof(ros_message.msg_cnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: az
  {
    size_t item_size = sizeof(ros_message.az);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pitch_rate_stat
  {
    size_t item_size = sizeof(ros_message.pitch_rate_stat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hw_index
  {
    size_t item_size = sizeof(ros_message.hw_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pitch_rate
  {
    size_t item_size = sizeof(ros_message.pitch_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sd_can_msgs
max_serialized_size_MM710TX3YAZ(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: crc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: az_stat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: msg_cnt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: az
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pitch_rate_stat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hw_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pitch_rate
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
    using DataType = sd_can_msgs::msg::MM710TX3YAZ;
    is_plain =
      (
      offsetof(DataType, pitch_rate) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MM710TX3YAZ__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sd_can_msgs::msg::MM710TX3YAZ *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MM710TX3YAZ__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sd_can_msgs::msg::MM710TX3YAZ *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MM710TX3YAZ__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sd_can_msgs::msg::MM710TX3YAZ *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MM710TX3YAZ__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MM710TX3YAZ(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MM710TX3YAZ__callbacks = {
  "sd_can_msgs::msg",
  "MM710TX3YAZ",
  _MM710TX3YAZ__cdr_serialize,
  _MM710TX3YAZ__cdr_deserialize,
  _MM710TX3YAZ__get_serialized_size,
  _MM710TX3YAZ__max_serialized_size
};

static rosidl_message_type_support_t _MM710TX3YAZ__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MM710TX3YAZ__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sd_can_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sd_can_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<sd_can_msgs::msg::MM710TX3YAZ>()
{
  return &sd_can_msgs::msg::typesupport_fastrtps_cpp::_MM710TX3YAZ__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sd_can_msgs, msg, MM710TX3YAZ)() {
  return &sd_can_msgs::msg::typesupport_fastrtps_cpp::_MM710TX3YAZ__handle;
}

#ifdef __cplusplus
}
#endif
