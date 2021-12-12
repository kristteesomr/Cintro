#include <stdio.h>
#define MAX 20
/* Viết chương trình nhập mảng chứa 20 số nguyên
a) Tính tổng các số lẻ trong mảng
b) Tìm giá trị nhỏ nhất của các số vừa nhập */
int main(){
    int a[MAX];  
    int i,s,min;   
    for ( i = 0; i < MAX; i++ ){
        printf("a[%d]=",i);
        scanf("%d", &a[i]);
    }
    s=0; 
    min=a[0];
    for ( i = 0; i < MAX; i++ ){
        if (a[i] < min) min = a[i];
        if (a[i]%2==1) s = s+ a[i];
    } 
    printf("\nMinimum value in the array: %d",min);
    printf("\nSum of all odd numbers: %d",s);
    return 0;
}
/* a[0]=1
a[1]=5
a[2]=3
a[3]=5
a[4]=3
a[5]=2
a[6]=5
a[7]=8
a[8]=9
a[9]=12
a[10]=15
a[11]=13
a[12]=24
a[13]=34
a[14]=37
a[15]=45
a[16]=37
a[17]=46
a[18]=25
a[19]=47

Minimum value in the array: 1
Sum of all odd numbers: 250 */