// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sd_can_msgs:msg/HLMsg03Legacy.idl
// generated code does not contain a copyright notice
#include "sd_can_msgs/msg/detail/hl_msg03_legacy__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sd_can_msgs/msg/detail/hl_msg03_legacy__struct.hpp"

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
  const sd_can_msgs::msg::HLMsg03Legacy & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: hl_alive_03
  cdr << ros_message.hl_alive_03;
  // Member: hl_dbw_enable
  cdr << ros_message.hl_dbw_enable;
  // Member: hl_push_to_pass_on
  cdr << ros_message.hl_push_to_pass_on;
  // Member: hl_pdu1_activate_gnss
  cdr << ros_message.hl_pdu1_activate_gnss;
  // Member: hl_pdu1_activate_oss
  cdr << ros_message.hl_pdu1_activate_oss;
  // Member: hl_ice_enable
  cdr << ros_message.hl_ice_enable;
  // Member: hl_pdu1_activate_lidar_r
  cdr << ros_message.hl_pdu1_activate_lidar_r;
  // Member: hl_pdu1_activate_lidar_cn
  cdr << ros_message.hl_pdu1_activate_lidar_cn;
  // Member: hl_pdu1_activate_lidar_l
  cdr << ros_message.hl_pdu1_activate_lidar_l;
  // Member: hl_pdu1_activate_radar_rear
  cdr << ros_message.hl_pdu1_activate_radar_rear;
  // Member: hl_pdu1_activate_radar_cn
  cdr << ros_message.hl_pdu1_activate_radar_cn;
  // Member: hl_pdu1_activate_radar_r
  cdr << ros_message.hl_pdu1_activate_radar_r;
  // Member: hl_pdu1_activate_radar_l
  cdr << ros_message.hl_pdu1_activate_radar_l;
  // Member: ice_start_fuel_level_l
  cdr << ros_message.ice_start_fuel_level_l;
  // Member: hl_crancking_by_pass
  cdr << ros_message.hl_crancking_by_pass;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sd_can_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sd_can_msgs::msg::HLMsg03Legacy & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: hl_alive_03
  cdr >> ros_message.hl_alive_03;

  // Member: hl_dbw_enable
  cdr >> ros_message.hl_dbw_enable;

  // Member: hl_push_to_pass_on
  cdr >> ros_message.hl_push_to_pass_on;

  // Member: hl_pdu1_activate_gnss
  cdr >> ros_message.hl_pdu1_activate_gnss;

  // Member: hl_pdu1_activate_oss
  cdr >> ros_message.hl_pdu1_activate_oss;

  // Member: hl_ice_enable
  cdr >> ros_message.hl_ice_enable;

  // Member: hl_pdu1_activate_lidar_r
  cdr >> ros_message.hl_pdu1_activate_lidar_r;

  // Member: hl_pdu1_activate_lidar_cn
  cdr >> ros_message.hl_pdu1_activate_lidar_cn;

  // Member: hl_pdu1_activate_lidar_l
  cdr >> ros_message.hl_pdu1_activate_lidar_l;

  // Member: hl_pdu1_activate_radar_rear
  cdr >> ros_message.hl_pdu1_activate_radar_rear;

  // Member: hl_pdu1_activate_radar_cn
  cdr >> ros_message.hl_pdu1_activate_radar_cn;

  // Member: hl_pdu1_activate_radar_r
  cdr >> ros_message.hl_pdu1_activate_radar_r;

  // Member: hl_pdu1_activate_radar_l
  cdr >> ros_message.hl_pdu1_activate_radar_l;

  // Member: ice_start_fuel_level_l
  cdr >> ros_message.ice_start_fuel_level_l;

  // Member: hl_crancking_by_pass
  cdr >> ros_message.hl_crancking_by_pass;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sd_can_msgs
