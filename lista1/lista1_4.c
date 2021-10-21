/*4.	 Cálculo de um salário líquido de um professor. Serão fornecidos valor da hora aula, número de aulas dadas e o % de desconto do INSS.

var valor da hora, numero de aulas, salario bruto,INSS, salario liquido

valor da hora * numero de aulas = salario bruto

salario bruto % INSS

imprimir salario liquido


7,5% para até um salário mínimo (R$1.100);
9% para salários entre R$ 1.100,01 e R$ 2.203,48
12% para salários entre R$ 2.203,49 e R$ 3.305,22
14% para salários entre R$ 3.305,23 e R$ 6.433,57
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float vHora, nAulas, sBruto, INSS, sLiquido, desconto;

    printf("enviar valor da hora trabalhada \n");
    scanf("%f", &vHora);

    printf("enviar numero de aulas \n");
    scanf("%f", &nAulas);

    sBruto = vHora * nAulas;

    printf("seu salario bruto: %f\n", sBruto);


    if(INSS <= 1100) 
    {
        desconto = 7.5;
    };
        
    if(INSS >= 1100.01 && INSS <= 2203.48) 
    {
        desconto = 9;
    };

    if(INSS >= 2203.49 && INSS <= 3305.22) 
    {
        desconto = 12;
    };

    if(INSS >= 3305.23) 
    {
        desconto = 14;
    };

    sLiquido = sBruto / 100 * desconto;

    printf("sera descontado valor do INSS: %f\n", sLiquido);

    printf("seu salario liquido: %f\n", sBruto - sLiquido);

    system ("PAUSE");
    return (0);
}

