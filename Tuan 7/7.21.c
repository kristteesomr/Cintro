#include<stdio.h>
int main(){
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