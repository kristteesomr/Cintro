#include <stdio.h>
int main(){
    int n, sum=0;
    printf("Nhap so N ban muon:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d\t",2*i+1);
        sum+=(2*i+1);
    }
    printf("Tong:%d",sum);
    return 0;
}
/* Nhap so N ban muon:
10
1       3       5       7       9       11      13      15      17      19      Tong:100 */