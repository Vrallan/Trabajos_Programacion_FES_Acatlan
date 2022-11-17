//Bautista Gaytan Brayan 
//Grupo; 1151
#include <stdio.h>

void IntChanPares(int numEntero);

int main()
{
    int numEntero;
    printf("Introduce un numero entero: ");
    scanf("%d", &numEntero);
    while(numEntero < 0)
    {
        printf("Introduce un numero entero que sea positivo: ");
        scanf("%d", &numEntero);
    }
    IntChanPares(numEntero);
    return 0;
}

void IntChanPares(int numEntero)
{
    int numNuevo[20], digitoAnalizado, j, i;
    for (i = 19; i >= 0; i -= 2)
    {
        digitoAnalizado = numEntero % 10;
        numEntero = numEntero / 10;
        if (numEntero == 0 && digitoAnalizado > 0)
        {
            j = i;
            numNuevo[i] = digitoAnalizado;
            printf("El numero nuevo es: ");
            for (i = j; i < 20; i++)
            {
                printf("%d", numNuevo[i]);
            }
            break;
        }
        else if (numEntero == 0 && digitoAnalizado == 0)
        {
            j = i + 1;
            printf("El numero nuevo es: ");
            for (i = j; i < 20; i++)
            {
                printf("%d", numNuevo[i]);
            }
            break;
        }
        else
        {
            i--;
            numNuevo[i] = digitoAnalizado;
            digitoAnalizado = numEntero % 10;
            i++;
            numNuevo[i] = digitoAnalizado;
        }
        numEntero = numEntero / 10;
    }
}