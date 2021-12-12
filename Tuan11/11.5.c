/*
Khai báo các biến số nguyên x, y, zvà các con trỏ số nguyên p, q, r.  
Khởi tạo giá trị cho x, y, z.  
Khởi tạo p, q, rtới địa chỉ của x, y, z.1) In ra giá trị của x, y, z, p, q, r, *p, *q, *r.2) 
Đổi chỗ các giá trị x, y, z. In ra giá trị của x, y, z, p, q, r, *p, *q, *r.3) 
Đổi chỗ giá trị p, q, r. In ra giá trị của x, y, z, p, q, r, *p, *q, *r.
*/

#include <stdio.h>
int main(){
    int x,y,z;
    int *p,*q,*r;
    scanf("%d %d %d",&x,&y,&z);
    p = &x;
    q = &y;
    r = &z;
    printf("%d %d %d %p %p %p %d %d %d",x,y,z,p,q,r,*p,*q,*r);
    int temp;
    temp = x;
    x = y;
    y = z;
    z = temp;
    printf("%d %d %d %p %p %p %d %d %d",x,y,z,p,q,r,*p,*q,*r);
    int *temp2;
    temp2 = p;
    p = q;
    q = r;
    r = temp2;
    printf("%d %d %d %p %p %p %d %d %d",x,y,z,p,q,r,*p,*q,*r);
}
/*
3 7 9 0061FEA8 0061FEA4 0061FEA0 3 7 97 9 3 0061FEA8 0061FEA4 0061FEA0 7 9 37 9 3 0061FEA4 0061FEA0 0061FEA8 9 3 7*/