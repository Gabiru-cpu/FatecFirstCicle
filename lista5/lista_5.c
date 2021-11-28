#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Esse trabalho foi feito pelos integrantes do grupo 2:
Pedro Ian, Gabriel Henrique, Luana Ferreira*/


#define ex04

#ifdef ex01

int fatorial(int numf);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int f = 0;
    fflush(stdin);
do
{
printf("Digite o valor do fatorial que quer obter:");
scanf("%d", &f);
if (f <1)
printf("O fatorial tem que ser maior que 0!");
} while (f <1);
printf("O valor do fatorial e %d\n e: %d", f, fatorial(f));
}

int fatorial(int numf)
{
    if (numf ==1)
        return 1;
      else  
      return (numf * fatorial(numf-1));
}
#endif


#ifdef ex02

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
#endif

#ifdef ex03

void limpar_buffer();
int recebe_valor_usuario();
int mostra_soma(int t1, int t2);
int mostra_multiplicacao(int m1, int m2);
int mostra_med(int d1, int d2);
int ABC, cnt, qnt=1, medi;

int main()
{
    printf("\nOlá tudo bem, qual operação você quer fazer \n ");
    printf("\nA digite '1'(A soma dos números pares desse intervalo, incluindo os números digitados)\n");
    printf("\nB digite '2'(A multiplicação dos números ímpares desse intervalo de números incluindo os números digitados) \n");
    printf("\nC digite '3'(A média dos números que são múltiplos de 5 e 7 ao mesmo tempo)\n");
    scanf("%d", &ABC);

    while (ABC != 1 && ABC != 2 && ABC != 3)
    {
        printf("\nOlá tudo bem, qual operação você quer fazer \n ");
        printf("\nA digite '1'(A soma dos números pares desse intervalo, incluindo os números digitados)\n");
        printf("\nB digite '2'(A multiplicação dos números ímpares desse intervalo de números incluindo os números digitados) \n");
        printf("\nC digite '3'(A média dos números que são múltiplos de 5 e 7 ao mesmo tempo)\n");
        scanf("%d", &ABC);
    }

    limpar_buffer();
    recebe_valor_usuario();
 
}

void limpar_buffer()
{
fflush(stdin);
}

int recebe_valor_usuario()
{
    int v1, v2;
printf("\nO primeiro numero deve ser maior que o segundo");
printf("\nDigite o primeiro número:");
scanf("%d",&v1);
printf("\ndigite o segundo número:");
scanf("%d",&v2);

while (v2>=v1)
{
    printf("\nO primeiro numero deve ser maior que o segundo");
    printf("\nDigite o primeiro número:");
    scanf("%d",&v1);
    printf("\ndigite o segundo número:");
    scanf("%d",&v2);
}


switch (ABC)
{
    case 1:
            mostra_soma(v1, v2);
        break;
    case 2:
        mostra_multiplicacao(v1, v2);
        break;
    case 3:
        mostra_med(v1, v2);
        printf("%d", medi);
        break;
}

return 0;
}

int mostra_soma(int t1, int t2)
{
    for (int i = t2; i <= t1; i+=2)
    {
        printf("\n%d", i);
    }
}

int mostra_multiplicacao(int m1, int m2)
{
    int i;
    for ( i = m2; i <= m1; i*=2)
    {
        printf("%d", i);
    }
}

int mostra_med(int d1, int d2)
{

    for (int i = d2; i <= d1; i++)
    {
        if (i%35 == 0)
        {
            cnt+=i;
            qnt++;
        }
    }
    medi = cnt/qnt;
    printf("%d", medi);
}
#endif


#ifdef ex04
int v1, v2, n, cont=0, primo=0, num=0, vetor[];

int main()
{
    system("color 02");
    recebe_valor_usuario();
    num=0;
    primos();
    if (cont == 0)
    {
        printf("\nnenhum numero primo no intervalo\n\n");
    }
    else
    {
        printf("\nforam encontrados %d numeros primos\n\n", cont);
    }
    system("pause");
    return 0;
}

void recebe_valor_usuario()
{
printf("\nO primeiro numero deve ser maior que o segundo");
printf("\nDigite o primeiro número:");
scanf("%d",&v1);
printf("\ndigite o segundo número:");
scanf("%d",&v2);

while (v2>=v1)
{
    printf("\nERRO O primeiro numero deve ser maior que o segundo");
    printf("\nDigite o primeiro número:");
    scanf("%d",&v1);
    printf("\ndigite o segundo número:");
    scanf("%d",&v2);
}

for (int i = v2; i <= v1; i++)
{
    vetor[num]=i;
    printf("posicao %d = %d\n", num ,vetor[num]);
    num++;
}
}

void primos()
{

for (int j = v2; j <= v1; j++)
{
    n=vetor[num];

    if (n==1)
    {
        printf("\n%d e um numero primo e esta armazenado na posicao %d", n, num);
    }

    else
    {
        primo=1;
        for (int k = 2; k < n; k++)
        {
            if (n%k==0)
            {
                primo=0;
            }
            
        }
        if (primo ==1 )
        {
            cont++;
            printf("\n%d e um numero primo e esta armazenado na posicao %d", n, num);
        }
        
    }
    num++;
}   
    
}

#endif