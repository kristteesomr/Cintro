#include<stdio.h>
/* Luu Duc Quang 20205117
Ngay viet 18/05/2021 
Input: 3 so nguyen
Output: gia tri max */
/* TH1: c>=b 
Neu a>=c thi max =a
Neu a nam giua khoang c va b hoac a nho hon b => max =c
TH2: c<b
Neu a>=b => max =a
Neu a nam giua khoang c va b hoac a nho hon b => max =b*/
int main(){
int a,b,c,hieu1,hieu2,max;
printf("Nhap 3 so nguyen");
scanf("%d %d %d",&a,&b,&c);
hieu1 = a - b;
hieu2 = a - c;
if (hieu1>=hieu2) {if (hieu2>=0) {max = a;} 
					else {max =c;}}
else {if (hieu1>=0) {max=a;} 
		else {max =b;}}
printf("Max la %d",max);
}

/* 
TESTCASE1:
Nhap 3 so nguyen3
3
5
Max la 5
TESTCASE2:Nhap 3 so nguyen1
1
1
Max la 1
TESTCASE3: Nhap 3 so nguyen3
5
7
Max la 7

*/