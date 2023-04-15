//Desarrolle un algoritmo que permita convertir calificaciones numéricas, según la siguiente tabla:
//A = 19 y 20, B =16, 17 y 18, C = 13, 14 y 15, D = 10, 11 y 12, E = 1 hasta el 9. Se asume que la nota está
//comprendida entre 1 y 20.
 #include <stdio.h> 
 int main (){
    int nota;

    printf ("Ingresar nota en numérico\n");
    scanf("%i", &nota);

    if (nota > 0 && nota <= 9){
        printf("La calificación es 'E'\n");
    }
    else if (nota >=10  && nota <= 12){
        printf("La calificación es 'D'\n");
    }
    else if (nota >=13  && nota <= 15){
        printf("La calificación es 'c'\n");
    }
    else if (nota >=16  && nota <= 18){
        printf("La calificación es 'B'\n");
    }
    else if (nota >=19  && nota <= 20){
        printf("La calificación es 'A'\n");
    }
    else{
        printf("Calificación no encontrada...\nSolo se permiten numerales del 1 al 20");
    }
 }