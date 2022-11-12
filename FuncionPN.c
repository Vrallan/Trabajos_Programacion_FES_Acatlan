// 1tarea_11
// Brayan Bautista Gaytan    grupo: 1151

#include <stdio.h>

int DeternimeTheNumberType(int num); // prototipo de la funcion DeternimeTheNumberType

int main() // funcion principal
{
    int num;
    printf("Programa que determina si un numero es positivo, negativo o 0 \n");
    scanf("%d", &num);
    DeternimeTheNumberType(num); // llamada a la funcion DeternimeTheNumberType
    return 0;
}

int DeternimeTheNumberType(int num) // funcion que determina si un numero es positivo o negativo
{
    if (num > 0)
    { // condicional que determina si el numero es positivo
        printf("El numero es positivo \n");
    }
    else if (num < 0)
    { // condicional que determina si el numero es negativo
        printf("El numero es negativo \n");
    }
    else
    { // condicional que determina si el numero es 0
        printf("El numero es 0 \n");
    }
}