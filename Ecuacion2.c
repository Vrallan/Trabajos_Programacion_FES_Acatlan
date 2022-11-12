//Brayan Bautista Gaytan    1151

 #include <stdio.h>
 #include <math.h>
    int main()
    {
       int x;
       int y;
       printf("Programa que calcula el valor de y=2x^2+13x-1 para cualquier valor de x \n");
       printf("Ingrese el valor de x: ");
       scanf("%d", &x);
       y = 2*pow(x,2)+13*x-1;
       printf("El valor de y es: %d \n", y);
       return 0;
      
    }
    
