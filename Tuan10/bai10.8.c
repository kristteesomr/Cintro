#include <stdio.h>

void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("\nNhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void reverse(int a[],int size){
    int i;
    float tmp;
    for (i=0; i<size/2; i++){ 
        tmp=a[i]; 
        a[i]=a[size-i-1];
        a[size-i-1]=tmp;
    }
}

int main(){
    int a[10];
    NhapMang(a,10);
    reverse(a,10);
    for(int i=0;i<10;i++) printf("%d",a[i]);

}
/* Nhap phan tu a[0] = 1

Nhap phan tu a[1] = 3

Nhap phan tu a[2] = 5

Nhap phan tu a[3] = 7

Nhap phan tu a[4] = 9

Nhap phan tu a[5] = 2

Nhap phan tu a[6] = 4

Nhap phan tu a[7] = 6

Nhap phan tu a[8] = 3

Nhap phan tu a[9] = 6
6364297531 */