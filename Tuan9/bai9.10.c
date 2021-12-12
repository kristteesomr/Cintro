#include <stdio.h>
int integer;
int ChanLe(int a){
    printf("Nhap so nguyen ban muon kiem tra"); scanf("%d",&integer);
    if(integer%2==0) return 0;
    else return 1;
}
int main(){
    int a;
    ChanLe(a);
    printf("la so %d", ChanLe(a));
}
/* Nhap so nguyen ban muon kiem tra9
la so 1 */

