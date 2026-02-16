#include <stdio.h>
#include <stdlib.h>
int main( void){
    int n =6;
    int *c;
    int *b;
    b = calloc(n,sizeof(int));
    c = calloc(n,sizeof(int));
    int **a = calloc(n,sizeof(int *));
    for (int i = 0; i<n; i++){
        a[i] = calloc(n,sizeof(int));
    }
    for (int k=0; k<n;k++){
        for (int j=0; j<n; j++){
            a[k][j]= k*10 + j;

        }
    }
    for (int i=0; i<n; i++){
        b[i] = i+3;
    }
    for(int k =0; k<n; k++){
        for (int j=0; j<n; j++){
            c[k] += a[k][j] * b[j];

        }  

    }
    for (int i=0; i<n; i++){
        printf("%d\n",c[i]);
    }
    printf("%d\n",*(c+2));
    return 0;
}