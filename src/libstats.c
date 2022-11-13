#include <Python.h>
#include "libstats.h"

/*
* Takes a Python list or array of doubles or ints and returns the mean
* of the list.
*
* Sanity checks: Parameter sent is a Python list or array.
* Length of the list is > 0 (mean for zero items is undefined?)
* All items in the list can be interpreted as doubles.
*/ 
PyObject* mean(PyObject* self, PyObject* args) {

    double res = 0;
    PyObject* float_list;
    int len;
    if (!PyArg_ParseTuple(args, "O", &float_list)) {
        return NULL;
    }
    len = PyObject_Length(float_list);
    if (len <= 0) {
        return NULL;
    }

    PyObject* item;
    for (int i = 0; i < len; i++) {
        item = PyList_GetItem(float_list, i);
        if (!PyFloat_Check(item) && !PyLong_Check(item)) {
            continue;
        }
        res += PyFloat_AsDouble(item); 
    }
    res /= len;
    return Py_BuildValue("d", res);
}
/*
* Takes a python list of doubles or ints and returns the variance of
* the list. 
*
* Sanity checks: Parameter sent is a List. 
* List is of positive length.
* All values included are able to be interpreted as double.
*/
PyObject* variance(PyObject* self, PyObject* args) {
    double mean = 0;
    PyObject* list; 
    if(!PyArg_ParseTuple(args, "O", &list)){
        return NULL;
    }
    int len = PyObject_Length(list);
    if(len <= 0){
        return NULL;
    }
    PyObject* item;
    for (int i = 0; i < len; ++i){  
        item = PyList_GetItem(list, i);
        if(!PyFloat_Check(item) && !PyLong_Check(item)) {
            continue;
        }
        mean = mean + PyFloat_AsDouble(item);
    } 
    mean /= len;
    double variance = 0;
    for (int i = 0; i < len; ++i){
        item = PyList_GetItem(list, i);
        if(!PyFloat_Check(item) && !PyLong_Check(item)){
            continue;
        }
        double squared = PyFloat_AsDouble(item) - mean;
        variance += squared * squared;
    }
    variance /= len;
    return Py_BuildValue("d", variance);
}

/*
* Takes a Python list and returns the standard deviation of
* the items in the list
*
* Sanity checks: Variance succeeded. (see sanity checks on 
* variance)
*/
PyObject* stdev(PyObject* self, PyObject* args){
    PyObject* v = variance(self, args);
    if(v!=NULL){
        return Py_BuildValue("d", sqrt(PyFloat_AsDouble(v)));
    }else{
        return NULL;
    }
}

