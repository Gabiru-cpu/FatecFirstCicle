#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int vetor [5];
    int num=0;

    setlocale(LC_ALL, "portuguese");
    for(int i=0; i<5; i++)
    {
	num+= 5;  
	vetor[i]= num;
    printf("vetor posicao %d = %d\n", i, vetor[i]);
  
    }
    system("pause");
    return 0;
}