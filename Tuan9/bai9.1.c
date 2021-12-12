#include <stdio.h>
#include <math.h>
double kineticEnergy(double m, double v){
    float k;
    k=m*v*v/2;
    return k;
}

int main(){
    double m, v;
    printf("Enter mass:"); scanf("%f",&m);
    printf("Enter speed:"); scanf("%f",&v);
    printf("Kinetic Energy of element is: %f", kineticEnergy(m,v));
}