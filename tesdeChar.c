#include <stdio.h>
#include <stdlib.h>

char main(void)
{
    char nome[7];

    printf("Diga seu nome: \n");
    gets(nome);

    printf("Ola %s\n", nome);

    system("pause");
    return 0;
}
