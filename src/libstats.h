#ifndef libstats_h
#define libstats_h

#include <Python.h>

PyObject* mean(PyObject* self, PyObject* args);

PyObject* variance(PyObject* self, PyObject* args);

PyObject* stdev(PyObject* self, PyObject* args);

PyObject* min(PyObject* self, PyObject* args);

PyObject* max(PyObject* self, PyObject* args);

#endif

