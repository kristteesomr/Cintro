#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>

/*
Chương trình Olympic môn nhảy xa: Là chương trình quản lý kết quả thi đấu của các vận động viên 
vòng chung kết môn nhảy xa. Phần thi chung kết gồm 3 lần thi đấu (giảm 2 lần so với thực tế). Mỗi lần thi 
đấu, lần lượt các vận động viên sẽ được lên nhảy và ghi nhận kết quả thi đấu.

*/

typedef struct athletics
{
	int ID;
	char Nation[4];
	char Name[30];
	float R[3];
    float FR;

} VDVinfo;

void NhapThongTin(VDVinfo N[],int *p){
        while(*p<=0||*p>20){
            printf("\nSo van dong vien tham gia phai nam trong [1,20]");
            printf("\nNhap so van dong vien tham gia:");
            scanf("%d",&(*p));
        }
        for(int i=0;i<*p;i++) {
            N[i].ID=i+1;
            printf("Nation: ");
            fflush(stdin);
            gets(N[i].Nation);
            printf("Name: ");
            fflush(stdin);
            gets(N[i].Name);
        }
}

void InThongTin(VDVinfo N[],int *p){
    if(*p==0) printf("\nChua co du lieu van dong vien, Quay lai muc 1");
    else{
        printf("\n%5s  %10s  %30s  %5s  %5s  %5s  %5s","ID","Nation","Name", "R1","R2","R3","FR");
        for(int i=0;i<*p;i++){
            printf("\n%5d  %10s  %30s",N[i].ID,N[i].Nation,N[i].Name);
        }
    }
}

void ThiDau(VDVinfo N[],int *p){
    float max;
    for(int i=0;i<*p;i++) {
        printf("\nNhap diem lan 1 cua VDV ID %d:",N[i].ID); scanf("%f",&N[i].R[0]);
        while(*p<0||*p>20){
            printf("\nNhap lai ID va diem lan 1:");
            scanf("%d",&N[i].R[0]);
        }
    }
    printf("\n%5s  %10s  %30s  %5s  %5s  %5s  %5s ","ID","Nation","Name", "R1","R2","R3","FR");
    for(int i=0;i<*p;i++) {
        printf("\n%5d  %10s  %30s  %5.2f",N[i].ID,N[i].Nation,N[i].Name,N[i].R[0]);
    }


    for(int i=0;i<*p;i++) {
        printf("\nNhap diem lan 2 cua VDV ID %d:",N[i].ID); scanf("%f",&N[i].R[1]);
        while(*p<0 || *p>20){
            printf("\nNhap lai  ID va diem lan 2:");
            scanf("%d",&N[i].R[1]);
        }
    }
    printf("\n%5s  %10s  %30s  %5s  %5s  %5s  %5s","ID","Nation","Name", "R1","R2","R3","FR");
    for(int i=0;i<*p;i++) {
        printf("\n%5d  %10s  %30s  %5.2f   %5.2f",N[i].ID,N[i].Nation,N[i].Name,N[i].R[0],N[i].R[1]);
    }

    for(int i=0;i<*p;i++) {
        printf("\nNhap diem lan 3 cua VDV ID %d:",N[i].ID); scanf("%f",&N[i].R[2]);
        while(*p<0 || *p>20){
            printf("\nNhap lai  ID va diem lan 3:");
            scanf("%d",&N[i].R[2]);
        }
    }

    for(int i=0;i<*p;i++) {
        max=N[i].R[0];
        for(int j=0;j<3;j++){
            if(N[i].R[j]>=max) max=N[i].R[j];
            N[i].FR=max;
        }
    }

    printf("\n%5s  %10s  %30s  %5s  %5s  %5s  %5s","ID","Nation","Name", "R1","R2","R3","FR");
    for(int i=0;i<*p;i++) {
        printf("\n%5d  %10s  %30s  %5.2f   %5.2f  %5.2f  %5.2f",N[i].ID,N[i].Nation,N[i].Name,N[i].R[0],N[i].R[1],N[i].R[2],N[i].FR);
    }
}

