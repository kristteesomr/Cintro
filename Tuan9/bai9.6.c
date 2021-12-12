#include <stdio.h>
// function to convert fahrenheit to celsius
double celsius(double f) {
    return 5 * (f -32) / 9;
}
int main() {
    double fahr = 0;
    printf("Fahrenheit\tCelsius\n");
    while (fahr < 21) {
        printf("%6.1f\t%6.1f\n", fahr, celsius(fahr));
        fahr += 1;
    }
    return 0;
}
/* Fahrenheit      Celsius
   0.0   -17.8
   1.0   -17.2
   2.0   -16.7
   3.0   -16.1
   4.0   -15.6
   5.0   -15.0
   6.0   -14.4
   7.0   -13.9
   8.0   -13.3
   9.0   -12.8
  10.0   -12.2
  11.0   -11.7
  12.0   -11.1
  13.0   -10.6
  14.0   -10.0
  15.0    -9.4
  16.0    -8.9
  17.0    -8.3
  18.0    -7.8
  19.0    -7.2
  20.0    -6.7 */
