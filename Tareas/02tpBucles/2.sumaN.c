#include <stdio.h>

int main(void)
{
    int N;
    int suma = 0;

    printf("Ingrese un numero. \n");
    scanf("%d", &N);
    
    for(int i = 1; i <= N; i++)
    {
        suma += i;
    }

    printf("%d\n", suma);

    return 0;
}