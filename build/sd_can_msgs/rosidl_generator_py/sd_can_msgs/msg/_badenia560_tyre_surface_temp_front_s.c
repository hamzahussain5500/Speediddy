// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sd_can_msgs:msg/Badenia560TyreSurfaceTempFront.idl
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
#include "sd_can_msgs/msg/detail/badenia560_tyre_surface_temp_front__struct.h"
#include "sd_can_msgs/msg/detail/badenia560_tyre_surface_temp_front__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sd_can_msgs__msg__badenia560_tyre_surface_temp_front__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[83];
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
    assert(strncmp("sd_can_msgs.msg._badenia560_tyre_surface_temp_front.Badenia560TyreSurfaceTempFront", full_classname_dest, 82) == 0);
  }
  sd_can_msgs__msg__Badenia560TyreSurfaceTempFront * ros_message = _ros_message;
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
  {  // outer_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "outer_fl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->outer_fl = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // center_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "center_fl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->center_fl = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // inner_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "inner_fl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->inner_fl = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // outer_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "outer_fr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->outer_fr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // center_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "center_fr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->center_fr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // inner_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "inner_fr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->inner_fr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sd_can_msgs__msg__badenia560_tyre_surface_temp_front__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Badenia560TyreSurfaceTempFront */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sd_can_msgs.msg._badenia560_tyre_surface_temp_front");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Badenia560TyreSurfaceTempFront");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sd_can_msgs__msg__Badenia560TyreSurfaceTempFront * ros_message = (sd_can_msgs__msg__Badenia560TyreSurfaceTempFront *)raw_ros_message;
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
  {  // outer_fl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->outer_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "outer_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // center_fl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->center_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "center_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // inner_fl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->inner_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "inner_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // outer_fr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->outer_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "outer_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // center_fr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->center_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "center_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // inner_fr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->inner_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "inner_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
