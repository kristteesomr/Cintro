#include <stdio.h>
int main(){
    int n, sum=0;
    printf("Nhap so N ban muon:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\t",2*i);
        sum+=(2*i);
    }
    printf("Tong:%d",sum);
    return 0;
}
/* Nhap so N ban muon:5
2       4       6       8       10      Tong:30 */