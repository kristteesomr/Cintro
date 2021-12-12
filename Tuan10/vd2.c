#include <stdio.h>
#define  MONTHS 12/* store and display rainfall in all months of the year */
int main(){
    int rainfall[MONTHS];
    for (int i=0; i < MONTHS; i++ ){
        printf("Enter the rainfall(mm):"); scanf("%d", &rainfall[i] );
    }
    for(int j=0; j < MONTHS; j++){
        printf("%5d",rainfall[j]);
    }
    printf("\n"); 
    return 0;
}
/* Enter the rainfall(mm):100
Enter the rainfall(mm):200
Enter the rainfall(mm):100
Enter the rainfall(mm):150
Enter the rainfall(mm):160
Enter the rainfall(mm):200
Enter the rainfall(mm):130
Enter the rainfall(mm):210
Enter the rainfall(mm):155
Enter the rainfall(mm):190
Enter the rainfall(mm):180
Enter the rainfall(mm):130
  100  200  100  150  160  200  130  210  155  190  180  130 */