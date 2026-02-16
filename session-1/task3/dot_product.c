
/*
 * Dot product of 2 vectors
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main( void ) {
    int n = 5;
    float *a, *b;
    float d = 0.0;  // stack-based pointers

    // allocation of heap memory for vectors
    a = calloc( n, sizeof(float *) );
    b = calloc( n, sizeof(float) );
   for (int i = 0; i<n; i++){
      a[i] = i+1;
   }
   for (int i = 0; i<n; i++){
      b[i] = i+3;
   }
   for (int i = 0; i<n; i++){
      d += a[i] * b[i];
   }
   printf("%f\n",d);
    /*
    Code to initialise the vectors with numerical data 
    Code to compute the dot product 
    - does this differ from the initial code?
    - note that loop now run k=0;k<n 
    Store your answer in d
    print your final answer
    */

    // explicit deallocation of heap memory before exit */
    free(a);
    free(b);


    return 0;
 }