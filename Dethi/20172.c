#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//KIEM TRA TRUNG PHONG SU DUNG HAM ATOI  
//NHAP THEM LOP MOI LAN THEM IT NHAT 1 LOP
typedef struct Classes
{
	int ClassID;
	char CourseName[30];
	char Room[10];
	char slots[10];
	int Day;
}lop;
void nhap(lop*K,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Moi nhap ma lop hoc [%d]:\n",i+1);
		scanf("%d",&K[i].ClassID);
		printf("Nhap hoc phan [%d]:\n",i+1);
		fflush(stdin);
		gets(K[i].CourseName);
		//printf("%d",atoi(K[i].CourseName));
		printf("Nhap so phong [%d]:\n",i+1);
		fflush(stdin);
		gets(K[i].Room);
		printf("Nhap ngay hoc cua lop [%d]:\n",i+1);
		scanf("%d",&K[i].Day);
		while(K[i].Day<2||K[i].Day>7)
		{
		printf("moi nhap lai ngay hoc cua lop [%d]:\n",i+1);
		scanf("%d",&K[i].Day);
		}
		printf("Nhap ca hoc cua lop [%d]:\n",i+1);
		fflush(stdin);
		gets(K[i].slots);
		
	}
}

void nhapthem(lop*K,int n,int j)
{
	int i;
	for(i=n-j;i<n;i++)
	{
			printf("Moi nhap ma lop hoc [%d]:\n",i+1);
		scanf("%d",&K[i].ClassID);
		printf("Nhap hoc phan [%d]:\n",i+1);
		fflush(stdin);
		gets(K[i].CourseName);
		printf("Nhap so phong [%d]:\n",i+1);
		fflush(stdin);
		gets(K[i].Room);
		printf("Nhap ngay hoc cua lop [%d]:\n",i+1);
		scanf("%d",&K[i].Day);
		while(K[i].Day<2||K[i].Day>7)
		{
		printf("moi nhap lai ngay hoc cua lop [%d]:\n",i+1);
		scanf("%d",&K[i].Day);
		}
		printf("Nhap ca hoc cua lop [%d]:\n",i+1);
		fflush(stdin);
		gets(K[i].slots);
	    while(K[i].slots[1]!=45)
	    {
	    	printf("Nhap lai ca hoc cua lop [%d]:\n",i+1);
		    fflush(stdin);
	       	gets(K[i].slots);
		}
		
	}
}
int inra(lop*K,int n)
{
int i;
printf("%-10s | %-30s | %-10s | %-10s | %-10s  | \n","Ma lop","Ten mon hoc","Ten phong","Thu","Tiet hoc");
   for(i=0;i<n;i++)
   {
      printf("%-10d | %-30s | %-10s | %-10d | %-10s  |\n",K[i].ClassID,K[i].CourseName,K[i].Room,K[i].Day,K[i].slots);
   }
}

//TIM KIEM THEO PHONG
int timkiemtheophong(lop*K,int n)
{
	int i,dem=0,j=0;
	char search[10];
	printf("Moi nhap ten phong can tim :\n");
	fflush(stdin);
	gets(search);
	for(i=0;i<n;i++)
	{
		if(strcasecmp(K[i].Room,search)==0)
		{
			if(j==0)
			{
			printf("%-10s | %-30s | %-10s | %-10s | %-10s  | \n","Ma lop","Ten mon hoc","Ten phong","Thu","Tiet hoc");
			printf("%-10d | %-30s | %-10s | %-10d | %-10s  |",K[i].ClassID,K[i].CourseName,K[i].Room,K[i].Day,K[i].slots);
            printf("\n");
            j++;
            dem--;
            }
            else 
			{
            	printf("%-10d | %-30s | %-10s | %-10d | %-10s  |\n",K[i].ClassID,K[i].CourseName,K[i].Room,K[i].Day,K[i].slots);
            	dem--;
			}
		}
		dem++;
	}
	
	if(dem==n)
	printf("Khong tim thay phong ban yeu cau !\n");
	else printf("Co %d lop",n-dem);
}

