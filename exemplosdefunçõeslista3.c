#include<stdio.h>
#include<locale.h>
#include<time.h>
#define ex3lista3fun��es
#ifdef ex1lista3fun��es
main()
{//1)	Mostre todos os n�meros naturais entre 1 e 20. Utilize o  la�o for.
    int cont;
    setlocale(LC_ALL,"");
    printf("Exibi��o com o la�o for\n");
    for(cont=1;cont<=10;cont+=1)
    {//cont=cont+1 ou cont++ ou cont+=1
        printf("num=%d\n",cont);
    }
    getchar();
    printf("Pressione o enter para continuar\n");
    //la�o do while
    printf("Exibi��o com o la�o  do while\n");
    cont=0;
    do
    {
        cont+=1 // ou cont=cont+1 ou cont++;
        printf("num=%d\n",cont);

    } while (cont<=10);
    system("pause");
     //la�o while
    printf("Exibi��o com o la�o while\n");
    cont=0;
    while (cont<=10)
    {
        cont+=1 // ou cont=cont+1 ou cont++;
        printf("num=%d\n",cont);

    }


    }

#endif //ex1lista3fun��es
#ifdef ex2lista3fun��es
main()
{//1)	Exiba os n�meros m�ltiplos de 5 entre 20 e 100 inclusive para ambos.
 // Utilize o  la�o for.
    int cont;
    setlocale(LC_ALL,"");
    printf("Exibi��o com o la�o for\n");
    for(cont=20;cont<=100;cont+=5)
    {//cont=cont+5 ou cont++ ou cont+=1
        printf("num=%d\n",cont);
    }
    getchar();
    printf("Pressione o enter para continuar\n");
    //la�o do while
    printf("Exibi��o com o la�o  do while\n");
    cont=15;
    do
    {
        cont+=5; // ou cont=cont+5
        printf("num=%d\n",cont);

    } while (cont<100);
    system("pause");
     //la�o while
    printf("Exibi��o com o la�o while\n");
    cont=15;
    while (cont<100)
    {
        cont+=5; // ou cont=cont+5
        printf("num=%d\n",cont);

    }


    }
#endif //ex2lista3fun��es
#ifdef ex3lista3fun��es
main()
{//1)	Exiba os n�meros  30 at� 10.
 // Utilize o  la�o for.
    int cont;
    setlocale(LC_ALL,"");
    printf("Exibi��o com o la�o for\n");
    for(cont=30;cont>=10;cont-=1)
    {//cont=cont-1 ou cont-- ou cont-=1
        printf("num=%d\n",cont);
    }
    getchar();
    printf("Pressione o enter para continuar\n");
    //la�o do while
    printf("Exibi��o com o la�o  do while\n");
    cont=31;
    do
    {
        cont-=1; // ou cont=cont-1 ou cont--
        printf("num=%d\n",cont);

    } while (cont>10);
    system("pause");
     //la�o while
    printf("Exibi��o com o la�o while\n");
    cont=31;
    while (cont>10)
    {
        cont-=1; // ou cont=cont-- ou cont=cont-1
        printf("num=%d\n",cont);

    }
}


#endif // ex3lista3fun
#ifdef ex4lista3fun��es

//	Mostre todos os n�meros  inteiros naturais maiores
//ou iguais a zero e menores ou iguais a 18.
//Utilize o  la�o while.
int num;
main()
{
    setlocale(LC_ALL,"");
    printf("Ser� exibido os n�meros naturais maiores ou iguais a zero  e menores ou iguais 18 \n");
    num=0;
    while (num<=18)
    {printf("%d\n",num);
        num+=1;
         }


}
#endif // ex3lista3fun��es
#ifdef ex4lista3fun��es

//1)	Mostre todos os n�meros  inteiros naturais maiores ou iguais a zero e menores ou iguais a 18.Utilize do while.
int num;
main()
{
    setlocale(LC_ALL,"");
    printf("Ser� exibido os n�meros naturiais maiores ou iguais a zero  e menores ou iguais 18 \n");
    num=0;
    do
    {
        printf("%d\n",num);
        num+=1;
    } while (num<=18);
}
#endif // ex4lista3fun��es
#ifdef ex5lista3fun��es
main()
{
    int cont;
    for(cont=1;cont<=100;cont+=2)
        {printf("%d\n",cont);
        Sleep(100);}
}
#endif // ex5lista3fun��es

#ifdef ex6lista3fun��es
//1)	Mostre todos os n�meros �mpares maiores que 1 e menores que 100.
//Utilize o la�o do while.
main()
{int num,op;
    setlocale(LC_ALL,"");
    do
    {   system("cls");
        num=1;
        printf("Ser� exibido os n�meros �mpares maior ou igual a 1 e menores que 100 \n");
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
#endif // ex6lista3fun��es
#ifdef ex7lista3fun��es
//Solicite ao usu�rio 5 n�meros quaisquer e exiba a soma entre eles.
main()
{
    int num,cont,soma=0;
    for(cont=1;cont<=5;cont+=1)
    {
        printf("Digite um n�mero qualquer\n");
        scanf("%d",&num);
        soma+=num;
    }
    printf("A soma �%d",soma);
    Sleep(50);

}
#endif //ex7lista3fun��es
#ifdef ex8lista3fun��es
//Solicite ao usu�rio k n�meros quaisquer e
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
        printf("Digite um n�mero qualquer\n");
        scanf("%d",&num);
        if (num%2==0)
        soma+=num;
        else
            produto*=num;
    }
    printf("A soma �% d\n",soma);
    printf("O produto �% d\n",produto);
    Sleep(50);

}
#endif //ex8lista3fun��es

