/* Bao cao tuan 7
*/	
#include<stdio.h>
#include <math.h>
#define CBEGIN 10 
#define CLIMIT -5
#define CSTEP 5  
#include <string.h>
int bai7_16();
int bai7_17();
int bai7_18();
int bai7_19();
int bai7_20();
int bai7_21();
int bai7_22();
int bai7_23();
int bai7_24();
int bai7_25();

int main(){
	
int bai7_16()
{
    for(int i=1; i<13; i++){printf("%d x 15 = %d\n",i,i*15);}
}
/* 1 x 15 = 15
2 x 15 = 30
3 x 15 = 45
4 x 15 = 60
5 x 15 = 75
6 x 15 = 90
7 x 15 = 105
8 x 15 = 120
9 x 15 = 135
10 x 15 = 150
11 x 15 = 165
12 x 15 = 180
*/



int bai7_17()
{
    
    for(int i=0; i<=10; i++){
        for(int j=1;j<=i;j++) printf("%d ",j); printf("\n");
        }
}
/* 1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
1 2 3 4 5 6 7
1 2 3 4 5 6 7 8
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9 10
*/

int bai7_18()
{
    int n, sum=0;
    printf("Nhap so N ban muon:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d\t",2*i+1);
        sum+=(2*i+1);
    }
    printf("Tong:%d",sum);
    return 0;
}
/* Nhap so N ban muon:
10
1       3       5       7       9       11      13      15      17      19      Tong:100 */

int bai7_19()
{
    for(int i=1;i<13;i++){
        for(int j=1;j<13;j++) {
            printf("%d \t",i*j);
        }
        printf("\n");
    }
}
/* 1       2       3       4       5       6       7       8       9       10      11      12 
2       4       6       8       10      12      14      16      18      20      22      24
3       6       9       12      15      18      21      24      27      30      33      36
4       8       12      16      20      24      28      32      36      40      44      48
5       10      15      20      25      30      35      40      45      50      55      60
6       12      18      24      30      36      42      48      54      60      66      72
7       14      21      28      35      42      49      56      63      70      77      84
8       16      24      32      40      48      56      64      72      80      88      96
9       18      27      36      45      54      63      72      81      90      99      108
10      20      30      40      50      60      70      80      90      100     110     120
11      22      33      44      55      66      77      88      99      110     121     132
12      24      36      48      60      72      84      96      108     120     132     144  */

int bai7_20()
{
    int n;
    printf("Nhap so N ban muon: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
/* Nhap so N ban muon: 
10 
1
22
333
4444
55555
666666
7777777
88888888
999999999
10101010101010101010 */

int bai7_21()
{
    int i,j,rows,k=1;
    printf("So hang : ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
	for(j=1;j<=i;j++)
	    printf("%d ",k++); /* gan them bien k, k la so lan vong lap chay*/
	    printf("\n");
    }
    return 0;
}
/* So hang : 
5
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15 */

int bai7_22()
{
      int space,rows,t=1;
   printf("Input number of rows : ");
   scanf("%d",&rows);
   space=rows+4-1;
   for(int i=1;i<=rows;i++)
   {
         for(int k=space;k>=1;k--)
            {
              printf(" ");
            }
	   for(int j=1;j<=i;j++)
	   printf("%d ",t++);
	printf("\n");
    space --;
   }
    return 0;
}

int bai7_23()
{
      int space,rows;
   printf("Input number of rows : ");
   scanf("%d",&rows);
   space=rows+4-1;
   for(int i=1;i<=rows;i++)
   {
         for(int k=space;k>=1;k--)
            {
              printf(" ");
            }
	   for(int j=1;j<=i;j++)
	   printf("* ");
	printf("\n");
    space --;
   }
    return 0;
}
/* Input number of rows : 5
        * 
       * *
      * * *
     * * * *
    * * * * * */

int bai7_24()
{
     int i,k=1,n;
 
    printf("Enter a number: ");
    scanf("%d",&n);
 
    for(i=1;i<=n;i++)
        k=k*i;
 
    printf("Factorial of %d is: %d",n,k);
    return 0;
}
/* Enter a number: 5
Factorial of 5 is: 120 */
int bai7_25()
{
    int n, sum=0;
    printf("Nhap so N ban muon:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\t",2*i);
        sum+=(2*i);
    }
    printf("Tong:%d",sum);
    return 0;
}
/* Nhap so N ban muon:5
2       4       6       8       10      Tong:30 */












