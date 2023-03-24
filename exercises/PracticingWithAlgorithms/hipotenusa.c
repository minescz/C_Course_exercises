#include <stdio.h>
#include <math.h>
 int main ()
 {
 double a, b, hipotenusa;
 printf("introducir valor cateto 1: \n");
 scanf("%lf",&a);
 printf("introducir valor de cateto 2: \n");
 scanf("%lf", &b);
 hipotenusa = a+b;
 printf("hipotenusa es: %lf", hipotenusa);
 }