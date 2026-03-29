// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sd_can_msgs:msg/ICEStatus01.idl
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
#include "sd_can_msgs/msg/detail/ice_status01__struct.h"
#include "sd_can_msgs/msg/detail/ice_status01__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sd_can_msgs__msg__ice_status01__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("sd_can_msgs.msg._ice_status01.ICEStatus01", full_classname_dest, 41) == 0);
  }
  sd_can_msgs__msg__ICEStatus01 * ros_message = _ros_message;
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
  {  // ice_actual_gear
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_actual_gear");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ice_actual_gear = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ice_target_gear_ack
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_target_gear_ack");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ice_target_gear_ack = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ice_actual_throttle
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_actual_throttle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ice_actual_throttle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ice_target_throttle_ack
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_target_throttle_ack");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ice_target_throttle_ack = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ice_push_to_pass_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_push_to_pass_req");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ice_push_to_pass_req = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ice_push_to_pass_ack
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_push_to_pass_ack");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ice_push_to_pass_ack = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ice_water_press_k_pa
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_water_press_k_pa");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ice_water_press_k_pa = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ice_available_fuel_l
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_available_fuel_l");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ice_available_fuel_l = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ice_downshift_available
    PyObject * field = PyObject_GetAttrString(_pymsg, "ice_downshift_available");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ice_downshift_available = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sd_can_msgs__msg__ice_status01__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ICEStatus01 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sd_can_msgs.msg._ice_status01");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ICEStatus01");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sd_can_msgs__msg__ICEStatus01 * ros_message = (sd_can_msgs__msg__ICEStatus01 *)raw_ros_message;
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
  {  // ice_actual_gear
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ice_actual_gear);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_actual_gear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_target_gear_ack
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ice_target_gear_ack);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_target_gear_ack", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_actual_throttle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ice_actual_throttle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_actual_throttle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_target_throttle_ack
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ice_target_throttle_ack);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_target_throttle_ack", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_push_to_pass_req
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ice_push_to_pass_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_push_to_pass_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_push_to_pass_ack
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ice_push_to_pass_ack);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_push_to_pass_ack", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_water_press_k_pa
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ice_water_press_k_pa);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_water_press_k_pa", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_available_fuel_l
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ice_available_fuel_l);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_available_fuel_l", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ice_downshift_available
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ice_downshift_available);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ice_downshift_available", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
