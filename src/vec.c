#include <stdio.h>
#include <stdlib.h>
#include "vec.h"


void vec_malloc(vec* v, int dim) {
    v->data = (double*) malloc(sizeof(double)*dim);
    v->dim = dim;
}

void vec_calloc(vec* v, int dim) {
    v->data = (double*) calloc(dim, sizeof(double));
    v->dim = dim;
}

void vec_free(vec* v) {
    free(v->data);
    v->data = 0;
    v->dim = 0;
}

void vec_zero(vec* v) {
    for (int i = 0; i < v->dim; i++) v->data[i] = 0;
}

int vec_read(vec* v) {
    int n = 0;
    for (int i = 0; i < v->dim; i++) {
        if (scanf("%lf", &(v->data[i])) == 1) n++;
    }
    return n;
}

void* vec_init(vec* v, double* data, int dim) {
    vec_malloc(v, dim);
    for (int i = 0; i < dim; i++) {
        v->data[i] = data[i];
    }
}
