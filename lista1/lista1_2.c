/*2.	Receber um valor qualquer do teclado e imprimir esse valor com reajuste de 10%.

var n1, n2, n3

escrava n1	n2 = 10% de n1		n3 = n2 + n1*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  float num, numPorcent, numFinal;
  
    printf("Digite um numero: ");
    scanf("%f", &num);
  
    numPorcent = num / 100 * 10;

    numFinal = num + numPorcent;

    printf ("Reajuste de dez porcento: %f\n", numFinal);

  system ("PAUSE");
  return(0);
}