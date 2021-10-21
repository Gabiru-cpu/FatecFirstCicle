#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A, B = 10, mult = 1, result;

     printf("digite um numero para A:\n");
    scanf("%d", &A);

    printf("digite um numero para B:\n");
    scanf("%d", &B);

    if(A < B){
    result = A;
    }

    if(B < A){
    result = B;
    }

    while (result < B)
    {
        printf("\nresultado:%d", result);
        result = A * mult;
        mult++;
        printf("\nmult:%d", mult);
    }

        while (result < A)
    {
        printf("\nresultado:%d", result);
        result = B * mult;
        mult++;
        printf("\nmult:%d", mult);
    }



    if(result == B || result == A)
    {
	printf("A e multiplo de B");
    printf("\nresultado:%d", result);    	
    }
    else
    {
	printf("A nao e multiplo de B");	
    printf("\nresultado:%d", result);
    }

    return 0;
}
