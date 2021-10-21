/*Solicite ao usuario numereos quaisquer ate que a soma desses 
numeros digitados seja superior ou igual a 20 exiba a soma e 
utilize o laço while*/

#include <stdio.h>
#include <stdlib.h>

int total = 20,count = 1;
float nota,soma=0.0;

int main(void)
{
    while(soma < total)
    {
        printf("Numero %d: ",count);
        scanf("%f",&nota);

        soma = soma + nota;

        count++;
    }

    if (soma == total)
    {
        printf("soma dos numeros digitados: %.0f, igual a 20\n", soma);
    }
    if (soma > total)
    {
        printf("numero(s) digitados: %.0f, maior que 20\n", soma);
    }
    
    
    return 0;
}
