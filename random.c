#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define t1

#ifdef t1

int i = 0, j, equal, vet[10];

int main(){

    srand(time(NULL));

    do{
        vet [i] = rand() % 10;
        equal = 0;
        for (j = 0; j < i; j++){
            if(vet [j] == vet [i])
                equal = 1;
        }

        if(equal == 0)
            i++;
    } while (i < 10);

    for (i = 0; i < 10; i++){
        printf("%d ", vet[i]);
    }
    printf("\n\n");

    printf("%d %d %d %d %d %d %d %d %d %d\n\n", vet[0], vet[1], vet[2], vet[3], vet[4], vet[5], vet[6], vet[7], vet[8], vet[9]);

    system("pause");
    return 0;
}
#endif

#ifdef t2

int main()
{
    float notas[5] = {7, 8.6, 5.5, 10, 9.7};


    printf("%.f %.f %.f %.f %.f\n\n", notas[0], notas[1], notas[2], notas[3], notas[4]);
    system("pause");
    return 0;
}

#endif