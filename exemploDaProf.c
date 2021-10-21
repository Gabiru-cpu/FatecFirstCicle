#include<stdio.h>
#include<locale.h>
#define ex5lista1função
#ifdef exemploprof.rui
/*  a funcao imprimir mensagens na tela */
void imprimir_mensagem(void)
{
    printf("\t\t Voce esta' na funcao imprimir_mensagem\n");
    printf("\t\t esta funcao foi chamada pela funcao main()\n");
    printf("\t\t fim da funcao imprimir_mensagem\n\n");
}

main()
{
    printf("\nVoce esta' na funcao main()\n");
    printf("Este exemplo mostra a chamada de uma funcao.\n\n");

    imprimir_mensagem(); /*chama a funcao"imprimir_mensagem" desenvolvida pelo
                       programador e sem a passagem de informacoes para a funcao
                       chamada */

    printf("Voce esta' de volta a funcao main()\n");
    printf("Fim do programa\n");
}
#endif exemploprof.rui

#ifdef ex1lista1função
//Declare uma variável global que deverá receber um número qualquer no interior da função main.
//Crie uma função chamada Exiba para calcular e  mostrar o antecessor e o sucessor desse número.//
int num;//,suc,ant;
void exiba(void)
{
    // suc=num+1;
    // ant=num -1;
    printf(" O  antecessor do número  %d é  %d\n",num,num-1);
    printf(" O  sucessor do número  %d é  %d\n",num,num+1);


}
main()
{
    setlocale(LC_ALL,"");
    printf("Digite um número qualquer\n");
    scanf("%d",&num);
    exiba();
}
#endif // ex1lista1função
#ifdef ex2lista1função
//2.	Declare uma variável global que deverá receber um número que representa o preço de um produto.
//Crie a função chamada Postivo que garanta que o preço do produto deve ser maior que zero.
//O valor do preço do produto deve ser solicitado no interior da função main.
//Crie a função Reajuste que calcule o valor do reajuste de 10% do preço do produto.
//Exiba no interior da função main o valor recebido e o valor com reajuste obtido através da função Reajuste.
float preco,precoreajuste, reajust;//precoreajuste como variável global
Positivo()
{

    do
    {
        printf("Digite um número maior que zero\n");
        scanf("%f",&preco);
        if(preco<=0)
            printf("Preço inválido\n");
    }
    while(preco<=0);

}
Reajuste()
{
    reajust=preco*0.01;
    precoreajuste=preco+reajust;
    //precoreajuste=preco+preco*0.01; sem a utilizar a variável reajust
}

main()
{
    setlocale(LC_ALL,"");
    printf("Digite o preço do  produto\n");
    Positivo();
    Reajuste();
    printf("O preço antigo é %.2f\n",preco);
    printf("O preço com reajuste  é %.2f\n",precoreajuste);



}
#endif //ex2lista1função
#ifdef mateus

//O custo ao consumidor de um carro novo é a soma do preço da fábrica com o
//percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Faça
//um programa que receba o preço de fábrica de um veículo, o percentual de lucro do
//distribuidor e o percentual de impostos. Calcule e mostre:
//a. O valor correspondente ao lucro do distribuidor
//b. O valor correspondente aos impostos
//c. O preço final do veículo
escrever_tela()
{
    printf("\t\t\t------------------------------------------\n");
    printf("\t\t\tEstre programa tem como objetivo mostrar:\n");
    printf("\n");
    printf("\t\t\tO lucro do distribuidor\n");
    printf("\t\t\tO valor dos impostos\n");
    printf("\t\t\tO preço final do veículo\n");
    printf("\t\t\t------------------------------------------\n");
}
float preco_fabrica,imposto,lucro,valor_carro;

somatotal()
{
    imposto=preco_fabrica *(imposto/100);
    lucro=preco_fabrica * (lucro/100);
    valor_carro=preco_fabrica+imposto+lucro;

}
float entrada_dados_real()
{
    float auxreal;
    scanf("%f",&auxreal);
    while (auxreal<0)
    {
        printf("Valor inválido. \n");
        printf("Dica: Digite valores acima de 0\n");
        printf("Tente novamente:\n ");

        scanf("%f",&auxreal);
    }
    return auxreal;
}
float preco_fabrica,imposto,lucro,valor_carro;
main()
{
    setlocale(LC_ALL,"");
    escrever_tela();
    printf("Digite O preço de fábrica do veiculo a ser comercializado: ");
    preco_fabrica=entrada_dados_real();
    printf("O preço de fábrica é %.2f\n",preco_fabrica);
    printf("Agora digite a porcentagem de impostos a serem aplicados em cima do valor de fábrica do veículo: ");
    imposto=entrada_dados_real();
    printf("Neste campo deve digitar o porcentual de lucro do distribuídor: ");
    lucro=entrada_dados_real();
    somatotal();
    printf("Pois bem, aqui estão os resultados:\n");
    printf("O Preço de fábrica: %.3f %\n\n",preco_fabrica);
    printf("A porcentagem do valor aplicado em cima do preço de fábrica:%.3f %%\n \n",imposto);
    printf("A porcentagem do lucro aplicado :%.3f %%\n\n ",lucro);
    printf("O valor total do veículo:%.3f\n\n ",valor_carro);

    system("pause");
    return 0;
}
#endif // mateus
#ifdef ex4lista1função
//4.Cálculo de um salário líquido de um professor.
//Serão fornecidos valor da hora aula, número de aulas dadas e o % de desconto do INSS .
//Crie a função Calculos e exiba no seu interior o  valor  do salário bruto, do desconto e do salário líquido.

