// No.C: 319132522
// Brayan Bautista Gaytan    Grupo: 1151

#include <stdio.h>

int main()
{
    int horaE, minutosE, horaS, minutosS, tiempoM, tarifa, minutos, horas;
    printf("No se permite estacionar mas de 24 horas y solo se podra salir en el mismo dia de entrada.\n");
    printf("A partir de los 10 minutos se cobra 20 pesos por cada intervalo de 1 a 180 minutos.\n");
    printf("Ingrese la hora y minutos de entrada: ");
    scanf("%d %d", &horaE, &minutosE);
    if (horaE < 0 || horaE > 23 || minutosE < 0 || minutosE > 59)
    {
        printf("Hora de entrada invalida");
    }
    else
    {
        printf("Ingrese la hora y minutos de salida: ");
        scanf("%d %d", &horaS, &minutosS);
        if (horaS < 0 || horaS > 23 || minutosS < 0 || minutosS > 59)
        {
            printf("Hora de salida invalida");
        }
        else if (horaS < horaE)
        {
            printf("La hora de salida no puede ser menor a la hora de entrada");
        }
        else
        {
            printf("Hora de entrada: %d:%d\n", horaE, minutosE);
            printf("Hora de salida: %d:%d\n", horaS, minutosS);

            tiempoM = (horaS - horaE) * 60 + (minutosS - minutosE);
            if (tiempoM <= 10)
            {
                tarifa = 0;
                printf("Usted no debe pagar, su tiempo es solo de %d minutos.", tiempoM);
                printf("La tarifa es de: %d", tarifa);
            }
            else
            {
                tiempoM = tiempoM - 10;
                horas = tiempoM / 60;
                minutos = tiempoM % 60;
                if (minutos > 0)
                {
                    tarifa = ((horas / 3) * 20) + 20;
                    printf("El tiempo de estacionamiento despues de la tolerancia maxima fue de %d horas y %d minutos.\n", horas, minutos);
                    printf("Usted debe pagar: $%d", tarifa);
                }
                else
                {
                    tarifa = ((horas / 3) * 20);
                    printf("El tiempo de estacionamiento despues de la tolerancia maxima fue de %d horas y %d minutos.\n", horas, minutos);
                    printf("Usted debe pagar: $%d", tarifa);
                }
            }
        }
    }
    return 0;
}