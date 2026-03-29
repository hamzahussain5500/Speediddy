// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sd_can_msgs:msg/CbaStatusFr.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__CBA_STATUS_FR__TRAITS_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__CBA_STATUS_FR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sd_can_msgs/msg/detail/cba_status_fr__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sd_can_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CbaStatusFr & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: cba_actual_pressure_fr_pa
  {
    out << "cba_actual_pressure_fr_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_actual_pressure_fr_pa, out);
    out << ", ";
  }

  // member: cba_actual_pressure_fr
  {
    out << "cba_actual_pressure_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_actual_pressure_fr, out);
    out << ", ";
  }

  // member: cba_target_pressure_fr_ack
  {
    out << "cba_target_pressure_fr_ack: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_target_pressure_fr_ack, out);
    out << ", ";
  }

  // member: cba_actual_current_fr_a
  {
    out << "cba_actual_current_fr_a: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_actual_current_fr_a, out);
    out << ", ";
  }

  // member: cba_voltage_fr_v
  {
    out << "cba_voltage_fr_v: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_voltage_fr_v, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CbaStatusFr & msg,
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

  // member: cba_actual_pressure_fr_pa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_actual_pressure_fr_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_actual_pressure_fr_pa, out);
    out << "\n";
  }

  // member: cba_actual_pressure_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_actual_pressure_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_actual_pressure_fr, out);
    out << "\n";
  }

  // member: cba_target_pressure_fr_ack
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_target_pressure_fr_ack: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_target_pressure_fr_ack, out);
    out << "\n";
  }

  // member: cba_actual_current_fr_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_actual_current_fr_a: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_actual_current_fr_a, out);
    out << "\n";
  }

  // member: cba_voltage_fr_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_voltage_fr_v: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_voltage_fr_v, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CbaStatusFr & msg, bool use_flow_style = false)
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
  const sd_can_msgs::msg::CbaStatusFr & msg,
  std::ostream & out, size_t indentation = 0)
{
  sd_can_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sd_can_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sd_can_msgs::msg::CbaStatusFr & msg)
{
  return sd_can_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sd_can_msgs::msg::CbaStatusFr>()
{
  return "sd_can_msgs::msg::CbaStatusFr";
}

template<>
inline const char * name<sd_can_msgs::msg::CbaStatusFr>()
{
  return "sd_can_msgs/msg/CbaStatusFr";
}

template<>
struct has_fixed_size<sd_can_msgs::msg::CbaStatusFr>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sd_can_msgs::msg::CbaStatusFr>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sd_can_msgs::msg::CbaStatusFr>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SD_CAN_MSGS__MSG__DETAIL__CBA_STATUS_FR__TRAITS_HPP_
