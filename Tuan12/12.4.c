#include <stdio.h>
void main(){
    int a[100],n;
    printf("n = "); scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("\na[%d] = ",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        printf("\n%d",a[i]);
        for(int j=i;j<n-1;j++){
            printf("\n");
            for(int k=i;k<=j+1;k++)
                printf("%d\t",a[k]);
        }
    }
}
/*
n = 4

a[0] = 1

a[1] = 2

a[2] = 3

a[3] = 4

1
1       2
1       2       3
1       2       3       4
2
2       3
2       3       4
3
3       4
*/