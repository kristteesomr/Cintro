#include <stdio.h>
int counteven(int* arr, int size){
    int i;
    int count =0;
    for (i=0; i<size; i++)
        if (*(arr+i)%2==0) 
            count++;
    return count;
}