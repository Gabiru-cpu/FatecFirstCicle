/*10.	Receba dois números, o primeiro deve ser maior que 10 e menor que 25, o segundo deve ser maior ou 
igual a zero, o terceiro deve ser a soma dos dois primeiros e o quarto é o produto dos três números anteriores. 
Calcule e exiba a soma dos quadrados de cada um dos quatro números. Caso o resultado seja menor que 50000, solicite 
novos dados.

*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float n1, n2, n3, n4, nFinal;

    printf("digite um numero maior que 10 e menor que 25 (11 a 24):\n");
    scanf("%f", &n1);

    printf("digite um numero maior ou igual a zero:\n");
    scanf("%f", &n2);

    if(n1 > 10  && n1 < 25 && n2 >= 0)
    {
            n3 = n1 + n2;

        n4 = n1 * n2 * n3;

        printf("valor de quarto numero: %0.2f\n", n4);

        nFinal = (n1 * n1) + (n2 * n2) + (n3 * n3) + (n4 * n4);

        if(nFinal < 50000)
        {

        printf("tente de novo, dados resultaram em menos de 50000\n");

        printf("resultado: %0.2f\n", nFinal);
        }
        else{

        printf("Numero superior ou igual a 5k\n");

        printf("resultado: %0.2f\n", nFinal);

        }

    }
    else
    {
    printf("os numeros digitados devem seguir as regras de valores ditas(primeiro numero deve ser maior que 10 e menor que 25 e o segundo numero deve ser numero maior ou igual a zero):\n");
    }

    return 0;
}
