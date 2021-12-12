#include <stdio.h>
int i;
void f() {
    int i;i++; // chỉ làm thay đổi giá trị biến i cục bộ 
    }
void g() {
    i++; // làm thay đổi giá trị của biến i tổng thể
}
int main(){
    i = 10; 
    f();
    printf("i = %d \n", i);
    g();
    printf("i = %d", i);
}