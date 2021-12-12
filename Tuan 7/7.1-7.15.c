/* Bao cao tuan 7
*/	
#include<stdio.h>
#include <math.h>
#define CBEGIN 10 
#define CLIMIT -5
#define CSTEP 5  
#include <string.h>
int vd1();
int vd2();
int vd3();
int bai7_1();
int bai7_2();
int bai7_3();
int bai7_4();
int bai7_5();
int bai7_6();
int bai7_7();
int bai7_8();
int bai7_9();
int bai7_10();
int bai7_11();
int bai7_12();
int bai7_13();
int bai7_14();
int bai7_15();

int main(){
	//vd1();
	//vd2();
	//vd3();
	//bai7_1();
	//bai7_2();
	//bai7_3();
	//bai7_4();
	//bai7_5();
	//bai7_6();
	//bai7_7();
	//bai7_8();
	//bai7_9();
	//bai7_10();
	//bai7_11();
	//bai7_12();
	//bai7_13();
	//bai7_14();
	//bai7_15();
}
/*Vi du 1 : <vi du nay khong thuc hien duoc> 
	+input: 
	+output:


*/
int vd1()
{	
	int i,x;
	for (i=1; i<=100;i++) 
	{
		x += i;
		if ((x % i) == 0) { i-- ;}
	}
	printf("x = %d", x);
	printf("i = %d", i);
	return 0;
}

/*
vi du 2:
input :  ABCDE
output: EDCBA 
*/

