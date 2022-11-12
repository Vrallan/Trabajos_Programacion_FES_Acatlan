// 2tarea_11
// Brayan Bautista Gaytan    grupo: 1151

#include <stdio.h>

void swap(int *a, int *b); // prototipo de la funcion swap

int main() // funcion principal
{
    int a, b;
    printf("Programa que intercambia el valor de dos variables \n");
    printf("Ingrese el valor de la variable a: ");
    scanf("%d", &a);
    printf("Ingrese el valor de la variable b: ");
    scanf("%d", &b);
    swap(&a, &b); // llamada a la funcion swap
    printf("El valor de la variable a es: %d \n", a);
    printf("El valor de la variable b es: %d \n", b);
    return 0;
}

void swap(int *a, int *b) // funcion que intercambia el valor de dos variables
{
    int aux;  // declaracion de variable
    aux = *a; // asignacion de la variable a a la variable aux
    *a = *b;  // asignacion de la variable b a la variable a
    *b = aux; // asignacion de la variable aux a la variable b
}