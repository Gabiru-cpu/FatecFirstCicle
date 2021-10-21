/*5.	 Ler uma temperatura em graus Celsius e transformá-la em graus Fahrenheit.
        1,8 e adicione 32 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float C, F;

    printf("escreva a temperatura em Celsius: \n");
    scanf("%f", &C);

    F = C * 1.8 + 32;

    printf("conversao desse valor em Celsius para Fahrenheit: %f\n", F);
    system ("PAUSE");
    return 0;
}
