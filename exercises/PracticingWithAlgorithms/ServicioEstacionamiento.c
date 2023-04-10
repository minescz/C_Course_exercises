//Realice un algoritmo que calcule el monto a pagar por el servicio de estacionamiento, teniendo en cuenta que por la primera hora de estadía se tiene una tarifa de 1000 bolívares 
//y las restantes tienen un costo de 600 bolívares. Se tiene como datos: hora de entrada, hora de salida (formato militar), iniciada una hora se contabiliza como hora total
#include<stdio.h>
#include<math.h>

int main(){
    float HEntrada;
    float HSalida;
    float TiempoTotal;
    float MontoTotal;
    float XPrimeraHora = 1000;
    float XMásDeUnaHora = 600;

    printf("Ingresar la hora de entrada:\n");
    scanf("%f", &HEntrada);
    printf("Ingresar la hora de salida:\n");
    scanf("%f", &HSalida);
    
    TiempoTotal = HSalida - HEntrada;

    if (TiempoTotal <= 100) {
        printf("El monto a pagar es:%.2f", XPrimeraHora);
    }
    
    else if (TiempoTotal > 100) {
        TiempoTotal = TiempoTotal - 100;
        TiempoTotal = ceil(TiempoTotal/100);
        MontoTotal = XPrimeraHora + (XMásDeUnaHora * (TiempoTotal));

        printf("El monto a pagar es:%.2f", MontoTotal);
    }
}