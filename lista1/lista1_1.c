/*1.	Ler um número inteiro e imprimir seu sucessor e seu antecessor. 

var numero anterior, numero escrito, numero sucessor

escreva o numero escrito

numero anterior = numero escrito - 1
numero sucessor = numero sucessor + 1

imprimir numero anterior, numero escrito e numero sucessor*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int A, B, C;
  
    printf("Digite um numero inteiro: ");
    scanf("%d", &B);
  
  C = B + 1;
  A = B - 1;
  


    printf ("O Valor do numero anterior: %d\n", A);
    printf ("O Valor do numero escrito: %d\n", B);
    printf ("O Valor do numero sucessor: %d\n", C);
  
  system ("PAUSE");
  return(0);
}