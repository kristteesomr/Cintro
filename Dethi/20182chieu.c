#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// HAM NHAP THEM , HAM TIM KIEM THONG TIN DÙNG STRCMP
 typedef struct SINHVIEN
{
	char ten[50],quequan[30];
	char mssv[12];
	float CPA;
}SV;


void nhap(SV*K, int n)
{
       int i;
       for(i=0;i<n;i++)
	{
       fflush(stdin);
       printf("Ho ten sinh vien[%d] = ",i+1);
       gets(K[i].ten);
       printf("Que quan sinh vien[%d] = ",i+1);
       gets(K[i].quequan);
       printf("MS sinh vien[%d] = ",i+1);
       gets(K[i].mssv);
       printf("CPA sinh vien[%d] = ",i+1);
       scanf("%f",&K[i].CPA);
       while(K[i].CPA<0||K[i].CPA>4.0)
	   {
           printf("Nhap lai CPA > 0\n ");
           scanf("%f",&K[i].CPA);
       }
   }
}


void nhapthem(SV*K, int n,int j)
{
       int i;
       
       for(i=n-j;i<n;i++)
	{
       fflush(stdin);
       printf("Ho ten sinh vien[%d] = ",i+1);
       gets(K[i].ten);
       printf("Que quan sinh vien[%d] = ",i+1);
       gets(K[i].quequan);
       printf("MS sinh vien[%d] = ",i+1);
       gets(K[i].mssv);
       printf("CPA sinh vien[%d] = ",i+1);
       scanf("%f",&K[i].CPA);
       while(K[i].CPA<0||K[i].CPA>4.0)
	   {
           printf("Nhap lai CPA > 0\n ");
           scanf("%f",&K[i].CPA);
       }
   }
}

int inra(SV*K,int n){
int i;
float tong=0;
printf("%-10s | %-20s | %-10s | %-10s  | %5s\n","STT","Ten","Que Quan","MSSV","CPA");
   for(i=0;i<n;i++){
   	  
      printf("%-10d | %-20s | %-10s | %-10s  | %5.2f",i+1,K[i].ten,K[i].quequan,K[i].mssv,K[i].CPA);
      printf("\n");
     tong+=K[i].CPA;
   }
   printf("\nCPA trung binh cua SV la %.2f\n",tong/n);
}

