#include <stdio.h>
#include <stdlib.h>

    int num ,cont = 0;
    float result;

int main(void)
{
    while (cont == 0)
    {
        printf("Digite um numero maior que 0: ");
        scanf("%d",&num);

        while(num < 1)
        {
            printf("Digite um numero maior que 0: ");
            scanf("%d",&num);
        }

        result = num % 2;
        
            if (result != 0)
            {
                printf("numero impar: %d\n", num);
            }

            if (result == 0)
            {
                printf("numero par: %d\n", num);
            }
    }
    system("pause");
    return 0;
}
