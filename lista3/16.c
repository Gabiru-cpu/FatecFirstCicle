/*
Solicite ao usuário um número maior ou igual a zero e inteiro
representado pela variávelnum. Calcular o fatorial desse número.
Utilize o laço while para a entrada da variável num e um laço for
para efetuar o cálculo do fatorial.
OBS: O Fatorial de zero e de um é um.
Exemplo de cálculo do Fatorial:
5! =5 * 4 * 3 * 2 * 1 ou 5! =1 * 2 * 3 * 4 *5
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num, result = 1, count = 1;

    while(count == 1)
    {
        //Solicite ao usuário um número maior ou igual a zero e inteiro
        printf("um número maior ou igual a zero e inteiro:\n");
        scanf("%d", &num);
        while(num < 0)
        {
            printf("um número maior ou igual a zero e inteiro(valor anterior invalido):\n");
            scanf("%d", &num);
        }

        for ( ; num >= 1; --num)
        {
            result *= num;
        }
        count = 0;
    }
    printf("fatorial = %d\n", result);

    printf("quer digitar mais dados se SIM digite 1 se NAO digite 0\n");
    scanf("%d", &count);

    if(count > 1 && count < 0)
    {
        printf("quer digitar mais dados se SIM digite 1 se NAO digite 0(valor anterior invalido\n)");
        scanf("%d", &count);
    }

    system("pause");
    return 0;
}