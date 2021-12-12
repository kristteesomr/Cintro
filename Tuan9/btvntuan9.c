#include <stdio.h>
    int vd();
    int vd2();
    int vd3();
    int bai9_1();
    int bai8_2();
    int bai8_3();
    int bai8_4();
    int bai8_5();
    int bai8_6();
    int bai8_7();
    int bai8_8();

    int main(){
    int vd(){
        #include <stdio.h>/* Ham in loi chao mung */
        void sayHello ( void ){
            printf(“Hello World!\n”);}/** Goi ham in loi chao mung*/
            int main(void){
                sayHello();
                return 0;
                }
    }

    int vd2(){
                int giaithua (int a) {
            int i, gt=1;
            for(i=1; i<=a; i++)
            gt = gt * i;
            return gt;
        }
            
            int main( void ) {
                int num;
                printf("Nhap so nguyen:");scanf("%d",&num);
                printf("%d!=%d\n", num, giaithua(num));
            }
    }
    
    int vd3(){
                int addOne ( int i){
            i = i + 1;
            return i;
            }
            
            int main(void){
                int i = 3;
                printf("%d\n", addOne(i) );
                printf("%d\n", i);
                return 0;
            }
    }

    int vd4(){
                void badSwap ( int a, int b ){ 
            int temp;
            temp = a;
            a = b;
            b = temp;
            printf("Called environment: %d %d\n",a,b);
        }
            
        int main(void){ 
            int a = 3, b = 5;
            printf("Calling environment: %d %d\n",a,b);
            badSwap ( a, b );
            printf("Calling environment: %d %d\n",a,b);
            return 0;
        }
    }

    int vd5(){
                int i;
        void f() {
            int i;i++; // chỉ làm thay đổi giá trị biến i cục bộ 
            }
        void g() {
            i++; // làm thay đổi giá trị của biến i tổng thể
        }
        int main(){
            i = 10; 
            f();
            printf("i = %d \n", i);
            g();
            printf("i = %d", i);
        }
    }

    int bai9_1(){
                        double kineticEnergy(double m, double v){
                float k;
                k=m*v*v/2;
                return k;
            }

            int main(){
                double m, v;
                printf("Enter mass:"); scanf("%f",&m);
                printf("Enter speed:"); scanf("%f",&v);
                printf("Kinetic Energy of element is: %f", kineticEnergy(m,v));
            }
           /* Enter mass:3
Enter speed:4
Kinetic Energy of element is: 0.000000 */

    }
    int bai9_2(){
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
    }
    int bai9_3(){
                long sumcube(int n){  
            int i=0; 
            long s=0;
            for(i=1; i<=n; i++) 
                s+=i*i*i;
            return s;
        }
        void printsubmultiples(int n){  
            int i;
            for(i=2; i<n; i++)
                if (n%i ==0) printf("%d ",i);
                printf("\n");
        }
        void printsquares(int n){  
            int i; 
            for(i=1; i<=n; i++)
                printf("%d ",i*i);
                printf("\n");
        }

        int main(){
            int n=10;
            sumcube(n);
            printsubmultiples(n);
            printsquares(n);
        }
        /* 2 5 
        1 4 9 16 25 36 49 64 81 100 */
    }
    int bai9_4(){
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
    }
    int bai9_5(){
                    void printnchars(int ch, int n){
                int i;
                for(i = 0; i < n; i++)
                    printf("%c", ch);
            }

            int main(){

                int n=6;
                for (int i=1;i<=n;i++)
                {
                    printnchars('*',i);
                    printf("\n");
                }
            }
            /* 
            *
            **
            ***
            ****
            *****
            ****** 
            */
    }
    int bai9_6(){
                        double celsius(double f) {
                    return 5 * (f -32) / 9;
                }
                int main() {
                    double fahr = 0;
                    printf("Fahrenheit\tCelsius\n");
                    while (fahr < 21) {
                        printf("%6.1f\t%6.1f\n", fahr, celsius(fahr));
                        fahr += 1;
                    }
                    return 0;
                }
                /* Fahrenheit      Celsius
                0.0   -17.8
                1.0   -17.2
                2.0   -16.7
                3.0   -16.1
                4.0   -15.6
                5.0   -15.0
                6.0   -14.4
                7.0   -13.9
                8.0   -13.3
                9.0   -12.8
                10.0   -12.2
                11.0   -11.7
                12.0   -11.1
                13.0   -10.6
                14.0   -10.0
                15.0    -9.4
                16.0    -8.9
                17.0    -8.3
                18.0    -7.8
                19.0    -7.2
                20.0    -6.7 */

    }
    int bai9_7(){
                    int DigitAllSame(int n){
                int digit;
                int count =0;
                int flagEven,flagOdd;
                flagEven=1; flagOdd=1;
                while (n>0 && count<5){
                    digit = n%10;
                    n= n/10;
                    count++;
                    if (digit%2 == 0) {
                        flagEven= flagEven*1;flagOdd= flagOdd*0;}
                    else {flagEven= flagEven*0;flagOdd= flagOdd*1;}
                }
                printf("count = %d\n", count);
                if (count>=5) 
                    return -1;
                if (flagEven || flagOdd) 
                    return 1;
                else 
                    return 0;
            }
            int main() {
                printf("Hello.\n");
                printf("So %d co gia tri ham la %d\n", 44668, DigitAllSame(46668));
            }
            /* Hello.
            count = 5
            So 44668 co gia tri ham la -1 */
    }
    int bai9_8(){
                    // function to get Judge's score
            void getJudgeData(double *);
            // function to calculate competitor's score
            void calcScore(double, double, double, double, double);
            double findLowest(double, double, double, double, double);
            double findHighest(double, double, double, double, double);

            int main() {
                double s1, s2, s3, s4, s5;
                getJudgeData(&s1);
                getJudgeData(&s2);
                getJudgeData(&s3);
                getJudgeData(&s4);
                getJudgeData(&s5);
                calcScore(s1, s2, s3, s4, s5);
                return 0;
            }
                    void getJudgeData(double *s) {
                        do {
                            printf("Enter a judge's score: "); scanf("%f",s);
                        } 
                        while (*s < 0 || *s > 10);
                    }
                    double findLowest(double s1, double s2, double s3, double s4, double s5) {
                        double min = s1;
                        if (s2 < min) min = s2;
                        if (s3 < min) min = s3;
                        if (s4 < min) min = s4;
                        if (s5 < min) min = s5;
                        return min;
                    }
                    double findHighest(double s1, double s2, double s3, double s4, double s5) {
                        double max = s1;
                        if (s2 > max) max = s2;
                        if (s3 > max) max = s3;
                        if (s4 > max) max = s4;
                        if (s5 > max) max = s5;
                        return max;
                    }
                    void calcScore(double s1, double s2, double s3, double s4, double s5) {
                        double sum = s1 + s2 + s3 + s4 + s5;
                        double max = findHighest(s1, s2, s3, s4, s5);
                        double min = findLowest(s1, s2, s3, s4, s5);
                        sum -= (max + min);
                        printf("Max = %1.2f\n", max);
                        printf("Min = %1.2f\n", min);
                        printf("Final score: %1.2f\n", sum / 3);
                    }
    }
    }