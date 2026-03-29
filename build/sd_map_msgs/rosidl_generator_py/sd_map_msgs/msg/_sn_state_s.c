// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sd_map_msgs:msg/SnState.idl
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
#include "sd_map_msgs/msg/detail/sn_state__struct.h"
#include "sd_map_msgs/msg/detail/sn_state__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool sd_map_msgs__msg__sn_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[34];
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
    assert(strncmp("sd_map_msgs.msg._sn_state.SnState", full_classname_dest, 33) == 0);
  }
  sd_map_msgs__msg__SnState * ros_message = _ros_message;
  {  // idx
    PyObject * field = PyObject_GetAttrString(_pymsg, "idx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->idx = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ds
    PyObject * field = PyObject_GetAttrString(_pymsg, "ds");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ds = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // d_idx
    PyObject * field = PyObject_GetAttrString(_pymsg, "d_idx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->d_idx = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // n
    PyObject * field = PyObject_GetAttrString(_pymsg, "n");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->n = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // epsi
    PyObject * field = PyObject_GetAttrString(_pymsg, "epsi");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->epsi = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sd_map_msgs__msg__sn_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SnState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sd_map_msgs.msg._sn_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SnState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sd_map_msgs__msg__SnState * ros_message = (sd_map_msgs__msg__SnState *)raw_ros_message;
  {  // idx
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->idx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "idx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ds
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ds);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ds", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // d_idx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->d_idx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "d_idx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // n
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->n);
    {
      int rc = PyObject_SetAttrString(_pymessage, "n", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // epsi
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->epsi);
    {
      int rc = PyObject_SetAttrString(_pymessage, "epsi", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
