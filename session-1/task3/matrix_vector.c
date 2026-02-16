
/*
 * Matrix-vector product
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int n = 4;           
    float **a, *b, *c;
    a = calloc(n,sizeof(float *));
    for(int i=0; i<n; ++i){
        a[i] = calloc(n,sizeof(float));
    }
    for (int k = 0; k<n;k++){
        for (int j =0; j<n; j++){
            a[k][j] = 1.0;
        }
    }
    b = calloc(n,sizeof(float));
    for (int i = 0; i<n; i++){
        b[i] = 1.0;
    }
    c = calloc(n,sizeof(float));
    for (int k =0; k<n; k++){
        for (int j=0; j<n; j++){
            c[k] += a[k][j] * b[j];
        }
    }
    for (int k =0; k<n; k++){

        printf("%f\n",c[k]);
        
    }
    //free memory important
    for (int i =0; i<n; i++){
        free(a[i]);
    }
    free(a);
    free(b);
    free(c);

    /*
    Dynamically allocate the matrix a and vectors b and c using size n
    Intialise the matrix a and vector b entries to 1. 
    Write code to compute the product.
    Store your answer in vector c
    Print your final answer
    Free the allocated memory
    */
    
    return 0;
 }
