//Bautista Gaytan Brayan
//Omar Gurrola González

#include <stdio.h>
#include <string.h>

int main()
{
    char cadena[100];                                   // 100 caracteres como máximo en la cadena
    int i, longitud;                                    // i es un contador y longitud es la longitud de la cadena
    printf("Introduzca una cadena: ");                  // Pedimos la cadena
    gets(cadena);                                       // Leemos la cadena
    longitud = strlen(cadena);                          // Calculamos la longitud de la cadena
    printf("La cadena tiene %d caracteres ", longitud); // Mostramos la longitud de la cadena
    printf("La cadena al reves es: ");                  // Mostramos la cadena al revés
    for (i = longitud - 1; i >= 0; i--)                 // Recorremos la cadena al revés
        printf(" %c ", cadena[i]);                      // Mostramos el caracter
    return 0;                                           // Fin del programa
}
