//barra de carga en c 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

int main()
{
    int i;
    printf(" Cargando ");
    for(i=0;i<10;i++)
    {
        printf(".");
        Sleep(500);
    }
    printf(" Carga completa ");
    getch();
    return 0;
}
