//No.C: 319132522
//Brayan Bautista Gaytan    Grupo: 1151

#include <stdio.h>

int main()
{
    int horaE, minutosE, horaS, minutosS, tiempoM, tarifa, minutos, horas;
    printf("No se permite estacionar mas de 24 horas y solo se podra salir en el mismo dia de entrada.\n ");
    printf("A partir de los 15 minutos se cobra 15 pesos por cada 60 minutos.\n");
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
        else
        {
            if (horaS < horaE)
            {
                printf("La hora de salida no puede ser menor a la hora de entrada");
            }
            else
            {
                printf("Hora de entrada: %d:%d\n", horaE, minutosE);
                printf("Hora de salida: %d:%d\n", horaS, minutosS);

                tiempoM = (horaS - horaE) * 60 + (minutosS - minutosE);
                if (tiempoM <= 15)
                {
                    tarifa = 0;
                    printf("Usted no debe pagar, su tiempo es solo de %d minutos.", tiempoM);
                    printf("La tarifa es de: %d", tarifa);
                }
                else
                {
                    tiempoM = tiempoM - 15;
                    horas = tiempoM / 60;
                    minutos = tiempoM % 60;
                    tarifa = horas * 15;
                    printf("Usted excedio la tolerancia de 15 minutos.\n");
                    printf("El tiempo de estacionamiento despues de la tolerancia maxima fue de %d horas y %d minutos\n.", horas, minutos);
                    printf("Usted debe pagar: $%d, recuerde que solo se le estan cobrando las horas que estuvo estacionado.", tarifa);
                }
            }
        }
    }
    return 0;
}