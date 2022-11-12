// 3tarea_11
// Brayan Bautista Gaytan    grupo: 1151

#include <stdio.h>

int factorial(int num); // prototipo de la funcion factorial

int main() // funcion principal
{
    int num;
    printf("Programa que calcula el factorial de un numero \n");
    printf("Ingrese el numero: ");
    scanf("%d", &num);
    printf("El factorial de %d es: %d \n", num, factorial(num)); // llamada a la funcion factorial
    return 0;
}

int factorial(int num) // funcion que calcula el factorial de un numero
{
    int i, fact = 1; // declaracion de variables
    for (i = 1; i <= num; i++)
    { // ciclo for que calcula el factorial
        fact = fact * i;
    }
    return fact; // retorno de la funcion
}
