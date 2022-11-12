//programa que resuelva una ecuación cuadratica
//Brayan Bautista Gaytan    1151
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, x1, x2, x, D;
    printf("Programa resuelve una ecuacion cuadratica \n");
    printf("Ingrese los valores de la ecuacion de la forma ax^2+bx+c \n");
    printf("Si alguna es negativo cambiar el signo \n");
    printf("Ingrese el valor de a \n");
    scanf("%f", &a);
    if (a==0)
    {
        printf("La ecuacion NO es una ecuacion cuadratica \n");
    }
    else {
        printf("Ingrese el valor de b \n");
        scanf("%f", &b);
        printf("Ingrese el valor de c \n");
        scanf("%f", &c);
        D=pow(b,2)-4*a*c;
        printf("Discriminante: %.2f \n", D);
        if (D<0)
        {
            printf("La ecuacion no tiene soluciones, las raices son imaginarias\n");
        }
        else if (D==0)
        {
            x=-b/(2*a);
            printf("La ecuacion solo tiene una solucion real en x \n");
            printf("X: %.2f", x);
        }
        else if (D>0)
        {
            x1=((-b+sqrt(D))/(2*a));
            x2=((-b-sqrt(D))/(2*a));
            printf("La ecuacion cuadratica tiene dos resultados reales en x \n");
            printf("x1:%.2f \n", x1);
            printf("x2:%.2f", x2);
        }
        return 0;
    }
}