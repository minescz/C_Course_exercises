#include <stdio.h>
#include <math.h>

 int main ()
 {
    double a, b, hipotenusa, power;
    power = 2;
    printf("introducir valor cateto 1: \n");
    scanf("%lf",&a);
    printf("introducir valor de cateto 2: \n");
    scanf("%lf", &b);
    hipotenusa = sqrt(pow(a, power)) + sqrt(pow(b, power));
    printf("hipotenusa es: %lf", hipotenusa);
 }