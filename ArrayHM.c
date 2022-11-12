//Bautista Gaytan Brayan
//Omar Gurrola González

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, N, M = 0, H = 0;                       // N es el tamaño del array, M es el número de hombres y H el número de mujeres
    char sexo[100];                               // 100 caracteres como máximo en la cadena
    srand(time(NULL));                            // Inicializamos la semilla del generador de números aleatorios
    printf("Introduzca el numero de personas: "); // Pedimos el tamaño del array
    scanf("%d", &N);                              // Leemos el tamaño del array
    for (i = 0; i < N; i++)                       // Recorremos el array
    {
        sexo[i] = rand() % 2; // Generamos un número aleatorio entre 0 y 1 y lo guardamos en el array sexo
        if (sexo[i] == 0)     // Si el número aleatorio es 0 es un hombre
            M++;              // Incrementamos el número de hombres
        else                  // Si el número aleatorio es 1 es una mujer
            H++;              // Incrementamos el número de mujeres
    }
    printf("Hay %d mujeres y %d hombres", M, H); // Mostramos el número de mujeres y el número de hombres
    return 0;                                    // Fin del programa
}
