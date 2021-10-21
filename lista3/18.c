#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt-BR");

    int termos,t1 = 2, t2 = 7, t3 = 3, cont = 1, repet = 1, teste = 1;
 
    while(repet == 1)
    {
        t1 = 2, t2 = 7, t3 = 3;

        printf("Digite o número de termos:");
        scanf("%d", &termos);
    
        if(termos < 0)
        {
            printf("Digite o número de termos:");
            scanf("%d", &termos);
        }
    
    
            if(termos == 1)
            {
                printf("%d\n", t1);
                teste = 0;
            }
    
            if(termos == 2)
            {
                printf("%d\n", t1);
                printf("%d\n", t2);
                teste = 0;
            }
    
    
            if(termos == 3)
            {
                printf("%d\n", t1);
                printf("%d\n", t2);
                printf("%d\n", t3);
                teste = 0;
            }



        if(termos > 3)
        {
            printf("%d\n", t1);
            cont++;
            printf("%d\n", t2);
            cont++;
            printf("%d\n", t3);
            cont++;

            while(cont <= termos)
            {
                if(cont <= termos)
                {
                t1=t1*2;
                printf("%d\n", t1);
                cont++;    
                }
                if(cont <= termos){
                t2=t2*3;
                printf("%d\n", t2);
                cont++;    
                }
                if(cont <= termos){
                t3=t3*4;
                printf("%d\n", t3);
                cont++;
                }
            }
        }
        repet=0;
        cont=1;

        printf("quer refazer a operacao se SIM digite 1 se NAO digite 0\n");
        scanf("%d", &repet);

        if(repet > 1 && repet < 0){
            printf("quer refazer a operacao se SIM digite 1 se NAO digite 0(valor anterior invalido\n)");
            scanf("%d", &repet);
        }
    }

    system("pause");
    return 0;
}