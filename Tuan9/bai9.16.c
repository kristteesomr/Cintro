#include <stdio.h>
#include <math.h>

double arcsin(int n){
    double mauso = 1, tuso, ketqua=0, ketqua1;
    for(int i=1;i<=5;i=i+2){
        tuso = pow(n,i);
        mauso=mauso*i;
        ketqua += tuso/mauso;
    }
    ketqua1 = ketqua;
    printf("Gia tri cua ham f(x)=arcsinx voi x=n= %d la %lf",n,ketqua1);
    return ketqua1;
}
int main(){
    int n;
    printf("Nhap so n ban muon: n = "); scanf("%d",&n);
    arcsin(n);
}
/* Nhap so n ban muon: n = 1
Gia tri cua ham f(x)=arcsinx voi x=n= 1 la 1.400000 */