#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex8

#ifdef ex1

int i=50;

int main(void)
{
    setlocale( LC_ALL, "portuguese");
    welcome();
    nImparesd50a150();
    system("pause");
    return 0;
}

    welcome()
    {
        printf("Olá, bem vindo exibirei os números ímpares de 50 até 150.\n\n");
    }
    nImparesd50a150()
    {
        for (i = 50; i <=150 ; i++)
        {
            if(i % 2 != 0)
            {
                printf("%d ", i);
            }
        }
    }

#endif

#ifdef ex2

int i= -10;

int main(void)
{
    welcome();
    nPardm10a50();
    system("pause");
    return 0;
}

    welcome()
    {
        printf("Olá, bem vindo exibirei os números pares de -10 até 50.\n\n");
    }
    nPardm10a50()
    {
        while (i <= 50)
        {
            if (i % 2 == 0)
            {
                printf("%d ", i);
            }
            i++;
        }
        
    }
#endif

#ifdef ex3
//Faça um programa que exiba os números que são múltiplos de 5 entre 1e 100. Utilize o laço while.
int n=1;
int main()
{
    setlocale(LC_ALL, "portuguese");
    bv();
    exiba();
    system("pause");
    return 0;
}

    bv()
    {
        printf("Bem vindo amigo essa aplicação vai mostrar os múltiplos de 5 entre 1 e 100\n\n");
    }
    exiba()
    {
        while (n<=100)
        {
            if(n % 5 == 0)
            {
                printf("%d ",n);
            }
         n++;   
        }
    }
#endif

#ifdef ex4
//Faça um programa que exiba os números que são múltiplos de 3 e são ímpares.

int n=1;
int main()
{
    setlocale(LC_ALL, "portuguese");
    bv();
    m3();
    system("pause");
    return 0;
}

bv()
{
    printf("Bem vindo amigo essa aplicação vai mostrar os múltiplos de 5 entre 1 e 100\n\n");
}

m3()
{
    while (n <= 100)//no exercicio nao pede limite ent coloquei 100 pra nao ficar mostrando infinitamente os numeros
    {
        if(n % 3 == 0 && n % 2 != 0)
        {
            printf("%d ",n);
        }
        n++;
    }
}
#endif

#ifdef ex5
/*Faça um programa em C que solicite ao usuário a quantidade de termos que ele deseja exibir da seguinte sequência:3, 6, 9, 12, 15,...
Obs.: Crie uma função para garantir que essa quantidade deve ser deve ser maior que zero e representada pela variável K.*/

int K, count=1;

int main(void)
{
    setlocale(LC_ALL, "portuguese");
    enviar();
    cal();
    return 0;
}

enviar()
{
    printf("digite quantos termos serão exibidos\n\n");
    scanf("%d", &K);
    
    if(K < 1)
    {
        verificar();
    }
}

verificar()
{
    while (K<1)
    {
        printf("digite quantos termos serão exibidos(um numero maior que 0)\n\n");
        scanf("%d", &K);
    }
    cal();
}

cal()
{
    while (count<=K)
    {
        printf("%d ", count*3);
        count++;
    }
}

#endif

#ifdef ex6
/*Faça um programa em C que solicite ao usuário a quantidade de termos que ele deseja exibir da seguinte sequência: 1/4, 1/8, 1/12, 1/16, 1/20,...
Obs.: Crie uma função para garantir que essa quantidade deve ser deve ser maior que zero e representada pela variável K.*/

int K,i;

int main()
{
    setlocale(LC_ALL, "portuguese");
    enviar();
    cal();
    system("pause");
    return 0;
}

enviar()
{
    printf("digite quantos termos serão exibidos\n\n");
    scanf("%d", &K);
    
    if(K < 1)
    {
        verificar();
    }
}

verificar()
{
    while (K<1)
    {
        printf("digite quantos termos serão exibidos(um numero maior que 0)\n\n");
        scanf("%d", &K);
    }
    cal();
}

cal()
{
    for (i = 1; i <= K; i++)
    {
        printf("1/%d ", i*4);
    }
    
}

#endif

#ifdef ex7



int K,i;

int main()
{
    setlocale(LC_ALL, "portuguese");
    enviar();
    cal();
    system("pause");
    return 0;
}

enviar()
{
    printf("digite quantos termos serão exibidos\n\n");
    scanf("%d", &K);
    
    if(K < 1)
    {
        verificar();
    }
}

verificar()
{
    while (K<1)
    {
        printf("digite quantos termos serão exibidos(um numero maior que 0)\n\n");
        scanf("%d", &K);
    }
    cal();
}

cal()
{
    for (i = 1; i <= K; i++)
    {
        printf("%d/%d ", i*2, i*5);
    }
    
}

#endif

#ifdef ex8

int X;
float H, R=1;

int main()
{
    setlocale(LC_ALL, "");
    snd();
    sndtrm();
    view();
    system("pause");
    return 0;
}

snd()
{
    printf("qual a quantidade de termos cujo você quer que apareça?\n");
    scanf("%d", &X);
    while (X<1)
    {
        printf("Valor invalido o numero deve ser maior que 0\nqual a quantidade de termos cujo você quer que apareça?\n");
        scanf("%d", &X);
    }
}

sndtrm()
{
    for(int n = 1; n <= X; n++)
    {
        printf("\ndigite o %i° termo: ", n);
        scanf("%f", &H);
        while (H<15)
        {
            printf("\nValor invalido o numero deve ser maior ou igual a 15\ndigite o %i° termo: ", n);
            scanf("%f", &H);
        }
        R = R * H;
    }
}

view()
{
    printf("Produto: %.00f\n\n", R);
}

#endif