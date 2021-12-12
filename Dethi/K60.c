#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//NHAP THEM 
typedef struct 
{
   int id;
   char name[30];
   float distance;
   int x,y;
   int r;	 
}station;
void nhap(station*list,int n)
{
	int i;
       for(i=0;i<n;i++)
	{
       
       printf("id tram[%d] = ",i+1);
       scanf("%d",&list[i].id);
       printf("ten truong tram[%d] = ",i+1);
       fflush(stdin);
       gets(list[i].name);
       printf("Toa do x[%d] = ",i+1);
       scanf("%d",&list[i].x);
       printf("Toa do y[%d] = ",i+1);
       scanf("%d",&list[i].y);
       printf("ban kinh hdong[%d] = ",i+1);
       scanf("%d",&list[i].r);
       while(list[i].r<0)
	   {
           printf("Nhap lai ban kinh hoat dong > 0 va <100\n ");
           scanf("%d",&list[i].r);
       }
       while(list[i].r>100)
	   {
           printf("Nhap lai ban kinh hoat dong > 0 va <100\n ");
           scanf("%d",&list[i].r);
       }
       
    
    	list[i].distance=sqrt(pow(list[i].x,2)+pow(list[i].y,2));
	
   }
}

void nhapthem(station*list,int n,int j)
{
	int i;
       for(i=n-j;i<n;i++)
	{
       fflush(stdin);
       printf("id tram[%d] = ",i+1);
       scanf("%d",&list[i].id);
       printf("ten truong tram[%d] = ",i+1);
       fflush(stdin);
       gets(list[i].name);
       printf("Toa do x[%d] = ",i+1);
       scanf("%d",&list[i].x);
       printf("Toa do y[%d] = ",i+1);
       scanf("%d",&list[i].y);
       printf("ban kinh hdong[%d] = ",i+1);
       scanf("%d",&list[i].r);
       
       while(list[i].r<0)
	   {
           printf("Nhap lai ban kinh hoat dong > 0 va <100\n ");
           scanf("%d",&list[i].r);
       }
       while(list[i].r>100)
	   {
           printf("Nhap lai ban kinh hoat dong > 0 va <100\n ");
           scanf("%d",&list[i].r);
       }
       	list[i].distance=sqrt(pow(list[i].x,2)+pow(list[i].y,2));
   }
}
void inra(station*list,int n)
{
int i;

printf("%-10s | %-20s | %-10s | %-10s  |\n","ID","Ten truong tram","Toa do","ban kinh");
   for(i=0;i<n;i++)
   {
   	  
      printf("%-10d | %-20s | (%-3d,%-4d) | %-10d  |",list[i].id,list[i].name,list[i].x,list[i].y,list[i].r);
      printf("\n");
     
   } 
   
}
int tinhtoan(station*list,int n)
{
	printf("%-10s | %-20s | %-10s | %-10s  | %-10s\n","ID","Ten truong tram","Toa do","ban kinh","Khoang cach");
	for(i=0;i<n;i++)
    {
      printf("%-10d | %-20s | (%-3d,%-4d) | %-10d  | %-3.2f",list[i].id,list[i].name,list[i].x,list[i].y,list[i].r,list[i].distance);
      printf("\n");
	}
	int i,t,j;
	station list2[50],a;
	
	for(i=0;i<n;i++)
    {
    	list2[i]=list[i];
	}
	for(j=n-1;j>=0;j--)
	{
	for(i=0;i<n;i++)
	{
			if(list2[i].distance<list2[i+1].distance)
			{
				a=list2[i];
				list2[i]=list2[i+1];
				list2[i+1]=a;
			}
	}
    }
	printf("%-10s | %-20s | %-10s | %-10s  | %-10s\n","ID","Ten truong tram","Toa do","ban kinh","Khoang cach");
	for(i=0;i<n;i++)
    {
      printf("%-10d | %-20s | (%-3d,%-4d) | %-10d  | %-3.2f",list2[i].id,list2[i].name,list2[i].x,list2[i].y,list2[i].r,list2[i].distance);
      printf("\n");
	}
}

int main()
{
station list[50];
 int n=0,m = 0,j=0;
 int k;
 int t;
   
   while(m != 5)
   {
   printf("MENU\n1. Nhap thong tin tram thu phat.\n2. Bo sung tram thu phat.\n3.In ra danh sach tram.\n4.Tinh toan khoag cach tram.\n5.Thoat chuong trinh.\n"); 
   scanf("%d",&m);
   switch (m)
   {
   case 1:
   	if(n==0)
       {
       	j=0;
   	   printf("Nhap so tram  : ");
	   scanf("%d",&n);
	   k=n;
	   nhap(list,n);
       }
	else printf("Nhap 2 de them so tram !\n");
       while(n<=0)
	   {
           printf("So tram khong nho hon 0\nNhap lai n = ");
           scanf("%d",&n);
          
       }
       
       break;
   case 2:
   if(n == 0)
   {
       printf("Nhap 1\n");
   }
       else
	   {
	   printf("Nhap so tram muon nhap them :\n");
	   scanf("%d",&j);
	   n+=j;
	   nhapthem(list,n,j);
	   }
   
       break;
   case 3:
      
       inra(list,n);
       break;
    case 4:
      
       tinhtoan(list,n);
       
       break; 
	 case 5:
       
       printf("Goodbye !");
       break;         
   default : printf("Error! Please enter again!!");
   
   }
   }
}
