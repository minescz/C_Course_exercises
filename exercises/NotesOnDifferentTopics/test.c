#include<stdio.h>
#include<math.h>
 int main (){
    double a, power, print;
    power = 2;
    printf("introducir valor cateto 1: \n");
    scanf("%lf",&a);
    print = (pow(a, power));
    printf("print:%lf", print);
 }