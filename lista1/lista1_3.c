/*3.	Informar um preço de um produto e calcular novo preço com desconto de 9%.

var preço, desconto, result

    receber preço

    desconto = preço % 9

    result = preço - desconto
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float preco, descnt, result;
  
    printf("Digite o valor do produto: \n");
    scanf("%f", &preco);
  
    descnt = preco / 100 * 9;
    result = preco - descnt;

    printf ("valor final da compra: %f\n", result);

  system ("PAUSE");
  return(0);
}