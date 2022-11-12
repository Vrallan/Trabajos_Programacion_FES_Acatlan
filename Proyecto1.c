#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int saldo_actual = 2500; //Declaracion de la variable global de saldo_actual

void retirar();   // Prototipo de la funcion retirar
void consultar(); // Prototipo de la funcion consultar
void salir();     // Prototipo de la funcion salir

int main() // Funcion principal del programa
{
    int nip_bancario, opciones_principales, opciones_secundarias; // Declaracion de variables y asignacion de valores
    printf(" Bienvenido al cajero automatico.\n");                // Mensaje de bienvenida al cajero
    printf(" Por favor ingrese su NIP.\n");                       // Pide el NIP
    scanf("%d", &nip_bancario);                                   // Se pide el NIP al usuario y se guarda en la variable nip_bancario
    while (nip_bancario > 9999 || nip_bancario < 1000)            // Ciclo while para validar el NIP ingresado
    {
        system("cls");                                                       // Limpia la pantalla
        printf(" NIP incorrecto, por favor ingrese un NIP de 4 digitos.\n"); // Mensaje de error al ingresar un NIP incorrecto
        scanf("%d", &nip_bancario);                                          // Se pide el NIP correcto al usuario y se guarda en la variable nip_bancario
    }
    do // Ciclo do while para mostral el menu principal
    {
        system("cls");                                                                                   // Limpia la pantalla
        printf(" Seleccione la operacion que desea realizar.\n 1. Retirar\n 2. Consultar\n 3. Salir\n"); // Pide al usuario que seleccione una operacion
        printf(" Elija una opcion: ");                                                                   // Pide al usuario que ingrese una opcion
        scanf("%d", &opciones_principales);                                                              // Se pide al usuario que ingrese una opcion y se guarda en la variable opciones_principales
        switch (opciones_principales)                                                                    // Inicio del switch para las opciones del menu principal
        {
        case 1:                                                                          // Opcion 1 del menu principal
            system("cls");                                                               // Limpia la pantalla
            printf(" Ha seleccionado la opcion de retirar.\n");                          // Mensaje de confirmacion de la opcion seleccionada
            printf(" Esta seguro que desea realizar esta operacion?\n 1. Si\n 2. No\n"); // Pregunta al usuario si esta seguro de realizar la operacion
            printf(" Elija una opcion: ");                                               // Pide al usuario que ingrese una opcion
            scanf("%d", &opciones_secundarias);                                          // Se pide al usuario que ingrese una opcion y se guarda en la variable opciones_secundarias
            while (opciones_secundarias > 2 || opciones_secundarias < 1)                 // Ciclo while para validar la opcion ingresada
            {
                system("cls");                                                                           // Limpia la pantalla
                printf(" Opcion incorrecta, por favor ingrese una opcion valida.\n");                    // Mensaje de error al ingresar una opcion incorrecta
                printf(" Elija una opcion: Estas seguro de realizar esta operacion?\n 1. Si\n 2. No\n"); // Pide al usuario que ingrese una opcion
                scanf("%d", &opciones_secundarias);                                                      // Se pide al usuario que ingrese una opcion y se guarda en la variable opciones_secundarias
            }
            if (opciones_secundarias == 1) // Si el usuario ingreesa la opcion 1 del menu secundario
            {
                system("cls"); // Limpia la pantalla
                retirar();     // Llama a la funcion retirar
            }
            else // Si el usuario ingresa la opcion 2 del menu secundario
            {
                system("cls");                                         // Limpia la pantalla
                printf(" Operacion cancelada.\n");                     // Mensaje de confirmacion de la operacion cancelada
                printf(" Presione cualquier tecla para continuar.\n"); // Pide al usuario que presione cualquier tecla para continuar
                getch();                                               // Espera a que el usuario presione una tecla
            }
            break;                                                                        // Termina el case 1
        case 2:                                                                           // Opcion 2 del menu principal
            system("cls");                                                                // Limpia la pantalla
            printf(" Ha seleccionado la opcion de consultar.\n");                         // Mensaje de confirmacion de la opcion seleccionada
            printf(" Esta seguro que desea realizar esta operacion?\n 1. Si \n 2. No\n"); // Pregunta al usuario si esta seguro de realizar la operacion
            printf(" Elija una opcion: ");                                                // Pide al usuario que ingrese una opcion
            scanf("%d", &opciones_secundarias);                                           // Se pide al usuario que ingrese una opcion y se guarda en la variable opciones_secundarias
            while (opciones_secundarias > 2 || opciones_secundarias < 1)                  // Ciclo while para validar la opcion ingresada
            {
                system("cls");                                                                           // Limpia la pantalla
                printf(" Opcion incorrecta, por favor ingrese una opcion valida.\n");                    // Mensaje de error al ingresar una opcion incorrecta
                printf(" Elija una opcion: Estas seguro de realizar esta operacion?\n 1. Si\n 2. No\n"); // Pide al usuario que ingrese una opcion
                scanf("%d", &opciones_secundarias);                                                      // Se pide al usuario que ingrese una opcion y se guarda en la variable opciones_secundarias
            }
            if (opciones_secundarias == 1) // Si el usuario ingreso la opcion 1 del menu secundario
            {
                system("cls"); // Limpia la pantalla
                consultar();   // Llama a la funcion consultar
            }                  // Trermina el if
            else               // Si el usuario ingreso la opcion 2 del menu secundario
            {
                system("cls");                                         // Limpia la pantalla
                printf(" Operacion cancelada.\n");                     // Mensaje de confirmacion de la operacion cancelada
                printf(" Presione cualquier tecla para continuar.\n"); // Pide al usuario que presione cualquier tecla para continuar
                getch();                                               // Espera a que el usuario presione una tecla
            }                                                          // Fin del if
            break;                                                     // Termina el case 2
        case 3:
            system("cls");                                        // Limpia la pantalla
            printf(" No se olvide de retirar su tarjeta.\n");     //
            printf(" Gracias por utilizar nuestros servicios\n"); // Mensaje de despedida
            printf(" Vuelva pronto\n");                           //
            break;                                                // Termina el case 3
        default:
            system("cls");                 // Limpia la pantalla
            printf(" Opcion incorrecta "); // Mensaje de error al ingresar una opcion incorrecta
            break;                         // Termina el default
        }                                  // Termina el switch
    } while (opciones_principales != 3);   // Termina el ciclo do while
    return 0;                              // Termina el programa
} // Termina la funcion main

