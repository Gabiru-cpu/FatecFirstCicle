//Mostre todos os números ímpares de 50 até 300.Utilize o laço do while.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int cont = 50;
    float result;

    while (cont <= 300)
    {
        result = cont % 2;
        
            if (result != 0)
            {
                printf("numero impar: %i\n", cont);
            }

        cont++;
    }
    system("pause");
    return 0;
}
