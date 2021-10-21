#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex3
/*
1.Crie a função Esfera que receba da função main o valor do raio e calcule o volume da esfera o seu 
volume v =(4*3,14*(raio*raio*raio))/3. 1 Crie também uma função para garantir que o raio deve ser maior que zero. 
Exiba o volume da esfera no interior da função main.

2. Crie a função verifica para verificar e exibir no seu interior se o número é positivo, 
negativo ou zero.  O número deverá ser do tipo inteiro e deverá ser recebido no interior função main..

3. Crie a função Divisão que receba da função main dois números diferentes de zero que possibilitem o
 cálculo da divisão do primeiro pelo segundo. Crie uma função para garantir que os números devem ser 
diferentes de zero. Exiba na função main os números e o resultado obtido na função Divisão.
*/

#ifdef ex1
float r, v;

int main()
{

    printf("Digite o valor do raio: \n");
    scanf("%.00f", &r);
    if(r < 0)
    {
        void GarantirqoRaioMZ(void);
    }

    Esfera();

    printf("%.00f", v);
    
    system("pause");
    return 0;
}

void Esfera(void)
{
    v =(4*3.14*(r*r*r))/3;
}

void GarantirqoRaioMZ(void)
{
    while(r < 0){
    printf("Digite o valor do raio(valor anterior menor que zero): \n");
    scanf("%.00f", &r);
    }
}
#endif 


#ifdef ex2

int num;

int main()
{

    printf("Digite um numero inteiro: \n");
    scanf("%d", &num);

    Verificar();

    system("pause");
    return 0;
}

void Verificar(void)
{
    if(num == 0)
    {
        printf("Numero neutro 0\n");
    }
    if(num > 0)
    {
        printf("Numero negativo %d\n", num);
    }
    if(num < 0)
    {
        printf("Numero positivo %d\n", num);
    }
}
#endif




#ifdef ex3
float n1, n2, result;

int main()
{   
        printf("Digite um numero(deve ser diferente que zero): \n");
        scanf("%f", &n1);

        printf("Digite um numero mais um numero(deve ser diferente que zero): \n");
        scanf("%f", &n2);

        if(n1 == 0 || n2 == 0)
        {
            void GarabtirDifdZero();
        }
        
    Divisao();

    printf("primeiro numero digitado: %.00f segundo numero digitado: %.00f resultado: %0.0f\n", n1, n2, result);

    system("pause");
    return 0;
}

void Divisao(void)
{
    result = n1/n2;
}

void GarabtirDifdZero(void)
{
    while(n1 == 0 || n2 == 0)
    {
        printf("algum nuemro digitado ou ambos tiveram valor igual a zero\n");
        printf("Digite um numero(deve ser maior que zero): \n");
        scanf("%.00f", &n1);
    
        printf("Digite um numero mais um numero(deve ser maior que zero): \n");
        scanf("%.00f", &n2);
    }
}
#endif