//programa que solo acepta los primeros 4 digitos ingresados por el usuario y los muestra en pantalla 

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

int main()
{
    int clave;
    int i;
    char clave2[5];
    printf(" Ingrese su clave: ");
    scanf("%d",&clave);
    itoa(clave,clave2,10);
    for(i=0;i<4;i++)
    {
        printf("%c",clave2[i]);
    }
    getch();
    return 0;
}