int vd2()
{
	int i,j;
	char c, s[10] = "ABCDE"; 
	for (i= 0, j= strlen(s)-1; i< j; i++ , j-- )
	{ 
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
	printf("%s", s);
}
/*

*/

int vd3()
{
	char c;
	int count;
	for (count=0; (c=getchar() != '.'); count++)
		{ }
	printf("Number of characters is %d\n", count);
}
/*
1  1
2  4
3  9
4  16
5  25
6  36
7  49
8  64
9  81
10  100
*/
int bai7_1()
{
	int i;
	for(i = 1; i <= 10; i = i ++)
	 
		printf("%d  %d\n", i, i * i);
	return 0;
}

/*
*
**
***
****
*****
******
*******
********
*********
**********
*/
int bai7_2()
{
	int i,j;
	for(i = 1; i <= 10; i++)
	{
		for( j=1 ; j<=i ; j++ )
	
		printf("*");
		printf("\n");
}
	return 0;
}

/*
73 numbers were greater than 27
*/
int bai7_3()
{
	int i;
	int count = 0;
	for(i = 1; i <= 100; i = i + 1)
	{
		if (i > 27)
		count = count + 1;
	}
	printf("%d numbers were greater than 27\n", count);
	return 0;
}
/*
2
3
5
7
11
13
17
19
23
29
31
37
41
43
47
53
59
61
67
71
73
79
83
89
97
*/
int bai7_4()
{
	int i, j;
	printf("%d\n", 2);
	for (i = 3; i <= 100; i = i + 1)
	{
		for (j = 2; j < i; j = j + 1)
		{
		if (i % j == 0)
		break;
		if (j > sqrt(i))
		{
		printf("%d\n", i);
		break;
		} // end if (j
		} // end for (i=2 ...)
	} // end for (i=3 ...)
		return 0;
}

/*
2
3
5
7
11
13
17
19
23
29
31
37
41
43
47
53
59
61
67
71
73
79
83
89
97
*/

int bai7_5()
{
	int i, j;
	double sqrti;
	printf("%d\n", 2);
	for (i = 3; i <= 100; i = i + 2)
	{
		sqrti = sqrt(i);
		for (j = 2; j < i; j = j + 1)
		{
			if(i % j == 0)
			break;   /* not prime */
			if(j > sqrt(i))
			{/* prime */
				printf("%d\n", i);
				break;
			}
		} // end of for (j=2 ...
	} // end of for (i=3 ...)
	return 0;
}

/*
####test case 1:
Enter starting time (an integer) in seconds> 3

Begin countdown
T -3
T -2
T -1
Blast-off!

####
Enter starting time (an integer) in seconds: 5

Begin countdown
T - 5
T - 4
T - 3
T - 2
T - 1
Blast-off!
*/

int bai7_6()
{
	int time, start;
	printf("Enter starting time (an integer) in seconds: ");
	scanf("%d", &start);
	printf("\nBegin countdown \n"); 
	for (time = start; time > 0; time = time -1)
	{
		printf("T - %d\n", time);
	} 
	printf("Blast-off!\n");
	return (0);
}

/*

  Celsius  Fahrenheit
    0      32.00
   -5      23.00
   
*/
int bai7_7()
{
	int    celsius;    
	double fahrenheit;
	/* Print the table heading */    
	printf("  Celsius  Fahrenheit\n");
	for(celsius+CBEGIN;
		celsius >= CLIMIT;      
		celsius = celsius -CSTEP) 
	{
		fahrenheit = 1.8 * celsius + 32.0;    
		printf("  %3d    %7.2f\n", celsius, fahrenheit);    
	}
	return 0 ;
}

/*
           I   J
Outer      1
  Inner        0
Outer      2
  Inner        0
  Inner        1
Outer      3
  Inner        0
  Inner        1
  Inner        2

*/

int bai7_8()
{
	int i, j;
	printf("           I   J\n");
	for  (i = 1;  i < 4;  i = i + 1)
	{
		printf("Outer %6d\n", i); 
		for  (j = 0;  j < i;  j = j + 1)
		{
			printf("  Inner%9d\n", j);
		}
	}
	return 0 ; 
}

/*

Enter n: 3
3! = 6

Enter n: 0
0! = 1

*/
int bai7_9()
{
	int i, n, f;
	printf ("Enter n: ");
	scanf ("%d", &n);
	f = 1; 
	for (i = 1; i <= n; ++i) 
	{
		f *= i;   
	}
	printf ("%d! = %d\n", n, f);
	return 0;
}

/*

Enter N= :10

6

Enter N= :50

6
28

*/

int bai7_10()
{
	int n, i, j, tong;
	printf("\nEnter N= :");
	scanf("%d", &n);
	for (i=2; i<=n; i++)
	{
		tong = 1;
		for (j=2; j<=i/2; j++)
			if (i%j == 0)
				tong += j;
			if (tong == i)
				printf("\n%d", i);
	}
}

int bai7_11()
{
	int i;
	
	printf("The first 10 natural numbers are \n");
	for (i=1;i<=10;i++) printf("%d\t",i);

	return 0 ; 
}
/*bai7_12:
 
*/

int bai7_12()
{
	int i,sum=0;
	
	printf("The first 10 natural numbers are \n");
	for (i=1;i<=10;i++) printf("%d\t",i);
	for (i=1;i<=10;i++) sum+=i;
	printf("\nSum of the first 10 natural numbers are %d\n",sum);
	return 0;
}

/* bai 7_13: tinh tong n so tu nhien dau tien nhap vao
input : so thu n 
output: tong cua n so tu nhien dau tien
#### test case 1 :
Enter n: 20
The first 20 natural numbers are
1       2       3       4       5       6       7       8       9       10      11      12      13      14      15
        16      17      18      19      20
Sum of the first 20 natural numbers are 210

#### test case 2:
Enter n: 6
The first 6 natural numbers are
1       2       3       4       5       6
Sum of the first 6 natural numbers are 21


*/ 
int bai7_13()
{
	int i,n,sum=0;
	
	printf("Enter n: ");
	scanf("%d",&n);
	
	printf("The first %d natural numbers are \n",n);
	for (i=1;i<=n;i++) printf("%d\t",i);
	for (i=1;i<=n;i++) sum+=i;
	printf("\nSum of the first %d natural numbers are %d\n",n,sum);
	return 0;
}

/*bai 7.14: tinh trung binh cong 10 so tu nhien dau tien
input: nhap 10 so tu nhien dau tien
output:trung binh cong 10 so tu nhien dau tien

#### test case 1:
Sum of the first 10 natural numbers are 55
The Average: 5.50
*/
int bai7_14()
{
	int i,sum=0;
	
	for ( i=1; i<=10; i++)
		sum += i; 
	printf("\nSum of the first 10 natural numbers are %d\n",sum);
	printf("The Average: %4.2f\n",sum*1.0/10);
	return 0;
}


/*bai7_15: tinh lap phuong cua 5 so dau tien

#### test case 1:
1       1
2       8
3       27
4       64
5       125
*/
int bai7_15()
{
	int i;
	
	for (i=1;i<=5;i++) 
	printf("%d\t%d\n",i,i*i*i);
	return 0;
}













