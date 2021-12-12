#include <stdio.h>
int main(){
    int i=1;
    int n;
    printf("Nhap so tu nhien ban muon:"); scanf("%d",&n);
    while(i<=n) {
        printf("%d\t",i);
        i++;
    }
}
/* Nhap so tu nhien ban muon:10
1       2       3       4       5       6       7       8       9       10 */