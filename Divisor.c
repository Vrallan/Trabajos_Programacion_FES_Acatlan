//programa que compare si un numero es divisor de otro
//Brayan Bautista Gaytan    1151
#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, z;
    printf("Programa que compara si un numero es divisor de otro \n");
    printf("Ingrese el valor de x: ");
    scanf("%d", &x);
    printf("Ingrese el valor de y: ");
    scanf("%d", &y);
    z = x % y;
    if (z == 0)
    {
        printf("El numero %d es divisor de %d \n", y, x);
    }
    else
    {
        printf("El numero %d no es divisor de %d \n", y, x);
    }
    return 0;
}