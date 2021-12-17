#include <stdio.h>
#include <stdlib.h>

int age[10];
int menor18;

int main()
{
idade();
//entre18e50();
e18e50();
system("pause");

return 0;
}

void idade()
{
int med, total;
for(int i = 0; i <=9; i++)
{
printf("Digite a %d idade\n", i+1);
scanf("%d", &age[1]);
while(age[1]<=0)
{
printf("Numero Invalido\n Digite a %d idade\n", i+1);
scanf("%d", &age[1]);
}
if(age[1]<18)
{
menor18++;
}
total+=age[1];
printf("Posicao %d idade %d\n", i, age[1]);
}
med = total/10;
printf("\nA media e %d", med);
printf("\nTotal de menores de 18 eh %d\n", menor18);
}

// void entre18e50()
// {
// printf("\nIDADES MAIORES DE 18 E MENORES DE 50 ANOS E SUAS POSICOES\n");
// for (int i = 0; i <10; i++)
// {
//     if (age[i] > 18 && age[i] < 50) printf("\nidade %d e posicao %d", age[i], i);
// }
// }

void e18e50()
{
    printf("\nidades maiores que 18 e menores que 50 com suas posicoes do vetor");
    for (int i = 0; i < 10; i++)
    {
        if (age[i] > 18 && age[i] < 50) printf("\nidade %d e posicao %d", age[i], i);
    }
}