float sal_liquido,sal_bruto,valor_aula,desconto_inss,porcentagem_inss,auxpos;
int no_aula;

positivosint()
{

    do
    {
        printf("Digite um número maior que zero\n");
        scanf("%d",&no_aula);
        if(no_aula<=0)
            printf("Quantidade Inválida\n");
    }
    while (no_aula<=0);

}
positivosreal()
{

    do
    {
        printf("Digite um número maior que zero\n");
        scanf("%f",&auxpos);
        if(auxpos<=0)
            printf("Quantidade Inválida\n");
    }
    while (auxpos<=0);

}
Calculo()
{
    sal_bruto=no_aula*valor_aula;
    desconto_inss=sal_bruto*porcentagem_inss/100;
    sal_liquido=sal_bruto - desconto_inss;
    printf("O valor do salário bruto %.2f\n",sal_bruto);
    printf("O valor do desconto do inss %.2f\n",desconto_inss);
    printf("O valor do salário líquido %.2f\n",sal_liquido);



}
main()
{
    setlocale(LC_ALL,"");
    printf("Digite  o número  de aulas\n");
    positivosint();
    printf("Digite  o preço da hora aula\n");
    positivosreal();
    valor_aula=auxpos;
    printf("Digite  a %% do inss\n");
    positivosreal();
    porcentagem_inss=auxpos;
    Calculo();
}
#endif ex4lista1função
#ifdef ex5lista1função
//Crie uma função chamada positovo para garantir o recebimento de um salário positivo.
//Crie a função Reajuste e calcule o reajuste desse salário considerando:
// a) Se o salário for inferior  a 1100 reais o reajuste será de 15%;
//b)Se o salário for maior ou igual a 1100 e menor ou igual a 1800 o reajuste será de 12.5%;
//c)Se o salário for superior a 1800, o reajuste deve ser de 8%.
//Exiba no interior da função main o antigo salário e o salário novo com reajuste

float salbruto,salnovo,auxreal;
positivo()
{
    do
    {
        scanf("%f",&auxreal);
        if (auxreal<=0)
        {
            printf("Salário Inválido\n");
            printf("Digite apenas números maiores que zero\n");
            printf("Digite uma tecla qualquer para continuar\n");
        }


    } while(auxreal<=0);
}
reajuste()
{
       if (salbruto<1100)
            salnovo=salbruto+salbruto*0.15;
        else
            if(salbruto<=1800)
            salnovo=salbruto+salbruto*0.125;
        else
         salnovo=salbruto+salbruto*0.08;
}
main()
{
        printf("Digite o salário que deve ser maior que zero\n");
        positivo();
        salbruto=auxreal;
        reajuste();
        printf("O salário antigo %.2f\n",salbruto);
        printf("O salário novo é  %.2f \n",salnovo);


}
#endif // ex5lista1fun
#ifdef ex10lista1função
//10.	Receba três números, que devem ser maiores  que 5 e menores que 25.O quarto número é o produto dos dois primeiros números
//recebidos.Crie  uma função para calcular a media dos quatro números.
//Se a média for menor que 100 solicite novos dados caso contrário exiba  a média no interior da função main.
float a,b,c,d,mediaf,auxreal;
numero()
{
    do
    {
        scanf("%f",&auxreal);
        if (auxreal<=5||auxreal>=25)
            printf("Numero  Inválido\n");

    }
    while(auxreal<=5||auxreal>=25);
}
media()
{
    mediaf=(a+b+c+d)/4;
}
main()
{
    printf("Digite o 1o.número\n");
    numero();
    a=auxreal;
    printf("Digite o 2o.número\n");
    numero();
    b=auxreal;
    printf("Digite o 1o.número\n");
    numero();
    c=auxreal;
    d=a*b;
    media();
    printf("A média de %.2f +%.2f+%.2f+%.2f=%.2f\n",a,b,c,d,mediaf);

}
#endif // ex10lista1fun

