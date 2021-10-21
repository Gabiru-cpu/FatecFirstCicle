#include <stdio.h>
#include <stdlib.h>

int main()
{

	int n, n1 ,n2 , sub;
		printf("informe um numero: \n");
		scanf("%i", &n);

		printf("informe um numero: \n");
		scanf("%i", &n1);

		printf("informe um numero: \n");
		scanf("%i", &n2);

        sub = n - n1 - n2;

		if(n < 0 || n1 < 0 || n2 < 0)
		{
			printf("ERROR");
		}
		else
		{
			printf("Valor da subtracao: %i\n", sub);
		}

return 0;
} 