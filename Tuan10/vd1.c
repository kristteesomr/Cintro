#include <stdio.h>
#define arraySize 10
// Tạo một mảng số chẵn từ 2 đến 20. •In ra nội dung của mảng
int main(){
    int s[arraySize];  // array S has 10 elements 
    printf("Element \t Value\n");
    for (int  i = 0; i < arraySize; i++ ){
         s[i] = 2 + 2 * i;
         printf("%d\t%d\n", i, s[i]);
        }
    return 0;
}
/* Element          Value
0       2
1       4
2       6
3       8
4       10
5       12
6       14
7       16
8       18
9       20 */