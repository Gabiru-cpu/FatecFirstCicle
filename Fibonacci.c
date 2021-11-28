#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int i, ant=0, prox=1, soma, somaTotal, Fibo[10], medfi;
    
int main()
{
    int qntTermos;
    setlocale(LC_ALL, "pt-BR");

    printf("Digite a quantidade de termos de fibonacci: ");
    scanf("%d", &qntTermos);

        
    while (qntTermos<=0)
    {
        printf("Digite a quantidade de termos de fibonacci(valor deve ser maior que 0): ");
        scanf("%d", &qntTermos);
    }

        while (qntTermos<3 || qntTermos>10)
    {
        printf("Digite a quantidade de termos de fibonacci(valor deve ser entre 3 a 10): ");
        scanf("%d", &qntTermos);
    }

    MediaFibonacci(qntTermos);

    printf("\nQuantidade de termos: %d", qntTermos);
    for (i = 0;i<qntTermos; i++)
    {
        printf("\ntermo %d: %d", i,Fibo[i]);
    }
    printf("\nMedia dos termos arredondado: %d", medfi);

}

void MediaFibonacci(int qntT)
{
    Fibo[0] = ant;
    Fibo[1] = prox;
    
    for (i=0; i<qntT-2; i++)
    {
        soma=ant+prox;
        somaTotal+=soma;
        Fibo[i+2]=soma;
        ant=prox;
        prox=soma;
    }
    medfi=somaTotal/qntT;
}
