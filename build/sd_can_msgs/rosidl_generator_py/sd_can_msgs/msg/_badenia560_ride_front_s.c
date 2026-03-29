// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sd_can_msgs:msg/Badenia560RideFront.idl
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
#include "sd_can_msgs/msg/detail/badenia560_ride_front__struct.h"
#include "sd_can_msgs/msg/detail/badenia560_ride_front__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sd_can_msgs__msg__badenia560_ride_front__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
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
    assert(strncmp("sd_can_msgs.msg._badenia560_ride_front.Badenia560RideFront", full_classname_dest, 58) == 0);
  }
  sd_can_msgs__msg__Badenia560RideFront * ros_message = _ros_message;
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
  {  // ride_height_front
    PyObject * field = PyObject_GetAttrString(_pymsg, "ride_height_front");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ride_height_front = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // damper_stroke_f3rd
    PyObject * field = PyObject_GetAttrString(_pymsg, "damper_stroke_f3rd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->damper_stroke_f3rd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // damper_stroke_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "damper_stroke_fl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->damper_stroke_fl = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // damper_stroke_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "damper_stroke_fr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->damper_stroke_fr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sd_can_msgs__msg__badenia560_ride_front__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Badenia560RideFront */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sd_can_msgs.msg._badenia560_ride_front");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Badenia560RideFront");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sd_can_msgs__msg__Badenia560RideFront * ros_message = (sd_can_msgs__msg__Badenia560RideFront *)raw_ros_message;
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
  {  // ride_height_front
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ride_height_front);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ride_height_front", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // damper_stroke_f3rd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->damper_stroke_f3rd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "damper_stroke_f3rd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // damper_stroke_fl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->damper_stroke_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "damper_stroke_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // damper_stroke_fr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->damper_stroke_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "damper_stroke_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
