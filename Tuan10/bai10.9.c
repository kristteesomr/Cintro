#include <stdio.h>
/* •Viết chương trình tính tổng của dãy số theo phương pháp nhập dãy số vào mảng sau đó tính tổng của các số lưu trên mảng.
•Tính min, max của các số trong mảng. */
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("\nNhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int sum(int a[], int n){
    int sum = 0;
    for(int i=0;i<n;i++)
        sum = sum+a[i];
    printf("Tong cac so trong mang bang %d",sum);
    return sum;
}

int max(int a[],int n){
    int max = a[0];
    for(int i=0;i<n;i++){
        if(a[i]>=max) max = a[i];
    }
    printf("\nSo lon nhat trong mang la %d",max);
    return max;

}

int min(int a[],int n){
    int min = a[0];
    for(int i=0;i<n;i++){
    if(a[i]<=min) min = a[i];
    }
    printf("\nSo nho nhat trong mang la %d",min);
    return min;
}
int main(){
    int a[10];
    NhapMang(a,10);
    sum(a,10);
    max(a,10);
    min(a,10);
}

/* Nhap phan tu a[0] = 2

Nhap phan tu a[1] = 5

Nhap phan tu a[2] = 87

Nhap phan tu a[3] = 3

Nhap phan tu a[4] = 8

Nhap phan tu a[5] = 9

Nhap phan tu a[6] = 1

Nhap phan tu a[7] = 0

Nhap phan tu a[8] = 35

Nhap phan tu a[9] =
6
Tong cac so trong mang bang 156
So lon nhat trong mang la 87
So nho nhat trong mang la 0 */