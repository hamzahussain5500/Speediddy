// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sd_can_msgs:msg/Badenia560PowertrainTemp.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_TEMP__TRAITS_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_TEMP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sd_can_msgs/msg/detail/badenia560_powertrain_temp__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sd_can_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Badenia560PowertrainTemp & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: m_pushrod_strain_rl
  {
    out << "m_pushrod_strain_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.m_pushrod_strain_rl, out);
    out << ", ";
  }

  // member: m_pushrod_strain_rr
  {
    out << "m_pushrod_strain_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.m_pushrod_strain_rr, out);
    out << ", ";
  }

  // member: bsu_prefill_diag
  {
    out << "bsu_prefill_diag: ";
    rosidl_generator_traits::value_to_yaml(msg.bsu_prefill_diag, out);
    out << ", ";
  }

  // member: engine_oil_temperature
  {
    out << "engine_oil_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_oil_temperature, out);
    out << ", ";
  }

  // member: coolant_temperature
  {
    out << "coolant_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.coolant_temperature, out);
    out << ", ";
  }

  // member: gear_box_oil_temp
  {
    out << "gear_box_oil_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_box_oil_temp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Badenia560PowertrainTemp & msg,
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

  // member: m_pushrod_strain_rl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_pushrod_strain_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.m_pushrod_strain_rl, out);
    out << "\n";
  }

  // member: m_pushrod_strain_rr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "m_pushrod_strain_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.m_pushrod_strain_rr, out);
    out << "\n";
  }

  // member: bsu_prefill_diag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bsu_prefill_diag: ";
    rosidl_generator_traits::value_to_yaml(msg.bsu_prefill_diag, out);
    out << "\n";
  }

  // member: engine_oil_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engine_oil_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.engine_oil_temperature, out);
    out << "\n";
  }

  // member: coolant_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coolant_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.coolant_temperature, out);
    out << "\n";
  }

  // member: gear_box_oil_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_box_oil_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_box_oil_temp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Badenia560PowertrainTemp & msg, bool use_flow_style = false)
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
  const sd_can_msgs::msg::Badenia560PowertrainTemp & msg,
  std::ostream & out, size_t indentation = 0)
{
  sd_can_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sd_can_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sd_can_msgs::msg::Badenia560PowertrainTemp & msg)
{
  return sd_can_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sd_can_msgs::msg::Badenia560PowertrainTemp>()
{
  return "sd_can_msgs::msg::Badenia560PowertrainTemp";
}

template<>
inline const char * name<sd_can_msgs::msg::Badenia560PowertrainTemp>()
{
  return "sd_can_msgs/msg/Badenia560PowertrainTemp";
}

template<>
struct has_fixed_size<sd_can_msgs::msg::Badenia560PowertrainTemp>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sd_can_msgs::msg::Badenia560PowertrainTemp>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sd_can_msgs::msg::Badenia560PowertrainTemp>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_TEMP__TRAITS_HPP_
