/*Receba K números quaisquer, K representa a quantidade de termos
solicitada pelo usuário e cada termo pode ser representado pela
variável N. Exiba o maior número digitado. Utilize o laço do while
para a entrada da quantidade K e um laço for para exibir o maior
número.*/
#include <stdio.h>
#include <stdlib.h>

int K, N = 0, count = 0, maior;

int main(void)
{
    while(count == 0){
        printf("Digite um numero: ");
        scanf("%d",&K);
        N++;

        if( maior <= K)
        {
            maior = K;
        }


        printf("esta satisfeito com os numeros digitados se SIM envie 1 se NAO 0: \n");
        scanf("%d",&count);

        if(count < 0 || count > 1)
        {
            printf("esta satisfeito com os numeros digitados se SIM envie 1 se NAO 0(apenas 0 ou 1): \n");
            scanf("%d",&count);
        }
        
        if (count == 1)
        {
            printf("Maior valor digitado: %d Numeros digitados: %d\n", maior, N);

            count = 0;
        }   
    }
    system("pause");
    return 0;
}