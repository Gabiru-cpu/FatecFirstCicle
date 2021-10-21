#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Receba a quantidade K de números quaisquer. K representa essa
quantidade e deve ser digitada pelo usuário. A variável num
armazena cada uma dos K números digitados. ''Calcule e mostre a
quantidade de números positivos divisíveis por 3'', 'a média dos
números negativos'. ''Exiba também o maior número encontrado e
quantas vezes ele apareceu''. Utilize o laço do while para a entrada
da quantidade K e um laço for para efetuar os calculos e as
comparações solicitadas.
*/

int K, num, div3, KD3, maiorN, qntM, medNeg, numNeg, cont = 1;

int main()
{
    setlocale(LC_ALL, "pt-BR");

    while (cont == 1)
    {
        printf("digite um numero inteiro\n");
        scanf("%d", K);
        num++;

        div3 = K % 3;

        if(div3 == 0)
        {
            KD3++;
        }

        if(K < 0)
        {
            numNeg++;
        }
        medNeg = numNeg / num;

        if (K >= maiorN)
        {
            maiorN = K;
            qntM++;
        }
        cont = 0;
    }
        printf("quantidade de números positivos divisíveis por 3 = %d\n média dos números negativos = %d\n maior número encontrado = %d\n quantas vezes foram encontrado o maior numero = %d\n", KD3, medNeg, maiorN, qntM);

    printf("quer digitar mais dados se SIM digite 1 se NAO digite 0\n");
    scanf("%d", &cont);
    if(cont > 1 && cont < 0){
        printf("quer digitar mais dados se SIM digite 1 se NAO digite 0(valor anterior invalido\n)");
        scanf("%d", &cont);
    }

    system("pause");
    return 0;
}