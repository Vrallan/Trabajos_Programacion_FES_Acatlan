// 1equipo_p06        grupo: 1151

#include <stdio.h>

float ValorPositivoNegativo(float num); // prototipo de la funcion ValorPositivoNegativo

float main() // funcion principal
{
    float num;                                                               // declaracion de variable
    printf("Programa que determina si un numero es positivo o negativo \n"); // impresion de mensaje
    printf("Ingrese el numero: ");                                           // impresion de mensaje
    scanf("%f", &num);                                                       // lectura de variable
    ValorPositivoNegativo(num);                                              // lamada a la funcion ValorPositivoNegativo
    return 0;                                                                // retorno de la funcion
}

float ValorPositivoNegativo(float num) // funcion ValorPositivoNegativo que determina si un numero es positivo o negativo
{
    if (num > 0)
    {                                       // condicional que determina si el numero es positivo
        printf("El numero es positivo \n"); // impresion de mensaje
    }
    else if (num < 0)
    {                                       // condicional que determina si el numero es negativo
        printf("El numero es negativo \n"); // impresion de mensaje 
    }
    else
    {                                // condicional que determina si el numero es 0
        printf("El numero es 0 \n"); // impresion de mensaje
    }
}