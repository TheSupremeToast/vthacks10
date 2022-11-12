#include <python.h>

static PyMethodDef StatsMethods[] = {
    {"vec_init", py_vec_init, METH_VARARGS, "Initializes a vector"},
    {NULL, NULL, 0, NULL}
};

