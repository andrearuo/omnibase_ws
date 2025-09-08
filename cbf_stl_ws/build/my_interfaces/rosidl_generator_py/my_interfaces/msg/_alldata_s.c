// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from my_interfaces:msg/Alldata.idl
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
#include "my_interfaces/msg/detail/alldata__struct.h"
#include "my_interfaces/msg/detail/alldata__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool my_interfaces__msg__alldata__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
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
    assert(strncmp("my_interfaces.msg._alldata.Alldata", full_classname_dest, 34) == 0);
  }
  my_interfaces__msg__Alldata * ros_message = _ros_message;
  {  // all_v_real
    PyObject * field = PyObject_GetAttrString(_pymsg, "all_v_real");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->all_v_real = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // all_v_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "all_v_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->all_v_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // all_h_barrier
    PyObject * field = PyObject_GetAttrString(_pymsg, "all_h_barrier");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->all_h_barrier = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // all_x_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "all_x_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->all_x_pos = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // all_y_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "all_y_pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->all_y_pos = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // all_theta_rot
    PyObject * field = PyObject_GetAttrString(_pymsg, "all_theta_rot");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->all_theta_rot = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // all_distance_hr
    PyObject * field = PyObject_GetAttrString(_pymsg, "all_distance_hr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->all_distance_hr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // all_global_counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "all_global_counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->all_global_counter = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // all_temporal_operator_counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "all_temporal_operator_counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->all_temporal_operator_counter = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // all_flag_finish
    PyObject * field = PyObject_GetAttrString(_pymsg, "all_flag_finish");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->all_flag_finish = (Py_True == field);
    Py_DECREF(field);
  }
  {  // all_obs_x_closer
    PyObject * field = PyObject_GetAttrString(_pymsg, "all_obs_x_closer");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->all_obs_x_closer = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // all_obs_y_closer
    PyObject * field = PyObject_GetAttrString(_pymsg, "all_obs_y_closer");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->all_obs_y_closer = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * my_interfaces__msg__alldata__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Alldata */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("my_interfaces.msg._alldata");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Alldata");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  my_interfaces__msg__Alldata * ros_message = (my_interfaces__msg__Alldata *)raw_ros_message;
  {  // all_v_real
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->all_v_real);
    {
      int rc = PyObject_SetAttrString(_pymessage, "all_v_real", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // all_v_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->all_v_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "all_v_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // all_h_barrier
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->all_h_barrier);
    {
      int rc = PyObject_SetAttrString(_pymessage, "all_h_barrier", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // all_x_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->all_x_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "all_x_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // all_y_pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->all_y_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "all_y_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // all_theta_rot
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->all_theta_rot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "all_theta_rot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // all_distance_hr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->all_distance_hr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "all_distance_hr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // all_global_counter
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->all_global_counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "all_global_counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // all_temporal_operator_counter
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->all_temporal_operator_counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "all_temporal_operator_counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // all_flag_finish
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->all_flag_finish ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "all_flag_finish", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // all_obs_x_closer
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->all_obs_x_closer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "all_obs_x_closer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // all_obs_y_closer
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->all_obs_y_closer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "all_obs_y_closer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
