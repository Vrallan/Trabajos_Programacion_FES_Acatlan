//Bautista Gaytan Brayan 
//Grupo; 1151
#include <stdio.h>
#include <stdlib.h>

void RangoDig(int numEntero); // prototipo de la funcion

int main()
{
    int numEntero;                          // se declara la variable que almacenara el numero entero
    printf("Introduce un numero entero: "); // se pide el numero entero
    scanf("%d", &numEntero);                // se guarda el numero entero
    while(numEntero < 0)                    // se valida que el numero sea positivo
    {
        printf("Introduce un numero entero: "); // se pide el numero entero
        scanf("%d", &numEntero);                // se guarda el numero entero
    }
    RangoDig(numEntero);                    // llamada a la funcion
    return 0;                               // fin del programa
}

void RangoDig(int numEntero) // Funcion que recibe un numero entero y regresa el numero mayor y menor de los digitos que lo componen
{
    int digito, digitoMayor, digitoMenor; // dig es el digito que se va a analizar, max es el digito mayor y min es el digito menor
    digitoMayor = 0;                      // se inicializa en 0 para que el primer digito que se analice sea el mayor
    digitoMenor = 9;                      // se inicializa en 9 para que el primer digito que se analice sea el menor
    while (numEntero > 0)                 // mientras el numero entero sea mayor a 0
    {
        digito = numEntero % 10;  // se obtiene el digito que se va a analizar
        if (digito > digitoMayor) // si el digito es mayor que el maximo
        {
            digitoMayor = digito; // el digito se convierte en el maximo
        }
        if (digito < digitoMenor) // si el digito es menor que el minimo
        {
            digitoMenor = digito; // el digito se convierte en el minimo
        }
        numEntero = numEntero / 10; // se elimina el digito que se acaba de analizar
    }
    printf("El numero mayor es: %d\nY el numero menor es: %d\n", digitoMayor, digitoMenor); // se imprime el numero mayor y el numero menor
    printf("El rango de valores es: %d\n", digitoMayor - digitoMenor + 1);                  // se imprime el rango de valores
}