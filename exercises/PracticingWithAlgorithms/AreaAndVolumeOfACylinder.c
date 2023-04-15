//Desarrolle un algoritmo que permita determinar el área y volumen de un cilindro dado su radio (R) y
//altura (H).
#include <stdio.h>
#include <math.h>
int main (){
    double r, h, pi, area, volumen, two, power; 
    pi = 3.14;
    power = 2;
    two = 2;
    
    printf("Para calcular el area y volumen de un cilindro necesitamos el radio y la altura\n");
    printf("ingresar el radio:\n");
    scanf("%le", &r);
    printf("ingresar la altura:\n");
    scanf("%le", &h);

    area = two*pi*r*(h+r);
    printf("El area es:%.2f\n", area);

    volumen = pi* (pow(r, power))* h;
    printf("el volumen es: %.2f\n", volumen);
}