#include <stdio.h>
int main(){
    int n;
    printf("Nhap so N ban muon: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
/* Nhap so N ban muon: 
10 
1
22
333
4444
55555
666666
7777777
88888888
999999999
10101010101010101010 */