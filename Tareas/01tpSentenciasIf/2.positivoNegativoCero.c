#include <stdio.h>

int main(void)
{
    int number;
    printf("Ingrese un numero entero: \n");
    scanf("%d", &number);

    if(number > 0)
    {
        printf("El numero es positivo\n");
    }
    else if (number == 0)
    {
        printf("El numero es cero\n");
    }
    else
    {
        printf("El numero es negativo\n");
    }

    return 0;
}