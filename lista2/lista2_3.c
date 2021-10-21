#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numero1, numero2;

    printf("digite o valor do numero 1:\n");
    scanf("%d", &numero1);

    printf("digite o valor do numero 2:\n");
    scanf("%d", &numero2);

    if(numero2 == numero1 || numero1 == numero2)
    {
    printf("digite numeros diferentes\n");
    }

    if(numero1 < numero2)
    {
        printf("o maior numero e:\n %d", numero2);
    }
    else
    {
        printf("o maior numero e:\n %d", numero1);
    }

    return 0;
}
