#include <stdio.h>

int giaipt(float a, float b){
    float c = -b/a;
    if (a==0 && b!=0) printf("Phuong trinh vo nghiem");
    else if(a==0 && b==0) printf("Phuong trinh vo so nghiem");
    else printf("Phuong trinh co mot nghiem duy nhat la x = %.2f",-b/a);
    return c;
}
int main(){
    float a,b;
    printf("Nhap he so a va b cua phuong trinh\n");
    printf("a = "); scanf("%f", &a);
    printf("b = "); scanf("%f",&b);
    giaipt(a,b);
    return 0;
    }
/* 
a = 0
b = 0
Phuong trinh vo so nghiem

Nhap he so a va b cua phuong trinh
a = 0
b = 1
Phuong trinh vo nghiem

Nhap he so a va b cua phuong trinh
a = 7
b = 14
Phuong trinh co mot nghiem duy nhat la x = -2.00
*/