// SAP XEP THEO MA LOP TANG DAN
void ranking(lop*K,int n)
{
	lop K3[50],a;
	int i,j;
	for(i=0;i<n;i++)
	{
		K3[i]=K[i];
	}
	for(j=n-1;j>=0;j--)
	{
		for(i=0;i<j;i++)
		{
			if(K3[i].ClassID<K3[i+1].ClassID)
			{
				a=K3[i];
				K3[i]=K3[i+1];
				K3[i+1]=a;
			}
		}
	}
	printf("%-10s | %-30s | %-10s | %-10s | %-10s  | \n","Ma lop","Ten mon hoc","Ten phong","Thu","Tiet hoc");
	for(i=0;i<n;i++)
	{
	    printf("%-10d | %-30s | %-10s | %-10d | %-10s  |",K3[i].ClassID,K3[i].CourseName,K3[i].Room,K3[i].Day,K3[i].slots);
        printf("\n");
	}	
}

//KIEM TRA TRUNG PHONG SU DUNG HAM ATOI 
void checking(lop*K,int n)
{
	int i,j;
	lop K2[50];
	for(i=0;i<strlen(K[i].slots)-2;i++)
	{
		K2[i].slots[i]=K[i].slots[i+2];
		
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(strcmp(K[i].Room,K[i+j].Room)==0)
			{
				if(K[i].Day==K[i+j].Day)
				{
					if(atoi(K2[i].slots)-atoi(K[i+j].slots)>0)
					printf("\n%d\n%d\nGiai thich: 2 lop %d va %d bi trung tiet %d-%d ngay thu %d tai phong %-10s ",K[i].ClassID,K[i+j].ClassID,K[i].ClassID,K[i+j].ClassID,atoi(K[i+j].slots),atoi(K2[i].slots),K[i].Day,K[i].Room);
				    if(atoi(K2[i].slots)-atoi(K[i+j].slots)==0)
					printf("\n%d\n%d\nGiai thich: 2 lop %d va %d bi trung tiet %d ngay thu %d tai phong %-10s ",K[i].ClassID,K[i+j].ClassID,K[i].ClassID,K[i+j].ClassID,atoi(K2[i].slots),K[i].Day,K[i].Room);
				
				}
			}
		}
	}
}
int main()
{
	int m,n=0,j=0;
	lop K[50];
	while(m!=6)
	{
		printf("\nMenu\n1.Bo sung lop hoc.\n2.In ra thong tin cac lop hoc.\n3.Tim kiem theo phong.\n4.Sap xep.\n5.Kiem tra trung phong.\n6.Thoat\n");
		scanf("%d",&m);
		switch(m)
		{
			case 1: 
			if(n==0)
			{
				printf("Nhap so lop muon in thong tin:\n");
				scanf("%d",&n);
				while(n<1||n>200)
				{
				printf("Ban da nhap sai, moi nhap lai so lop muon in thong tin:\n");
				scanf("%d",&n);
				}
				
				nhap(K,n);
			}
			else
			{
				printf("Nhap so lop muon nhap them :\n");
				scanf("%d",&j);
				while(j<=0)
				{
				printf("Ban da nhap sai, moi nhap lai so lop muon in thong tin:\n");
				scanf("%d",&j);
			    }
			    while(n+j>200)
			    {
				printf("Ban da nhap sai, moi nhap lai so lop muon in thong tin them:\n");
				scanf("%d",&j);
			    }
			    n+=j;
				nhapthem(K,n,j);
			}
			break;
			case 2:
			inra(K,n);
			break;
			case 3:
			timkiemtheophong(K,n);
			break;
			case 4:
			ranking(K,n);
			break;
			case 5:
			checking(K,n);
			break;
			case 6:
			printf("Goodbye!.....");
			break;
			default: printf("Error, please enter again!\n");
	    }
    }
}
