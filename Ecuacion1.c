//Brayan Bautista Gaytan    1151

 #include <stdio.h>
 #include <math.h>
    int main()
    {
       int x;
       int y;
       printf("Programa que calcula el valor de y=x^2+8x-10 para cualquier valor de x \n");
       printf("Ingrese el valor de x: ");
       scanf("%d", &x);
       y = pow(x,2)+8*x-10;
       printf("El valor de y es: %d \n", y);
       return 0;
      
    }
    
