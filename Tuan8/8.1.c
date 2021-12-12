#include <stdio.h>
/* Viết chương trình in ra nội dung người dùng nhập vào từ bàn phím: thay thế chuỗi liên tiếp dấu cách ‘ ‘ bằng một dấu cách duy nhất */
int main(){
    int c;
    int inspace; /* dem so dau cach */
    inspace = 0;
    while(c = getchar() != EOF)
    {if(c == '  '){
        if(inspace == 0){
            inspace = 1;putchar(c);}
        if(c != ' '){inspace = 0;putchar(c);}
        }
    return 0;}
}