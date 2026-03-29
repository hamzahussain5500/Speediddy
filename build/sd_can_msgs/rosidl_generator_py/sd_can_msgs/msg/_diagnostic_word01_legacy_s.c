// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sd_can_msgs:msg/DiagnosticWord01Legacy.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "sd_can_msgs/msg/detail/diagnostic_word01_legacy__struct.h"
#include "sd_can_msgs/msg/detail/diagnostic_word01_legacy__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sd_can_msgs__msg__diagnostic_word01_legacy__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("sd_can_msgs.msg._diagnostic_word01_legacy.DiagnosticWord01Legacy", full_classname_dest, 64) == 0);
  }
  sd_can_msgs__msg__DiagnosticWord01Legacy * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // bms_starting_faild
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_starting_faild");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bms_starting_faild = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bms_timeout_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_timeout_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bms_timeout_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cba_fl_counter_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "cba_fl_counter_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cba_fl_counter_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cba_fl_derating
    PyObject * field = PyObject_GetAttrString(_pymsg, "cba_fl_derating");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cba_fl_derating = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cba_fl_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "cba_fl_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cba_fl_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cba_fl_timeout_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "cba_fl_timeout_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cba_fl_timeout_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cba_fr_counter_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "cba_fr_counter_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cba_fr_counter_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cba_fr_derating
    PyObject * field = PyObject_GetAttrString(_pymsg, "cba_fr_derating");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cba_fr_derating = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cba_fr_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "cba_fr_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cba_fr_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cba_fr_timeout_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "cba_fr_timeout_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cba_fr_timeout_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cba_rl_counter_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "cba_rl_counter_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cba_rl_counter_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cba_rl_derating
    PyObject * field = PyObject_GetAttrString(_pymsg, "cba_rl_derating");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cba_rl_derating = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cba_rl_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "cba_rl_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cba_rl_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cba_rl_timeout_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "cba_rl_timeout_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cba_rl_timeout_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cba_rr_counter_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "cba_rr_counter_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cba_rr_counter_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cba_rr_derating
    PyObject * field = PyObject_GetAttrString(_pymsg, "cba_rr_derating");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cba_rr_derating = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cba_rr_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "cba_rr_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cba_rr_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cba_rr_timeout_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "cba_rr_timeout_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cba_rr_timeout_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dcdc_starting_faild
    PyObject * field = PyObject_GetAttrString(_pymsg, "dcdc_starting_faild");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dcdc_starting_faild = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dcdc_timeout_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "dcdc_timeout_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dcdc_timeout_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ice_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ice_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ice_gear_low_oil_temp_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_gear_low_oil_temp_warning");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ice_gear_low_oil_temp_warning = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ice_engine_off_rejected
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_engine_off_rejected");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ice_engine_off_rejected = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ice_starting_fueling_failed
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_starting_fueling_failed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ice_starting_fueling_failed = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ice_starting_oil_heater_failed
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_starting_oil_heater_failed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ice_starting_oil_heater_failed = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ice_starting_starting_failed
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_starting_starting_failed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ice_starting_starting_failed = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ice_aps_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_aps_warning");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ice_aps_warning = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hl_counter_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "hl_counter_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hl_counter_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hl_timeout_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "hl_timeout_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hl_timeout_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ice_counter_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_counter_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ice_counter_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ice_timeout_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_timeout_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ice_timeout_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // emb_line_press_over_max_start_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "emb_line_press_over_max_start_limit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->emb_line_press_over_max_start_limit = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ice_oil_temp_under_min_start_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_oil_temp_under_min_start_limit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ice_oil_temp_under_min_start_limit = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pdu1_counter_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "pdu1_counter_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pdu1_counter_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pdu1_timeout_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "pdu1_timeout_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pdu1_timeout_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pdu2_counter_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "pdu2_counter_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pdu2_counter_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pdu2_timeout_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "pdu2_timeout_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pdu2_timeout_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // em_piston_hall_not_ready
    PyObject * field = PyObject_GetAttrString(_pymsg, "em_piston_hall_not_ready");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->em_piston_hall_not_ready = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // psa_counter_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "psa_counter_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->psa_counter_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // psa_derating
    PyObject * field = PyObject_GetAttrString(_pymsg, "psa_derating");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->psa_derating = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // psa_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "psa_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->psa_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // psa_timeout_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "psa_timeout_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->psa_timeout_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // emb_tank_press_under_level1
    PyObject * field = PyObject_GetAttrString(_pymsg, "emb_tank_press_under_level1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->emb_tank_press_under_level1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // emb_tank_press_under_level2
    PyObject * field = PyObject_GetAttrString(_pymsg, "emb_tank_press_under_level2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->emb_tank_press_under_level2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // emb_tank_press_under_level3
    PyObject * field = PyObject_GetAttrString(_pymsg, "emb_tank_press_under_level3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->emb_tank_press_under_level3 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // emb_tank_press_under_min_start_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "emb_tank_press_under_min_start_limit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->emb_tank_press_under_min_start_limit = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ice_override_wrong_config
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_override_wrong_config");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ice_override_wrong_config = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bsu_wrong_init_config
    PyObject * field = PyObject_GetAttrString(_pymsg, "bsu_wrong_init_config");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bsu_wrong_init_config = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ice_boost_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_boost_warning");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ice_boost_warning = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ice_coolant_pressure_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_coolant_pressure_warning");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ice_coolant_pressure_warning = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ice_coolant_temperature_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_coolant_temperature_warning");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ice_coolant_temperature_warning = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ice_fuel_pressure_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_fuel_pressure_warning");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ice_fuel_pressure_warning = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ice_gear_oil_temperature_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_gear_oil_temperature_warning");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ice_gear_oil_temperature_warning = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ice_oil_pressure_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_oil_pressure_warning");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ice_oil_pressure_warning = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ice_oil_temperature_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_oil_temperature_warning");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ice_oil_temperature_warning = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ice_over_rpm_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_over_rpm_warning");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ice_over_rpm_warning = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ice_sensor_failure_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_sensor_failure_warning");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ice_sensor_failure_warning = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ice_target_gear_not_reached_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_target_gear_not_reached_warning");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ice_target_gear_not_reached_warning = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ice_fuel_volume_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_fuel_volume_warning");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ice_fuel_volume_warning = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rm_counter_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "rm_counter_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rm_counter_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rm_timeout_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "rm_timeout_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rm_timeout_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ice_diagnostic_spare
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_diagnostic_spare");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ice_diagnostic_spare = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sd_can_msgs__msg__diagnostic_word01_legacy__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DiagnosticWord01Legacy */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sd_can_msgs.msg._diagnostic_word01_legacy");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DiagnosticWord01Legacy");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sd_can_msgs__msg__DiagnosticWord01Legacy * ros_message = (sd_can_msgs__msg__DiagnosticWord01Legacy *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_starting_faild
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bms_starting_faild);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_starting_faild", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_timeout_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bms_timeout_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_timeout_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cba_fl_counter_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cba_fl_counter_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cba_fl_counter_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cba_fl_derating
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cba_fl_derating);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cba_fl_derating", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cba_fl_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cba_fl_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cba_fl_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cba_fl_timeout_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cba_fl_timeout_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cba_fl_timeout_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cba_fr_counter_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cba_fr_counter_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cba_fr_counter_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cba_fr_derating
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cba_fr_derating);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cba_fr_derating", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cba_fr_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cba_fr_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cba_fr_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cba_fr_timeout_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cba_fr_timeout_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cba_fr_timeout_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cba_rl_counter_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cba_rl_counter_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cba_rl_counter_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cba_rl_derating
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cba_rl_derating);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cba_rl_derating", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cba_rl_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cba_rl_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cba_rl_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cba_rl_timeout_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cba_rl_timeout_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cba_rl_timeout_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cba_rr_counter_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cba_rr_counter_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cba_rr_counter_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cba_rr_derating
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cba_rr_derating);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cba_rr_derating", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cba_rr_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cba_rr_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cba_rr_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cba_rr_timeout_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cba_rr_timeout_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cba_rr_timeout_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dcdc_starting_faild
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dcdc_starting_faild);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dcdc_starting_faild", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dcdc_timeout_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dcdc_timeout_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dcdc_timeout_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ice_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_gear_low_oil_temp_warning
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ice_gear_low_oil_temp_warning);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_gear_low_oil_temp_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_engine_off_rejected
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ice_engine_off_rejected);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_engine_off_rejected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_starting_fueling_failed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ice_starting_fueling_failed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_starting_fueling_failed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_starting_oil_heater_failed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ice_starting_oil_heater_failed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_starting_oil_heater_failed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_starting_starting_failed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ice_starting_starting_failed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_starting_starting_failed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_aps_warning
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ice_aps_warning);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_aps_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hl_counter_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hl_counter_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hl_counter_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hl_timeout_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hl_timeout_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hl_timeout_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_counter_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ice_counter_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_counter_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_timeout_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ice_timeout_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_timeout_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emb_line_press_over_max_start_limit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->emb_line_press_over_max_start_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emb_line_press_over_max_start_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_oil_temp_under_min_start_limit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ice_oil_temp_under_min_start_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_oil_temp_under_min_start_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pdu1_counter_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pdu1_counter_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pdu1_counter_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pdu1_timeout_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pdu1_timeout_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pdu1_timeout_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pdu2_counter_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pdu2_counter_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pdu2_counter_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pdu2_timeout_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pdu2_timeout_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pdu2_timeout_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // em_piston_hall_not_ready
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->em_piston_hall_not_ready);
    {
      int rc = PyObject_SetAttrString(_pymessage, "em_piston_hall_not_ready", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // psa_counter_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->psa_counter_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "psa_counter_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // psa_derating
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->psa_derating);
    {
      int rc = PyObject_SetAttrString(_pymessage, "psa_derating", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // psa_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->psa_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "psa_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // psa_timeout_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->psa_timeout_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "psa_timeout_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emb_tank_press_under_level1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->emb_tank_press_under_level1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emb_tank_press_under_level1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emb_tank_press_under_level2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->emb_tank_press_under_level2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emb_tank_press_under_level2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emb_tank_press_under_level3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->emb_tank_press_under_level3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emb_tank_press_under_level3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emb_tank_press_under_min_start_limit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->emb_tank_press_under_min_start_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emb_tank_press_under_min_start_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_override_wrong_config
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ice_override_wrong_config);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_override_wrong_config", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bsu_wrong_init_config
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bsu_wrong_init_config);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bsu_wrong_init_config", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_boost_warning
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ice_boost_warning);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_boost_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_coolant_pressure_warning
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ice_coolant_pressure_warning);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_coolant_pressure_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_coolant_temperature_warning
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ice_coolant_temperature_warning);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_coolant_temperature_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_fuel_pressure_warning
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ice_fuel_pressure_warning);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_fuel_pressure_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_gear_oil_temperature_warning
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ice_gear_oil_temperature_warning);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_gear_oil_temperature_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_oil_pressure_warning
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ice_oil_pressure_warning);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_oil_pressure_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_oil_temperature_warning
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ice_oil_temperature_warning);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_oil_temperature_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_over_rpm_warning
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ice_over_rpm_warning);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_over_rpm_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_sensor_failure_warning
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ice_sensor_failure_warning);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_sensor_failure_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_target_gear_not_reached_warning
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ice_target_gear_not_reached_warning);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_target_gear_not_reached_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_fuel_volume_warning
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ice_fuel_volume_warning);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_fuel_volume_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rm_counter_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rm_counter_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rm_counter_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rm_timeout_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rm_timeout_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rm_timeout_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_diagnostic_spare
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ice_diagnostic_spare);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_diagnostic_spare", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