void TimKiem2(VDVinfo N[],int *p){
    if(*p==0) printf("\nChua co du lieu van dong vien, Quay lai muc 1");
    else{
char search[30];
	int i;
	int dem;
	printf("\nNhap ten van dong vien : ");
	fflush(stdin);
	gets(search);
	for(i=0,dem=0;i<*p;i++)
	{
		if(strcmp(search,N[i].Name)==0) {   
		if(dem==0)
		{
		    printf("\n%5s  %10s  %30s  %5s  %5s  %5s  %5s","ID","Nation","Name", "R1","R2","R3","FR");
		}
		    printf("\n%5d  %10s  %30s  %5.2f   %5.2f  %5.2f  %5.2f",N[i].ID,N[i].Nation,N[i].Name,N[i].R[0],N[i].R[1],N[i].R[2],N[i].FR);
		dem++;
		}	
	}
	if(dem==0)
	printf("Khong tim thay van dong vien can tim !\n");	
    }
}

void TimKiem1(VDVinfo N[],int *p){
    if(*p==0) printf("\nChua co du lieu van dong vien, Quay lai muc 1");
    else{
char search[4];
	int i;
	int dem;
	printf("\nNhap quoc gia van dong vien : ");
	fflush(stdin);
	gets(search);
	for(i=0,dem=0;i<*p;i++)
	{
		if(strcmp(search,N[i].Nation)==0) {   
		if(dem==0)
		{
		    printf("\n%5s  %10s  %30s  %5s  %5s  %5s  %5s","ID","Nation","Name", "R1","R2","R3","FR");
		}
		    printf("\n%5d  %10s  %30s  %5.2f   %5.2f  %5.2f  %5.2f",N[i].ID,N[i].Nation,N[i].Name,N[i].R[0],N[i].R[1],N[i].R[2],N[i].FR);
		dem++;
		}	
	}
	if(dem==0)
	printf("Khong tim thay van dong vien can tim !\n");	
    }
}

void InKetQua(VDVinfo N[],int *p){
    if(*p==0) printf("\nChua co du lieu van dong vien");
    else{
        VDVinfo a;
        for(int i=0;i<*p;i++){
            for(int j=i+1;j<*p;j++){
                if (N[i].FR < N[j].FR){
                    a = N[i];
                    N[i] = N[j];
                    N[j] = a;
                }
            }
        }

    printf("\n%5s  %10s  %30s  %5s  %5s  %5s  %5s","ID","Nation","Name", "R1","R2","R3","FR");
    for(int i=0;i<*p;i++) {
        printf("\n%5d  %10s  %30s  %5.2f   %5.2f  %5.2f  %5.2f",N[i].ID,N[i].Nation,N[i].Name,N[i].R[0],N[i].R[1],N[i].R[2],N[i].FR);
    }
    }
}



int main(){
    int *p;
    int N=0; //N la so van dong vien
    p=&N;
    VDVinfo NhayXa[20];
    int m,n;
    while(m!=6)
	{
		printf("\nMenu\n1.Nhap thong tin truoc khi thi dau\n2.In thong tin\n3.Thi dau\n4.Tim kiem\n5.In ket qua\n6.Ket thuc\n");
		scanf("%d",&m);
		switch(m){
			case 1 : NhapThongTin(NhayXa,p); break;
			case 2 : InThongTin(NhayXa,p);
            case 3 : ThiDau(NhayXa,p);
            case 4 : {printf("\nMenu con\n1.Tim kiem theo quoc gia\n2.Tim kiem theo ten\n"); scanf("%d",n);
                if(n==1) TimKiem1(NhayXa,p);
                if(n==2) TimKiem2(NhayXa,p);
                }
            
            case 5: InKetQua(NhayXa,p);
            case 6: printf("Thoat chuong trinh !");
                    exit(0);
            default: printf("Hay chon lai");
		}
    }


    while(m!=6&&m!=1)
	{
		printf("\nMenu\n1.Nhap thong tin truoc khi thi dau\n2.In thong tin\n3.Thi dau\n4.Tim kiem\n5.In ket qua\n6.Ket thuc\n");
		scanf("%d",&m);
		switch(m){
			case 2 : InThongTin(NhayXa,p);
            case 3 : ThiDau(NhayXa,p);
            case 4 : {printf("\nMenu con\n1.Tim kiem theo quoc gia\n2.Tim kiem theo ten\n"); scanf("%d",n);
                if(n==1) TimKiem1(NhayXa,p);
                if(n==2) TimKiem2(NhayXa,p);
                }
            
            case 5: InKetQua(NhayXa,p);
            case 6: printf("Thoat chuong trinh !");
                    exit(0);
            default: printf("Hay chon lai");
	}
}
}