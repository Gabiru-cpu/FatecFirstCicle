#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
a) A quantidade total de livros lidos pelos entrevistados menores de 10 anos.
b) A quantidade de mulheres que leram 5 livros ou mais.
c) A média de idade dos homens que leram menos que 5 livros.
d) O percentual de pessoas que não leram LIVROS.*/

char gen[10];
int id, somaDIH, qntDIH, qntP, qntPN, qlN, A, B, C, D, cont;

int main()
{
    setlocale(LC_ALL, "pt-BR");

    while (cont == 0)
    {

        printf("olá estamos fazendo uma pesquisa poderia responder algumas perguntas?\n qual seu genero?(masculino ou feminino)");
        gets(gen);

        printf("qual a sua idade?");
        scanf("%d", id);

        if(id < 1)
        {
            printf("qual a sua idade?(valor anterior invalido)"); 
            scanf("%d", id);
        } 
        
        printf("quantidade de livros lidos no ano anterior?");
        scanf("%d", qlN);

        if(qlN < 0)
        {
            printf("quantidade de livros lidos no ano anterior(valor anterior invalido)?"); 
            scanf("%d", qlN);
        } 
        qntP++;

        if(gen =="masculino" && qlN < 5)
        {
            somaDIH = somaDIH + id;
            qntDIH++;
        }
        
        if(qlN == 0)
        {
            qntPN++;
        }
        //a) A quantidade total de livros lidos pelos entrevistados menores de 10 anos.
        if(id < 10)
        {
            A = A + qlN;
        }
        //b) A quantidade de mulheres que leram 5 livros ou mais.
        if(gen == "femenino" && qlN >= 5)
        {
            B++;
        }
        //c) A média(soma das idades dividido pela quantidade de idades) de idade dos homens que leram menos que 5 livros.
        C =somaDIH / qntDIH;
        //d) O percentual de pessoas que não leram LIVROS.
        D = qntPN * 100 / qntP;
        cont = 1;
    }
    
    printf("quantidade total de livros lidos pelos entrevistados menores de 10 anos = %d \n A quantidade de mulheres que leram 5 livros ou mais = %d \n A média de idade dos homens que leram menos que 5 livros = %d \n O percentual de pessoas que não leram LIVROS = %d \n", A, B, C, D);

    printf("quer digitar mais dados se SIM digite 0 se NAO digite 1\n");
    scanf("%d", &cont);
    if(cont > 1 && cont < 0){
        printf("quer digitar mais dados se SIM digite 0 se NAO digite 1(valor anterior invalido\n)");
        scanf("%d", &cont);
    }

    
    system("pause");
    return 0;
}