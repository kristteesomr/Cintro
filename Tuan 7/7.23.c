#include<stdio.h>
int main(){
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