#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*17
Uma empresa contratou a quantidade de funcionários representada 
pela variável Y. Conforme o valor das vendas mensais, os 
funcionários adquirem pontos que determinarão seus salários ao 
final de cada mês. Sabe-se que esses funcionários trabalharão nos
meses de novembro a janeiro do ano subsequente. Utilize os laços que desejar.

a) Leia as pontuações nos três meses de cada funcionário.

b) Calcule e mostre a pontuação geral de cada funcionário nos três meses.

c) Calcule e mostre a média das pontuações de cada  funcionário nos três meses soma os meses e divide por 3.

d) Determine e mostre a maior pontuação atingida entre todos os funcionários nos três meses.*/
int Y=1, nov, dez, jan, novM, dezM, janM, Pnov, Pdez, Pjan, med, total, totalG, count = 1;

int main (void)
{
    setlocale(LC_ALL, "Portuguese");

    while (count == 1)
    {
        printf("digite as vendas do %d funcionario no mes de dezembro:\n", Y);
        scanf("%d", &nov);
        
        printf("digite as vendas do %d funcionario no mes de dezembro:\n", Y);
        scanf("%d", &dez);

        printf("digite as vendas do %d funcionario no mes de dezembro:\n", Y);
        scanf("%d", &jan);

        if (nov >= novM)
        {
            novM = nov;
        }
        if (dez >= dezM)
        {
            dezM = dez;
        }
        if (jan >= janM)
        {
            janM = jan;
        }

        Pnov = nov / 2;
        Pdez = dez / 2;
        Pjan = jan / 2;

        total = Pjan + Pdez + Pnov;
        med = total / 3;
        totalG += total;

        printf("%d vendedor. pontuação de novembro = %d\npontuação de dezembro = %d\npontuação de janeiro = %d\n media dos meses = %d\n maior valor em novembro = %d\n maior valor em dezembro = %d\n maior valor em janeiro = %d\n", Y, Pnov, Pdez, Pjan, med, novM, dezM, janM);

        printf("quer digitar mais dados se SIM digite 1 se NAO digite 0\n");
        scanf("%d", &count);

        if(count > 1 && count < 0){
            printf("quer digitar mais dados se SIM digite 1 se NAO digite 0(valor anterior invalido\n)");
            scanf("%d", &count);
        }

        Y++;
    }
    

    system ("pause");
    return 0;
}