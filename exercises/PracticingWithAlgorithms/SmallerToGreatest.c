//Desarrolle un algoritmo que permita leer dos números y ordenarlos de menor a mayor, si es el caso
#include <stdio.h>

int main (){
    int a, b, temp;

    printf("Ingresar dos números enteros para ordenarlos de menor a mayor:\n");
    printf("Primer número:\n");
    scanf("%i", &a);
    printf("Segundo número:\n");
    scanf("%i", &b);

    if (a < b)
    {
        a = a;
        b = b;
    }
    else if (a > b ){
        temp = b;
        b = a;
        a = temp;
    }

    else if (a == b)
    {
        printf("Son iguales: \n");
    }

    printf ("\n \nMenor a mayor: %i - %i", a ,b);
}