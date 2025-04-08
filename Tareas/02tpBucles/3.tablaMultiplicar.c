#include <stdio.h>

int main(void)
{
    int x;

    printf("Ingrese un numero: \n");
    scanf("%d", &x);

    for(int i = 1; i <= 10; i++)
    {
        printf("%d\n", x*i);
    }

    return 0;
}