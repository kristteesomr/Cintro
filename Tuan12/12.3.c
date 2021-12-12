#include <stdio.h>
void getSales(float *array, int size){
    int i;
    for(i=0; i<size; i++){
        printf("Enter the sale figure for quarter %d:",   i+1);
        scanf("%f",array+i);
    }
}
float totalSales(float *array, int size) {
    double sum;
    int i; 
    sum =0;
    for(i=0; i<size; i++){
        sum += *array;
        array++;
    }
    return sum;
}
int main(){
    float sales[4];
    getSales(sales,4);
    printf("The total sales for the year are:  %0.1f\n",totalSales(sales,4));
    return 0;
}
/*
Enter the sale figure for quarter 1:12000
Enter the sale figure for quarter 2:13000
Enter the sale figure for quarter 3:15000
Enter the sale figure for quarter 4:16000
The total sales for the year are:  56000.0
*/