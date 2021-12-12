#include <stdio.h>
#include <string.h>
/* viet nguoc lai thu tu cua chuoi*/
int main()
{

    int i, j;
    char c, s[10] = "ABCDE";
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j]; /* doi cho chu cai o vi tri i cho chu cai o vi tri j*/
        s[j] = c;
    }
    printf("%s", s);
}

