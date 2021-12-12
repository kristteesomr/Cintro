/* n! using while . */
# include <stdio.h>
int main () {
    int i, n, f;
    printf (" Enter n: ");scanf ("%d", &n);
    f = 1; /* 0! */
    i = 1;
    while (i <= n) {
        f *= i; /* Now , f = i! */
        ++i;
    }
    printf ("%d! = %d\n", n, f);
    return 0;
}
/*  Enter n: 10
10! = 3628800 */