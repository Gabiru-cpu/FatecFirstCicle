#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*4. Crie uma função para armazenar na variável global do tipo vetor chamada Primos os números primos entre 
esses dois números. Exiba o conteúdo do vetor Primos no interior da função main. Se não houver nenhum número 
primo dentro deste intervalo informe ao usuário.*/

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
