/*9.	Leia quatro valores referentes às notas escolares de um aluno e exiba uma mensagem dizendo que ele foi aprovado se a média for maior ou igual a 5. Caso contrário informe que ele está reprovado. Apresente junto à mensagem o valor da média obtida pelo aluno independente de ter sido aprovado ou não. As notas deverão ser maiores ou iguais a zero e menores ou iguais a dez.

4 notas(de 0 a 10) se tiver mais q 4 passou se nao reprovou*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float n1, n2, n3, n4, ntas,nF;

    printf("nota da prova 1(notas apenas de 0 a 10)\n");
    scanf("%f", &n1);
    printf("nota da prova 2(notas apenas de 0 a 10)\n");
    scanf("%f", &n2);
    printf("nota da prova 3(notas apenas de 0 a 10)\n");
    scanf("%f", &n3);
    printf("nota da prova 4(notas apenas de 0 a 10)\n");
    scanf("%f", &n4);

    ntas = n1 + n2 + n3 + n4;
    
    if(n1 >= 0 && n1 <= 10 && n2 >= 0 && n2 <= 10 && n3 >= 0 && n3 <= 10 && n4 >= 0 && n4 <= 10)
    {
        nF = ntas / 4;

        printf("nota final: %0.2f\n", nF);
        if(nF >= 5){
            printf("Aluno aprovado \n");
        }
        else
        {
            printf("Aluno reprovado \n");
        }
    }
    else{
    printf("voce colocou notas maiores que 10 ou menores que 0\n");
    }

    system("PAUSE");
    return 0;
}
