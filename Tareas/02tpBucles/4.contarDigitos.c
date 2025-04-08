#include <stdio.h>

int main(void)
{
    int x, i = 1;

    printf("Ingrese un numero entero: \n");
    scanf("%d", &x);

    if(x < 10)
    {
        i = 1;
    }
    else
    {
        while(x >= 10)
        {
            x /= 10;
            i++;
        }
    }
    printf("%d\n", i);

    return 0;
}