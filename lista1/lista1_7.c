// 7.	O custo ao consumidor de um carro novo é a soma do preço da fábrica com o percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos. Calcule e mostre:

// a.	O valor correspondente ao lucro do distribuidor

// b.	O valor correspondente aos impostos

// c.	O preço final do veículo



#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    float pFabrica, pLucro, imposto, pFinal;

    printf("iforme o valor de Fabrica: \n");
    scanf("%f", &pFabrica);

    printf("iforme o percentual de lucro da distribuidora: \n");
    scanf("%f", &pLucro);

    printf("iforme o valor de impostos: \n");
    scanf("%f", &imposto);

    pLucro <- pFabrica * (pLucro / 100);

    imposto <- pFabrica * (imposto / 100);

    pFinal = pFabrica + pLucro + imposto;

    printf("lucro da distribuidora R$: %f\n", pLucro);
    printf("Impostos R$: %f\n", imposto);
    printf("Valor final R$: %f\n", pFinal);

    system ("PAUSE");
    return 0;
}