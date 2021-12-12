#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char TenSV[20];
    float DiemQT, DiemCK, DiemTK;
    char DiemXL;
} DiemSV;

void NhapDiem(DiemSV BangDiem[],int N){

    while(N<=0||N>40){
        printf("\nSo sinh vien phai nam trong [1,40]");
        printf("\nNhap so sinh vien:");
        scanf("%d",N);
    }

    for(int i=0;i<N;i++){
        printf("\nTen SV:"); scanf("%s",&BangDiem[i].TenSV);

        do{
            printf("\nDiem QT:"); scanf("%f",&BangDiem[i].DiemQT);
        } while(BangDiem[i].DiemQT<0||BangDiem[i].DiemQT>10);

        do{
            printf("\nDiem CK:"); scanf("%f",&BangDiem[i].DiemCK);
        } while(BangDiem[i].DiemCK<0||BangDiem[i].DiemCK>10);

        BangDiem[i].DiemTK = 0.4*BangDiem[i].DiemQT + 0.6*BangDiem[i].DiemCK;

        if(BangDiem[i].DiemTK>=8.5) BangDiem[i].DiemXL='A';
        else if(BangDiem[i].DiemTK<8.5&&BangDiem[i].DiemTK>=7) BangDiem[i].DiemXL='B';
        else if(BangDiem[i].DiemTK<7&&BangDiem[i].DiemTK>=5.5) BangDiem[i].DiemXL='C';
        else if(BangDiem[i].DiemTK<5.5&&BangDiem[i].DiemTK>=4) BangDiem[i].DiemXL='D';
        else BangDiem[i].DiemXL='F';

        if(BangDiem[i].DiemQT<=3||BangDiem[i].DiemCK<=3) BangDiem[i].DiemXL='F';
    }
}
/*
void InBangDiem(DiemSV *BangDiem[],int *N){
    if(*N==0) printf("\nChua co du lieu diem sinh vien");
    else{
        printf("\nTenSV\t\t\tDiem QT\t\t\tDiem CK\t\t\tDiemTK\t\t\tXep Loai");
        for(int i=0;i<*N;i++)
        printf("\n%s\t\t\t%f\t\t\t%f\t\t\t%.1f\t\t\t%c",BangDiem[i]->TenSV,BangDiem[i]->DiemQT,BangDiem[i]->DiemCK,BangDiem[i]->DiemTK,BangDiem[i]->DiemXL);
    }
}

void ChenhLechDiem(DiemSV *BangDiem[],int *N){
    if(*N==0) printf("\nChua co du lieu diem sinh vien");
    else{
        int L;
        printf("\nNhap so diem chenh lech trong doan [2,5] so nguyen L=");
        scanf("%d",&L);
        for(int i=0;i<*N;i++){
            float M = abs(BangDiem[i]->DiemQT - BangDiem[i]->DiemCK);
            printf("\nTenSV\t\t\tDiem QT\t\t\tDiem CK\t\t\tDiemTK\t\t\tXep Loai");
            if(M>=L) printf("\n%s\t\t\t%f\t\t\t%f\t\t\t%.1f\t\t\t%c",BangDiem[i]->TenSV,BangDiem[i]->DiemQT,BangDiem[i]->DiemCK,BangDiem[i]->DiemTK,BangDiem[i]->DiemXL);
        }
    }
}

void Sapxep(DiemSV *BangDiem[],int *N){
    if(*N==0) printf("\nChua co du lieu diem sinh vien");
    else{
        DiemSV *a;

        for(int i=0;i<*N;i++) BangDiem[i]=BangDiem[i];

        for(int i=0;i<*N;i++){
            for(int j=i+1;j<*N;j++){
                if (BangDiem[i]->DiemTK > BangDiem[j]->DiemTK){
                    a = BangDiem[i];
                    BangDiem[i] = BangDiem[j];
                    BangDiem[j] = a;
                }

                if(BangDiem[i]->DiemTK == BangDiem[j]->DiemTK){
                    for(int h=0;h<20;h++){
                        if(BangDiem[i]->TenSV[h]<BangDiem[j]->TenSV[h]){
                            a = BangDiem[i];
                            BangDiem[i] = BangDiem[j];
                            BangDiem[j] = a;
                            break;
                        }
                    }
                }
            }
        }

        printf("\nTenSV\t\t\tDiem QT\t\t\tDiem CK\t\t\tDiemTK\t\t\tXep Loai");
        for(int i=0;i<*N;i++)
            printf("\n%s\t\t\t%f\t\t\t%f\t\t\t%.1f\t\t\t%c",BangDiem[i]->TenSV,BangDiem[i]->DiemQT,BangDiem[i]->DiemCK,BangDiem[i]->DiemTK,BangDiem[i]->DiemXL);
    }
}
*/
void Menu(){
        int m;
        printf("MENU\n"); 
        printf("1. Nhap thong tin sinh vien.\n");
        printf("2. In ra thong tin sinh vien.\n");
        printf("3. Xem chenh lech diem sinh vien.\n");
        printf("4. In ra bang diem tu cao den thap.\n");
        printf("5. Thoat chuong trinh.\n");
        printf("Vui long lua chon chuong trinh: ");
        scanf("%d",&m); 
}

int main(){
    int N;
    int m=1;
    DiemSV BangDiem[40];
    

    
}
