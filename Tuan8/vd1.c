#include <stdio.h>
#define PERIOD ‘.’ 
int main(){
    char C;
    while ((C = getchar())!= PERIOD)putchar(C);
    printf(“Good Bye.\n”);
    }