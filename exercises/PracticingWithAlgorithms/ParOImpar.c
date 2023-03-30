//Desarrolle un algoritmo que permita leer un valor cualquiera N y escriba si dicho número es par o impar.
#include<stdio.h>

int main (){
    int n;

    printf("introducir un númer para saber si es par o impar:\n");
    scanf("%i", &n);


   if (n%2 == 0)
   {
    printf("n es par\n");
   }
   else
   {
    printf("%i es impar\n", n);
   }
   
    
}