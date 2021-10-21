/*Receba K números inteiros quaisquer, K representa a quantidade de
termos solicitada pelo usuário e cada termo pode ser representado
pela variável N. Exiba a quantidade de números positivos recebidos
e a média dos números ímpares. . Utilize o laço do while para
entrada da quantidade K e um laço while para efetuar os cálculos
solicitados.*/
#include <stdio.h>
#include <stdlib.h>

int K, N = 0, posit = 0, MED, count = 0, medImpa = 0, impares;

int main(void)
{

    while(count == 0){
        printf("Digite um numero: ");
        scanf("%d",&K);
        N++;

        if(K > 0) posit++;
        

        MED = K % 2;

        if(MED != 0) 
        {
            medImpa++;
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
            impares = medImpa;
            medImpa = medImpa * 100 / N;
            printf("N = %d numeros positivos = %d voce digitou de numeros impares = %d\n media de impares em porcentagem = %d \n", N, posit, impares, medImpa);

            count = 0;
        }
        
    }

    system("pause");
    return 0;
}