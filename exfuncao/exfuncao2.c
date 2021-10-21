#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex4

#ifdef ex1

float n1, n2, n3, n4, result;

int main()
{
    printf("Digite o valor da primeira nota: \n");
    scanf("%f", &n1);

    if(n1 < 0 || n1 > 100)
    {
        Notas();
    }

    printf("Digite o valor da segunda nota: \n");
    scanf("%f", &n2);

    if(n2 < 0 || n2 > 100)
    {
        Notas();
    }

    printf("Digite o valor da terceira nota: \n");
    scanf("%f", &n3);

    if(n3 < 0 || n3 > 100)
    {
        Notas();
    }


    printf("Digite o valor da quarta nota: \n");
    scanf("%d", &n4);

    if(n4 < 0 || n4 > 100)
    {
        Notas();
    }

    Media();

    if(result >= 6)
    {
        printf("sua media foi %.00f voce esta aprovado", result);
    }
    else
    {
        printf("sua media foi %.00f voce esta reprovado", result);
    }

    system("pause");
    return 0;
}


void Notas()
{
    printf("Algum valor digitado foi invadolido digite novamente digite apenas numeros de 0 a 100 \n");

    while (n1 < 0 || n1 > 100 || n2 < 0 || n2 > 100 || n3 < 0 || n3 > 100 || n4 < 0 || n4 > 100)
    {
            printf("Digite o valor da primeira nota(corretamente): \n");
            scanf("%f", &n1);
            
            printf("Digite o valor da segunda nota(corretamente): \n");
            scanf("%f", &n2);
            
            printf("Digite o valor da terceira nota(corretamente): \n");
            scanf("%f", &n3);
            
            printf("Digite o valor da quarta nota(corretamente): \n");
            scanf("%d", &n4);
    }
    
    

}

void Media()
{
    result = (n1 + n2 + n3 + n4) /40;
}

#endif 

#ifdef ex2

int n1, n2, soma, count =1; 
float prod;

int main()
{
    while (count ==1)
    {
        printf("Digite um numero(de 0 a 10): \n");
        scanf("%d", &n1);

        printf("Digite outro numero(de 0 a 10): \n");
        scanf("%d", &n2);
        if (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10)
        {
            Garantia();
        }
        count = 0;   
    }

    soma = n1 + n2;
    Produto();

    if(prod < 500)
    {
    printf("prduto dos dois numeros digitamos e da soma deles: %f (menor que 500 refazer os dados)\n");
        count = 1;   
    }
    if(prod >= 500)
    {
        printf("prduto dos dois numeros digitamos e da soma deles: %f\n");
    }

    system("pause");
    return 0;
}

void Garantia()
{
    while (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10)
    {
        printf("algum numero foi digitado errado\n");
        printf("Digite um numero(de 0 a 10): \n");
        scanf("%d", &n1);

        printf("Digite outro numero(de 0 a 10): \n");
        scanf("%d", &n2);
    }
}

void Produto()
{
    prod = n1 * n2 * soma;
}

#endif 

#ifdef ex3

int l1,l2,l3;

int main()
{
    printf("Digite um numero para o primeiro lado do triangulo: \n");
    scanf("%d", &l1);

    printf("Digite um numero para o segundo lado do triangulo: \n");
    scanf("%d", &l2);

    printf("Digite um numero para o terceiro lado do triangulo: \n");
    scanf("%d", &l3);
    if(l1 < 1|| l2 < 1 || l3 < 1)
    {
        Garantia();
    }

    if(l1 == l2 && l1 == l3)
    {
        printf("lado 1: %d lado 2: %d lado 3: %d tipo: equilatero\n", l1, l2, l3);
    }

    //O triângulo é isóscele quando apenas dois lados são iguais.
    if(l1 == l2 && l1 != l3 || l2 == l1 && l2 != l3 || l3 == l1 && l3 != l2 || l3 == l2 && l3 != l1)
    {
        printf("lado 1: %d lado 2: %d lado 3: %d tipo: isoscele\n", l1, l2, l3);
    }
    
    //O triângulo é escaleno quando todos os lados são diferentes
    if(l1 != l2 && l1 != l3)
    {
        printf("lado 1: %d lado 2: %d lado 3: %d tipo: escaleno\n", l1, l2, l3);
    }

    system("pause");
    return 0;
}

void Garantia()
{
    while (l1 < 1|| l2 < 1 || l3 < 1)
    {
        printf("voce digitou algum numero incorreto \n");
        printf("Digite um numero para o primeiro lado do triangulo: \n");
        scanf("%d", &l1);

        printf("Digite um numero para o segundo lado do triangulo: \n");
        scanf("%d", &l2);

        printf("Digite um numero para o terceiro lado do triangulo: \n");
        scanf("%d", &l3);
    }
}

#endif


/*4. função Verifcamultiplos e verifique se estes dois números são múltiplos ou não. Exiba se são 
múltiplos ou não no interior da função VerificaMultiplos. Pesquise na internet o que são múltiplos.
*/
#ifdef ex4

int n1 , n2; 
float mult;

int main()
{
    printf("Digite um numero(um deles deve ser negativo): \n");
    scanf("%d", &n1);

    printf("Digite outro numero(um deles deve ser negativo): \n");
    scanf("%d", &n2);

    if(n1 == 0 && n2 == 0 || n1 < 0 && n2 < 0 || n1 > 0 && n2 > 0)
    {
        Garantia();
    }

    Verifcamultiplos();

    system("pause");
    return 0;
}

void Garantia()
{
    while (n1 == 0 && n2 == 0 || n1 < 0 && n2 < 0 || n1 > 0 && n2 > 0)
    {
        printf("e necessario pelo menos um numero negativo\n");
        printf("Digite um numero(um deles deve ser negativo): \n");
        scanf("%d", &n1);
    
        printf("Digite outro numero(um deles deve ser negativo): \n");
        scanf("%d", &n2);
    }
    
}

void Verifcamultiplos()
{
    if(n1 >= n2)
    {
        mult = n1 % n2;
    }
    if(n2 > n1)
    {
        mult = n2 % n1;
    }

    if(mult == 0)
    {
        printf("%d e %d sao multiplos", n1, n2);
    }
    else
    {
        printf("%d e %d nao sao multiplos", n1, n2);
    }
}

#endif