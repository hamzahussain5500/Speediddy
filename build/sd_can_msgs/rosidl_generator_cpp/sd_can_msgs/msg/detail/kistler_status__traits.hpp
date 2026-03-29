// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sd_can_msgs:msg/KistlerStatus.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__KISTLER_STATUS__TRAITS_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__KISTLER_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sd_can_msgs/msg/detail/kistler_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sd_can_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const KistlerStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: sensor_id
  {
    out << "sensor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_id, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: lamp_current
  {
    out << "lamp_current: ";
    rosidl_generator_traits::value_to_yaml(msg.lamp_current, out);
    out << ", ";
  }

  // member: filter_setting
  {
    out << "filter_setting: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_setting, out);
    out << ", ";
  }

  // member: stst
  {
    out << "stst: ";
    rosidl_generator_traits::value_to_yaml(msg.stst, out);
    out << ", ";
  }

  // member: filter_off_on
  {
    out << "filter_off_on: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_off_on, out);
    out << ", ";
  }

  // member: lamp_current_control
  {
    out << "lamp_current_control: ";
    rosidl_generator_traits::value_to_yaml(msg.lamp_current_control, out);
    out << ", ";
  }

  // member: temperature_ok
  {
    out << "temperature_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_ok, out);
    out << ", ";
  }

  // member: head_status
  {
    out << "head_status: ";
    rosidl_generator_traits::value_to_yaml(msg.head_status, out);
    out << ", ";
  }

  // member: angle_switched_off
  {
    out << "angle_switched_off: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_switched_off, out);
    out << ", ";
  }

  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << ", ";
  }

  // member: ang_vel_correction
  {
    out << "ang_vel_correction: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_vel_correction, out);
    out << ", ";
  }

  // member: direction_motion
  {
    out << "direction_motion: ";
    rosidl_generator_traits::value_to_yaml(msg.direction_motion, out);
    out << ", ";
  }

  // member: direction_mounting
  {
    out << "direction_mounting: ";
    rosidl_generator_traits::value_to_yaml(msg.direction_mounting, out);
    out << ", ";
  }

  // member: direction_head_is_valid
  {
    out << "direction_head_is_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.direction_head_is_valid, out);
    out << ", ";
  }

  // member: direction_head
  {
    out << "direction_head: ";
    rosidl_generator_traits::value_to_yaml(msg.direction_head, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KistlerStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: sensor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_id, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: lamp_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lamp_current: ";
    rosidl_generator_traits::value_to_yaml(msg.lamp_current, out);
    out << "\n";
  }

  // member: filter_setting
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filter_setting: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_setting, out);
    out << "\n";
  }

  // member: stst
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stst: ";
    rosidl_generator_traits::value_to_yaml(msg.stst, out);
    out << "\n";
  }

  // member: filter_off_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filter_off_on: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_off_on, out);
    out << "\n";
  }

  // member: lamp_current_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lamp_current_control: ";
    rosidl_generator_traits::value_to_yaml(msg.lamp_current_control, out);
    out << "\n";
  }

  // member: temperature_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_ok, out);
    out << "\n";
  }

  // member: head_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "head_status: ";
    rosidl_generator_traits::value_to_yaml(msg.head_status, out);
    out << "\n";
  }

  // member: angle_switched_off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_switched_off: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_switched_off, out);
    out << "\n";
  }

  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }

  // member: ang_vel_correction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ang_vel_correction: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_vel_correction, out);
    out << "\n";
  }

  // member: direction_motion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction_motion: ";
    rosidl_generator_traits::value_to_yaml(msg.direction_motion, out);
    out << "\n";
  }

  // member: direction_mounting
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction_mounting: ";
    rosidl_generator_traits::value_to_yaml(msg.direction_mounting, out);
    out << "\n";
  }

  // member: direction_head_is_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction_head_is_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.direction_head_is_valid, out);
    out << "\n";
  }

  // member: direction_head
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction_head: ";
    rosidl_generator_traits::value_to_yaml(msg.direction_head, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KistlerStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace sd_can_msgs

namespace rosidl_generator_traits
{

[[deprecated("use sd_can_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sd_can_msgs::msg::KistlerStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  sd_can_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sd_can_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sd_can_msgs::msg::KistlerStatus & msg)
{
  return sd_can_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sd_can_msgs::msg::KistlerStatus>()
{
  return "sd_can_msgs::msg::KistlerStatus";
}

template<>
inline const char * name<sd_can_msgs::msg::KistlerStatus>()
{
  return "sd_can_msgs/msg/KistlerStatus";
}

template<>
struct has_fixed_size<sd_can_msgs::msg::KistlerStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sd_can_msgs::msg::KistlerStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sd_can_msgs::msg::KistlerStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SD_CAN_MSGS__MSG__DETAIL__KISTLER_STATUS__TRAITS_HPP_
