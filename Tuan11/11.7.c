#include <stdio.h>
int main(){
    int m = 10, n, o, *z;
    z = &m;
    printf("z stores the address of m  =%p",z);
    printf("\n*z stores the value of m = %d",*z);
    printf("\n&m is the address of m = %p",&m);
    printf("\n&n stores the address of n = %p",&n);
    printf("\n&o  stores the address of o = %p",&o);
    printf("\n&z stores the address of z = %p",&z);
}
/*
z stores the address of m  =0061FECC
*z stores the value of m = 10
&m is the address of m = 0061FECC
&n stores the address of n = 0061FEC8
&o  stores the address of o = 0061FEC4
&z stores the address of z = 0061FEC0 */