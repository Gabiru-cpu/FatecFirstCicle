#include<stdio.h>
#include<locale.h>
#include<time.h>
#define ex3lista3funções
#ifdef ex1lista3funções
main()
{//1)	Mostre todos os números naturais entre 1 e 20. Utilize o  laço for.
    int cont;
    setlocale(LC_ALL,"");
    printf("Exibição com o laço for\n");
    for(cont=1;cont<=10;cont+=1)
    {//cont=cont+1 ou cont++ ou cont+=1
        printf("num=%d\n",cont);
    }
    getchar();
    printf("Pressione o enter para continuar\n");
    //laço do while
    printf("Exibição com o laço  do while\n");
    cont=0;
    do
    {
        cont+=1 // ou cont=cont+1 ou cont++;
        printf("num=%d\n",cont);

    } while (cont<=10);
    system("pause");
     //laço while
    printf("Exibição com o laço while\n");
    cont=0;
    while (cont<=10)
    {
        cont+=1 // ou cont=cont+1 ou cont++;
        printf("num=%d\n",cont);

    }


    }

#endif //ex1lista3funções
#ifdef ex2lista3funções
main()
{//1)	Exiba os números múltiplos de 5 entre 20 e 100 inclusive para ambos.
 // Utilize o  laço for.
    int cont;
    setlocale(LC_ALL,"");
    printf("Exibição com o laço for\n");
    for(cont=20;cont<=100;cont+=5)
    {//cont=cont+5 ou cont++ ou cont+=1
        printf("num=%d\n",cont);
    }
    getchar();
    printf("Pressione o enter para continuar\n");
    //laço do while
    printf("Exibição com o laço  do while\n");
    cont=15;
    do
    {
        cont+=5; // ou cont=cont+5
        printf("num=%d\n",cont);

    } while (cont<100);
    system("pause");
     //laço while
    printf("Exibição com o laço while\n");
    cont=15;
    while (cont<100)
    {
        cont+=5; // ou cont=cont+5
        printf("num=%d\n",cont);

    }


    }
#endif //ex2lista3funções
#ifdef ex3lista3funções
main()
{//1)	Exiba os números  30 até 10.
 // Utilize o  laço for.
    int cont;
    setlocale(LC_ALL,"");
    printf("Exibição com o laço for\n");
    for(cont=30;cont>=10;cont-=1)
    {//cont=cont-1 ou cont-- ou cont-=1
        printf("num=%d\n",cont);
    }
    getchar();
    printf("Pressione o enter para continuar\n");
    //laço do while
    printf("Exibição com o laço  do while\n");
    cont=31;
    do
    {
        cont-=1; // ou cont=cont-1 ou cont--
        printf("num=%d\n",cont);

    } while (cont>10);
    system("pause");
     //laço while
    printf("Exibição com o laço while\n");
    cont=31;
    while (cont>10)
    {
        cont-=1; // ou cont=cont-- ou cont=cont-1
        printf("num=%d\n",cont);

    }
}


#endif // ex3lista3fun
#ifdef ex4lista3funções

//	Mostre todos os números  inteiros naturais maiores
//ou iguais a zero e menores ou iguais a 18.
//Utilize o  laço while.
int num;
main()
{
    setlocale(LC_ALL,"");
    printf("Será exibido os números naturais maiores ou iguais a zero  e menores ou iguais 18 \n");
    num=0;
    while (num<=18)
    {printf("%d\n",num);
        num+=1;
         }


}
#endif // ex3lista3funções
#ifdef ex4lista3funções

//1)	Mostre todos os números  inteiros naturais maiores ou iguais a zero e menores ou iguais a 18.Utilize do while.
int num;
main()
{
    setlocale(LC_ALL,"");
    printf("Será exibido os números naturiais maiores ou iguais a zero  e menores ou iguais 18 \n");
    num=0;
    do
    {
        printf("%d\n",num);
        num+=1;
    } while (num<=18);
}
#endif // ex4lista3funções
#ifdef ex5lista3funções
main()
{
    int cont;
    for(cont=1;cont<=100;cont+=2)
        {printf("%d\n",cont);
        Sleep(100);}
}
#endif // ex5lista3funções

#ifdef ex6lista3funções
//1)	Mostre todos os números ímpares maiores que 1 e menores que 100.
//Utilize o laço do while.
main()
{int num,op;
    setlocale(LC_ALL,"");
    do
    {   system("cls");
        num=1;
        printf("Será exibido os números ímpares maior ou igual a 1 e menores que 100 \n");
        do
        {
            printf("%d\n",num);
            getchar();

            num+=2;
            if (num==55)
                system("pause");
        }
        while (num<100);
        printf("Digite 1 para encerrar e qualquer outra tecla para continuar\n");
        scanf("%d",&op);
   } while(op!=1);
}
#endif // ex6lista3funções
#ifdef ex7lista3funções
//Solicite ao usuário 5 números quaisquer e exiba a soma entre eles.
main()
{
    int num,cont,soma=0;
    for(cont=1;cont<=5;cont+=1)
    {
        printf("Digite um número qualquer\n");
        scanf("%d",&num);
        soma+=num;
    }
    printf("A soma é%d",soma);
    Sleep(50);

}
#endif //ex7lista3funções
#ifdef ex8lista3funções
//Solicite ao usuário k números quaisquer e
//exiba a soma dos pares
//e o produto dos negativos.
//k DEVE SER MAIOR OU IGUAL A 3 E MENOR OU IGUAL A 15
main()
{ setlocale(LC_ALL,"");
    int num,cont,k,soma=0,produto=1;
    do{
        printf("Digite a quantidade>0\n");
        scanf("%i",&k);
    }while(k<3||k>15);
    for(cont=1;cont<=k;cont+=1)
    {
        printf("Digite um número qualquer\n");
        scanf("%d",&num);
        if (num%2==0)
        soma+=num;
        else
            produto*=num;
    }
    printf("A soma é% d\n",soma);
    printf("O produto é% d\n",produto);
    Sleep(50);

}
#endif //ex8lista3funções

