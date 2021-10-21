/*8.	Elabore um programa que efetue o cálculo do reajuste de salário de um funcionário. Considere que o funcionário deve receber um reajuste de 15% caso seu salário seja menor que 800 reais. Se o salário for maior ou igual a 800 e menor ou igual a 1000, seu reajuste será de 10 %; caso seja maior que 1000, o reajuste deve ser de 5%. Ao final do programa deve apresentar o valor antigo e o novo salário.

*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float sal, porcent, salF, porcentF;

    printf("quanto e seu salario atual: \n");
    scanf("%f", &sal);

    if(sal < 800)
    {
        porcent = 15;
    };

    if(sal >= 800 && sal <= 1000)
    {
        porcent = 10;
    };

    if(sal > 1000)
    {
        porcent = 5;
    };

    porcentF = sal / 100 * porcent;

    salF = porcentF + sal;

    printf("salario antigo: %f\n", sal);
    printf("salario novo: %f\n", salF);

    system("PAUSE");
    return 0;
}