void retirar() // Funcion retirar
{
    int cantidad_retirada, opciones_principales, i; // Declaracion de variables
    printf(" Los retiros son a partir de $100\n");
    printf(" El cajero solo dispensa billetes de $50, $100, $200 y $500\n"); // Condiciones para realizar un retiro del cajero
    printf(" Por favor ingrese la cantidad que desea retirar\n");            // Pide al usuario que ingrese la cantidad que desea retirar
    scanf("%d", &cantidad_retirada);                                         // Se pide al usuario que ingrese la cantidad que desea retirar y se guarda en la variable cantidad_retirada
    while (cantidad_retirada > saldo_actual || cantidad_retirada < 0)        // Ciclo while para validar que la cantidad a retirar no sea mayor al saldo actual
    {
        system("cls");                                                                                             // Limpia la pantalla
        printf(" No tiene suficiente saldo para realizar esta operacion o la cantidad ingresada es incorrecta\n"); // Mensaje de error al ingresar una cantidad mayor al saldo actual
        printf(" Por favor ingrese una cantidad menor o igual a su saldo actual\n");                               // Pide al usuario que ingrese una cantidad menor o igual al saldo actual
        scanf("%d", &cantidad_retirada);                                                                           // Se pide al usuario que ingrese la cantidad que desea retirar y se guarda en la variable cantidad_retirada
    }                                                                                                              // Termina el ciclo while
    while (cantidad_retirada % 50 != 0)                                                                            // Ciclo do while que valida que la cantidad a retirar se pueda dar con los billetes disponibles en el cajero
    {
        system("cls");                                                               // Limpia la pantalla
        printf(" La cantidad que desea retirar no es valida\n");                     // Mensaje de error al ingresar una cantidad que no se pueda dar con los billetes disponibles en el cajero
        printf(" Por favor ingrese una cantidad con la que contemos el efectivo\n"); // Pide al usuario que ingrese una cantidad con la que contemos el efectivo
        scanf("%d", &cantidad_retirada);                                             // Se pide al usuario que ingrese la cantidad que desea retirar y se guarda en la variable cantidad_retirada
    }                                                                                // Termina el ciclo while
    saldo_actual = saldo_actual - cantidad_retirada;                                 // Se resta la cantidad a retirar al saldo actual
    printf(" Espere un momento en lo que validamos su retiro\n");                    // Mensaje de espera mientras se valida el retiro
    for (i = 0; i < 10; i++)                                                         // Ciclo for para simular el tiempo de espera
    {
        printf(" .");                                                                // Mensaje de espera mientras se valida el retiro
        Sleep(500);                                                                  // Funcion que simula el tiempo de espera
    }                                                                                // Termina el ciclo for
    printf(" Su retiro ha sido validado\n");                                         // Mensaje de confirmacion de la validacion del retiro
    printf(" Su dinero esta siendo dispensado\n");                                   // Mensaje de confirmacion de la dispensacion del dinero
    printf(" ####### Cuenta de numero **** **** **** 1234 #######\n");               // Mensaje de confirmacion de la cuenta de la que se esta retirando
    printf(" Retiro en efectivo..........................$%d\n", cantidad_retirada); // Mensaje de confirmacion de la cantidad retirada
    printf(" #################Operacion exitosa##################\n");               // Mensaje de confirmacion de la operacion exitosa
    Sleep(3000);                                                                     // Funcion que simula el tiempo de espera
    salir();                                                                         // Llama a la funcion salir
}

