#include <stdio.h>
#include <math.h>
int is_prime(int n){
	int i = 0;
	for(i = 2; i <= sqrt(n); i++){
		if(n % i == 0){return 0;}}
	return 1;
}
int main(void){  
	int num = 0, i = 0;
	printf("enter a positive integer\n");
	scanf("%d", &num);
	printf("prime numbers up to %d:\n", num);
	for(i = 2; i <= num; ++i){
		if(is_prime(i)){printf("%d\n",i);}} return 0;
}
/* enter a positive integer
15
prime numbers up to 15:
2
3
5
7
11
13 */
