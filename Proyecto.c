//interfaz de cajero automatico 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

//variables globales
int saldo=0;
int opcion;
int cantidad;
int clave;

//funciones
void menu();
void depositar();
void retirar();
void consultar();
void salir();
void clave();
void bienvenida();
void error();

//funcion principal
int main()
{
    bienvenida();
    clave();
    menu();
    return 0;
}   

//funcion de bienvenida
void bienvenida()
{
    printf(" Bienvenido al cajero automatico \n");

}

//funcion de clave
void clave()
{
    printf(" Ingrese su clave \n");
    scanf("%d",&clave);
    if(clave==1234)
    {
        printf(" Clave correcta \n");
    }
    else
    {
        printf(" Clave incorrecta \n");
        exit(0);
    }
}

//funcion de menu
void menu()
{
    printf(" 1. Depositar \n");
    printf(" 2. Retirar \n");
    printf(" 3. Consultar \n");
    printf(" 4. Salir \n");
    printf(" Ingrese una opcion \n");
    scanf("%d",&opcion);
    switch(opcion)
    {
        case 1:
            depositar();
            break;
        case 2:
            retirar();
            break;
        case 3:
            consultar();
            break;
        case 4:
            salir();
            break;
        default:
            error();
            break;
    }
}

//funcion de depositar
void depositar()
{
    printf(" Ingrese la cantidad a depositar \n");
    scanf("%d",&cantidad);
    saldo=saldo+cantidad;
    printf(" Su saldo es %d \n",saldo);
    menu();
}

//funcion de retirar
void retirar()
{
    printf(" Ingrese la cantidad a retirar \n");
    scanf("%d",&cantidad);
    if(cantidad>saldo)
    {
        printf(" No tiene saldo suficiente \n");
        menu();
    }
    else
    {
        saldo=saldo-cantidad;
        printf(" Su saldo es %d \n",saldo);
        menu();
    }
}

//funcion de consultar
void consultar()
{
    printf(" Su saldo es %d \n",saldo);
    menu();
}

//funcion de salir
void salir()
{
    printf(" Gracias por utilizar el cajero automatico \n");
    exit(0);
}

//funcion de error
void error()
{
    printf(" Opcion incorrecta \n");
    menu();
}

//fin del programa
