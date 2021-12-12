#include <stdio.h>
void main(){
    /* bảng cửu chương cho cả số 0 */
    int cuuchuong[10][10]; 
    int i, j;/* tạo giá trị cho bảng cửu chương */
    for (i=0; i<=9; i++){
        for (j=0; j<=9; j++)    
            cuuchuong[i][j] = i*j; 
    }
        printf("Nhap hai so cua bang cuu chuong\n");
        printf("So 1: "); scanf("%d", &i);
        printf("So 2: "); scanf("%d", &j);
        printf("Gia tri trong bang la %d", cuuchuong[i][j]);  
}

/*
Nhap hai so cua bang cuu chuong
So 1: 2
So 2: 4
Gia tri trong bang la 8 */