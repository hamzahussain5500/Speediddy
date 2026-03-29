// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sd_map_msgs:msg/SnMapState.idl
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
#include "sd_map_msgs/msg/detail/sn_map_state__struct.h"
#include "sd_map_msgs/msg/detail/sn_map_state__functions.h"

bool sd_map_msgs__msg__sn_lane_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * sd_map_msgs__msg__sn_lane_state__convert_to_py(void * raw_ros_message);
bool sd_map_msgs__msg__sn_lane_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * sd_map_msgs__msg__sn_lane_state__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sd_map_msgs__msg__sn_map_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("sd_map_msgs.msg._sn_map_state.SnMapState", full_classname_dest, 40) == 0);
  }
  sd_map_msgs__msg__SnMapState * ros_message = _ros_message;
  {  // current_lane
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_lane");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->current_lane = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // track_sn_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "track_sn_state");
    if (!field) {
      return false;
    }
    if (!sd_map_msgs__msg__sn_lane_state__convert_from_py(field, &ros_message->track_sn_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pitlane_sn_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitlane_sn_state");
    if (!field) {
      return false;
    }
    if (!sd_map_msgs__msg__sn_lane_state__convert_from_py(field, &ros_message->pitlane_sn_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sd_map_msgs__msg__sn_map_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SnMapState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sd_map_msgs.msg._sn_map_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SnMapState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sd_map_msgs__msg__SnMapState * ros_message = (sd_map_msgs__msg__SnMapState *)raw_ros_message;
  {  // current_lane
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->current_lane);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_lane", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // track_sn_state
    PyObject * field = NULL;
    field = sd_map_msgs__msg__sn_lane_state__convert_to_py(&ros_message->track_sn_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "track_sn_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitlane_sn_state
    PyObject * field = NULL;
    field = sd_map_msgs__msg__sn_lane_state__convert_to_py(&ros_message->pitlane_sn_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitlane_sn_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
