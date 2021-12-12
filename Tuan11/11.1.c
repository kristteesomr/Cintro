/*
•Viết chương trình C sử dụng 3 biến để nhập 3 số nguyên. 
•Với mỗi biến, sử dụng một con trỏ để chỉ đến các biến này sau đó hiển thị giá trị của biến được trỏ đến bởi con trỏ.
*/
#include <stdio.h>
int main(){
    int x, y, z;
    int* ptr;
    printf("Enter three integers: ");
        scanf("%d %d %d", &x, &y, &z);
    printf("\nThe three integers are:\n");
    ptr = &x;printf("x = %d\n", *ptr);
    ptr = &y;printf("y = %d\n", *ptr);
    ptr = &z;printf("z = %d\n", *ptr);
    return 0;
}
/* 
Enter three integers: 2
4
6

The three integers are:
x = 2
y = 4
z = 6
*/