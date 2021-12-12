#include <stdio.h>
int main(){
    int m = 29, *ab;
    ab = &m;
    printf("Address of m :%p",&m);
    printf("\nValue of m :%d",m);
    printf("\nAddress of pointer ab :%p",&ab);
    printf("\nContent of pointer ab :%d",ab);
    m = 34;
    printf("\nAddress of pointer ab :%p",&ab);
    printf("\nContent of pointer ab :%d",ab);
    *ab = 7;
    printf("\nAddress of pointer ab :%p",&ab);
    printf("\nContent of pointer ab :%d",ab);
    printf("\nAddress of m :%p",&m);
    printf("\nValue of m :%d",m);

}
/*
Address of m :0061FECC
Value of m :29
Address of pointer ab :0061FEC8
Content of pointer ab :6422220
Address of pointer ab :0061FEC8
Content of pointer ab :6422220
Address of pointer ab :0061FEC8
Content of pointer ab :6422220
Address of m :0061FECC
Value of m :7
*/