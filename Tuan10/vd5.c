#include <stdio.h>
#define SIZE 3
/* Cộng ma trận */
int main() {
    int A[][SIZE] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int B[][SIZE] = {{1,1,1}, {2,2,2}, {3,3,3}};
    int C[SIZE][SIZE];
    int i = 0, j = 0;
    for (i = 0; i < SIZE; ++i){
        for (j = 0; j < SIZE; ++j)
            C[i][j] = A[i][j] + B[i][j];
    }
return 0;
} 
