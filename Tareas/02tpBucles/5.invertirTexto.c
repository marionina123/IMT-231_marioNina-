#include <stdio.h>

int main(void)
{
    char palabra[100];
    int longitud = 0;

    printf("Ingrese palabra: \n");
    scanf("%s", palabra);

    while (palabra[longitud] != '\0')
    {
        longitud++;
    }

    for(int i = longitud - 1; i >= 0; i--)
    {
        printf("%c", palabra[i]);
    }

    return 0;
}