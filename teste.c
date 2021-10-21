#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Jogo de arquitetura de computadores.
Por Pedro Ian
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
int r2=0;
float acertos = 0.0, erros = 0.0, pf;

void main()
{
    
    setlocale(LC_ALL,"");
    system("color 02");
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
    fim();
}


    void pergunta1()
    {
    printf("Ok, %s  se você chegou aqui, você é merecedor!\n\n", nome);

    printf("Cada pergunta, vale 2,5 pontos. Então vamos lá, boa sorte!\n\n");
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
    limpar_buffer();
    printf("A sua resposta infelizmente está incorreta!\n");
    printf("pois o registrador o qual a função é armazenar dados que serão manipulados nas operações do programa, é o RDM/ACC.\n");
    erros +=1;
    printf("acertos: %.00f\n\n", acertos);
    printf("erros: %.00f\n", erros);
    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if (resposta == 'b' || resposta == 'B')
{
    limpar_buffer();
    printf("A sua resposta infelizmente está incorreta.\n");
    printf("pois o registrador o qual a função é apontar para o endereço que contém a próxima instrução a ser lida, é o CI/CP.\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);
    printf("erros: %.00f\n", erros);
    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if(resposta == 'c' || resposta == 'C')
{
    printf("A sua resposta infelizmente está incorreta.\n");
    printf("incorreta, pois o registrador o qual a função é armazenar a instrução em execução, é o RI.\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);
    printf("erros: %.00f\n", erros);
    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

if(resposta == 'd' || resposta == 'D')
{
    printf("A sua resposta felizmente está correta.\n");
    printf("pois o registrador armazena endereços de memória que apontam para células na memória principal. \n");
    acertos +=1;
    printf("acertos: %.00f\n", acertos);
    printf("erros: %.00f\n", erros);
    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

}

    void pergunta2()
    {
//pergunta
    printf("Pergunta número 2: A respeito da Memória Cache, marque a(s) alternativa(s) correta(s):\n\n");
//alternativas
    printf("a)	A memória cache está localizada fora da CPU, é considerada um dispositivo de entrada e saída, sendo opcional ao usuário utilizar.\n\n");

    limpar_buffer();
    printf("Você acha que a A está correta?(envie (s) para sim e (n) para não)");
    resposta = getchar();

    if(resposta == 's' && r2 == 0)
    {
        r2 = 1;
        erros +=1;
    }
    while (resposta != 's' && resposta != 'n')
    {
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("Você acha que a C está correta?(envie (s) para sim e (n) para não)");
        resposta = getchar();

        if(resposta == 's' && r2 == 0)
        {
            r2 = 1;
            erros +=1;
        }
    }
    
    printf("b)	A memória cache está localizada ao lado da memória ram e é considerada a memória mais rápida após a memória ram, sendo uma memória volátil. \n");

    limpar_buffer();
    printf("Você acha que a B está correta?(envie (s) para sim e (n) para não)");
    resposta = getchar();

    if(resposta == 's' && r2 == 0)
    {
        r2 = 1;
        erros +=1;
    }
    while (resposta != 's' && resposta != 'n')
    {
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("Você acha que a C está correta?(envie (s) para sim e (n) para não)");
        resposta = getchar();

        if(resposta == 's' && r2 == 0);
        {
            r2 = 1;
            erros +=1;
        }
    }

    printf("c)	A memória cache está localizada internamente ao processador e é considerada a mais memoria mais rápida após os registradores, sendo uma memória não volátil. \n");

    limpar_buffer();
    printf("Você acha que a C está correta?(envie (s) para sim e (n) para não\n)");
    resposta = getchar();

    if(resposta == 's' && r2 == 0)
    {
        r2 = 1;
        erros +=1;
    }
    while (resposta != 's' && resposta != 'n')
    {
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("Você acha que a C está correta?(envie (s) para sim e (n) para não)");
        resposta = getchar();

        if(resposta == 's' && r2 == 0)
        {
            r2 = 1;
            erros +=1;
        }
    }
    
    printf("d)	A memória cache está localizada internamente ao processador e é considerada a memória mais rápida após os registradores, sendo uma memória volátil. \n"); 

    limpar_buffer();
    printf("Você acha que a D está correta?(envie (s) para sim e (n) para não)");
    resposta = getchar();

    if(resposta == 's' && r2 == 0)
    {
        r2 = 1;
        acertos +=0.5;
    }
    while (resposta != 's' && resposta != 'n')
    {
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("Você acha que a C está correta?(envie (s) para sim e (n) para não)");
        resposta = getchar();

        if(resposta == 's' && r2 == 0)
        {
            r2 = 1;
            acertos +=0.5;
        }
    }

    printf("e)	A memória cache possui 3 níveis de memória, é não volátil e está localizada dentro do processador. \n");

    limpar_buffer();
    printf("Você acha que a E está correta?(envie (s) para sim e (n) para não)");
    resposta = getchar();

    if(resposta == 's' && r2 == 0)
    {
        r2 = 1;
        erros +=1;
    }
    while (resposta != 's' && resposta != 'n')
    {
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("Você acha que a C está correta?(envie (s) para sim e (n) para não)");
        resposta = getchar();

        if(resposta == 's' && r2 == 0)
        {
            r2 = 1;
            erros +=1;
        }
    }
    printf("f)	A memória cache possui 3 níveis de memória, é volátil e está localizada fora do processador.\n");

    limpar_buffer();
    printf("Você acha que a F está correta?(envie (s) para sim e (n) para não)");
    resposta = getchar();

    if(resposta == 's' && r2 == 0)
    {
        r2 = 1;
        erros +=1;
    }
    while (resposta != 's' && resposta != 'n')
    {
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("Você acha que a C está correta?(envie (s) para sim e (n) para não)");
        resposta = getchar();

        if(resposta == 's' && r2 == 0)
        {
            r2 = 1;
            erros +=1;
        }
    }
    printf("g)	A memória cache possui 4 níveis de memória, é volátil e está localizada dentro do processador. \n");

    limpar_buffer();
    printf("Você acha que a G está correta?(envie (s) para sim e (n) para não)");
    resposta = getchar();

    if(resposta == 's' && r2 == 0)
    {
        r2 = 1;
        erros +=1;
    }
    while (resposta != 's' && resposta != 'n')
    {
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("Você acha que a C está correta?(envie (s) para sim e (n) para não)");
        resposta = getchar();

        if(resposta == 's' && r2 == 0)
        {
            r2 = 1;
            erros +=1;
        }
    }
    printf("h)	A memória cache possui 3 níveis de memória, é volátil e está localizada dentro do processador. \n\n");

    limpar_buffer();
    printf("Você acha que a H está correta?(envie (s) para sim e (n) para não)");
    resposta = getchar();

    if(resposta == 's' && r2 == 0)
    {
        r2 = 1;
        acertos +=0.5;
    }
    while (resposta != 's' && resposta != 'n')
    {
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("Você acha que a C está correta?(envie (s) para sim e (n) para não)");
        resposta = getchar();

        if(resposta == 's' && r2 == 0)
        {
            r2 = 1;
            acertos +=0.5;
        }
    }
void pergunta3()
{
    printf("Pergunta número 3: Marque a alternativa(s) correta(s)\n\n");
//alternativas
    printf("a) A memória principal são os hardwares de armazenamento não voláteis como HD, SSD, Pendrive, entre outros. \n");
    printf("b) Os equipamentos de entrada e saída são todos os componentes que conectados ao computador para enviar ou retornar dados como monitor, mouse, teclado, entre outros. \n");
    printf("c) UC é a parte da CPU que controla e instrui a ULA a fazer os cálculos sendo assim comandando e fornecendo o que vai para ULA. \n");
    printf("d) A memória principal trabalha em conjunto com o processador armazenando dados que estão em constante uso em seu computador e não se perde esses dados ao se desligar ou fechá-los. \n"); 
    printf("e) CPU é o componente onde é processado toda a parte gráfica/visual do seu computador a Unidade de processamento gráfico.\n\n");

limpar_buffer();

resposta = getchar();

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
    limpar_buffer();
    printf("A sua resposta infelizmente está incorreta!\n");
    printf("pois o componente descreve HD e não começa pelo armazenamento.\n");
    erros +=1;
    printf("acertos: %.00f\n\n", acertos);
    printf("erros: %.00f\n", erros);
    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if (resposta == 'b' || resposta == 'B')
{
    limpar_buffer();
    printf("A sua resposta infelizmente está incorreta.\n");
    printf("pois descreve uma saída de dados, exemplo via monitor e também descreve a memória Bios como processo comum,quando na realidade ela tem seu uso específico inicialização do sistema.\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);
    printf("erros: %.00f\n", erros);
    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if(resposta == 'c' || resposta == 'C')
{
    printf("A sua resposta felizmente está correta.\n");
    acertos +=1;
    printf("acertos: %.00f\n", acertos);
    printf("erros: %.00f\n", erros);
    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

if(resposta == 'd' || resposta == 'D')
{
    printf("A sua resposta infelizmente está incorreta.\n");
    printf("pois existe somente uma resposta correta que descreve exatamente todos os processos e componentes do ciclo de intrução. \n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);
    printf("erros: %.00f\n", erros);
    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
    pf = (2.5*acertos)-erros;
}
}

void fim()
{
    pf = acertos*2.25;
    limpar_buffer();
    printf("\n\nObrigado por jogar o jogo do Grupo 2 %s\nquantidade de acertos: %0.00f \nquantidade de erros: %0.00f\npontuação final: %0.00f", nome, acertos, erros, pf);
}