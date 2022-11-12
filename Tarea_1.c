//Brayan Bautista Gaytan     1151
//programa que imprima todas las variables de tipo entero, flotante, doble, caracter y booleano
#include <stdio.h>
#include <stdbool.h> 
int main()
{
int entero = 10;
float flotante = 10.5;
double doble = 1025.5;
char caracter = 'a';
bool booleano = true;
printf("El valor de la variable entero es: %d \n", entero);
printf("El valor de la variable flotante es: %f \n", flotante);
printf("El valor de la variable doble es: %lf \n", doble);
printf("El valor de la variable caracter es: %c \n", caracter);
printf("El valor de la variable booleano es: %d \n", booleano);
return 0;
}