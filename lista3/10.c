/*A soma dos números pares desse intervalo, incluindo os
números digitados;
A multiplicação dos números ímpares desse intervalo de
números incluindo os números digitados.*/
 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>
 int main ()
{
setlocale(LC_ALL, "pt-BR");
int Num=0, Num2=0,somapar=0, cont=0, impar;


printf("Insira o VALOR DE X: ");
scanf("%d", &Num);

printf("Insira o VALOR DE Y: ");
scanf("%d", &Num2);


    if (Num2>Num)
    {
        for (cont=Num; cont<=Num2; cont++)
        {
        cont;

        if (cont%2==0)
        {
            somapar = somapar + cont;
        }

        else
        { 
            impar = impar * cont;
        }

        }
    }

    else
    {
        printf("X não pode ser maior que Y\n");
    }
    
    printf("A soma dos números pares nesse intervalo é %d\n", somapar);
    printf("A multiplicação dos números impares nesse intervalo é %d\n", impar);

    system ("pause");
    return 0;
}