void tracuu(SV*K,int n)
{
	char timkiem[12];
	int i;
	int dem;
	printf("Nhap mssv can tim : ");
	fflush(stdin);
	gets(timkiem);
	for(i=0,dem=0;i<n;i++)
	{
		if(strcmp(timkiem,K[i].mssv)==0) //STRCMP DUNG DE TIM KIEM
		{   
		if(dem==0)
		{
		    printf("%-10s | %-20s | %-10s | %-10s  | %5s\n","STT","Ten","Que Quan","MSSV","CPA");
		}
		    
            printf("%-10d | %-20s | %-10s | %-10s  | %5.2f",i+1,K[i].ten,K[i].quequan,K[i].mssv,K[i].CPA);
            printf("\n");
		dem++;
		}	
	}
	if(dem==0)
	printf("Khong tim thay sinh vien can tim !\n");	
}
/*int tracuutheoquequan(SV*K,int n)
{

	int k=0,x=0;
	float tong=0;
	char search[30];
	printf("Nhap que quan sinh vien can tim : ");
	fflush(stdin);
	gets(search);
	int i,j;
	int dem;
	for(i=0;i<n;i++)
    {
     tong+=K[i].CPA;
    }
   


	
	for(i=0;i<n;i++)
	{
	dem=0;
	if(K[i].CPA>=tong/n)
	{	
	for(j=0;j<strlen(K[i].quequan)-1;j++)
	{
		if(K[i].quequan[j]==search[j]||K[i].quequan[j]+32==search[j]|K[i].quequan[j]-32==search[j])
		{
			dem++;	
		}	
	}
    }
	if(dem==strlen(K[i].quequan)-1)
	{
	if(k==0)
	{
		printf("%-10s | %-20s | %-10s | %-10s  | %5s\n","STT","Ten","Que Quan","MSSV","CPA");
		k++;
	}
    if(k>0)
    {
	printf("%-10d | %-20s | %-10s | %-10s  | %5.2f\n",i+1,K[i].ten,K[i].quequan,K[i].mssv,K[i].CPA);
	x--;
    }
    }
    
	x++;	
	
    }
	if(x==n)
	{
		printf("Khong tim thay sv co que quan va CPA tren tb \n");
	}				
    
}*/
int tracuutheoquequan2(SV*K,int n)
{
	int k=0,x=0;
	float tong=0;
	char search[30];
	printf("Nhap que quan sinh vien can tim : ");
	fflush(stdin);
	gets(search);
	int i,j;
	int dem;
	for(i=0;i<n;i++)
    {
     tong+=K[i].CPA;
    }
    for(i=0;i<n;i++)
    {
    	if(K[i].CPA>=tong/n)
    	{
    		if(strcasecmp(K[i].quequan,search)==0)
    		{
    			if(k==0)
	            {
		        printf("%-10s | %-20s | %-10s | %-10s  | %5s\n","STT","Ten","Que Quan","MSSV","CPA");
		        k++;
	            }
    if(k>0)
    {
	printf("%-10d | %-20s | %-10s | %-10s  | %5.2f\n",i+1,K[i].ten,K[i].quequan,K[i].mssv,K[i].CPA);
	x--;
	}
		    }
	    }
	x++;
    }
    if(x==n)
	{
		printf("Khong tim thay sv co que quan va CPA tren tb \n");
	}				
    
}
void sapxep(SV*K,int n)
{
    int i,j;
    SV K2[n],a;
    char N[30];
    for(i=0;i<n;i++)
    {
    	K2[i]=K[i];
	}
    for(j=n;j>=0;j--)
    {
		for(i=0;i<j;i++)
		{
			if(K2[i].CPA<K2[i+1].CPA)
			{
				a=K2[i];
				K2[i]=K2[i+1];
				K2[i+1]=a;
				
			}
		}
	}
    
    printf("%-10s | %-20s | %-10s | %-10s  | %5s\n","STT","Ten","Que Quan","MSSV","CPA");
    for(i=0;i<n;i++)
    {	
	  printf("\n");
      printf("%-10d | %-20s | %-10s | %-10s  | %5.2f",i+1,K2[i].ten,K2[i].quequan,K2[i].mssv,K2[i].CPA); 
    } 
}	

int main()
{
	SV K[100];
   
   int j=0,n=0,m = 0;
   
   while(m != 6)
   {
   printf("MENU\n1. Nhap thong tin sinh vien.\n2. In ra thong tin sinh vien.\n3.Tim kiem thong tin sinh vien qua mssv.\n4.Tim kiem thong tin sinh vien qua quequan.\n5.In ra bang xep hang CPA tu cao den thap .\n6.Thoat chuong trinh.\n"); 
   scanf("%d",&m);
   switch (m)
   {
   case 1:
   	if(n==0)
       {
       	j=0;
   	   printf("Nhap so sinh vien : ");
	   scanf("%d",&n);
	   nhap(K,n);
       }
	else
	   {
	   printf("Nhap so sinh vien muon nhap them :\n");
	   scanf("%d",&j);
	   n+=j;
	   nhapthem(K,n,j);
	   }
       while(n<=0)
	   {
           printf("So sinh vien khong nho hon 0\nNhap lai n = ");
           scanf("%d",&n);
       }
       
       break;
   case 2:
   if(n == 0){
       printf("Nhap 1\n");
   }
   else
   {
       inra(K,n);
   }
       break;
   case 3:
      
       tracuu(K,n);
       break;
    case 4:
       
       tracuutheoquequan2(K,n);
       break; 
	 case 5:
       sapxep(K,n);
       
       break; 
	  case 6:
       
       printf("Goodbye !");
       break;         
   default : printf("........");
   }
   }
}
