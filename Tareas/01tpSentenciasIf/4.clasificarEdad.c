#include <stdio.h>

int main(void)
{
    int age;
    printf("Ingrese su edad.\n");
    scan("%d", &age);

    if(age < 13)
    {
        printf("Estas en el periodo de infancia\n");
    }
    else if(age >= 13 || age <= 17)
    {
        printf("Estas en el periodo de adolescencia\n");
    }
    else
    {
        printf("Estas en el periodo de adultez.\n");
    }

    return 0;
}