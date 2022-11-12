//programa que ingrese la calificacion de 15 alumnos y muestre cuantos aprobaron y cuantos reprobaron
//Brayan Bautista Gaytan    1151

 #include <stdio.h>
 int main() {
     int i, calif, aprobados, reprobados;
     aprobados=0;
     reprobados=0;
     for (i=1; i<=15; i++)
     {
         printf("Ingrese la calificacion del alumno %d \n", i);
         scanf("%d", &calif);
         if (calif>=60)
         {
             aprobados=aprobados+1;
         }
         else
         {
             reprobados=reprobados+1;
         }
    }
     printf("El numero de alumnos aprobados es: %d \n", aprobados);
     return 0;
 }
