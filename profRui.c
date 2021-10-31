#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#define ex4


#ifdef ex1
//Crie a função Esfera que receba da função main o valor do raio e calcule o volume da esfera o seu volume v =(4*Pi*R3)/3.
//Crie também uma função para garantir que o raio deve ser maior que zero. Exiba o volume da esfera no interior da função main.
float raio;

float garantir()
{float aux;

    do
    {scanf("%f", &aux);

        printf("Numero invalido, digite novamente");

    }while(aux<=0);
    return aux;

}


 float Esfera()
{float volume;
    volume =(4*3.14*raio*raio*raio/3);
    return volume;

}


int main()
{float volume;
    setlocale(LC_ALL,"");
    printf("digite o valor de um raio:");
    raio=garantir();
    volume=esfera();
    printf("O volume da esfera de acordo com o raio dado é: %.2f",volume);
    // ou vc pode chamar a função dentro do printf assdim vc não vai precisar
    // declarar a variável volume
    //printf("O volume da esfera de acordo com o raio dado é: %.2f",esfera());
}

#endif ex1

#ifdef ex2


//Crie a função verifica para verificar e exibir no seu interior se o número é positivo, negativo ou zero.
//O número deverá ser do tipo inteiro e deverá ser recebido no interior função main..
int numero;
verifica ()
{
if(numero<0)
{
    printf("O numero acima colocado e negativo!\n");
}


else{
     if(numero>0)
{
    printf("O numero acima colocado e positivo!\n");

     }
     else{

  printf("O numero acima e igual a zero!.\n");
}
}
}

int main ()
{
    printf("Digite o numero a ser verificado:\n");
    scanf("%i", &numero);
    verifica();

}
#endif ex2

#ifdef ex3

// Crie a função Divisão que receba da função main dois números diferentes de zero que possibilitem o cálculo da divisão do primeiro pelo segundo.
// Crie uma função para garantir que os números devem ser diferentes de zero
// Exiba na função main os números e o resultado obtido na função Divisão.

float x1, x2;

float divisao(){
float result;
result = x1/x2;
return result;

}


float Garantir()
{
    float aux;
    do

    {
        scanf("%f", &aux);
        if (aux==0)
        {
            printf("vc digitou um número igual a zero\n");
            printf("Digite um numero diferente de zero.\n");
        }

    }
    while(aux == 0);
    return aux;
}
main()

{ float resultado;

printf("Digite o 1º numero que deve ser diferente de zero\n");
x1 = Garantir();
printf("Digite o 2º numero que deve ser diferente de zero\n");
x2 = Garantir();
printf("Os numeros selecionados são: %.2f e %.2f", x1, x2 );
resultado=divisao();
printf("O resultado dessa divisão é: %.2f\n",resultado);

}
#endif ex3
#ifdef ex4
//exemplo2 professor Rui
void soma();

int a,b, k;        /*variaveis globais */

main()
{
a = 10;
b = 20;

printf("main() --> imprimi as variaveis a = %d  b = %d \n\n",a,b);

soma();    /* chama a funcao "soma" */

printf("Voce esta' de volta a funcao main()\n");
printf("Fim do programa\n");

printf("\to valor de a e' %d, o de b e' %d e a soma de a + b e'%d\n",a,b,k);
printf("\tfim da funçao soma\n\n");
}
/* funcao soma dois valores */
void soma()
{
k = a + b;

printf("\tfuncao soma()\n");
}
#endif // ex4
