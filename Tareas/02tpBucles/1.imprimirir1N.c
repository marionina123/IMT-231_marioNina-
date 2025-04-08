#include <stdio.h>

int main(void)
{
    int N;
    printf("Ingrese un numero entero positivo: \n");
    scanf("%d", &N);

    printf("Secuencia del 1 al %d\n", N);

    for (int i = 1; i <= N; i++)
    {
        printf(", %d", i);
    }

    return 0;
}
