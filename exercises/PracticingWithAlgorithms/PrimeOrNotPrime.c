//Desarrolle un algoritmo que permita leer un valor entero positivo N y determinar si es primo o no
#include <stdio.h>

int main () {
    int n;
    int counter = 0;

    printf("Ingresar valor para saber si es primo o no:\n");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++) { 
        if (n%i == 0) {
            counter = counter + 1;
        } 

        if (counter > 2) {
            printf("No es primo");
            break;
        }
    }

    if (counter == 2) {
        printf("Es primo");
    }
    
}