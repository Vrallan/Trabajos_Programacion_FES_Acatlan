//Omar Gurrola Gonzalez       Grupo: 1151
//Brayan Bautista Gaytan

#include <stdio.h>
int main()
{
    int distancia, dias;
    float costo = 250, descuento = 0.30, total;
    printf("Recuerde que el costo por km es de $250 y en este calculo se contempla el viaje de ida y vuelta\n");
    printf("Ingrese la distancia del viaje en km: \n");
    scanf("%d", &distancia);
    distancia *= 2;
    if (distancia < 0)
    {
        printf("Los datos ingresados son incorrectos");
    }
    else
    {
        printf("Usted viajara %d km\n", distancia);
        printf("Ingrese la cantidad de dias de estancia: \n");
        scanf("%d", &dias);
        if (distancia >= 800 && dias >= 7)
        {
            descuento = (distancia * costo) * 0.30;
            total = (distancia * costo) - descuento;
            printf("El viaje tiene un descuento del 30 porciento, equivalente a un total de: $%.2f \n", descuento);
            printf("El costo total del viaje es de: $%.2f", total);
        }
        else
        {
            total = distancia * costo;
            printf("El costo del viaje es: %.2f", total);
        }
    }
    return 0;
}