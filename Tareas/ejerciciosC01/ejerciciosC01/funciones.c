#include <stdio.h>
#include "funciones.h"

#define     MSG_IN          "Ingrese un número %s:\n"
#define     MSG_NUMBER      "El número es: %s\n"
#define     MSG_OUT         "Programa finalizado%s\n"
#define     MSG_SEMAFORO    "Semaforo en %s"
#define     MSG_OPMENU      "%s dos numeros.\n"
#define     MSG_RESULTADO   "El resultado es %d\n"

//funcionesEjercicio01
void saludo_e1(void)
{
    printf("CLASIFICADOR DE NUMEROS PARES E IMPARES.\n");
}

int par(int a)
{
    return a % 2 == 0;
}

void operacionClasificar(void)
{
    int number = 0;

    for (;;)
    {
        printf(MSG_IN, "entero (-1 para salir)");
        scanf("%d", &number);

        if (number == -1)
        {
            printf(MSG_OUT, ".");
            break;
        }

        if (par(number))
        {
            printf(MSG_NUMBER, "par");
        }
        else
        {
            printf(MSG_NUMBER, "impar");
        }
    }
}

//funcionesEjercicio02
void saludo_e2(void)
{
    printf("CONTADOR DE DIGITOS.\n");
}

int contarDigitos(int a)
{
    int contador = 0;

    if(a == 0)
        return 1;
    
    while(a > 0)
    {
        a /= 10;
        contador++;
    }
    
    return contador;
}

void operacionContarDigitos(void)
{
    int number = 0;
    int digits = 0;

    for(;;)
    {
        printf(MSG_IN, "entero positivo (0 para salir)");
        scanf("%d", &number);
        if(number == 0)
        {
            printf(MSG_OUT, ".");
            break;
        }

        int digits = contarDigitos(number);
        printf("El numero tiene: %d digitos\n", digits);
    }

}

//funcionesEjercicio03
void saludo_e3(void)
{
    printf("SIMULACION DE SEMAFORO. \n");
}

void simularSemaforo(void)
{
    Semaforo estado = ROJO;

    for(int i = 0; i < 10; i++)
    {
        switch (estado)
        {
            case ROJO:
                printf(MSG_SEMAFORO, "rojo.\n");
                estado = VERDE;
                break;
            case VERDE:
                printf(MSG_SEMAFORO, "verde.\n");
                estado = AMARILLO;
                break;
            case AMARILLO:
                printf(MSG_SEMAFORO, "amarillo.\n");
                estado = ROJO;
                break;
        }
    }

    printf(MSG_OUT, "tras 10 ciclos.\n");
}

//funcionesEjercicio04
void saludo_e4(void)
{
    printf("ACUMULADOR DE VALORES POSITIVOS. \n");
}

void operacionAcumulador(void)
{
    int number = 0;
    int sumaTotal = 0;

    for(;;)
    {
        printf(MSG_IN, "positivo (negativo para salir)");
        scanf("%d", &number);

        if(number < 0)
        {
            printf("La suma total es: %d.\n", sumaTotal);
            printf(MSG_OUT, ".");
            break;
        }

        sumaTotal += number;
    }
}

//funcionesEjercicio05
void saludo_e5(void)
{
    printf("MINI MENU CON SWITCH-CASE.\n");
}

int sumar(int a, int b)
{
    return a + b;
}

int restar(int a, int b)
{
    return a - b;
}

int multiplicar(int a, int b)
{
    return a * b;
}

void operacionMenu(void)
{
    int option = 0;
    int numberA = 0, numberB = 0;

    for(;;)
    {
        printf("Elija una opcion:\n");
        printf(MSG_OPMENU, "1: Sumar");
        printf(MSG_OPMENU, "2: Restar");
        printf(MSG_OPMENU, "3: Multiplicar");
        printf("4. Salir\n");
        scanf("%d", &option);

        if(option == 4)
        {
            printf(MSG_OUT, ".\n");
            break;
        }
        
        if (option < 1 || option > 3) {
            printf("Opción inválida. Intente de nuevo.\n\n");
            continue;
        }

        printf(MSG_IN, " (1er numero).");
        scanf("%d", &numberA);
        printf(MSG_IN, " (2do numero).");
        scanf("%d", &numberB);

        switch(option)
        {
            case 1: 
                printf(MSG_RESULTADO, sumar(numberA, numberB));
                break;
            case 2:
                printf(MSG_RESULTADO, restar(numberA, numberB));
                break;
            case 3:
                printf(MSG_RESULTADO, multiplicar(numberA, numberB));
                break;
            default:
                printf("Opcion invalida.\n");
                break;

        }

    }
}

//funcionesEjercicio06
void saludo_e6(void)
{
    printf("COMPARADOR DE DOS NUMEROS.\n");
}

void compararNumeros(int a, int b)
{
    if(a > b)
    {
        printf("%d es mayor que %d\n", a, b);
    }
    else if(a < b)
    {
        printf("%d es mayor que %d\n", b, a);
    }
    else
    {
        printf("Ambos numeros son iguales.\n");
    }
}

void operacionCompararNumeros(void)
{
    int numberA = 0, numberB = 0;

    for(;;)
    {
        printf();
    }
}