#include <stdio.h>
#include <stdlib.h>
    //1.	Leia o preço de um produto e inflaciona esse preço em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100.

int main(void)
{
    float preco, infla, result;

    printf("digite o valor do produto:\n");
    scanf("%f", &preco);

    if(preco < 100)
    {
        infla = preco / 100 * 10;
    }
    else
    {
        infla = preco / 100 * 20;
    }

    result = preco + infla; 


    printf("valor: %0.2f\n", preco);
    printf("inflacao: %0.2f\n", infla);
    printf("valor + inflacao: %0.2f\n", result);

    return 0;
}