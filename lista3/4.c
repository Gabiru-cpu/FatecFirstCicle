/*4) Pergunte ao usuário quantos alunos tem na sala dele. Em seguida,
através de um laço do while, peça ao usuário para que entre com as
notas de todos os alunos da sala, um por vez. Exiba a 
média da turma e quantas notas foram digitadas maiores ou iguais a 6*/

#include <stdio.h>
#include <stdlib.h>

int total,count = 1, apv;
float nota,soma=0.0;

int main (void)
{
    printf("Numero de alunos na sala: ");
    scanf("%d",&total);

    while (total < 7)
    {
        printf("Numero de alunos na sala(numero anterior muito pequeno): ");
        scanf("%d",&total);
    }
        

    while(count <= total)
    {
        printf("Nota do aluno %d: ",count);
        scanf("%f",&nota);

        while (nota < 0 || nota > 10)
        {
            printf("Nota invalida digite um valor de 0 a 10: ");
            scanf("%f",&nota);
        }

        if(nota >= 6) apv++;

        soma = soma + nota;

        count++;
    }

    printf("Media da turma: %.2f\n", soma/total);
    printf("Maior ou igual a 6: %d\n", apv);
}