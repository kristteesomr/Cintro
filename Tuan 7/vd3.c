#include <stdio.h>
int main(){
    char c;/* char c la dat c la 1 ki tu. Neu chuyen thanh char c[10] thi van loi*/
    int count;
	for (count=0; (c=getchar() != '.'); count++) /* getchar chi nhap duoc 1 ki tu*/
	printf("Number of characters is %d\n", count);
}