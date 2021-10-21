#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int id;
    float nota1, nota2, nota3, MA, ME;

    printf("digite seu ID:\n");
    scanf("%d", &id);

    if(id < 1)
    {
        printf("ID invalido\n");
    }
    else
    {
        printf("digite a nota da prova 1:\n");
        scanf("%f", &nota1);

        printf("digite a nota da prova 2:\n");
        scanf("%f", &nota2);

        printf("digite a nota da prova 3:\n");
        scanf("%f", &nota3);

        printf("digite a media de exercicios:\n");
        scanf("%f", &ME);

        if(nota1 < 0|| nota2 < 0|| nota3 < 0|| ME < 0 || nota1 > 10|| nota2 > 10|| nota3 > 10|| ME > 10)
        {
            printf("Valor de nota invalido\n");
        }
        else
        {
            MA = (nota1 + nota2 * 2 + nota3 * 3 + ME)/7;

            printf("Nota 1: %0.2f\n", nota1);
            printf("Nota 2: %0.2f\n", nota2);
            printf("Nota 3: %0.2f\n", nota3);
            printf("Nota ME: %0.2f\n", ME);

            printf("media de aproveitamento: %0.2f\n", MA);

            if(MA >= 9)
            {
                printf("ID do aluno: %i\n", id);


                printf("Conceito: A\n");
                printf("Situacao: APROVADO\n");
            }

            if(MA > 7.49 && MA < 9)
            {
                printf("ID do aluno: %i\n", id);

                printf("Conceito: B\n");
                printf("Situacao: APROVADO\n");
            }

            if(MA > 5.9 && MA < 7.5)
            {
                printf("ID do aluno: %i\n", id);


                printf("Conceito: C\n");
                printf("Situacao: APROVADO\n");
            }

            if(MA > 3.9 && MA < 6)
            {
                printf("ID do aluno: %i\n", id);

                printf("Conceito: D\n");
                printf("Situacao: REPROVADO\n");
            }

            if(MA < 4)
            {
                printf("ID do aluno: %i\n", id);

                printf("Conceito: E\n");
                printf("Situacao: REPROVADO\n");
            }
        }
    }
    return 0;
}