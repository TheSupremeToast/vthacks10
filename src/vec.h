#ifndef VEC_H
#define VEC_H

typedef struct vec_s {
    double* data;
    int dim;
} vec;

void vec_malloc(vec* v, int dim);

void vec_calloc(vec* v, int dim);

void vec_free(vec* v);

void vec_zero(vec* v);

int vec_read(vec* v);

#endif
