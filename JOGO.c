#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*Jogo de arquitetura de computadores.
Por Pedro Ian & Gabriel H. Xavier
Em: 06/10/2021
Obrigado professora Nádia!*/
void nome_participante();
void bem_vindo();
void limpar_tela();
void menu();
void perguntas();
voidsair();
void limpar_buffer();

char nome[60], resposta;
int r2=0, r3=0;
float acertos = 0.0, erros = 0.0, pf;

void main()
{
    setlocale(LC_ALL,"portuguese");
    system("color 3");
    limpar_buffer();
    bem_vindo();
    nome_participante();
    menu();
}               

void bem_vindo()
{
printf("Olá, seja bem-vindo!\n");
printf("Esse é o nosso jogo de arquitetura!\n\n");
printf("Espero que além de aprender, você se divirta!\n\n");
printf("Agora, vamos lhe fazer algumas perguntas. Pra você ter a certeza que realmente adqueriu os conhecimentos necessários, ok?\n\n");
}

void limpar_tela()
{
system("cls");
}

void  nome_participante()
{
    printf("Vamos lá então, primeiramente, pode me dizer o seu nome, por favor?\n");
gets(nome);
while (nome < 3)
{
    printf("Nome muito curto ou inválido, pode me dizer o seu nome novamente?\n");
    gets(nome);
}

printf("Olá! %s, bem-vindo mais uma vez!", nome);
}

void menu()
{
    int opcao;
    printf("Ok, vamos lá. Digite 1 para iniciar ou 2 para encerrar o programa!\n");
    scanf("%d", &opcao);
 while (opcao != 1 && opcao != 2)
 {
     printf("Opção inválida. Aperte somente 1 para iniciar ou 2 para encerrar o programa!\n");
     scanf("%d", &opcao);
 }
 if (opcao == 2)
 {
 sair();    
 }
 else
 if (opcao == 1)
 {
     perguntas();
 }
}

void sair()
{
printf("Não foi dessa vez, mas, muito obrigado por participar. Ok?\n");
exit(0);
}

void limpar_buffer()
{
fflush(stdin);
}

void perguntas()
{
    pergunta1();
    pergunta2();
    pergunta3();
    pergunta4();
    pergunta5();
    pergunta6();
    pergunta7();
    pergunta8();
    pergunta9();
    pergunta10();
}


