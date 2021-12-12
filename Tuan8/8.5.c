#include <stdio.h>/* function main begins program execution */
int main( void ){
    int counter = 1;              /* initialize counter */
    do {printf( "%d  ", counter );} while ( ++counter <= 10 ); /* ++counter bang voi gia tri cua bien counter con counter++ thi ca bien counter=counter++ thi se cong them 1 */
    return 0; 
} 
/* 1  2  3  4  5  6  7  8  9  10  */