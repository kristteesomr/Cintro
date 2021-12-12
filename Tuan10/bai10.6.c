#include <stdio.h>
/* 
•Viết chương trình khai báo 3 ma trận A, B, C kích thước 3x3 chứa số nguyên; khởi tạo A và B
•Tính kết quả của phép nhân ma trận và lưu vào C: C = A * B
•In kết quả ra màn hình */
int main() {
    float a[3][3], b[3][3], c[3][3];
    int m,n,p;
    int i,j,k;
    float temp, temp1;
    for(i=0; i<3; i++){
        for (j=0; j<3; j++) {
            printf("a[%d][%d]=", i+1, j+1);scanf("%f", &temp);
            printf("b[%d][%d]=", i+1, j+1);scanf("%f", &temp1);
            b[i][j]= temp1;
            a[i][j]= temp;
        }
    }
    for(i=0; i<3; i++){
        for (j=0; j<3; j++) {
            c[i][j]=0;
            for (k=0; k<3; k++)
                c[i][j]= c[i][j]+ a[i][k]*b[k][j];
            }
    }

    printf("\n Matrix A:");
    for(i=0; i<3; i++){
        printf("\n");
        for (j=0; j<3; j++) {
            printf("%2.2f\t", a[i][j]);
        }
    }
    printf("\n Matrix B:");
    for(i=0; i<3; i++){
        printf("\n");
        for (j=0; j<3; j++) {
            printf("%2.2f\t", b[i][j]);
        }
    }
    printf("\n Matrix c:");
    for(i=0; i<3; i++){
        printf("\n");
        for (j=0; j<3; j++) {
            printf("%2.2f\t", c[i][j]);
        }
    }
}

/* 
a[1][1]=1
b[1][1]=2
a[1][2]=3
b[1][2]=2
a[1][3]=4 
b[1][3]=3 
a[2][1]=4
b[2][1]=6
a[2][2]=3
b[2][2]=5
a[2][3]=7
b[2][3]=5
a[3][1]=3
b[3][1]=1
a[3][2]=4
b[3][2]=6
a[3][3]=4
b[3][3]=7

 Matrix A:
1.00    3.00    4.00
4.00    3.00    7.00
3.00    4.00    4.00
 Matrix B:
2.00    2.00    3.00
6.00    5.00    5.00
1.00    6.00    7.00
 Matrix c:
24.00   41.00   46.00
33.00   65.00   76.00
34.00   50.00   57.00 
*/