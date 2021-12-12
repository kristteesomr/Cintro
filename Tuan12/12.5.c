void reversearray(int arr[], int size){
    int i, j, tmp;
    i=0; 
    j= size -1;
    while(i<j){
        tmp=a[i];
        a[i]=a[j];
        a[j]= tmp;
        i++; 
        j--;
    }
}