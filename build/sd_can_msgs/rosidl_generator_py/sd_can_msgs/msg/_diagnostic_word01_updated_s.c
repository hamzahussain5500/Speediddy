// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sd_can_msgs:msg/DiagnosticWord01Updated.idl
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
#include "sd_can_msgs/msg/detail/diagnostic_word01_updated__struct.h"
#include "sd_can_msgs/msg/detail/diagnostic_word01_updated__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sd_can_msgs__msg__diagnostic_word01_updated__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[67];
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
    assert(strncmp("sd_can_msgs.msg._diagnostic_word01_updated.DiagnosticWord01Updated", full_classname_dest, 66) == 0);
  }
  sd_can_msgs__msg__DiagnosticWord01Updated * ros_message = _ros_message;
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
  {  // ecu_timeout_em_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "ecu_timeout_em_fault");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ecu_timeout_em_fault = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dem_cbafl_not_receive
    PyObject * field = PyObject_GetAttrString(_pymsg, "dem_cbafl_not_receive");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dem_cbafl_not_receive = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // dem_pdu12_v_not_receive
    PyObject * field = PyObject_GetAttrString(_pymsg, "dem_pdu12_v_not_receive");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dem_pdu12_v_not_receive = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // dem_cbafr_not_receive
    PyObject * field = PyObject_GetAttrString(_pymsg, "dem_cbafr_not_receive");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dem_cbafr_not_receive = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // pdu12_counter_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "pdu12_counter_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pdu12_counter_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pdu12_timeout_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "pdu12_timeout_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pdu12_timeout_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pdu48_counter_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "pdu48_counter_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pdu48_counter_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pdu48_timeout_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "pdu48_timeout_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pdu48_timeout_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dem_cbarl_not_receive
    PyObject * field = PyObject_GetAttrString(_pymsg, "dem_cbarl_not_receive");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dem_cbarl_not_receive = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // dem_cbarr_not_receive
    PyObject * field = PyObject_GetAttrString(_pymsg, "dem_cbarr_not_receive");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dem_cbarr_not_receive = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // em_stop_conditions_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "em_stop_conditions_active");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->em_stop_conditions_active = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ml_stop_conditions_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "ml_stop_conditions_active");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ml_stop_conditions_active = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dcdc4812_under_min_start_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "dcdc4812_under_min_start_limit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dcdc4812_under_min_start_limit = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // pdu12_active_anti_fire
    PyObject * field = PyObject_GetAttrString(_pymsg, "pdu12_active_anti_fire");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pdu12_active_anti_fire = (uint8_t)PyLong_AsUnsignedLong(field);
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

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sd_can_msgs__msg__diagnostic_word01_updated__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DiagnosticWord01Updated */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sd_can_msgs.msg._diagnostic_word01_updated");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DiagnosticWord01Updated");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sd_can_msgs__msg__DiagnosticWord01Updated * ros_message = (sd_can_msgs__msg__DiagnosticWord01Updated *)raw_ros_message;
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
  {  // ecu_timeout_em_fault
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ecu_timeout_em_fault);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ecu_timeout_em_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dem_cbafl_not_receive
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dem_cbafl_not_receive);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dem_cbafl_not_receive", field);
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
  {  // dem_pdu12_v_not_receive
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dem_pdu12_v_not_receive);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dem_pdu12_v_not_receive", field);
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
  {  // dem_cbafr_not_receive
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dem_cbafr_not_receive);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dem_cbafr_not_receive", field);
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
  {  // pdu12_counter_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pdu12_counter_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pdu12_counter_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pdu12_timeout_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pdu12_timeout_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pdu12_timeout_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pdu48_counter_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pdu48_counter_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pdu48_counter_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pdu48_timeout_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pdu48_timeout_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pdu48_timeout_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dem_cbarl_not_receive
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dem_cbarl_not_receive);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dem_cbarl_not_receive", field);
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
  {  // dem_cbarr_not_receive
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dem_cbarr_not_receive);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dem_cbarr_not_receive", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // em_stop_conditions_active
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->em_stop_conditions_active);
    {
      int rc = PyObject_SetAttrString(_pymessage, "em_stop_conditions_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ml_stop_conditions_active
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ml_stop_conditions_active);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ml_stop_conditions_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dcdc4812_under_min_start_limit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dcdc4812_under_min_start_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dcdc4812_under_min_start_limit", field);
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
  {  // pdu12_active_anti_fire
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pdu12_active_anti_fire);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pdu12_active_anti_fire", field);
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