void pergunta1()
    {
    printf("Ok, %s  se você chegou aqui, você é merecedor!\n\n", nome);

    printf("Cada pergunta, vale 1 ponto. Então vamos lá, boa sorte!\n\n");
//pergunta
    printf("Pergunta número 1: Qual é a função dos registradores?\n\n");
//alternativas
    printf("a) Armazenar dados que serão manipulados nas operações do programa, também conhecido como CD.\n");
    printf("b) Apontar para o endereço que contém a próxima instrução a ser lida.\n");
    printf("c) Armazenar a instrução em execução.\n");
    printf("d) Armazenar endereços de memória que apontam para células na memória principal.\n\n"); 

limpar_buffer();

resposta = getchar();

//caso o usuario digite algo q nao seja abcd ou ABCD
while (resposta != 'a' && resposta != 'A' && resposta != 'b' && resposta != 'B' && resposta != 'c' && resposta != 'C' && resposta != 'd' && resposta != 'D')
{
printf("Digito inválido.\n\n");

 printf("a) Armazenar dados que serão manipulados nas operações do programa, também conhecido como CD.\n");
    printf("b) Apontar para o endereço que contém a próxima instrução a ser lida.\n");
    printf("c) Armazenar a instrução em execução.\n");
    printf("d) Armazenar endereços de memória que apontam para células na memória principal.\n\n"); 

limpar_buffer();

resposta = getchar();
}

if (resposta == 'a' || resposta == 'A')
{
    system("color 4");
    limpar_buffer();
    printf("A sua resposta infelizmente está incorreta!\n");
    printf("pois o registrador o qual a função é armazenar dados que serão manipulados nas operações do programa, é o RDM/ACC.\n");
    erros +=1;
    printf("acertos: %.00f\n\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if (resposta == 'b' || resposta == 'B')
{
    system("color 4");
    limpar_buffer();
    printf("A sua resposta infelizmente está incorreta.\n");
    printf("pois o registrador o qual a função é apontar para o endereço que contém a próxima instrução a ser lida, é o CI/CP.\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if(resposta == 'c' || resposta == 'C')
{
    system("color 4");
    printf("A sua resposta infelizmente está incorreta.\n");
    printf("incorreta, pois o registrador o qual a função é armazenar a instrução em execução, é o RI.\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

if(resposta == 'd' || resposta == 'D')
{
    system("color 2");
    printf("A sua resposta felizmente está correta.\n");
    printf("pois o registrador armazena endereços de memória que apontam para células na memória principal. \n");
    acertos +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

}

void pergunta2()
{
    r3=0;
    printf("Pergunta número 2: Marque a alternativa(s) correta(s)\n\n");

    printf("a)	A memória cache está localizada fora da CPU, é considerada um dispositivo de entrada e saída, sendo opcional ao usuário utilizar.");

    limpar_buffer();
    printf("Você acha que a A está correta?envie (s) para sim e (n) para não)");
    resposta = getchar();

    if(resposta == 's' && r3 == 0 && resposta == 'S')
    {
        r3 = 1;
    }
    while (resposta != 's' && resposta != 'n' && resposta != 'S' && resposta != 'N')
    {
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("Você acha que a A está correta?envie (s) para sim e (n) para não)");
        resposta = getchar();

        if(resposta == 's' && r3 == 0 && resposta == 'S' && r3 == 0)
        {
            r3 = 1;
        }
    }
    printf("b)  A memória cache está localizada ao lado da memória ram e é considerada a memória mais rápida após a memória ram, sendo uma memória volátil.  \n");
    
    limpar_buffer();
    printf("Você acha que a B está correta?envie (s) para sim e (n) para não)");
    resposta = getchar();

    if(resposta == 's' && r3 == 0 && resposta == 'S')
    {
        r3 = 1;
    }
    while (resposta != 's' && resposta != 'n' && resposta != 'S' && resposta != 'N')
    {
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("Você acha que a B está correta?envie (s) para sim e (n) para não)");
        resposta = getchar();

        if(resposta == 's' && r3 == 0 && resposta == 'S')
        {
            r3 = 1;
        }
    }

    printf("c)  A memória cache está localizada internamente ao processador e é considerada a mais memoria mais rápida após os registradores, sendo uma memória não volátil. \n");
    
    limpar_buffer();
    printf("Você acha que a C está correta? envie (s) para sim e (n) para não)");
    resposta = getchar();

    if(resposta == 's' && r3 == 0 && resposta == 'S')
    {
        r3 = 1;
    }
    while (resposta != 's' && resposta != 'n' && resposta != 'S' && resposta != 'N')
    {
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("Você acha que a C está correta?envie (s) para sim e (n) para não)");
        resposta = getchar();

        if(resposta == 's' && r3 == 0 && resposta == 'S')
        {
            r3 = 1;
        }
    }
    

    printf("d)	A memória cache está localizada internamente ao processador e é considerada a memória mais rápida após os registradores, sendo uma memória volátil.  \n"); 

     limpar_buffer();
    printf("Você acha que a D está correta? envie (s) para sim e (n) para não)");
    resposta = getchar();

    if(resposta == 's' && r3 == 0 && resposta == 'S')
    {
        r3 =0;
    }
    if(resposta == 'n' || resposta == 'N')
    {
        r3=1;
    }
    if(resposta == 'n' && r3 == 0 && resposta == 'N')
    {
        r3 =1;
    }
    while (resposta != 's' && resposta != 'n' && resposta != 'S' && resposta != 'N')
    {
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("Você acha que a D está correta? envie (s) para sim e (n) para não)");
        resposta = getchar();

        if(resposta == 's' && r3 == 0 && resposta == 'S')
        {
            r3 =0;
        }
        if(resposta == 'n' || resposta == 'N')
        {
            r3=1;
        }
        if(resposta == 'n' && r3 == 0 && resposta == 'N')
        {
            r3 =1;
        }
    }
    printf("e)	A memória cache possui 3 níveis de memória, é não volátil e está localizada dentro do processador. \n\n");

     limpar_buffer();
    printf("Você acha que a E está correta? envie (s) para sim e (n) para não)");
    resposta = getchar();

    if(resposta == 's' && r3 == 0 && resposta == 'S' && r3 == 0)
    {
        r3=1;
    }
    while (resposta != 's' && resposta != 'n' && resposta != 'S' && resposta != 'N')
    {
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("Você acha que a E está correta? envie (s) para sim e (n) para não)");
        resposta = getchar();

        if(resposta == 's' && r3 == 0 && resposta == 'S')
        {
            r3=1;
        }
    }

    printf("f)	A memória cache possui 3 níveis de memória, é volátil e está localizada fora do processador. \n\n");

     limpar_buffer();
    printf("Você acha que a F está correta? envie (s) para sim e (n) para não)");
    resposta = getchar();

    if(resposta == 's' && r3 == 0 && resposta == 'S')
    {
        r3=1;
    }
    while (resposta != 's' && resposta != 'n' && resposta != 'S' && resposta != 'N')
    {
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("Você acha que a E está correta? envie (s) para sim e (n) para não)");
        resposta = getchar();

        if(resposta == 's' && r3 == 0 && resposta == 'S' && r3 == 0)
        {
            r3=1;
        }
    }

    printf("g)	A memória cache possui 4 níveis de memória, é volátil e está localizada dentro do processador. \n\n");

     limpar_buffer();
    printf("Você acha que a G está correta? envie (s) para sim e (n) para não)");
    resposta = getchar();

    if(resposta == 's' && r3 == 0 && resposta == 'S')
    {
        r3=1;
    }
    while (resposta != 's' && resposta != 'n' && resposta != 'S' && resposta != 'N')
    {
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("Você acha que a E está correta? envie (s) para sim e (n) para não)");
        resposta = getchar();

        if(resposta == 's' && r3 == 0 && resposta == 'S')
        {
            r3=1;
        }
    }

  printf("h)    A memória cache possui 3 níveis de memória, é volátil e está localizada dentro do processador.   \n"); 

     limpar_buffer();
    printf("Você acha que a H está correta? envie (s) para sim e (n) para não)");
    resposta = getchar();

    if(resposta == 's' && r3 == 0 && resposta == 'S')
    {
        r3 =0;
    }
    if(resposta == 'n' || resposta == 'N')
    {
        r3=1;
    }
    if(resposta == 'n' && r3 == 0 && resposta == 'N')
    {
        r3 =1;
    }
    while (resposta != 's' && resposta != 'n' && resposta != 'S' && resposta != 'N')
    {
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("Você acha que a H está correta? envie (s) para sim e (n) para não)");
        resposta = getchar();


        if(resposta == 's' && r3 == 0 && resposta == 'S')
        {
            r3 =0;
        }
        if(resposta == 'n' || resposta == 'N')
        {
            r3=1;
        }
        if(resposta == 'n' && r3 == 0 && resposta == 'N')
        {
            r3 =1;
        }
    }


    if(r3==1)
    {
        erros+=1;
        system("color 4");
    }
    if(r3==0)
    {
        acertos+=1;
        system("color 2");
    }

    printf("acertos: %0.00f\n", acertos);
}

void pergunta3()
{
    r3=0;
    printf("Pergunta número 3: Marque a alternativa(s) correta(s)\n\n");

    printf("a) A memória principal são os hardwares de armazenamento não voláteis como HD, SSD, Pendrive, entre outros. ");

    limpar_buffer();
    printf("Você acha que a A está correta?envie (s) para sim e (n) para não)");
    resposta = getchar();

    if(resposta == 's' && r3 == 0 && resposta == 'S')
    {
        r3 = 1;
    }
    while (resposta != 's' && resposta != 'n' && resposta != 'S' && resposta != 'N')
    {
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("Você acha que a A está correta?envie (s) para sim e (n) para não)");
        resposta = getchar();

        if(resposta == 's' && r3 == 0 && resposta == 'S' && r3 == 0)
        {
            r3 = 1;
        }
    }
    printf("b) Os equipamentos de entrada e saída são todos os componentes que conectados ao computador para enviar ou retornar dados como monitor, mouse, teclado, entre outros. \n");
    
    limpar_buffer();
    printf("Você acha que a B está correta?envie (s) para sim e (n) para não)");
    resposta = getchar();

    if(resposta == 's' && r3 == 0 && resposta == 'S')
    {
        r3 =0;
    }
    if(resposta == 'n' || resposta == 'N')
    {
        r3=1;
    }
    if(resposta == 'n' && r3 == 0 && resposta == 'N')
    {
        r3 =1;
    }
    while (resposta != 's' && resposta != 'n' && resposta != 'S' && resposta != 'N')
    {
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("Você acha que a B está correta? envie (s) para sim e (n) para não)");
        resposta = getchar();


        if(resposta == 's' && r3 == 0 && resposta == 'S')
        {
            r3 =0;
        }
        if(resposta == 'n' || resposta == 'N')
        {
            r3=1;
        }
        if(resposta == 'n' && r3 == 0 && resposta == 'N')
        {
            r3 =1;
        }
    }

    printf("c) UC é a parte da CPU que controla e instrui a ULA a fazer os cálculos sendo assim comandando e fornecendo o que vai para ULA. \n");
    
    limpar_buffer();
    printf("Você acha que a C está correta? envie (s) para sim e (n) para não)");
    resposta = getchar();


    if(resposta == 's' && r3 == 0 && resposta == 'S')
    {
        r3 =0;
    }
    if(resposta == 'n' || resposta == 'N')
    {
        r3=1;
    }
    if(resposta == 'n' && r3 == 0 && resposta == 'N')
    {
        r3 =1;
    }
    while (resposta != 's' && resposta != 'n' && resposta != 'S' && resposta != 'N')
    {
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("Você acha que a C está correta? envie (s) para sim e (n) para não)");
        resposta = getchar();


        if(resposta == 's' && r3 == 0 && resposta == 'S')
        {
            r3 =0;
        }
        if(resposta == 'n' || resposta == 'N')
        {
            r3=1;
        }
        if(resposta == 'n' && r3 == 0 && resposta == 'N' && r3 == 0)
        {
            r3 =1;
        }
    }

    printf("d) A memória principal trabalha em conjunto com o processador armazenando dados que estão em constante uso em seu computador e não se perde esses dados ao se desligar ou fechá-los. \n"); 

     limpar_buffer();
    printf("Você acha que a D está correta? envie (s) para sim e (n) para não)");
    resposta = getchar();

    if(resposta == 's' && r3 == 0 && resposta == 'S')
    {
        r3=1;
    }

    while (resposta != 's' && resposta != 'n' && resposta != 'S' && resposta != 'N')
    {
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("Você acha que a D está correta? envie (s) para sim e (n) para não)");
        resposta = getchar();

        if(resposta == 's' && r3 == 0 && resposta == 'S')
        {
            r3 =1;
        }
    }
    printf("e) CPU é o componente onde é processado toda a parte gráfica/visual do seu computador a Unidade de processamento gráfico.\n\n");

     limpar_buffer();
    printf("Você acha que a E está correta? envie (s) para sim e (n) para não)");
    resposta = getchar();

    if(resposta == 's' && r3 == 0 && resposta == 'S')
    {
        r3=1;
    }
    while (resposta != 's' && resposta != 'n' && resposta != 'S' && resposta != 'N')
    {
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("Você acha que a E está correta? envie (s) para sim e (n) para não)");
        resposta = getchar();

        if(resposta == 's' && r3 == 0 && resposta == 'S')
        {
            r3=1;
        }
    }

    if(r3==1)
    {
        erros+=1;
        system("color 4");
    }
    if(r3==0)
    {
        acertos+=1;
        system("color 2");
    }

    printf("acertos: %0.00f\n", acertos);
}

void pergunta4()
{

   printf("Pergunta número 4: Como é formado o ciclo de instrução e quais os seus componentes envolvidos?\n\n");
//alternativas
    printf("a) Através do armazenamento de dados na memória externa auxiliar que manda informações para ULA\n");
    printf("b) Começa com output de dados,depois armazenamento na Bios \n");
    printf("c) Busca da instrução,Incrementa o Contador de Instrução,Decodificação do código da operação,Se a instrução tiver operandos, a UC deverá buscá-los,senão passa diretamente para o próximo passo.\n");
    printf("d) Todas estão erradas(incorreta) pois existe somente uma resposta correta que descreve exatamente todos os processos e componentes do ciclo de intrução.\n\n"); 

limpar_buffer();

resposta = getchar();

//caso o usuario digite algo q nao seja abcd ou ABCD
while (resposta != 'a' && resposta != 'A' && resposta != 'b' && resposta != 'B' && resposta != 'c' && resposta != 'C' && resposta != 'd' && resposta != 'D')
{
printf("Digito inválido.\n\n");

    printf("a) Através do armazenamento de dados na memória externa auxiliar que manda informações para ULA\n");
    printf("b) Começa com output de dados,depois armazenamento na Bios \n");
    printf("c) Busca da instrução,Incrementa o Contador de Instrução,Decodificação do código da operação,Se a instrução tiver operandos, a UC deverá buscá-los,senão passa diretamente para o próximo passo.\n");
    printf("d) Todas estão erradas\n\n"); 

limpar_buffer();

resposta = getchar();
}

if (resposta == 'a' || resposta == 'A')
{
    system("color 4");
    limpar_buffer();
    printf("A sua resposta infelizmente está incorreta!\n");
    printf("pois o componente descreve HD e não começa pelo armazenamento.\n");
    erros +=1;
    printf("acertos: %.00f\n\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if (resposta == 'b' || resposta == 'B')
{
    system("color 4");
    limpar_buffer();
    printf("A sua resposta infelizmente está incorreta.\n");
    printf("pois descreve uma saída de dados, exemplo via monitor e também descreve a memória Bios como processo comum,quando na realidade ela tem seu uso específico inicialização do sistema.\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if(resposta == 'c' || resposta == 'C')
{
    system("color 2");
    printf("A sua resposta felizmente está correta.\n");
    acertos +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

if(resposta == 'd' || resposta == 'D')
{
    system("color 4");
    printf("A sua resposta infelizmente está incorreta.\n");
    printf("pois existe somente uma resposta correta que descreve exatamente todos os processos e componentes do ciclo de intrução. \n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
}

void pergunta5()
{
    printf("Pergunta número 5: O modelo de arquitetura de computadores foi sugerido por quem e em que ano?\n\n");
//alternativas
    printf("a) Mark Zuckerberg, em 2004.\n");
    printf("b) Von Neumann, em 1946. \n");
    printf("c) Von Neumann, em 1936.\n");
    printf("d) Steve Jobs, em 1976.\n"); 
    printf("e) Orkut Buyukkokten, em 2004.\n\n"); 

limpar_buffer();

resposta = getchar();

while (resposta != 'a' && resposta != 'A' && resposta != 'b' && resposta != 'B' && resposta != 'c' && resposta != 'C' && resposta != 'd' && resposta != 'D' && resposta != 'E' && resposta != 'e')
{
printf("Digito inválido.\n\n");

    printf("a) Mark Zuckerberg, em 2004.\n");
    printf("b) Von Neumann, em 1946. \n");
    printf("c) Von Neumann, em 1936.\n");
    printf("d) Steve Jobs, em 1976.\n"); 
    printf("e) Orkut Buyukkokten, em 2004.\n\n");

limpar_buffer();

resposta = getchar();
}
if (resposta == 'a' || resposta == 'A')
{
    system("color 4");
    limpar_buffer();
    printf("A sua resposta infelizmente está incorreta!\n");
    erros +=1;
    printf("acertos: %.00f\n\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if (resposta == 'b' || resposta == 'B')
{
    system("color 2");
    limpar_buffer();
    printf("A sua resposta felizmente está correta.\n");
    acertos +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if(resposta == 'c' || resposta == 'C')
{
    system("color 4");
    printf("A sua resposta infelizmente está incorreta!\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

if(resposta == 'd' || resposta == 'D')
{
    system("color 4");
    printf("A sua resposta infelizmente está incorreta.\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

if(resposta == 'e' || resposta == 'E')
{
    system("color 4");
    printf("A sua resposta infelizmente está incorreta.\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
}

void pergunta6()
{
    printf("Pergunta número 6: O que é clock?\n\n");
//alternativas
    printf("a) É a parte responsável pelo relógio do computador.\n");
    printf("b) é como uma biblioteca de acesso rápido que existe dentro de computadores e dispositivos móveis. Ela tem o objetivo de guardar dados, informações e processos temporários acessados com frequência. \n");
    printf("c) é quem faz os cálculos lógicos e aritmética no computador.\n");
    printf("d) é a velocidade q um processador processa suas tarefas em Hertz e ciclos de processamento.\n\n");

limpar_buffer();

resposta = getchar();

while (resposta != 'a' && resposta != 'A' && resposta != 'b' && resposta != 'B' && resposta != 'c' && resposta != 'C' && resposta != 'd' && resposta != 'D')
{
printf("Digito inválido.\n\n");

    printf("a) É a parte responsável pelo relógio do computador.\n");
    printf("b) é como uma biblioteca de acesso rápido que existe dentro de computadores e dispositivos móveis. Ela tem o objetivo de guardar dados, informações e processos temporários acessados com frequência. \n");
    printf("c) é quem faz os cálculos lógicos e aritmética no computador.\n");
    printf("d) é a velocidade q um processador processa suas tarefas em Hertz e ciclos de processamento.\n\n"); 

limpar_buffer();

resposta = getchar();
}
if (resposta == 'a' || resposta == 'A')
{
    system("color 4");
    limpar_buffer();
    printf("A sua resposta infelizmente está incorreta!\n");
    printf("quem faz isso é a bateria de lítio acoplada à placa-mãe não o clock");
    erros +=1;
    printf("acertos: %.00f\n\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if (resposta == 'b' || resposta == 'B')
{
    system("color 4");
    limpar_buffer();
    printf("A sua resposta infelizmente está incorreta!\n");
    printf("A alternativa se refere a memoria cache");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if(resposta == 'c' || resposta == 'C')
{
    system("color 4");
    printf("A sua resposta infelizmente está incorreta!\n");
    printf("A alternativa se refere a ULA unidade logica e aritmetica");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

if(resposta == 'd' || resposta == 'D')
{
    system("color 2");
    printf("A sua resposta felizmente está correta.\n");
    acertos +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
}

void pergunta7()
{
    printf("Pergunta número 7: Qual a função da memória RAM?\n\n");
//alternativas
    printf("a) a memória RAM é não volátil e é a responsável por guardar temporariamente todas as informações que estão em execução no computador, garantindo acesso rápido quando o processador necessita delas.\n");
    printf("b) Sua função é o armazenamento de dados. Isto significa que quando algum arquivo é armazenado, ele não se perde com o desligamento da máquina sendo volátil. \n");
    printf("c) Sua função é o armazenamento de dados. Isto significa que quando algum arquivo é armazenado, ele não se perde com o desligamento da máquina sendo não volátil.\n");
    printf("d) a memória RAM é volátil e é a responsável por guardar temporariamente todas as informações que estão em execução no computador, garantindo acesso rápido quando o processador necessita delas.\n"); 
    printf("e) N.D.A\n\n");

limpar_buffer();

resposta = getchar();

while (resposta != 'a' && resposta != 'A' && resposta != 'b' && resposta != 'B' && resposta != 'c' && resposta != 'C' && resposta != 'd' && resposta != 'D' && resposta != 'E' && resposta != 'e')
{
printf("Digito inválido.\n\n");

    printf("a) a memória RAM é não volátil e é a responsável por guardar temporariamente todas as informações que estão em execução no computador, garantindo acesso rápido quando o processador necessita delas.\n");
    printf("b) Sua função é o armazenamento de dados. Isto significa que quando algum arquivo é armazenado, ele não se perde com o desligamento da máquina sendo volátil. \n");
    printf("c) Sua função é o armazenamento de dados. Isto significa que quando algum arquivo é armazenado, ele não se perde com o desligamento da máquina sendo não volátil.\n");
    printf("d) a memória RAM é volátil e é a responsável por guardar temporariamente todas as informações que estão em execução no computador, garantindo acesso rápido quando o processador necessita delas.\n"); 
    printf("e) N.D.A\n\n");

limpar_buffer();

resposta = getchar();
}
if (resposta == 'a' || resposta == 'A')
{
    system("color 4");
    limpar_buffer();
    printf("A sua resposta infelizmente está incorreta!\n");
    printf("A memoria RAM é volatil\n");
    erros +=1;
    printf("acertos: %.00f\n\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if (resposta == 'b' || resposta == 'B')
{
    system("color 4");
    limpar_buffer();
    printf("A sua resposta infelizmente está incorreta!\n");
    printf("Essa questão ao que tudo indica se refere a memoria secundaria HD/SSD, porém diz sendo volátil e esses componentes não são voláteis.\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if(resposta == 'c' || resposta == 'C')
{
    system("color 4");
    printf("A sua resposta infelizmente está incorreta!\n");
    printf("Essa questão ao que tudo indica se refere a memoria secundaria HD/SSD.\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

if(resposta == 'd' || resposta == 'D')
{
    system("color 2");
    printf("A sua resposta felizmente está correta.\n");
    acertos +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

if(resposta == 'e' || resposta == 'E')
{
    system("color 4");
    printf("A sua resposta infelizmente está incorreta.\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
}

void pergunta8()
{
    printf("Pergunta número 8: Qual a diferença entre Arquitetura e Organização de computadores?\n\n");
//alternativas
    printf("a) A arquitetura se refere ao comportamento de um sistema computacional visível para o programador, ou seja, aos aspectos relacionados com a execução lógica de um programa. A organização de computadores se refere às unidades estruturais e seus relacionamentos lógicos e eletrônicos.\n");
    printf("b) A organização se refere ao comportamento de um sistema computacional visível para o programador, ou seja, aos aspectos relacionados com a execução lógica de um programa. A arquitetura de computadores se refere às unidades estruturais e seus relacionamentos lógicos e eletrônicos. \n");
    printf("c) A arquitetura engloba as interfaces, implementação das instruções, interconexões e entre ouros já, a organização o repertório de instruções, modos de endereçamento, conjunto de registradores e entre outros..\n");
    printf("d) N.D.A\n\n");

limpar_buffer();

resposta = getchar();

while (resposta != 'a' && resposta != 'A' && resposta != 'b' && resposta != 'B' && resposta != 'c' && resposta != 'C' && resposta != 'd' && resposta != 'D')
{
printf("Digito inválido.\n\n");

    printf("a) A arquitetura se refere ao comportamento de um sistema computacional visível para o programador, ou seja, aos aspectos relacionados com a execução lógica de um programa. A organização de computadores se refere às unidades estruturais e seus relacionamentos lógicos e eletrônicos.\n");
    printf("b) A organização se refere ao comportamento de um sistema computacional visível para o programador, ou seja, aos aspectos relacionados com a execução lógica de um programa. A arquitetura de computadores se refere às unidades estruturais e seus relacionamentos lógicos e eletrônicos. \n");
    printf("c) A arquitetura engloba as interfaces, implementação das instruções, interconexões e entre ouros já, a organização o repertório de instruções, modos de endereçamento, conjunto de registradores e entre outros..\n");
    printf("d) N.D.A\n\n");

limpar_buffer();

resposta = getchar();
}
if (resposta == 'a' || resposta == 'A')
{
    system("color 2");
    limpar_buffer();
    printf("A sua resposta felizmente está correta.\n");
    acertos +=1;
    printf("acertos: %.00f\n\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if (resposta == 'b' || resposta == 'B')
{
    system("color 4");
    limpar_buffer();
    printf("A sua resposta infelizmente está incorreta!\n");
    printf("a alternativa trocou de lugar arquitetura e organização");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if(resposta == 'c' || resposta == 'C')
{
    system("color 4");
    printf("A sua resposta infelizmente está incorreta!\n");
    printf("a alternativa trocou de lugar arquitetura e organização");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

if(resposta == 'd' || resposta == 'D')
{
    system("color 4");
    printf("A sua resposta infelizmente está incorreta!\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
}

void pergunta9()
{
    printf("Pergunta número 9: Dentre os elementos que compõem a CPU, Unidade Central de Processamento(Central Processing Unit), aquele que contribui para a realização da função de processamento é o?\n\n");
//alternativas
    printf("a) contador de instrução..\n");
    printf("b) registrador de endereço de memória. \n");
    printf("c) clock.\n");
    printf("d) registrador de instrução.\n"); 
    printf("e) registrador de dados.\n");
    printf("f) N.D.A\n\n");


limpar_buffer();

resposta = getchar();

while (resposta != 'a' && resposta != 'A' && resposta != 'b' && resposta != 'B' && resposta != 'c' && resposta != 'C' && resposta != 'd' && resposta != 'D' && resposta != 'E' && resposta != 'e' && resposta != 'F' && resposta != 'f')
{
printf("Digito inválido.\n\n");

    printf("a) contador de instrução..\n");
    printf("b) registrador de endereço de memória. \n");
    printf("c) clock.\n");
    printf("d) registrador de instrução.\n"); 
    printf("e) registrador de dados.\n");
    printf("f) N.D.A\n\n");

limpar_buffer();

resposta = getchar();
}
if (resposta == 'a' || resposta == 'A')
{
    system("color 4");
    limpar_buffer();
    printf("A sua resposta infelizmente está incorreta!\n");
    erros +=1;
    printf("acertos: %.00f\n\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if (resposta == 'b' || resposta == 'B')
{
    system("color 4");
    limpar_buffer();
    printf("A sua resposta infelizmente está incorreta!\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if(resposta == 'c' || resposta == 'C')
{
    system("color 4");
    printf("A sua resposta infelizmente está incorreta!\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

if(resposta == 'd' || resposta == 'D')
{
    system("color 2");
    printf("A sua resposta infelizmente está incorreta!\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

if(resposta == 'e' || resposta == 'E')
{
    system("color 2");
    printf("A sua resposta felizmente está correta.\n");
    acertos +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

if(resposta == 'f' || resposta == 'F')
{
    system("color 4");
    printf("A sua resposta infelizmente está incorreta.\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
}

void pergunta10()
{
    printf("Pergunta número 10: A medição do clock é feita em hertz (Hz), a unidade padrão de medidas de frequência, que indica o número de oscilações ou ciclos que ocorre dentro de uma determinada medida de tempo, no caso, segundos. Por exemplo, o processador AMD Ryzen 5 5600 com 6 núcleos , com clock de 3,6 GHz executa(e com turbo ele possui 4.1GHz):\n\n");
//alternativas
    printf("a) 21,6 bilhões de tarefas por segundo(24,6 bilhões de tarefas por segundo).\n");
    printf("b) 21,8 bilhões de tarefas por segundo(24,4 bilhões de tarefas por segundo). \n");
    printf("c) 7,2 bilhões de tarefas por segundo(8,2 bilhões de tarefas por segundo no turbo). \n");
    printf("d) 3,6 bilhões de tarefas por segundo(4,1 bilhões de tarefas por segundo no turbo). \n\n");

limpar_buffer();

resposta = getchar();

while (resposta != 'a' && resposta != 'A' && resposta != 'b' && resposta != 'B' && resposta != 'c' && resposta != 'C' && resposta != 'd' && resposta != 'D')
{
printf("Digito inválido.\n\n");

    printf("a) 21,6 bilhões de tarefas por segundo(24,6 bilhões de tarefas por segundo).\n");
    printf("b) 21,8 bilhões de tarefas por segundo(24,4 bilhões de tarefas por segundo). \n");
    printf("c) 7,2 bilhões de tarefas por segundo(8,2 bilhões de tarefas por segundo no turbo). \n");
    printf("d) 3,6 bilhões de tarefas por segundo(4,1 bilhões de tarefas por segundo no turbo). \n\n");

limpar_buffer();

resposta = getchar();
}
if (resposta == 'a' || resposta == 'A')
{
    system("color 2");
    limpar_buffer();
    printf("A sua resposta felizmente está correta.\n");
    printf("pois pegamos o clock e multiplicamos pela quantidade de nucleos");
    acertos +=1;
    printf("acertos: %.00f\n\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if (resposta == 'b' || resposta == 'B')
{
    system("color 4");
    limpar_buffer();
    printf("A sua resposta infelizmente está incorreta!\n");
    printf("pois pegamos o clock e multiplicamos pela quantidade de nucleos");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if(resposta == 'c' || resposta == 'C')
{
    system("color 4");
    printf("A sua resposta infelizmente está incorreta!\n");
    printf("pois pegamos o clock e multiplicamos pela quantidade de nucleos");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

if(resposta == 'd' || resposta == 'D')
{
    system("color 2");
    printf("A sua resposta infelizmente está incorreta!\n");
    printf("pois pegamos o clock e multiplicamos pela quantidade de nucleos");
    acertos +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

while(acertos > -5)
{
    printf("vamos ver sua pontuação?!(responder com 's' para SIM e 'n' para NÃO se responder n ira sair do Jogo.)\n\n"); 

    limpar_buffer();

    resposta = getchar();

    if(resposta == 's')
    {
        fim();
    }
    if(resposta == 'n')
    {
        sair();
    }

    while(resposta != 's' || resposta != 'n')
    {
        printf("resposta invalida tente novamente\n\n");
        printf("vamos ver sua pontuação?!(responder com 's' para SIM e 'n' para NÃO se responder n ira sair do Jogo.)\n\n"); 

        limpar_buffer();

        resposta = getchar();

        if(resposta == 's')
        {
            fim();
        }
        if(resposta == 'n')
        {
            sair();
        }
    }
}
}

void fim()
{
    system("color 1");
    pf = acertos*1;
    limpar_buffer();
    printf("\n\nObrigado por jogar o jogo do Grupo 2 %s\nquantidade de acertos: %0.00f \nquantidade de erros: %0.00f\npontuação final: %0.00f", nome, acertos, erros, pf);
}