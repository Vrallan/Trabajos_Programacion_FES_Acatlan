// programa que ultilice el if para operaciones basicas
// Brayan Bautista Gaytan    1151
#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, z, suma, resta, multiplicacion;
    printf("Programa que suma, resta y multiplica \n");
    printf("Selecciona la operacion que quieres realizar \n");
    printf("1.Suma \n2.Resta \n3.Multiplicacion \n");
    scanf("%d", &z);
    switch (z)
    {
    case 1:
        printf("Ingrese el valor de x: ");
        scanf("%d", &x);
        printf("Ingrese el valor de y: ");
        scanf("%d", &y);
        suma = x + y;
        printf("El resultado de la suma es: %d \n", suma);
        break;
    case 2:
        printf("Ingrese el valor de x: ");
        scanf("%d", &x);
        printf("Ingrese el valor de y: ");
        scanf("%d", &y);
        resta = x - y;
        printf("El resultado de la resta es: %d \n", resta);
        break;
    case 3:
        printf("Ingrese el valor de x: ");
        scanf("%d", &x);
        printf("Ingrese el valor de y: ");
        scanf("%d", &y);
        multiplicacion = x * y;
        printf("El resultado de la multiplicacion es: %d \n", multiplicacion);
        break;
    default:
        printf("Error, el valor ingresado no es valido \n");
        break;
    }
    return 0;
}
