// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sd_can_msgs:msg/BSUStatus01Legacy.idl
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
#include "sd_can_msgs/msg/detail/bsu_status01_legacy__struct.h"
#include "sd_can_msgs/msg/detail/bsu_status01_legacy__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sd_can_msgs__msg__bsu_status01_legacy__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("sd_can_msgs.msg._bsu_status01_legacy.BSUStatus01Legacy", full_classname_dest, 54) == 0);
  }
  sd_can_msgs__msg__BSUStatus01Legacy * ros_message = _ros_message;
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
  {  // bsu_hl_stop_request
    PyObject * field = PyObject_GetAttrString(_pymsg, "bsu_hl_stop_request");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bsu_hl_stop_request = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bsu_hl_warning
    PyObject * field = PyObject_GetAttrString(_pymsg, "bsu_hl_warning");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bsu_hl_warning = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bsu_em_stop_activated
    PyObject * field = PyObject_GetAttrString(_pymsg, "bsu_em_stop_activated");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bsu_em_stop_activated = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bsu_ml_stop_activated
    PyObject * field = PyObject_GetAttrString(_pymsg, "bsu_ml_stop_activated");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bsu_ml_stop_activated = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bsu_alive_counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "bsu_alive_counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bsu_alive_counter = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bsu_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "bsu_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bsu_status = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // abs_external_enable_ack
    PyObject * field = PyObject_GetAttrString(_pymsg, "abs_external_enable_ack");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->abs_external_enable_ack = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sd_can_msgs__msg__bsu_status01_legacy__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BSUStatus01Legacy */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sd_can_msgs.msg._bsu_status01_legacy");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BSUStatus01Legacy");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sd_can_msgs__msg__BSUStatus01Legacy * ros_message = (sd_can_msgs__msg__BSUStatus01Legacy *)raw_ros_message;
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
  {  // bsu_hl_stop_request
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bsu_hl_stop_request);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bsu_hl_stop_request", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bsu_hl_warning
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bsu_hl_warning);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bsu_hl_warning", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bsu_em_stop_activated
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bsu_em_stop_activated);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bsu_em_stop_activated", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bsu_ml_stop_activated
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bsu_ml_stop_activated);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bsu_ml_stop_activated", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bsu_alive_counter
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bsu_alive_counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bsu_alive_counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bsu_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bsu_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bsu_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // abs_external_enable_ack
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->abs_external_enable_ack);
    {
      int rc = PyObject_SetAttrString(_pymessage, "abs_external_enable_ack", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
