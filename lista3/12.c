#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
>= 70 quilos <= 85.5---------

pessoas com peso superior a 75q---------

menor peso ---------

quantidade de vezes que o menor peso foi encontrado ----------

quantidade de vezes que o maior peso foi encontrado ----------
*/

int P, count = 1, k1;
float K, N, Pent70e85, Psup75, menorP, qntMenorp, maiorP, qntMaiorp;

int main (void)
{

    setlocale(LC_ALL, "pt-BR");


while(count == 1){
    printf("Digite seu peso em quilos: ");
    scanf("%f", &K);
    P++;

    if (K < 1)
    {
        printf("Digite seu peso em quilos(numero anterior invalido): ");
        scanf("%f", &K);
    }

    if (K >= 70 && K <= 85.5)
    {
        Pent70e85++;
    }

    if(K > 75)
    {
        Psup75++;
    }

    if (k1==0)
    {
        maiorP =K;
        menorP =K;
        k1++;
        qntMaiorp++;
        qntMenorp++;
    }
    
    if(K>=maiorP)
    {
        maiorP = K;
        qntMaiorp++;
    }
    if (K<=menorP)
    {
        menorP = K;
        qntMenorp++;
    }

    printf("quer digitar mais dados se SIM digite 1 se NAO digite 0\n");
    scanf("%d", &count);
    if(count > 1 && count < 0){
        printf("quer digitar mais dados se SIM digite 1 se NAO digite 0(valor anterior invalido\n)");
        scanf("%d", &count);
    }

}
    
    printf("voce digitou %d pesos\nforam registrado  %.0f pessoas com peso igual ou maior que 70 e igual ou menor que 85.5 \nforam registrados %.0f pessoas maiores que 75\nMenor peso registrado:  %.0f\n quantidade de vezes que o menor peso foi encontrado:  %.0f\n quantidade de vezes que o maior peso foi encontrado", P, Pent70e85, Psup75, menorP, qntMenorp, qntMaiorp);


    system ("pause");
    return 0;
}