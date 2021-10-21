/*Receba a quantidade de salários de K indivíduos. K representa essa
quantidade e deve ser digitada pelo usuário. A variável Salário
armazena cada uma dos K salários digitados. Calcule e mostre a
somatória dos salários superiores a 3 salários mínimos e inferior ou
igual a 7 salários mínimos. Exiba também o maior e o menor salário
encontrado. Utilize o laço while para a entrada da quantidade K e
um laço while para efetuar os cálculos e as comparações solicitadas.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int K, N, sal, maiorsal, menorsal, count = 0, k1 = 0;

int main()
{
    setlocale(LC_ALL, "pt-BR");

     while(count == 0){
        printf("Digite um salário: ");
        scanf("%d",&K);
        if(K < 1)
        {
            printf("Digite um salário(valor anterior invalido): ");
            scanf("%d",&K);
        }
        N++;
        if (k1==0)
        {
            maiorsal =K;
            menorsal =K;
            k1++;
        }
        
        if(K>maiorsal)
        {
            maiorsal = K;
        }
        if (K<menorsal)
        {
            menorsal = K;
        }

        if(K > 3300 && K <= 7150)
        {
            sal = sal + K;
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
            printf("Maior valor digitado: %d Menor valor digitado: %d Numero de salarios digitados: %d Calculo de salários superiores a 3 mínimos e inferior ou igual a 7 salários mínimos: \n", maiorsal, menorsal, N, sal);

            count = 0;
        }   
    }

    system("pause");
    return 0;
}