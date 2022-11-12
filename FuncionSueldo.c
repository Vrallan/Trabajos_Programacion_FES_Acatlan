//Omar Gurrola Gonzalez       Grupo: 1151
//Brayan Bautista Gaytan

#include <stdio.h>

void SueldoDiario(int, int);

int main()
{
    int dia, diurno = 50, nocturno = 80;
    printf("Usted trabajo el dia: \n");
    printf(" 1. Lunes \n 2. Martes \n 3. Miercoles \n 4. Jueves \n 5. Viernes \n 6. Sabado \n 7. Domingo \n");
    scanf("%d", &dia);
    if (dia == 7)
    {
        SueldoDiario(70, 110);
    }
    else if (dia > 0 && dia < 7)
    {
        SueldoDiario(50, 80);
    }
    else
    {
        printf("El numero ingresado no es valido");
    }
    return 0;
}

void SueldoDiario(int diurno, int nocturno)
{
    int turno, horas, sueldo;
    printf("Ingresa el numero del turno en el que trabajaste: \n");
    printf(" 1. Turno diurno \n 2. Turno nocturno \n");
    scanf("%d", &turno);
    switch (turno)
    {
    case 1:
        printf("Usted esta trabajando el turno diurno\n");
        printf("Ingrese la cantidad de horas trabajadas: \n");
        scanf("%d", &horas);
        if (horas > 0 && horas <= 12)
        {
            sueldo = horas * diurno;
            printf("Su sueldo de hoy es de: $%d", sueldo);
        }
        else
            printf("Las horas ingresadas no son validas, solo puedes trabajar 12 horas maximo por turno");
        break;
    case 2:
        printf("Usted esta trabajando el turno nocturno\n");
        printf("Ingrese la cantidad de horas trabajadas: \n");
        scanf("%d", &horas);
        if (horas > 0 && horas <= 12)
        {
            sueldo = horas * nocturno;
            printf("Su sueldo de hoy es de: $%d", sueldo);
        }
        else
            printf("Las horas ingresadas no son validas, solo puedes trabajar 12 horas maximo por turno");
        break;
    default:
        printf("El numero ingresado no es valido");
        break;
    }
}
