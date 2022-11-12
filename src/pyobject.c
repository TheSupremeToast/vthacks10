#include <python.h>

static PyObject* py_vec_init(Pyobject* self, PyObject* args) {

    vec* v;
    double* data;
    int* dim;

    if (!PyArg_ParseTuple(args, "0i", &data, &dim)) {
        return NULL;
    }
    void* v_out = vec_init(&v, &data, &dim);

    return Py_BuildValue("0&", v_out);
}

