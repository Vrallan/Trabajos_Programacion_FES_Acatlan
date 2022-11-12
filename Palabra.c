//programa que imprima una palabra en pantalla que se lea desde el teclado

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palabra[20];
    printf("Ingrese una palabra: ");
    scanf("%s",palabra);
    printf("La palabra ingresada es: %s",palabra);
    return 0;
}