#include <stdio.h>
/*
•Viết hàm incomeplus để nâng lương 300000 cho cho nhân viên với điều kiện số năm làm việc > 3void incomeplus(long *current, int year)
•Kiểm tra hàm với một chương trình
*/
void incomeplus(long *current, int year){
    if (year >3) 
        *current = *current + 300000;
} 
void main(void){
    long cursal; 
    int year;
    do {
        printf("Enter your current salary:"); 
            scanf("%ld",&cursal);
        printf("Number of years passed:");
            scanf("%d", &year);
        incomeplus(&cursal,year);
        printf("Your salary now: %ld", cursal);
    }
    while(year!=-1);
}
/*
Enter your current salary:120000
Number of years passed:3
Your salary now: 120000 

Enter your current salary:
1500000
Number of years passed:6
Your salary now: 1800000
*/