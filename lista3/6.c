#include <stdio.h>
#include <stdlib.h>

int k, count = 1, result = 2, teste = 0;

int main(void)
{
    while (teste == 0)
    {    
        printf("Digite um numero: ");
        scanf("%d",&k);
    
        while (count <= k)
        {
            printf("%d° par: %d\n",count, result);
            
            count++;
            result = result+2;
        }
        printf("numero digitado: %d\n", k);
        count = 1, result = 2;
    }
    return 0;
}
