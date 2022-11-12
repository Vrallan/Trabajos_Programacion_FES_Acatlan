//programa que compare si un angulo es agudo, recto o obtuso
//Brayan Bautista Gaytan    1151
#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    printf("Programa que compara si un angulo es agudo, recto o obtuso \n");
    printf("Ingrese el valor del angulo: ");
    scanf("%d", &x);
    if (x<90)
        {
        printf("El angulo es agudo \n");
        }
    else if (x==90)
        {
        printf("El angulo es recto \n");
        }
    else if (x>90)
        {
        printf("El angulo es obtuso \n");
        }
    return 0;
    
}