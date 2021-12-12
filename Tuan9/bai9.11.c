// Tính tổng 1!+2!+...+n!
#include <stdio.h>
int main(){
    int sum=1,n=3,sum1=0;
    for(int i=1;i<=n;i++)
        {sum=sum*i;
        sum1+=sum;}
    printf("Tong do bang %d",sum1);


}
//Tong do bang 9