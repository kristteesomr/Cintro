#include <stdio.h>     
int  main()   { 
    double total_pay;    /* company payroll     */ 
    int    count_emp;    /* current employee    */ 
    int    number_emp;   /* number of employees */ 
    double hours;        /* hours worked        */ 
    double rate;         /* hourly rate         */    
    double pay;          /* pay for this period */ /* Get number of employees. */ 
    printf("Enter number of employees> "); scanf("%d", &number_emp); /* Compute each employee's pay and add it to the payroll. */ 
    total_pay = 0.0; count_emp = 0; 
    while (count_emp < number_emp) {  
        printf("Hours> ");     
        scanf("%lf", &hours);     
        printf("Rate > $");     
        scanf("%lf", &rate);     
        pay = hours * rate;     
        printf("Pay is $%6.2f\n\n", pay);     
        total_pay = total_pay + pay;     
        count_emp = count_emp + 1;    /* bien tang len bang voi tong so nhan vien thi se dung vong lap nay */
    }  
    printf("All employees processed\n");    
    printf("Total payroll is $%8.2f\n", total_pay);  
    return (0); 
} 
/* Enter number of employees> 4
Hours> 10
Rate > $20
Pay is $200.00

Hours> 8
Rate > $20
Pay is $160.00

Hours> 5
Rate > $30
Pay is $150.00

Hours> 6
Rate > $20
Pay is $120.00

All employees processed
Total payroll is $  630.00 */