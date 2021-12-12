#include<stdio.h>
#include<math.h>
//QUAN GAME INTERNET
typedef struct times
{
	int hour;
	int minute;
}time_t;

typedef struct com_type
{
	int number;
	int free;
	time_t beginTime;
	time_t endTime;
	long fee;
	int time_used;
}computer;

void khoitao(computer *K, int n)
{
	int i;
	printf("%-3s %-5s\t%-5s\t%-5s\t%-10s\t%-10s\n","STT","status","begin","end","fee","time_used");
	for(i=0;i<10;i++)
    {
    	K[i].number=i+1;
    	K[i].free=1;
    	K[i].beginTime.hour = 0;
    	K[i].beginTime.minute = 0;
    	K[i].endTime.hour = 0;
    	K[i].endTime.minute = 0;
    	
    	K[i].fee=0;
    	K[i].time_used=0;
    	printf("%-3d %-5s\t%-d0:%-d0\t%-d0:%-d0\t%-10ld\t%-10d\n",K[i].number,"Free",K[i].beginTime.hour,K[i].beginTime.minute,K[i].endTime.hour,K[i].endTime.minute,K[i].fee,K[i].time_used);
	}
}
int invalidTime(time_t a)
{
	if(a.hour<0||a.hour>23||a.minute<0||a.minute>59)
	{
	return 1;
	}
	else return 0;
}
int timeCompare(time_t a,time_t b)
{
	if(a.hour>b.hour)
	{
		return 1;
	}
	if(a.hour<b.hour)
	{
		return -1;
	} 	
	if(a.hour==b.hour)
	{
	if(a.minute>b.minute)
	{
		return 1;
	}
	if(a.minute<b.minute)
	{
		return -1;
	}
	if(a.minute==b.minute)
	{
		return 0;
	}
    }
}
void dungmay(computer*K,int n)
{
	int choose;
	printf("Chon may muon dung : \n");
	scanf("%d",&choose);
	while(choose<0||choose>10)
	{
		printf("May ko hop le moi nhap lai\n");
		scanf("%d",&choose);
	}
	if(K[choose-1].free==1)
	{
		printf("May hop le !");
		K[choose-1].free=0;
		printf("Moi nhap thoi gian bat dau gio:phut\n");
		scanf("%d %d",&K[choose-1].beginTime.hour,&K[choose-1].beginTime.minute);
		while(invalidTime(K[choose-1].beginTime)==1)
		{
			printf("Moi nhap lai thoi gian bat dau gio:phut\n");
		    scanf("%d %d",&K[choose-1].beginTime.hour,&K[choose-1].beginTime.minute);
		}
	}
	else printf("May da co nguoi su dung, moi ban quay lai sau !");	
}
void nghichoi(computer *K, int n)
{
	int stop;
	printf("Moi nhap may muon tat !\n");
	scanf("%d",&stop);
	while(stop<1||stop>10)
	{
		printf("KO hop le,moi nhap lai may muon tat !");
		scanf("%d",&stop);
	}
	switch(K[stop-1].free)
	{
		case 1: printf("May chua dc bat, vui long chon chuc nang 2 de bat may hoac 3 de tat may khac");
		break;
		case 0:
		printf("Moi nhap thoi gian ket thuc :\n");
	   	scanf("%d %d",&K[stop-1].endTime.hour,&K[stop-1].endTime.minute);
	   	while(invalidTime(K[stop-1].endTime)==1)
		{
			printf("Moi nhap lai thoi gian ket thuc gio:phut\n");
		    scanf("%d %d",&K[stop-1].endTime.hour,&K[stop-1].endTime.minute);
		}
		while(timeCompare(K[stop-1].endTime,K[stop-1].beginTime)<0)
		{
			printf("Moi nhap lai thoi gian ket thuc gio:phut\n");
		    scanf("%d %d",&K[stop-1].endTime.hour,&K[stop-1].endTime.minute);
		}
		K[stop-1].free=1;
		printf("HOA DON THANH TOAN\n");
		printf("Thoi gian bat dau: %d:%d\n",K[stop-1].beginTime.hour,K[stop-1].beginTime.minute);
		printf("Thoi gian ket thuc: %d:%d\n",K[stop-1].endTime.hour,K[stop-1].endTime.minute);
		printf(" So phut su dung la : %d\n",abs(K[stop-1].endTime.minute-K[stop-1].beginTime.minute)+(K[stop-1].endTime.hour-K[stop-1].beginTime.hour)*60);
		printf("So tien phai tra la : %ld\n",100*(abs(K[stop-1].endTime.minute-K[stop-1].beginTime.minute)+(K[stop-1].endTime.hour-K[stop-1].beginTime.hour)*60));
		K[stop-1].time_used+=abs(K[stop-1].endTime.minute-K[stop-1].beginTime.minute)+(K[stop-1].endTime.hour-K[stop-1].beginTime.hour)*60;
		K[stop-1].fee+=K[stop-1].time_used*100;
		break;
	}
}
void chuyenmay(computer *K, int n)
{
	int now,then;
	computer a;
	printf("Nhap may ban dang su dung :\n");
	scanf("%d",&now);
	while(K[now-1].free==1||now<1||now>10)
	{
	printf("Nhap lai may ban dang su dung :\n");
	scanf("%d",&now);
	}
	printf("Nhap may ban muon chuyen den :\n");
	scanf("%d",&then);
	while(K[then-1].free==0||then<1||then>10||then ==now)
	{
	printf("KO hop le! Moi nhap lai may ban muon chuyen den :\n");
	scanf("%d",&then);
	}
	a.beginTime=K[then-1].beginTime;
	K[then-1].beginTime=K[now-1].beginTime;
	K[now-1].beginTime.hour=0;
	K[now-1].beginTime.minute=0;
	a.free=K[then-1].free;
	K[then-1].free=K[now-1].free;
	K[now-1].free=a.free;
}
void trangthai(computer *K, int n)
{
	int i;
	printf("%-3s %-5s\t%-5s\t%-5s\t%-10s\t%-10s\n","STT","status","begin","end","fee","time_used");
	for(i=0;i<10;i++)
    {
        if(K[i].free==1)
    	printf("%-3d %-5s\t%-2d:%-2d\t%-2d:%-2d\t%-10ld\t%-10d\n",K[i].number,"Free",K[i].beginTime.hour,K[i].beginTime.minute,K[i].endTime.hour,K[i].endTime.minute,K[i].fee,K[i].time_used);
    	else 
    	printf("%-3d %-5s\t%-2d:%-2d\t%-2d:%-2d\t%-10ld\t%-10d\n",K[i].number,"Busy",K[i].beginTime.hour,K[i].beginTime.minute,K[i].endTime.hour,K[i].endTime.minute,K[i].fee,K[i].time_used);
	}
}
void doanhthu(computer *K, int n)
{
	int i,j;
	computer K2[10],a;
	for(i=0;i<10;i++)
	{
		K2[i]=K[i];
	}
	for(j=n-1;j>=0;j--)
	{
		for(i=0;i<j;i++)
		{
			if(K2[i].fee<K2[i+1].fee)
			{
				a=K2[i];
				K2[i]=K2[i+1];
				K2[i+1]=a;
			}
		}
	}
	printf("%-3s %-5s\t%-5s\t%-5s\t%-10s\t%-10s\n","STT","status","begin","end","fee","time_used");
	for(i=0;i<10;i++)
    {
        if(K2[i].free==1)
    	printf("%-3d %-5s\t%-2d:%-2d\t%-2d:%-2d\t%-10ld\t%-10d\n",K2[i].number,"Free",K2[i].beginTime.hour,K2[i].beginTime.minute,K2[i].endTime.hour,K2[i].endTime.minute,K2[i].fee,K2[i].time_used);
    	else 
    	printf("%-3d %-5s\t%-2d:%-2d\t%-2d:%-2d\t%-10ld\t%-10d\n",K2[i].number,"Busy",K2[i].beginTime.hour,K2[i].beginTime.minute,K2[i].endTime.hour,K2[i].endTime.minute,K2[i].fee,K2[i].time_used);
	}
}
void goiy(computer*K,int n)
{
	int i,min;
	min=K[0].time_used;
	for(i=1;i<10;i++)
	{
		if(min>K[i].time_used)
		{
			min=K[i].time_used;
		}
	}
	for(i=0;i<10;i++)
	{
		if(K[i].time_used==min&&K[i].free==1)
		{
			printf("May %d voi %d gio su dung hom nay va dang free la 1 lua chon hop ly \n",i+1,min);
		}
	}
}
int main()
{
	int m,n=10;
	computer K[10];
	int i;
	while(m!=8)
	{
		printf("\nMenu\n1.Khoi tao du lieu\n2.Dung may\n3.Nghi choi\n4.Chuyen may\n5.In ra trang thai phong may\n6.In ra thong tin phong may sap xep theo chieu giam dan so tien thu dc tu dau ngay\n7.Goi y dung may\n8.Thoat\n");
	    scanf("%d",&m);
	    switch(m)
	    {
	    	case 1:
	    	khoitao(K,n);
	    	break;	
	    	case 2:
	    	dungmay(K,n);
	    	break;
	    	case 3:
	    	nghichoi(K,n);
	    	break;
	    	case 4:
	    	chuyenmay(K,n);
	    	break;
	    	case 5:
	    	trangthai(K,n);
	    	break;
	    	case 6:
	    	doanhthu(K,n);
	    	break;
	    	case 7:
	    	goiy(K,n);
	    	break;
	    	case 8:
	    	printf("Goodbye!.......");
	    	break;
	    	default : printf("Please Enter Again !");
		}
	}
}
