
double* maximum(double* a, int size){
    double *max;
    double *p; 
    int i;
    max = a;
    if (a==NULL) return NULL;
    for(p=a+1; p<a+size; p++) 
        if (*p > *max){
            max = p;
        }
    return max;
    }