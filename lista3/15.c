#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int K, fi1=0, fi2=1, fi3, div3, soma, count = 1;
/*
15) Gere a seguinte sequência abaixo para K termos. K representa a
quantidade de números que o usuário gostaria quer fosse exibida
dessa sequênciaMostre também a somatória apenas dos números
divisíveis por 3 dessa sequência. Utilize o laço do while para a
entrada da quantidade K e um laço for para efetuar os cálculos
solicitados.
1, 1, 2, 3, 5, 8, 13, 21,.....
*/
int main()
{
    setlocale(LC_ALL, "pt-BR");

    while(count == 1)
    {
        printf("digite a quantidade de numeros que deseja mostrar da sequencia\n");
        scanf("%d", &K);

        while(K < 0){
            printf("numero invalido digite novamente");
            scanf("%d", &K);
        }

        while (fi2 < K)
        {
            fi3= fi2 + fi1;
            div3 = fi1 + fi2;//dava pra fazer com o fi3 mas sei la quis fazer assim :)
            printf("%d\n", fi3);
            fi1 = fi2;
            fi2 = fi3;

            if(div3 % 3 == 0) soma += div3;
        }
        count = 0;
    }

    //somatória apenas dos números divisíveis por 3 dessa sequência
    printf("somatória apenas dos números divisíveis por 3 dessa sequência = %d \n", soma);

    printf("quer digitar mais dados se SIM digite 1 se NAO digite 0\n");
    scanf("%d", &count);
    if(count > 1 && count < 0){
        printf("quer digitar mais dados se SIM digite 1 se NAO digite 0(valor anterior invalido\n)");
        scanf("%d", &count);
    }

    system("pause");
    return 0;
}