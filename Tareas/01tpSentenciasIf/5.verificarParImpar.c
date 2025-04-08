#include <stdio.h>

int main(void)
{
    int number;
    printf("Ingrese un numero\n");
    scanf("%d", &number);

    if(number%2 != 0)
    {
        printf("El numero es impar\n");
    }
    else
    {
        printf("El numero es par\n");
    }

    return 0;
}