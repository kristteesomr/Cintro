#include<stdio.h>
const char CHAR_48 = 48;
 
/* chuyen doi so nguyen n he 10 sang he co so 2
*/
int convertNumber(int n) {
    char arr[20]; //string kết quả
    int count = 0; //biến đếm
    int m; //số dư 
    int remainder = n; //số bị chia
    while (remainder > 0) {
        arr[count] = (char) ((remainder % 2) + CHAR_48);
        count++;
        remainder = remainder / 2;
    }
    for (int i = count - 1; i >= 0; i--) {
        printf("%c", arr[i]);
    }
    return 1;
}
 
int main() {
    int n;
    printf("Nhap so ban muon: "); scanf("%d",&n);
    printf("So %d trong he co so 2 = ", n);
    convertNumber(n);
    return 1;
}
/* Nhap so ban muon: 12
So 12 trong he co so 2 = 1100 */