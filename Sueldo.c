#include <stdio.h>

void SueldoDiario (int, int);

    int main ()
    {
        int dia;
        int diurno = 50, nocturno = 80;
        printf("Usted esta trabanjo el dia: \n");
        printf(" 1. Lunes \n 2. Martes \n 3. Miercoles \n 4. Jueves \n 5. Viernes \n 6. Sabado \n 7. Domingo \n");
        scanf("%d",&dia);
        switch(dia)
        {
            case 1:
            printf("Usted esta trabajando el dia Lunes\n");
            SueldoDiario(50, 80);
            break;
            case 2:
            printf("Usted esta trabajando el dia Martes\n");
            SueldoDiario(50, 80);
            break;
            case 3:
            printf("Usted esta trabajando el dia Miercoles\n");
            SueldoDiario(50, 80);
            break;
            case 4:
            printf("Usted esta trabajando el dia Jueves\n");
            SueldoDiario(50, 80);
            break;
            case 5:
            printf("Usted esta trabajando el dia Viernes\n");
            SueldoDiario(50, 80);
            break;
            case 6:
            printf("Usted esta trabajando el dia Sabado\n");
            SueldoDiario(50, 80);
            break;
            case 7:
            printf("Usted esta trabajando el dia Domingo\n");
            SueldoDiario(70, 110);
            break;
            default:
            printf("El numero ingresado no es valido");
            break;
        }
}


void SueldoDiario(int diurno, int nocturno)
{
    int turno, horas, sueldo;
    printf("Ingresa el numero del turno en el que trabajaste: \n");
    printf(" 1. Turno diurno \n 2. Turno nocturno \n");
    scanf("%d",&turno);
    switch(turno)
    {
        case 1:
        printf("Usted esta trabajando el turno diurno\n");
        printf("Ingrese la cantidad de horas trabajadas: \n");
        scanf("%d",&horas);
            if (horas>0 && horas<=12) { 
             sueldo=horas*diurno;
             printf("Su sueldo de hoy es de: $%d",sueldo);
             }
            else
             printf("Las horas ingresadas no son validas, solo puedes trabajar 12 horas maximo por turno");
        break;
        case 2:
        printf("Usted esta trabajando el turno nocturno\n");
        printf("Ingrese la cantidad de horas trabajadas: \n");
        scanf("%d",&horas);
            if (horas>0 && horas<=12) {
              sueldo=horas*nocturno;
              printf("Su sueldo de hoy es de: $%d",sueldo);
            }
            else
              printf("Las horas ingresadas no son validas, solo puedes trabajar 12 horas maximo por turno");
        break;
        default:
        printf("El numero ingresado no es valido");
        break;
    }
}