#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define ex2

#ifdef ex1

int TL, AS, EF, NF;

int main()
{
    setlocale(LC_ALL, "portuguese");

        printf("nota de Trabalho em laboratorio[de 0 a 2]\n");
        scanf("%d", &TL);

        printf("nota da Avalicao semestral[de 0 a 3]\n");
        scanf("%d", &AS);

        printf("nota do Exame final[de 0 a 5]\n");
        scanf("%d", &EF);

        while (TL < 0 || TL > 2 || AS < 0 || AS > 3 || EF < 0 || EF > 5)
        {
            printf("algum valor invalido\n");

            printf("nota de Trabalho em laboratorio[de 0 a 2]\n");
            scanf("%d", &TL);

            printf("nota da Avalicao semestral[de 0 a 3]\n");
            scanf("%d", &AS);

            printf("nota do Exame final[de 0 a 5]\n");
            scanf("%d", &EF);
        }
        
    CAL();

    LET();
    system("pause");
    return 0;
}

void CAL()
{
    NF = TL + AS + EF;
}

void LET()
{
    if(NF >= 8 )
    {
        printf("seu conceito foi: A");
    }

    if(NF < 8 && NF >= 7)
    {
        printf("seu conceito foi: B");   
    }

    if(NF < 7 && NF >= 6)
    {
        printf("seu conceito foi: C");   
    }

    if(NF < 6 && NF >= 5)
    {
        printf("seu conceito foi: D");   
    }

    if(NF < 5 && NF >= 0)
    {
        printf("seu conceito foi: E");   
    }
}
#endif

#ifdef ex2
/*faça um programa que receba tres notas de um aluno
, calcule e mostre a media aritmetica e a mensagem que
segue a tabela abaixo. Para alunos de exame, calcule e mostre
a nota que deverá ser tirada no exame para aprovação,
considerando que a media no exame é 6*/
int n1, n2, n3, med, exam;

int main()
{
        printf("nota de Trabalho em laboratorio[de 0 a 10]\n");
        scanf("%d", &n1);

        printf("nota da Avalicao semestral[de 0 a 10]\n");
        scanf("%d", &n2);

        printf("nota do Exame final[de 0 a 10]\n");
        scanf("%d", &n3);

        while (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10 || n3 < 0 || n3 > 10)
        {
        printf("digita novamente algum numero foi digitado incorretamente \n");

        printf("nota de Trabalho em laboratorio[de 0 a 10]\n");
        scanf("%d", &n1);

        printf("nota da Avalicao semestral[de 0 a 10]\n");
        scanf("%d", &n2);

        printf("nota do Exame final[de 0 a 10]\n");
        scanf("%d", &n3);
        }
        
        ARI();

    system("pause");
    return 0;
}

ARI()
{
    med = (n1 + n2 + n3)/3;

    if(med > 0 && med < 3)
    {
        printf("REPROVADO\n");
    }

    if(med >= 3 && med < 7)
    {
      exam = 6 - med;

        printf("EXAME: deve obter nota %d ou supeior para ser aprovado no exame\n", exam);
    }    

    if(med >= 7 && med <= 10)
    {
        printf("APROVADO\n");
    }    
}

#endif

#ifdef ex3

int MD, s1, s2, s, raiz;

int main()
{
    setlocale(LC_ALL, "ptb");
    system("color 3");
    system("title RAIZ QUADRADA");

    printf("Quer fazer a soma de dois numeros envie 1\nQuer receber a raiz quadrada de um numero digite 2\n");
    scanf("%d", &MD);

    while (MD < 1 || MD > 2)
    {
        printf("digite novamente fez algo errado \nQuer fazer a soma de dois numeros envie 1\nQuer receber a raiz quadrada de um numero digite 2\n");
        scanf("%d", &MD);
    }
    
    if(MD == 1)
    {
        SOMA();
    }
    if(MD == 2)
    {
        RAIZ();
    }

    system("pause");
    return 0;
}

void SOMA()
{
    printf("digite o primeiro numero a ser somado\n");
    scanf("%d", &s1);

    printf("digite o segundo numero a ser somado\n");
    scanf("%d", &s2);    

    s = s1 + s2;

    printf("resultado %d\n", s);
}

void RAIZ()
{
    printf("digite o numero para raiz quadrada \n");
    scanf("%d", &raiz);  

    printf("a raiz quadrada de %d e %.2f\n", raiz, sqrt(raiz));  

}

#endif