/* Bao cao tuan 8 
Luu Duc Quang 20205117
Bai 8.1 den Bai 8.8*/
#include <stdio.h>
int bai8_1();
    int bai8_2();
    int bai8_3();
    int bai8_4();
    int bai8_5();
    int bai8_6();
    int bai8_7();
    int bai8_8();
int main(){
    int bai8_1(){
                /* Viết chương trình in ra nội dung người dùng nhập vào từ bàn phím: thay thế chuỗi liên tiếp dấu cách ‘ ‘ bằng một dấu cách duy nhất */
        int main(){
            int c;
            int inspace; /* dem so dau cach */
            inspace = 0;
            while(c = getchar() != EOF)
            {if(c == '  '){
                if(inspace == 0){
                    inspace = 1;putchar(c);}
                if(c != ' '){inspace = 0;putchar(c);}
                }
            return 0;}
        }
    }
    int bai8_2(){
                /* Viết chương trình thay thế các kí tự ‘\’, ‘\t’, ‘\b’ bởi “\\”, “\\t”, “\\b” trong chuỗi nhập vào và in ra màn hình. */
        int main(){
            int c, d;
            while ( (c=getchar()) != EOF) { /* getchar lay tu bo dinh ban phim */
                d = 0;
                if (c == '\\') { /* Khong the de la 1 dau \ vi no se anh huong den phan sau */
                    putchar('\\'); /* phai 2 lan putchar vi \\ tinh la 1 cai \ */
                    putchar('\\');
                    d = 1;}
                if (c == '\t') {
                    putchar('\\');
                    putchar('t');
                    d = 1;}
                if (c == '\b') {
                    putchar('\\');
                    putchar('b');
                    d = 1;}
                if (d == 0) putchar(c);        
            }
        return 0;
        }
        /* a \t \b \
        a \\t \\b \\ */

        /* Ban chat cua bai 8.2:
        \t khi nguoi dung bam phim tab
        \b khi nguoi dung bam phim backspace xoa lui
        \d khi nguoi dung 
        \n khi nguoi dung bam phim enter */
    }
    int bai8_3(){
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
    }
    int bai8_4(){
        int main( void ){
            /* initialize variables in definitions */
            int passes = 0;   /* number of passes */
            int failures = 0; /* number of failures */
            int student = 1;  /* student counter */
            int result;       /* one exam result */
            
            /* process 10 students using counter-controlled loop */
            while ( student <= 10 ) {
                /* prompt user for input and obtain value from user */
                printf( "Enter result ( 1=pass,2=fail ): " );scanf( "%d", &result );/* if result 1, increment passes */
                if ( result == 1 ) {     passes = passes + 1;} 
                else {failures = failures + 1;} 
                student = student + 1; /* so hoc sinh tang len den 10 thi vong lap dung lai */ 
            } 
            printf( "Passed %d\n", passes );
            printf( "Failed %d\n", failures );
            return 0; 
        } 
        /* Enter result ( 1=pass,2=fail ): 1
        Enter result ( 1=pass,2=fail ): 2
        Enter result ( 1=pass,2=fail ): 1
        Enter result ( 1=pass,2=fail ): 1
        Enter result ( 1=pass,2=fail ): 2
        Enter result ( 1=pass,2=fail ): 1
        Enter result ( 1=pass,2=fail ): 2
        Enter result ( 1=pass,2=fail ): 1
        Enter result ( 1=pass,2=fail ): 1
        Enter result ( 1=pass,2=fail ): 1
        Passed 7
        Failed 3 */
    }
    int bai8_5(){
        int main( void ){
            int counter = 1;              /* initialize counter */
            do {printf( "%d  ", counter );} while ( ++counter <= 10 ); /* ++counter bang voi gia tri cua bien counter con counter++ thi ca bien counter=counter++ thi se cong them 1 */
            return 0; 
        } 
        /* 1  2  3  4  5  6  7  8  9  10  */
    }
    int bai8_6(){
                /* Tinh diem TBC */
        int main (){
            float grade , sum = 0.0;
            int gradeCount = 0;
            printf (" Enter grade : ");scanf ("%g", & grade );
            while ( grade >= 0.0) {
                sum += grade ;
                ++ gradeCount ;
                printf (" Enter grade : "); scanf ("%g", & grade );
            }
            printf (" Average : %g\n", sum/ gradeCount );
            return 0;
        }
        /* Enter grade : 8
        Enter grade : 9
        Enter grade : 10
        Enter grade : 5
        Enter grade : 8
        Enter grade : 10
        Enter grade : 9
        Enter grade : -1
        Average : 8.42857 */
    }
    int bai8_7(){
        int main () {
            int i, n, f;
            printf (" Enter n: ");scanf ("%d", &n);
            f = 1; /* 0! */
            i = 1;
            while (i <= n) {
                f *= i; /* Now , f = i! */
                ++i;
            }
            printf ("%d! = %d\n", n, f);
            return 0;
        }
        /*  Enter n: 10
        10! = 3628800 */
    }
    int bai8_8(){
        int main(){
            int i=1;
            int n;
            printf("Nhap so tu nhien ban muon:"); scanf("%d",&n);
            while(i<=n) {
                printf("%d\t",i);
                i++;
            }
        }
        /* Nhap so tu nhien ban muon:10
        1       2       3       4       5       6       7       8       9       10 */
    }



}