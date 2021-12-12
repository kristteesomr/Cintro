#include <stdio.h>
/* •Cài đặt một hàm nhận tham số là hai mảng, trả về 1 nếu hai mảng giống nhau, 0 nếu ngược lại
•Viết chương trình sử dụng hàm này */
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("\nNhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int compare_arrays( int arr1[], int arr2[], int size){
    int i = 0;
    for(i = 0; i < size; ++i){
        if (arr1[i] != arr2[i]) 
            return 0;
    }
    /* if we got here, both arrays are identical */
        return 1;
}
int main(){
    int a[10], b[10];
    NhapMang(a,10);
    NhapMang(b,10);
    compare_arrays(a,b,10);
    printf("%d",compare_arrays(a,b,10));
}
/* 
Nhap phan tu a[0] = 1

Nhap phan tu a[1] = 2

Nhap phan tu a[2] = 3

Nhap phan tu a[3] = 4

Nhap phan tu a[4] = 5

Nhap phan tu a[5] = 6

Nhap phan tu a[6] = 7

Nhap phan tu a[7] = 8

Nhap phan tu a[8] = 9

Nhap phan tu a[9] = 10

Nhap phan tu a[0] = 1

Nhap phan tu a[1] = 2

Nhap phan tu a[2] = 3

Nhap phan tu a[3] = 4

Nhap phan tu a[4] = 5

Nhap phan tu a[5] = 6

Nhap phan tu a[6] = 7

Nhap phan tu a[7] = 8

Nhap phan tu a[8] = 9

Nhap phan tu a[9] = 10
1 */