get_serialized_size(
  const sd_can_msgs::msg::HLMsg03Legacy & ros_message,
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
  // Member: hl_alive_03
  {
    size_t item_size = sizeof(ros_message.hl_alive_03);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hl_dbw_enable
  {
    size_t item_size = sizeof(ros_message.hl_dbw_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hl_push_to_pass_on
  {
    size_t item_size = sizeof(ros_message.hl_push_to_pass_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hl_pdu1_activate_gnss
  {
    size_t item_size = sizeof(ros_message.hl_pdu1_activate_gnss);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hl_pdu1_activate_oss
  {
    size_t item_size = sizeof(ros_message.hl_pdu1_activate_oss);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hl_ice_enable
  {
    size_t item_size = sizeof(ros_message.hl_ice_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hl_pdu1_activate_lidar_r
  {
    size_t item_size = sizeof(ros_message.hl_pdu1_activate_lidar_r);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hl_pdu1_activate_lidar_cn
  {
    size_t item_size = sizeof(ros_message.hl_pdu1_activate_lidar_cn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hl_pdu1_activate_lidar_l
  {
    size_t item_size = sizeof(ros_message.hl_pdu1_activate_lidar_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hl_pdu1_activate_radar_rear
  {
    size_t item_size = sizeof(ros_message.hl_pdu1_activate_radar_rear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hl_pdu1_activate_radar_cn
  {
    size_t item_size = sizeof(ros_message.hl_pdu1_activate_radar_cn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hl_pdu1_activate_radar_r
  {
    size_t item_size = sizeof(ros_message.hl_pdu1_activate_radar_r);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hl_pdu1_activate_radar_l
  {
    size_t item_size = sizeof(ros_message.hl_pdu1_activate_radar_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ice_start_fuel_level_l
  {
    size_t item_size = sizeof(ros_message.ice_start_fuel_level_l);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hl_crancking_by_pass
  {
    size_t item_size = sizeof(ros_message.hl_crancking_by_pass);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sd_can_msgs
max_serialized_size_HLMsg03Legacy(
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

  // Member: hl_alive_03
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hl_dbw_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hl_push_to_pass_on
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hl_pdu1_activate_gnss
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hl_pdu1_activate_oss
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hl_ice_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hl_pdu1_activate_lidar_r
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hl_pdu1_activate_lidar_cn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hl_pdu1_activate_lidar_l
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hl_pdu1_activate_radar_rear
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hl_pdu1_activate_radar_cn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hl_pdu1_activate_radar_r
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hl_pdu1_activate_radar_l
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ice_start_fuel_level_l
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: hl_crancking_by_pass
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
    using DataType = sd_can_msgs::msg::HLMsg03Legacy;
    is_plain =
      (
      offsetof(DataType, hl_crancking_by_pass) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _HLMsg03Legacy__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sd_can_msgs::msg::HLMsg03Legacy *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HLMsg03Legacy__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sd_can_msgs::msg::HLMsg03Legacy *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HLMsg03Legacy__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sd_can_msgs::msg::HLMsg03Legacy *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HLMsg03Legacy__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_HLMsg03Legacy(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _HLMsg03Legacy__callbacks = {
  "sd_can_msgs::msg",
  "HLMsg03Legacy",
  _HLMsg03Legacy__cdr_serialize,
  _HLMsg03Legacy__cdr_deserialize,
  _HLMsg03Legacy__get_serialized_size,
  _HLMsg03Legacy__max_serialized_size
};

static rosidl_message_type_support_t _HLMsg03Legacy__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HLMsg03Legacy__callbacks,
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
get_message_type_support_handle<sd_can_msgs::msg::HLMsg03Legacy>()
{
  return &sd_can_msgs::msg::typesupport_fastrtps_cpp::_HLMsg03Legacy__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sd_can_msgs, msg, HLMsg03Legacy)() {
  return &sd_can_msgs::msg::typesupport_fastrtps_cpp::_HLMsg03Legacy__handle;
}

#ifdef __cplusplus
}
#endif
