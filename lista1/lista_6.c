/*6.	Faça um programa que receba o ano do nascimento de uma pessoa e o ano atual, calcule e mostre:

a.	A idade dessa pessoa
b.	Quantos anos essa pessoa terá em 2020.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    
    int age, anoAtual, yourAge, _2020 = 2020, ageIn2020;

    printf("diga o ano em que nasceu: ");
    scanf("%d", &age);

    printf("diga o ano atual: ");
    scanf("%d", &anoAtual);

    yourAge = anoAtual - age;

    ageIn2020 = _2020 - age;

    printf("quantos anos voce tem/tera no ano atual: %d\n", yourAge);
    printf("quantos anos voce tinha em 2020: %d\n", ageIn2020);

    return 0;
}

