/*
Viết hàm nhận 3 biến a, b, c và đổi chỗ sao cho giá trị của a thành b, b thành c và c thành a. 
•Kiểm tra hàm này bằng một chương trình
*/
#include <stdio.h>
void swap3(int *p, int *q, int *r){
    int tmp;
    tmp= *p;
    *p=*q;
    *q=*r;
    *r=tmp;
} 
void main(void){
    int a, b, c;
    printf("Enter a, b, c:");scanf("%d%d%d", &a, &b, &c);
    printf("Value before swap. a=%d, b=%d, c=%d\n", a, b, c);
    swap3(&a,&b,&c);
    printf("Value after swap. a=%d, b=%d, c=%d\n", a, b, c);
}
/*
Enter a, b, c:1
3
5
Value before swap. a=1, b=3, c=5
Value after swap. a=3, b=5, c=1
*/