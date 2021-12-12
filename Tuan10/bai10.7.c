#include <stdio.h>
int checkSymmetric (int a[],int n){
    int i=0,j=n-1;
    while(i<=j){
        if(a[i]!=a[j]) return 0;
        i++;
        j--;
    }
    return 1;
}
void main(){
    int a[100],n,i;
    printf(" Number of elements: ");scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("a[%d]= ",i);scanf("%d",&a[i]);
    }
    printf("\n Array's content:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    if(checkSymmetric(a,n)) printf("\n array is symmetric");
    else printf("\n array is not symmetric ");
}
/* Number of elements: 4
a[0]= 1
a[1]= 3
a[2]= 3
a[3]= 1

 Array's content:
1 3 3 1
 array is symmetric */