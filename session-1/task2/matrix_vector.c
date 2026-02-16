#include <stdio.h>

int main(void) {
    float a[4][4];
    float b[4];
    float c[4];

    // Initialise matrix a and vector b to 1
    for (int k = 0; k < 4; ++k) {
        b[k] = 1;
        for (int j = 0; j < 4; ++j) {
            a[k][j] = 1;
        }
    }

    // Matrix-vector product
    for (int k = 0; k < 4; ++k) { // important: initialise accumulator
        for (int j = 0; j < 4; ++j) {
            c[k] += a[k][j] * b[j];
        }
    }

    // Print result vector
    for (int k = 0; k < 4; ++k) {
        printf("%f\n", c[k]);
    }

    return 0;
}
