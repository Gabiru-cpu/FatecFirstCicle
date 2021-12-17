#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int age[10];

int main()
{
    
    idade();
    e18e50();
    mostrar();
    system("pause");
}

void idade()
{
    int med, total=0, menor18=0;

    for (int i = 0; i <= 9; i++)
    {
        printf("digite a %d idade\n", i+1);
        scanf("%d", &age[i]);

        while (age[i] <= 0)
        {
            printf("NUMERO INVALIDO\n digite a %d idade\n", i+1);
            scanf("%d", &age[i]);
        }

        if (age[i] < 18) menor18++;
        
        total+= age[i];

        printf("posicao %d idade %d\n", i, age[i]);
    }

    med = total/10;
    printf("\na media e %d", med);
    printf("\ntemos um total de %d menores de 18", menor18);
}

void e18e50()
{
    int cont=0;
    printf("\nVamos ver se temos idades maiores que 18 e menores que 50 com suas posicoes do vetor:");
    for (int i = 0; i < 10; i++)
    {
        if (age[i] > 18 && age[i] < 50) printf("\nidade %d e posicao %d", age[i], i);
        
        else
        {
            cont++;
        }
    }
    if (cont == 10)
    {
        printf("\nnenhuma idade maior que 18 e menor que 50 nas posicoes do vetor");
    }
    
}

void mostrar()
{
    printf("\nExibir todos os numeros digitados!");
    for (int i = 0; i < 9; i++)
    {
        printf("\n%d idade digitada = %d",i, age[i]);
    }
}