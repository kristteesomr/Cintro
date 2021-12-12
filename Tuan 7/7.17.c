#include <stdio.h>
int main(){
    
    for(int i=0; i<=10; i++){
        for(int j=1;j<=i;j++) printf("%d ",j); printf("\n");
        }
}
/* 1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
1 2 3 4 5 6 7
1 2 3 4 5 6 7 8
1 2 3 4 5 6 7 8 9
1 2 3 4 5 6 7 8 9 10
*/