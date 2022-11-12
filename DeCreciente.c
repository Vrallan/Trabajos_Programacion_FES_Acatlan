//Omar Gurrola Gonzalez       Grupo: 1151
//Brayan Bautista Gaytan

#include <stdio.h>

int main()
{
    int a, b;
    printf("Ingrese dos numeros: ");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("Los numeros estan en orden decreciente");
    }
    else if (a < b)
    {
        printf("Los numeros estan en orden creciente");
    }
    else if (a == b)
    {
        printf("Los numeros son iguales");
    }
    return 0;
}
