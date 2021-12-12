#include <stdio.h>/* function main begins program execution */
int main( void ){
    /* initialize variables in definitions */
    int passes = 0;   /* number of passes */
    int failures = 0; /* number of failures */
    int student = 1;  /* student counter */
    int result;       /* one exam result */
    
    /* process 10 students using counter-controlled loop */
    while ( student <= 10 ) {
        /* prompt user for input and obtain value from user */
        printf( "Enter result ( 1=pass,2=fail ): " );scanf( "%d", &result );/* if result 1, increment passes */
        if ( result == 1 ) {     passes = passes + 1;} 
        else {failures = failures + 1;} 
        student = student + 1; /* so hoc sinh tang len den 10 thi vong lap dung lai */ 
    } 
    printf( "Passed %d\n", passes );
    printf( "Failed %d\n", failures );
    return 0; 
} 
/* Enter result ( 1=pass,2=fail ): 1
Enter result ( 1=pass,2=fail ): 2
Enter result ( 1=pass,2=fail ): 1
Enter result ( 1=pass,2=fail ): 1
Enter result ( 1=pass,2=fail ): 2
Enter result ( 1=pass,2=fail ): 1
Enter result ( 1=pass,2=fail ): 2
Enter result ( 1=pass,2=fail ): 1
Enter result ( 1=pass,2=fail ): 1
Enter result ( 1=pass,2=fail ): 1
Passed 7
Failed 3 */