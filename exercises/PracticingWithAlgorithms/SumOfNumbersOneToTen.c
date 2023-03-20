#include <stdio.h>

//Desarrolle un algoritmo que realice la sumatoria de los números enteros comprendidos entre el 1 y el 10,
//es decir, 1 + 2 + 3 + …. + 10.

int main (){
    int sum = 0;
        for (int n = 1; n <= 10; n++)
        {
            sum = sum + n;
            //printf("%i\n", sum);
        }
        
        printf("Total: %i", sum);
    }
    