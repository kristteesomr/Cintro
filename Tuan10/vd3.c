#include <stdio.h>
/* Nhập một dãy số nguyên (nhiều nhất 10 phần tử) và in dãy số đó theo thứ tự đảo ngược */
int main(){
    int i, n, A[10];
    printf("Nhap so phan tu trong day (n<=10):");scanf("%d",&n);
    printf("Nhap cac phan tu trong day:\n");
    for(i=0; i<n; i++) {
        printf("Phan tu thu %d:", i+1);
        scanf("%d",&A[i]);
    }
    printf("Day so sau khi dao lai:\n");
    for(i=n-1; i>=0; i--)
        printf("%5d",A[i]);
    return 0;
}
/* Nhap so phan tu trong day (n<=10):4
Nhap cac phan tu trong day:
Phan tu thu 1:1
Phan tu thu 2:2
Phan tu thu 3:3
Phan tu thu 4:4
Day so sau khi dao lai:
    4    3    2    1 */