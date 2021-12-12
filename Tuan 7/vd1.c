#include <stdio.h>
int main() {
    int i,x;
	for (i=1; i<=100;i++) 
	{
		x += i;
		if ((x % i) == 0) { i-- ;}
	}
	printf("x = %d", x);
	printf("i = %d", i);
	return 0;
}