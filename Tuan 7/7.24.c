#include <stdio.h>
int main(){
     int i,k=1,n;
 
    printf("Enter a number: ");
    scanf("%d",&n);
 
    for(i=1;i<=n;i++)
        k=k*i;
 
    printf("Factorial of %d is: %d",n,k);
    return 0;
}
/* Enter a number: 5
Factorial of 5 is: 120 */