void consultar() // Funcion consultar
{
    printf(" # Cuenta de numero **** **** **** 1234 #\n");            // Mensaje de confirmacion de la cuenta de la que se esta consultando
    printf(" Saldo actual:.................... $%d\n", saldo_actual); // Mensaje de confirmacion del saldo actual
    salir();                                                          // Llama a la funcion salir
}

void salir() // Funcion salir
{
    int opcion_submenu;                                           // Declaracion de variables
    printf(" Desea:\n 1. Volver al menu principal\n 2. Salir\n"); // Pregunta al usuario si desea realizar otra operacion
    printf(" Elija una opcion: ");                                // Pide al usuario que ingrese una opcion
    scanf("%d", &opcion_submenu);                                 // Se pide al usuario que ingrese una opcion y se guarda en la variable opcion_submenu
    while (opcion_submenu != 1 && opcion_submenu != 2)            // Ciclo while para validar que el usuario ingrese una direccion correcta
    {
        system("cls");                                                           // Limpia la pantalla
        printf(" Opcion incorrecta\n");                                          // Mensaje de error al ingresar una opcion incorrecta
        printf(" Elija una opcion:\n 1. Volver al menu principal\n 2. Salir\n"); // Pide al usuario que ingrese una opcion
        scanf("%d", &opcion_submenu);                                            // Se pide al usuario que ingrese una opcion y se guarda en la variable opcion_submenu
    }                                                                            // Termina el ciclo while
    if (opcion_submenu == 1)                                                     // Condicion if para validar que el usuario quiera volver al menu principal
    {
        system("cls");                                        // Limpia la pantalla
        printf(" Usted sera redirigido al menu principal\n"); // Mensaje de confirmacion de que el usuario sera redirigido al menu principal
        printf(" Espere un momento\n");                       // Mensaje de espera mientras se redirige al menu principal
        Sleep(3000);                                          // Funcion que simula el tiempo de espera
    }                                                         // Termina la condicion if
    else                                                      // Condicion else para validar que el usuario quiera salir
    {
        system("cls");                                        // Limpia la pantalla
        printf(" No se olvide de retirar su tarjeta\n");      // Mensaje de confirmacion de que el usuario no se olvide de retirar su tarjeta
        printf(" Gracias por utilizar nuestros servicios\n"); // Mensaje de confirmacion de que el usuario agradece por utilizar nuestros servicios
        printf(" Vuelva pronto\n");                           // Mensaje de confirmacion de que el usuario vuelve pronto
        exit(0);                                              // Termina el programa
    }                                                         // Termina la condicion else
} // Termina la funcion salir
