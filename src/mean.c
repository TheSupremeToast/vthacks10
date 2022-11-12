#include <stdio.h>
#include <stdlib.h>
#include "vec.h"
#include "mat.h"

// find the mean of a vector
int main(int argc, char** argv) {

    vec v;
    vec_malloc(&v, 6);
    vec_read(&v);

    double res = 0;
    for (int i = 0; i < v.dim; i++) {
        res += v.data[i];
    }
    res /= v.dim;

    printf("The mean is: %lf\n", res);

    return 0;
}

