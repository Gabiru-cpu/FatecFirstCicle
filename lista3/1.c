#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int aux;
    float result, cont = 1;

    //todo numero impar qnd é dividido por 2 resulta em numero quebrado

    while (cont <= 100)
    {
        result = cont/2;

         aux = result;
            // if(aux == result)
            // {
            //     printf("numero par: %0.0f\n", cont);
            // }

            if(aux != result)
            {
                printf("numero impar: %0.0f\n", cont);
            }

        // printf("contador: %0.0f\n", cont);

        cont++;
    }
    

    system("pause");
    return 0;
}
