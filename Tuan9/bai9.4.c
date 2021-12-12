#include <stdio.h>
long salary(int hours){
      if (hours >40) 
      return 15000*40+15000*(hours-40)*3/2; 
      else
      return hours*15000;
}

int main(){  
    int n; 
    do {
    printf("Enter number of working hours:"); scanf("%d",&n);
    } 
    while (n<10 || n>=65);
    printf("The salary youget:%ld\n",salary(n));
    return 0;
}
/* Enter number of working hours:45
The salary youget:712500 
Enter number of working hours:30
The salary youget:1200 */