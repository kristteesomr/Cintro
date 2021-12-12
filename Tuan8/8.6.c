# include <stdio.h>
/* Tinh diem TBC */
int main (){
    float grade , sum = 0.0;
    int gradeCount = 0;
    printf (" Enter grade : ");scanf ("%g", & grade );
    while ( grade >= 0.0) {
        sum += grade ;
        ++ gradeCount ;
        printf (" Enter grade : "); scanf ("%g", & grade );
    }
    printf (" Average : %g\n", sum/ gradeCount );
    return 0;
}
/* Enter grade : 8
 Enter grade : 9
 Enter grade : 10
 Enter grade : 5
 Enter grade : 8
 Enter grade : 10
 Enter grade : 9
 Enter grade : -1
 Average : 8.42857 */