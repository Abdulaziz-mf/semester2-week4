
/*
 * Sum of 2 matrices
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4];
    float b[4][4];
    float c[4][4];
    for (int k =0; k<4;++k){
      for (int j=0; j<4; ++j){
         a[k][j] = 1;
         b[k][j] = 1;
         c[k][j] = a[k][j] + b[k][j];
         printf("%f\n",c[k][j]);
      }
    }

    /*
    Intialise the matrix a and b entries to 1. 
    Write code to compute the sum.
    Store your answer in matrix c
    Print your final answer
    */
    return 0;
 }
