/*Receba um número inteiro e mostre os números pares a partir de 2 até esse inteiro. 
CASO O NUMERO DIGITADO SEJA MENOR QUE 2 SOLICITE UM NOVO NÚMERO.*/

#include <stdio.h>
#include <stdlib.h>

int num, pares = 2, medidor = 1;

int main(void)
{
    printf("digite um numero maior que 2: \n");
	scanf("%i", &num);



    while(num < 2)
    {
        printf("digite um numero maior que 2: \n");
        scanf("%i", &num);
    }

    if (num == 2)
    {
        pares = 0;
        printf("pares: %i\n", pares);
        printf("numero digitado: %i\n", num);
    }

    if(num > 2) medidor = 3;

    while(medidor > 2)
    {
        printf("pares: %i\n", pares);
        pares = pares + 2;
        if (pares >= num)
        {
            medidor = 1;
        }
        

    }

    if(pares >= num)
    {
        printf("numero digitado: %i\n", num);
    }

    system("pause");
    return 0;
}