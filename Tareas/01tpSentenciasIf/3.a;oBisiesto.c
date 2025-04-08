#include <stdio.h>

int main(void)
{
    int number;
    printf("Ingrese un a;o: \n");
    scanf("%d", &number);

    if(number%4 == 0 && (number%100 != 0|| number%400 == 0))
    {
        printf("El a;o es bisiesto.\n");
    }
    else
    {
        printf("El a;o no es bisiesto.\n");
    }

    return 0;
}