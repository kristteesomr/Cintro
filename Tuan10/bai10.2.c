#include <stdio.h>
#define MAX 10
/* •Cho một mảng gồm các phần tử được nhập vào bởi người dùng.
•Tính tổng của các cực trị địa phương trong mảng (cực trị địa phương là phần tử có giá trị lớn hơn phần tử liền trước và liền sau nó)  */
int main(){
    int a[MAX];  
    int i,s,min;   
    for (i = 0; i < MAX; i++ ){
        printf("a[%d]=",i);
        scanf("%d", &a[i]);
    }
    int sum=0;
    for (i=1; i<=MAX-2; i++)
        if (a[i]>=a[i-1] && a[i]>=a[i+1]) sum +=a[i];
    printf("Tong cua cac cuc tri dia phuong trong mang la %d",sum);
}
/* 
a[0]=1
a[1]=3
a[2]=6
a[3]=3
a[4]=4
a[5]=7
a[6]=3
a[7]=5
a[8]=7
a[9]=3
Tong cua cac cuc tri dia phuong trong mang la 20 */