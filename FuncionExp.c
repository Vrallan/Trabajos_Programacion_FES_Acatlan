// 2equipo_p06        grupo: 1151
#include <stdio.h>

float pow(float arg, float exp); // prototipo de la funcion pow

float main() // funcion principal
{
    float arg, exp;                                             // declaracion de variables
    printf("Programa que calcula la potencia de un numero \n"); // impresion de mensaje
    printf("Ingrese el numero: ");                              // impresion de mensaje
    scanf("%f", &arg);                                          // lectura de variable
    printf("Ingrese el exponente: ");                           // impresion de mensaje
    scanf("%f", &exp);                                          // lectura de variable
    printf("El resultado es: %f \n", pow(arg, exp));            // impresion de mensaje y llamada a la funcion pow
    return 0;                                                   // retorno de la funcion
}

float pow(float arg, float exp) // funcion pow que calcula la potencia de un numero
{
    int i;            // declaracion de variable
    float result = 1; // declaracion de variable con valor inicial
    for (i = 0; i < exp; i++)
    {                  // ciclo for que multiplica el numero por si mismo el numero de veces que sea el exponente
        result *= arg; // multiplicacion de la variable result por la variable arg
    }
    return result; // retorno de la funcion pow con el valor de la variable result
}