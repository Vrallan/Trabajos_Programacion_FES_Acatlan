#include <stdio.h>

int main()
{
    int numero, i, resultado;      // declaracion de variables
    printf("Ingrese un numero: "); // solicitud de datos
    scanf("%d", &numero);          // lectura de numero
    for (i = 1; i <= 10; i++)      // ciclo for para realizar la tabla de multiplicar del numero ingresado
    {
        resultado = numero * i;                          // operacion para obtener el resultado de la tabla
        printf("%d x %d = %d \n", numero, i, resultado); // impresion de resultados
    }
    return 0; // retorno de valor
}
