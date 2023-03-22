//Determinar la hipotenusa de un triángulo rectángulo conocidas las longitudes de sus dos catetos.
//Desarrolle el algoritmo correspondiente.
#include <stdio.h>
#include <math.h>
 int main(){
    double hipotenusa, a, b;

    printf("Introducir la longitud del cateto1:\n");
    scanf("%lf", &a);
    printf("Introducir la longitud del cateto2:\n");
    scanf("%lf", &b);
    
    hipotenusa = sqrt(a) + sqrt(b);
    printf("La hipotenusa es: %lf\n", hipotenusa);
 }