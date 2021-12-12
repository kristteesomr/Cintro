#include <stdio.h>
/* •Cho một mảng số nguyên:
a)Đếm số phần tử có giá trị bằng 0
b)Tìm độ dài của chuỗi dài nhất gồm các phần tử có giá trị bằng 0
c)Đếm số lần xuất hiện của các phần tử */

void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("\nNhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void swap(int a[],int i, int j){
    int temp;
    temp = a[i];
    a[i] = a[j];
    a[j] =temp;
}

int main(){
    // Đếm số phần tử có giá trị bằng 0
    int a[10];
    int n=10;
    NhapMang(a,10);
    int count=0;
    for (int i=1; i<n; i++)
        if (a[i] ==0)   count++;
    printf("So phan tu co gia tri bang 0 la %d",count);
    //Tìm độ dài của chuỗi dài nhất gồm các phần tử có giá trị bằng 0
    int max=0,temp=0;
    for(int i=0;i<n;i++){
        if(a[i]==0) temp=temp+1;
        if(a[i]!=0){
            if(temp>max){max=temp;temp=0;}
        }
    }
    if (temp>max) max=temp;
    printf("\nDo dai day con bang 0 lon nhat la:%d", max);
    //Đếm số lần xuất hiện của các phần tử
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++)
            if (a[i]>a[j]) swap(a, i, j);
    }
    int i=0, j=0, dem=0;
    while (i<n){
        dem=0;
        j=i;
        while (a[i]==a[j]) {dem++; j++;}
        printf("\n%d occurs for %d times in array",a[i],dem);
        i=j;}
}

/* 
Nhap phan tu a[0] = 0

Nhap phan tu a[1] = 1

Nhap phan tu a[2] = 0

Nhap phan tu a[3] = 2

Nhap phan tu a[4] = 3

Nhap phan tu a[5] = 3

Nhap phan tu a[6] = 0

Nhap phan tu a[7] = 5

Nhap phan tu a[8] = 0

Nhap phan tu a[9] = 5
So phan tu co gia tri bang 0 la 3
Do dai day con bang 0 lon nhat la:2
0 occurs for 4 times in array
1 occurs for 1 times in array
2 occurs for 1 times in array
3 occurs for 2 times in array
5 occurs for 2 times in array */