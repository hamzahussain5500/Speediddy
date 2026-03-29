// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sd_can_msgs:msg/FlagInfoOutput.idl
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
#include "sd_can_msgs/msg/detail/flag_info_output__struct.h"
#include "sd_can_msgs/msg/detail/flag_info_output__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sd_can_msgs__msg__flag_info_output__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("sd_can_msgs.msg._flag_info_output.FlagInfoOutput", full_classname_dest, 48) == 0);
  }
  sd_can_msgs__msg__FlagInfoOutput * ros_message = _ros_message;
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
  {  // led_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "led_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->led_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // free_running_counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "free_running_counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->free_running_counter = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // spare1_0x7_c
    PyObject * field = PyObject_GetAttrString(_pymsg, "spare1_0x7_c");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->spare1_0x7_c = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // spare2_0x7_c
    PyObject * field = PyObject_GetAttrString(_pymsg, "spare2_0x7_c");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->spare2_0x7_c = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_session_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_session_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_session_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_track_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_track_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_track_flag = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_car_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_car_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_car_flag = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // crc_sm
    PyObject * field = PyObject_GetAttrString(_pymsg, "crc_sm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->crc_sm = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sd_can_msgs__msg__flag_info_output__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FlagInfoOutput */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sd_can_msgs.msg._flag_info_output");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FlagInfoOutput");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sd_can_msgs__msg__FlagInfoOutput * ros_message = (sd_can_msgs__msg__FlagInfoOutput *)raw_ros_message;
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
  {  // led_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->led_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "led_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // free_running_counter
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->free_running_counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "free_running_counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // spare1_0x7_c
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->spare1_0x7_c);
    {
      int rc = PyObject_SetAttrString(_pymessage, "spare1_0x7_c", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // spare2_0x7_c
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->spare2_0x7_c);
    {
      int rc = PyObject_SetAttrString(_pymessage, "spare2_0x7_c", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_session_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_session_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_session_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_track_flag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_track_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_track_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_car_flag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_car_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_car_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // crc_sm
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->crc_sm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "crc_sm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
