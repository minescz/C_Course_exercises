//Desarrolle un algoritmo que permita calcular Promedio de Notas; finaliza cuando N = 0.
#include <stdio.h>

int main(){
    int cant;
    int num = 1;
    float suma = 0;
    float promedio;
    
    printf("Ingresar cantidad de notas a promediar: ");
    scanf("%i", &cant);

    int nota[cant];

    for (int i = 0; i < cant; i++)
    {
        printf("Ingresar nota(%i):", num);
        scanf ("%i", &nota[i]);
        //contador = contador+1;
        num = num +1;

        suma = suma + nota[i];
    }

    promedio = suma/cant; 
    printf("El promedio es:%.2f", promedio);
}