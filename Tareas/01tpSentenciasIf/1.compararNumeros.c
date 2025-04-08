#include <stdio.h>

int main(void) 
{
    int numberA = 0;
    int numberB = 0;

    printf("Ingrese el primer número: \n");
    scanf("%d", &numberA);

    printf("Ingrese el segundo número: \n");
    scanf("%d", &numberB);

    if (numberA > numberB) 
    {
        printf("El número mayor es %d\n", numberA);
    } 
    else if(numberA == numberB)
    {
        printf("Los numeros son iguales\n");
    } 
    else 
    {
        printf("El número mayor es %d\n", numberB);
    }
    
    return 0;
}
