#include <stdio.h>
void printnchars(int ch, int n){
    int i;
    for(i = 0; i < n; i++)
        printf("%c", ch);
}

int main(){

    int n=6;
    for (int i=1;i<=n;i++)
    {
        printnchars('*',i);
        printf("\n");
    }
}
/* 
*
**
***
****
*****
****** 
*/