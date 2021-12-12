#include <stdio.h>
int year;
int isLeapYear(){
    printf("Nhap nam ban muon kiem tra:"); scanf("%d",&year);
    if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
      printf("%d la mot nam nhuan", year);
   else
      printf("%d khong phai la nam nhuan", year);
}
int main(){
    isLeapYear();
}
/* Nhap nam ban muon kiem tra:2002
2002 khong phai la nam nhuan */