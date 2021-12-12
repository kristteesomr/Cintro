#include <stdio.h>
#include <math.h>

double ex(int n){
    double mauso = 1, tuso, ketqua=0, ketqua1;
    for(int i=1;i<=4;i++){
        tuso = pow(n,i);
        mauso=mauso*i;
        ketqua += tuso/mauso;
    }
    ketqua1 = 1 + ketqua;
    printf("Gia tri cua ham f(x)=e^x voi x=n= %d la %f",n,ketqua1);
    return ketqua1;
}
int main(){
    int n;
    printf("Nhap so n ban muon: n = "); scanf("%d",&n);
    ex(n);
}
