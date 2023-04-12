//Realice un algoritmo que a partir de proporcionarle la velocidad de un automóvil, expresada en
//kilómetros por hora, proporcione la velocidad en metros por segundo.
#include <stdio.h>
#include <math.h>

int main (){
    float km_h;
    float mt_scnd;

    printf("Ingresar velocidad en km/h:");
    scanf("%f", &km_h);

    mt_scnd = (km_h*1000)/ 3600;
    
    printf("La velocidad en mts/seg es:%.4f", mt_scnd);

}