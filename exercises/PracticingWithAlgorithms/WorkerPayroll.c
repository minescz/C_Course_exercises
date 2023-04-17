//Desarrolle un algoritmo para la empresa Constructora Tecnovivir Casas C.A., que le permita calcular e
//imprimir la nómina para su cancelación a un total de 50 obreros calificados a quienes debe cancelar por
//horas trabajadas. La hora trabajada se pautó en 30.000 Bolívares.
#include <stdio.h>

int main() {
    int NumObreros;
    int SueldoXHora = 30000;
    int HorasTrabajadas;
    int TotalAPagar;
    int TotalXObrero; 

    printf("Ingresar cantidad de obreros:\n");
    scanf("%i", &NumObreros);

    printf("Ingresar Horas trabajadas:\n");
    scanf("%i", &HorasTrabajadas);
    if (HorasTrabajadas > 120)
    {
        TotalAPagar = HorasTrabajadas * NumObreros * SueldoXHora;
    TotalXObrero = TotalAPagar/ NumObreros;

    printf("Total a pagar:%i\n", TotalAPagar);
    printf("Monto por Obrero:%i\n", TotalXObrero);
    }
    else {
        printf("No hay horas suficientes.");
    }

}