// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sd_localization_msgs:msg/StateEstimation.idl
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
#include "sd_localization_msgs/msg/detail/state_estimation__struct.h"
#include "sd_localization_msgs/msg/detail/state_estimation__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sd_map_msgs__msg__sn_map_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sd_map_msgs__msg__sn_map_state__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sd_localization_msgs__msg__state_estimation__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("sd_localization_msgs.msg._state_estimation.StateEstimation", full_classname_dest, 58) == 0);
  }
  sd_localization_msgs__msg__StateEstimation * ros_message = _ros_message;
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
  {  // se_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "se_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->se_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // se_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "se_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->se_state = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // x_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_m");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_m = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_m");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_m = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_m
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_m");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_m = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll_rad
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll_rad");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll_rad = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_rad
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_rad");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_rad = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_rad
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rad");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_rad = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pos_accuracy
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_accuracy");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 3;
      double * dest = ros_message->pos_accuracy;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // vel_accuracy
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_accuracy");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 3;
      double * dest = ros_message->vel_accuracy;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // wx_radps
    PyObject * field = PyObject_GetAttrString(_pymsg, "wx_radps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wx_radps = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wy_radps
    PyObject * field = PyObject_GetAttrString(_pymsg, "wy_radps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wy_radps = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wz_radps
    PyObject * field = PyObject_GetAttrString(_pymsg, "wz_radps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wz_radps = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vx_mps
    PyObject * field = PyObject_GetAttrString(_pymsg, "vx_mps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vx_mps = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vy_mps
    PyObject * field = PyObject_GetAttrString(_pymsg, "vy_mps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vy_mps = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vz_mps
    PyObject * field = PyObject_GetAttrString(_pymsg, "vz_mps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vz_mps = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // omega_w_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "omega_w_fl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->omega_w_fl = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // omega_w_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "omega_w_fr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->omega_w_fr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // omega_w_rl
    PyObject * field = PyObject_GetAttrString(_pymsg, "omega_w_rl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->omega_w_rl = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // omega_w_rr
    PyObject * field = PyObject_GetAttrString(_pymsg, "omega_w_rr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->omega_w_rr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // v_mps
    PyObject * field = PyObject_GetAttrString(_pymsg, "v_mps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->v_mps = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // v_raw_mps
    PyObject * field = PyObject_GetAttrString(_pymsg, "v_raw_mps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->v_raw_mps = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // beta_rad
    PyObject * field = PyObject_GetAttrString(_pymsg, "beta_rad");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->beta_rad = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ax_mps2
    PyObject * field = PyObject_GetAttrString(_pymsg, "ax_mps2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ax_mps2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ay_mps2
    PyObject * field = PyObject_GetAttrString(_pymsg, "ay_mps2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ay_mps2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // az_mps2
    PyObject * field = PyObject_GetAttrString(_pymsg, "az_mps2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->az_mps2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // valid_imu_b
    PyObject * field = PyObject_GetAttrString(_pymsg, "valid_imu_b");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->valid_imu_b = (Py_True == field);
    Py_DECREF(field);
  }
  {  // yaw_vel_rad
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_vel_rad");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_vel_rad = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // kappa_radpm
    PyObject * field = PyObject_GetAttrString(_pymsg, "kappa_radpm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kappa_radpm = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dbeta_radps
    PyObject * field = PyObject_GetAttrString(_pymsg, "dbeta_radps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dbeta_radps = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ddyaw_radps2
    PyObject * field = PyObject_GetAttrString(_pymsg, "ddyaw_radps2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ddyaw_radps2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ax_vel_mps2
    PyObject * field = PyObject_GetAttrString(_pymsg, "ax_vel_mps2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ax_vel_mps2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ay_vel_mps2
    PyObject * field = PyObject_GetAttrString(_pymsg, "ay_vel_mps2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ay_vel_mps2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lambda_fl_perc
    PyObject * field = PyObject_GetAttrString(_pymsg, "lambda_fl_perc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lambda_fl_perc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lambda_fr_perc
    PyObject * field = PyObject_GetAttrString(_pymsg, "lambda_fr_perc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lambda_fr_perc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lambda_rl_perc
    PyObject * field = PyObject_GetAttrString(_pymsg, "lambda_rl_perc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lambda_rl_perc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lambda_rr_perc
    PyObject * field = PyObject_GetAttrString(_pymsg, "lambda_rr_perc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lambda_rr_perc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // valid_wheelsspeeds_b
    PyObject * field = PyObject_GetAttrString(_pymsg, "valid_wheelsspeeds_b");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->valid_wheelsspeeds_b = (Py_True == field);
    Py_DECREF(field);
  }
  {  // alpha_fl_rad
    PyObject * field = PyObject_GetAttrString(_pymsg, "alpha_fl_rad");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alpha_fl_rad = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alpha_fr_rad
    PyObject * field = PyObject_GetAttrString(_pymsg, "alpha_fr_rad");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alpha_fr_rad = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alpha_rl_rad
    PyObject * field = PyObject_GetAttrString(_pymsg, "alpha_rl_rad");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alpha_rl_rad = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alpha_rr_rad
    PyObject * field = PyObject_GetAttrString(_pymsg, "alpha_rr_rad");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alpha_rr_rad = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // diff_fr_alpha_rad
    PyObject * field = PyObject_GetAttrString(_pymsg, "diff_fr_alpha_rad");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->diff_fr_alpha_rad = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_wheel_rad
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_wheel_rad");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_wheel_rad = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->timestamp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gas
    PyObject * field = PyObject_GetAttrString(_pymsg, "gas");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gas = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // clutch
    PyObject * field = PyObject_GetAttrString(_pymsg, "clutch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->clutch = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gear
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gear = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rpm
    PyObject * field = PyObject_GetAttrString(_pymsg, "rpm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rpm = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // front_brake_pressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_brake_pressure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->front_brake_pressure = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rear_brake_pressure
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_brake_pressure");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rear_brake_pressure = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vehicle_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_timestamp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vehicle_timestamp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // residuals_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "residuals_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->residuals_status = (Py_True == field);
    Py_DECREF(field);
  }
  {  // std_dev_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "std_dev_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->std_dev_status = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_safe
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_safe");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_safe = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cba_actual_pressure_fl_pa
    PyObject * field = PyObject_GetAttrString(_pymsg, "cba_actual_pressure_fl_pa");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cba_actual_pressure_fl_pa = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cba_actual_pressure_fr_pa
    PyObject * field = PyObject_GetAttrString(_pymsg, "cba_actual_pressure_fr_pa");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cba_actual_pressure_fr_pa = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cba_actual_pressure_rl_pa
    PyObject * field = PyObject_GetAttrString(_pymsg, "cba_actual_pressure_rl_pa");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cba_actual_pressure_rl_pa = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cba_actual_pressure_rr_pa
    PyObject * field = PyObject_GetAttrString(_pymsg, "cba_actual_pressure_rr_pa");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cba_actual_pressure_rr_pa = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sn_map_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "sn_map_state");
    if (!field) {
      return false;
    }
    if (!sd_map_msgs__msg__sn_map_state__convert_from_py(field, &ros_message->sn_map_state)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sd_localization_msgs__msg__state_estimation__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of StateEstimation */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sd_localization_msgs.msg._state_estimation");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "StateEstimation");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sd_localization_msgs__msg__StateEstimation * ros_message = (sd_localization_msgs__msg__StateEstimation *)raw_ros_message;
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
  {  // se_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->se_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "se_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // se_state
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->se_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "se_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_m
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_m);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_m", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_m
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_m);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_m", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_m
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_m);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_m", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll_rad
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll_rad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll_rad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_rad
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_rad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_rad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_rad
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_rad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_accuracy
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "pos_accuracy");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->pos_accuracy[0]);
    memcpy(dst, src, 3 * sizeof(double));
    Py_DECREF(field);
  }
  {  // vel_accuracy
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "vel_accuracy");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->vel_accuracy[0]);
    memcpy(dst, src, 3 * sizeof(double));
    Py_DECREF(field);
  }
  {  // wx_radps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wx_radps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wx_radps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wy_radps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wy_radps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wy_radps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wz_radps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wz_radps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wz_radps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vx_mps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vx_mps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vx_mps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vy_mps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vy_mps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vy_mps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vz_mps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vz_mps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vz_mps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // omega_w_fl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->omega_w_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "omega_w_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // omega_w_fr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->omega_w_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "omega_w_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // omega_w_rl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->omega_w_rl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "omega_w_rl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // omega_w_rr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->omega_w_rr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "omega_w_rr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v_mps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->v_mps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v_mps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v_raw_mps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->v_raw_mps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v_raw_mps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // beta_rad
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->beta_rad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "beta_rad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ax_mps2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ax_mps2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ax_mps2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ay_mps2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ay_mps2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ay_mps2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // az_mps2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->az_mps2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "az_mps2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // valid_imu_b
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->valid_imu_b ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "valid_imu_b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_vel_rad
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_vel_rad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_vel_rad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kappa_radpm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kappa_radpm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kappa_radpm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dbeta_radps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dbeta_radps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dbeta_radps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ddyaw_radps2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ddyaw_radps2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ddyaw_radps2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ax_vel_mps2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ax_vel_mps2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ax_vel_mps2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ay_vel_mps2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ay_vel_mps2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ay_vel_mps2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lambda_fl_perc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lambda_fl_perc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lambda_fl_perc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lambda_fr_perc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lambda_fr_perc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lambda_fr_perc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lambda_rl_perc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lambda_rl_perc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lambda_rl_perc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lambda_rr_perc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lambda_rr_perc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lambda_rr_perc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // valid_wheelsspeeds_b
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->valid_wheelsspeeds_b ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "valid_wheelsspeeds_b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alpha_fl_rad
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alpha_fl_rad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alpha_fl_rad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alpha_fr_rad
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alpha_fr_rad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alpha_fr_rad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alpha_rl_rad
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alpha_rl_rad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alpha_rl_rad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alpha_rr_rad
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alpha_rr_rad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alpha_rr_rad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diff_fr_alpha_rad
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->diff_fr_alpha_rad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "diff_fr_alpha_rad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_wheel_rad
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_wheel_rad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_wheel_rad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timestamp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gas
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gas);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gas", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // clutch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->clutch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "clutch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gear);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rpm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rpm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rpm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_brake_pressure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->front_brake_pressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_brake_pressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_brake_pressure
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rear_brake_pressure);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_brake_pressure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_timestamp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vehicle_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // residuals_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->residuals_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "residuals_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // std_dev_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->std_dev_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "std_dev_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_safe
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_safe ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_safe", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cba_actual_pressure_fl_pa
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cba_actual_pressure_fl_pa);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cba_actual_pressure_fl_pa", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cba_actual_pressure_fr_pa
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cba_actual_pressure_fr_pa);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cba_actual_pressure_fr_pa", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cba_actual_pressure_rl_pa
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cba_actual_pressure_rl_pa);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cba_actual_pressure_rl_pa", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cba_actual_pressure_rr_pa
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cba_actual_pressure_rr_pa);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cba_actual_pressure_rr_pa", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sn_map_state
    PyObject * field = NULL;
    field = sd_map_msgs__msg__sn_map_state__convert_to_py(&ros_message->sn_map_state);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sn_map_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
