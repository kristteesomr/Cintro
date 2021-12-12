#include <stdio.h>
/* •Viết hai hàm:–sắp xếp các số nguyên trong mảng theo thứ tự giảm dần–sắp xếp các số lẻ trong mảng theo thứ tự giảm dần
•Viết chương trình yêu cầu người dùng nhập vào mảng gồm 10 phần tử và thực hiện hai hàm trên */
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("\nNhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void DesSort (int a[], int n) { 
    int tmp;
    for (int i = 0; i < n-1 ; i++) {
        for (int j = i+1; j < n; j++) 
            if (a[i] < a [j]) {
                tmp=a[i];
                a[i]=a[j];
                a[j]= tmp;
            }
    }
}

void OddSort (int a[], int n) {
    int tmp;
    for (int i = 0; i < n-1 ; i++){
        for (j = i+1; j < n; j++) 
            if (a[i]<a[j] && (a[i]%2) &&(a[j]%2)){
                tmp=a[i];
                a[i]=a[j];
                a[j]= tmp;
            }
    }
}

int main(){
    int a[10], b[10];
    NhapMang(&a,10);
    NhapMang(&b,10);
    DesSort(a,10);
    DesSort(b,10);
    OddSort(a,10);

}