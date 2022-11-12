// 3equipo_p06        grupo: 1151

#include <stdio.h>
#include <windows.h>

int mcd(int a, int b); // prototipo de la funcion mcd

int main() // funcion principal
{
    int a, b;                                                                 // declaracion de variables
    printf("Programa que calcula el maximo comun divisor de dos numeros \n"); // impresion de mensaje
    printf("Ingrese el primer numero: ");                                     // impresion de mensaje
    scanf("%d", &a);                                                          // lectura de variable
    printf("Ingrese el segundo numero: ");                                    // impresion de mensaje
    scanf("%d", &b);                                                          // lectura de variable
    printf("El maximo comun divisor es: %d \n", mcd(a, b));                   // impresion de mensaje y llamada a la funcion mcd
    return 0;                                                                 // retorno de la funcion
}

int mcd(int a, int b) // funcion mcd que calcula el maximo comun divisor de dos numeros
{
    int i, mcd; // declaracion de variables
    for (i = 1; i <= a && i <= b; i++) { // ciclo for que determina el maximo comun divisor
        if (a % i == 0 && b % i == 0)
        {            // condicional que determina si el numero es divisor de ambos numeros
            mcd = i; // asignacion de la variable i a la variable mcd
        }            // fin del condicional
    }                // fin del ciclo for
    return mcd;      // retorno de la funcion mcd con el valor de la variable mcd
}