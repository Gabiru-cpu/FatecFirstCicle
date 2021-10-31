#include <windows.h>
#include <mmsystem.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*Jogo de arquitetura de computadores.
Por Pedro Ian & Gabriel H. Xavier
Em: 06/10/2021
Obrigado professora N�dia!*/
void nome_participante();
void bem_vindo();
void limpar_tela();
void menu();
void perguntas();
void sair();
void limpar_buffer();

char nome[60], resposta;
int r3=0;
int i = 0, j, equal, vet[10];

    
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
PlaySound(TEXT("welcome.wav"), NULL, SND_SYNC);
printf("Ol�, seja bem-vindo!\n");
printf("Esse � o nosso jogo de arquitetura!\n\n");
printf("Espero que al�m de aprender, voc� se divirta!\n\n");
printf("Agora, vamos lhe fazer algumas perguntas. Pra voc� ter a certeza que realmente adqueriu os conhecimentos necess�rios, ok?\n\n");
}

void limpar_tela()
{
system("cls");
}

void  nome_participante()
{
    printf("Vamos l� ent�o, primeiramente, pode me dizer o seu nome, por favor?\n");
gets(nome);

printf("Ol�! %s, bem-vindo mais uma vez!", nome);
}

void menu()
{
    int opcao;
    printf("Ok, vamos l�. Digite 1 para iniciar ou 2 para encerrar o programa!\n");
    scanf("%d", &opcao);
 while (opcao != 1 && opcao != 2)
 {
     printf("Op��o inv�lida. Aperte somente 1 para iniciar ou 2 para encerrar o programa!\n");
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
printf("N�o foi dessa vez, mas, muito obrigado por participar. Ok?\n");
exit(0);
}

void limpar_buffer()
{
fflush(stdin);
}

void perguntas()
{
	srand(time(NULL));

    do{
        vet [i] = rand() % 10;
        equal = 0;
        for (j = 0; j < i; j++){
            if(vet [j] == vet [i])
                equal = 1;
        }

        if(equal == 0)
            i++;
    } while (i < 10);


	//caminho vat0
	if(vet[0] == 0)
	{
		pergunta10();
	}
	
	if(vet[0] == 1)
	{
		pergunta1();
	}
	
	if(vet[0] == 2)
	{
		pergunta2();
	}
	
	if(vet[0] == 3)
	{
		pergunta3();
	}
	
	if(vet[0] == 4)
	{
		pergunta4();
	}
	
	if(vet[0] == 5)
	{
		pergunta5();
	}
		
	if(vet[0] == 6)
	{
		pergunta6();
	}
	
	if(vet[0] == 7)
	{
		pergunta7();
	}
	
	if(vet[0] == 8)
	{
		pergunta8();
	}
	
	if(vet[0] == 9)
	{
		pergunta9();
	}


//caminho vat1
	if(vet[1] == 0)
	{
		pergunta10();
	}
	
	if(vet[1] == 1)
	{
		pergunta1();
	}
	
	if(vet[1] == 2)
	{
		pergunta2();
	}
	
	if(vet[1] == 3)
	{
		pergunta3();
	}
	
	if(vet[1] == 4)
	{
		pergunta4();
	}
	
	if(vet[1] == 5)
	{
		pergunta5();
	}
		
	if(vet[1] == 6)
	{
		pergunta6();
	}
	
	if(vet[1] == 7)
	{
		pergunta7();
	}
	
	if(vet[1] == 8)
	{
		pergunta8();
	}
	
	if(vet[1] == 9)
	{
		pergunta9();
	}
	
//caminho vat2
	if(vet[2] == 0)
	{
		pergunta10();
	}
	
	if(vet[2] == 1)
	{
		pergunta1();
	}
	
	if(vet[2] == 2)
	{
		pergunta2();
	}
	
	if(vet[2] == 3)
	{
		pergunta3();
	}
	
	if(vet[2] == 4)
	{
		pergunta4();
	}
	
	if(vet[2] == 5)
	{
		pergunta5();
	}
		
	if(vet[2] == 6)
	{
		pergunta6();
	}
	
	if(vet[2] == 7)
	{
		pergunta7();
	}
	
	if(vet[2] == 8)
	{
		pergunta8();
	}
	
	if(vet[2] == 9)
	{
		pergunta9();
	}
    
    //caminho vat3
	if(vet[3] == 0)
	{
		pergunta10();
	}
	
	if(vet[3] == 1)
	{
		pergunta1();
	}
	
	if(vet[3] == 2)
	{
		pergunta2();
	}
	
	if(vet[3] == 3)
	{
		pergunta3();
	}
	
	if(vet[3] == 4)
	{
		pergunta4();
	}
	
	if(vet[3] == 5)
	{
		pergunta5();
	}
		
	if(vet[3] == 6)
	{
		pergunta6();
	}
	
	if(vet[3] == 7)
	{
		pergunta7();
	}
	
	if(vet[3] == 8)
	{
		pergunta8();
	}
	
	if(vet[3] == 9)
	{
		pergunta9();
	}
	
	//caminho vat4
	if(vet[4] == 0)
	{
		pergunta10();
	}
	
	if(vet[4] == 1)
	{
		pergunta1();
	}
	
	if(vet[4] == 2)
	{
		pergunta2();
	}
	
	if(vet[4] == 3)
	{
		pergunta3();
	}
	
	if(vet[4] == 4)
	{
		pergunta4();
	}
	
	if(vet[4] == 5)
	{
		pergunta5();
	}
		
	if(vet[4] == 6)
	{
		pergunta6();
	}
	
	if(vet[4] == 7)
	{
		pergunta7();
	}
	
	if(vet[4] == 8)
	{
		pergunta8();
	}
	
	if(vet[4] == 9)
	{
		pergunta9();
	}
	
	//caminho vat5
	if(vet[5] == 0)
	{
		pergunta10();
	}
	
	if(vet[5] == 1)
	{
		pergunta1();
	}
	
	if(vet[5] == 2)
	{
		pergunta2();
	}
	
	if(vet[5] == 3)
	{
		pergunta3();
	}
	
	if(vet[5] == 4)
	{
		pergunta4();
	}
	
	if(vet[5] == 5)
	{
		pergunta5();
	}
		
	if(vet[5] == 6)
	{
		pergunta6();
	}
	
	if(vet[5] == 7)
	{
		pergunta7();
	}
	
	if(vet[5] == 8)
	{
		pergunta8();
	}
	
	if(vet[5] == 9)
	{
		pergunta9();
	}
	
//caminho vat6
	if(vet[6] == 0)
	{
		pergunta10();
	}
	
	if(vet[6] == 1)
	{
		pergunta1();
	}
	
	if(vet[6] == 2)
	{
		pergunta2();
	}
	
	if(vet[6] == 3)
	{
		pergunta3();
	}
	
	if(vet[6] == 4)
	{
		pergunta4();
	}
	
	if(vet[6] == 5)
	{
		pergunta5();
	}
		
	if(vet[6] == 6)
	{
		pergunta6();
	}
	
	if(vet[6] == 7)
	{
		pergunta7();
	}
	
	if(vet[6] == 8)
	{
		pergunta8();
	}
	
	if(vet[6] == 9)
	{
		pergunta9();
	}
	
//caminho vat7
	if(vet[7] == 0)
	{
		pergunta10();
	}
	
	if(vet[7] == 1)
	{
		pergunta1();
	}
	
	if(vet[7] == 2)
	{
		pergunta2();
	}
	
	if(vet[7] == 3)
	{
		pergunta3();
	}
	
	if(vet[7] == 4)
	{
		pergunta4();
	}
	
	if(vet[7] == 5)
	{
		pergunta5();
	}
		
	if(vet[7] == 6)
	{
		pergunta6();
	}
	
	if(vet[7] == 7)
	{
		pergunta7();
	}
	
	if(vet[7] == 8)
	{
		pergunta8();
	}
	
	if(vet[7] == 9)
	{
		pergunta9();
	}
//caminho vat8
	if(vet[8] == 0)
	{
		pergunta10();
	}
	
	if(vet[8] == 1)
	{
		pergunta1();
	}
	
	if(vet[8] == 2)
	{
		pergunta2();
	}
	
	if(vet[8] == 3)
	{
		pergunta3();
	}
	
	if(vet[8] == 4)
	{
		pergunta4();
	}
	
	if(vet[8] == 5)
	{
		pergunta5();
	}
		
	if(vet[8] == 6)
	{
		pergunta6();
	}
	
	if(vet[8] == 7)
	{
		pergunta7();
	}
	
	if(vet[8] == 8)
	{
		pergunta8();
	}
	
	if(vet[8] == 9)
	{
		pergunta9();
	}
	
//caminho vat9
	if(vet[9] == 0)
	{
		pergunta10();
	}
	
	if(vet[9] == 1)
	{
		pergunta1();
	}
	
	if(vet[9] == 2)
	{
		pergunta2();
	}
	
	if(vet[9] == 3)
	{
		pergunta3();
	}
	
	if(vet[9] == 4)
	{
		pergunta4();
	}
	
	if(vet[9] == 5)
	{
		pergunta5();
	}
		
	if(vet[9] == 6)
	{
		pergunta6();
	}
	
	if(vet[9] == 7)
	{
		pergunta7();
	}
	
	if(vet[9] == 8)
	{
		pergunta8();
	}
	
	if(vet[9] == 9)
	{
		pergunta9();
	}
	
    fim();
}


void pergunta1()
    {
    printf("Ok, %s  se voc� chegou aqui, voc� � merecedor!\n\n", nome);

    printf("Cada pergunta, vale 1 ponto. Ent�o vamos l�, boa sorte!\n\n");
//pergunta
    printf("Pergunta n�mero 1: Qual � a fun��o dos registradores?\n\n");
//alternativas
    printf("a) Armazenar dados que ser�o manipulados nas opera��es do programa, tamb�m conhecido como CD.\n");
    printf("b) Apontar para o endere�o que cont�m a pr�xima instru��o a ser lida.\n");
    printf("c) Armazenar a instru��o em execu��o.\n");
    printf("d) Armazenar endere�os de mem�ria que apontam para c�lulas na mem�ria principal.\n\n");

limpar_buffer();

resposta = getchar();

//caso o usuario digite algo q nao seja abcd ou ABCD
while (resposta != 'a' && resposta != 'A' && resposta != 'b' && resposta != 'B' && resposta != 'c' && resposta != 'C' && resposta != 'd' && resposta != 'D')
{
PlaySound(TEXT("digitoErrado.wav"), NULL, SND_SYNC);
printf("Digito inv�lido.\n\n");

 printf("a) Armazenar dados que ser�o manipulados nas opera��es do programa, tamb�m conhecido como CD.\n");
    printf("b) Apontar para o endere�o que cont�m a pr�xima instru��o a ser lida.\n");
    printf("c) Armazenar a instru��o em execu��o.\n");
    printf("d) Armazenar endere�os de mem�ria que apontam para c�lulas na mem�ria principal.\n\n");

limpar_buffer();

resposta = getchar();
}

if (resposta == 'a' || resposta == 'A')
{
	PlaySound(TEXT("errou.wav"), NULL, SND_SYNC);
    system("color 4");
    limpar_buffer();
    printf("A sua resposta infelizmente est� incorreta!\n");
    printf("pois o registrador o qual a fun��o � armazenar dados que ser�o manipulados nas opera��es do programa, � o RDM/ACC.\n");
    erros +=1;
    printf("acertos: %.00f\n\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if (resposta == 'b' || resposta == 'B')
{
	PlaySound(TEXT("errou.wav"), NULL, SND_SYNC);
    system("color 4");
    limpar_buffer();
    printf("A sua resposta infelizmente est� incorreta.\n");
    printf("pois o registrador o qual a fun��o � apontar para o endere�o que cont�m a pr�xima instru��o a ser lida, � o CI/CP.\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if(resposta == 'c' || resposta == 'C')
{
	PlaySound(TEXT("errou.wav"), NULL, SND_SYNC);
    system("color 4");
    printf("A sua resposta infelizmente est� incorreta.\n");
    printf("incorreta, pois o registrador o qual a fun��o � armazenar a instru��o em execu��o, � o RI.\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

if(resposta == 'd' || resposta == 'D')
{
	PlaySound(TEXT("acertou.wav"), NULL, SND_SYNC);
    system("color 2");
    printf("A sua resposta felizmente est� correta.\n");
    printf("pois o registrador armazena endere�os de mem�ria que apontam para c�lulas na mem�ria principal. \n");
    acertos +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

}

void pergunta2()
{
    r3=0;
    printf("\n\nPergunta n�mero 2: Marque a alternativa(s) correta(s)\n\n");

    printf("a)	A mem�ria cache est� localizada fora da CPU, � considerada um dispositivo de entrada e sa�da, sendo opcional ao usu�rio utilizar.");

    limpar_buffer();
    printf("\n\nVoc� acha que a A est� correta?envie (s) se voc� acha que � verdadeiro e (n) se acha que n�o\n");
    resposta = getchar();

    if(resposta == 's' && r3 == 0 || resposta == 'S' && r3 == 0)
    {
        r3 = 1;
    }
    while (resposta != 's' && resposta != 'n' && resposta != 'S' && resposta != 'N')
    {
    	PlaySound(TEXT("digitoErrado.wav"), NULL, SND_SYNC);
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("\n\nVoc� acha que a A est� correta?envie (s) se voc� acha que � verdadeiro e (n) se acha que n�o\n");
        resposta = getchar();

        if(resposta == 's' && r3 == 0 || resposta == 'S' && r3 == 0)
        {
            r3 = 1;
        }
    }
    printf("b)  A mem�ria cache est� localizada ao lado da mem�ria ram e � considerada a mem�ria mais r�pida ap�s a mem�ria ram, sendo uma mem�ria vol�til.  \n");

    limpar_buffer();
    printf("\n\nVoc� acha que a B est� correta?envie (s) se voc� acha que � verdadeiro e (n) se acha que n�o\n");
    resposta = getchar();

    if(resposta == 's' && r3 == 0 || resposta == 'S' && r3 == 0)
    {
        r3 = 1;
    }
    while (resposta != 's' && resposta != 'n' && resposta != 'S' && resposta != 'N')
    {
    	PlaySound(TEXT("digitoErrado.wav"), NULL, SND_SYNC);
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("\n\nVoc� acha que a B est� correta?envie (s) se voc� acha que � verdadeiro e (n) se acha que n�o\n");
        resposta = getchar();

        if(resposta == 's' && r3 == 0 || resposta == 'S' && r3 == 0)
        {
            r3 = 1;
        }
    }

    printf("c)  A mem�ria cache est� localizada internamente ao processador e � considerada a mais memoria mais r�pida ap�s os registradores, sendo uma mem�ria n�o vol�til. \n");

    limpar_buffer();
    printf("\n\nVoc� acha que a C est� correta?envie (s) se voc� acha que � verdadeiro e (n) se acha que n�o\n");
    resposta = getchar();

    if(resposta == 's' && r3 == 0 || resposta == 'S' && r3 == 0)
    {
        r3 = 1;
    }
    while (resposta != 's' && resposta != 'n' && resposta != 'S' && resposta != 'N')
    {
    	PlaySound(TEXT("digitoErrado.wav"), NULL, SND_SYNC);
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("\n\nVoc� acha que a C est� correta?envie (s) se voc� acha que � verdadeiro e (n) se acha que n�o\n");
        resposta = getchar();

        if(resposta == 's' && r3 == 0 || resposta == 'S' && r3 == 0)
        {
            r3 = 1;
        }
    }


    printf("d)	A mem�ria cache est� localizada internamente ao processador e � considerada a mem�ria mais r�pida ap�s os registradores, sendo uma mem�ria vol�til.  \n");

     limpar_buffer();
    printf("\n\nVoc� acha que a D est� correta?envie (s) se voc� acha que � verdadeiro e (n) se acha que n�o\n");
    resposta = getchar();

    if(resposta == 's' && r3 == 0 || resposta == 'S' && r3 == 0)
    {
        r3 =0;
    }
    if(resposta == 'n' || resposta == 'N')
    {
        r3=1;
    }
    if(resposta == 'n' && r3 == 0 || resposta == 'N' && r3 == 0)
    {
        r3 =1;
    }
    while (resposta != 's' && resposta != 'n' && resposta != 'S' && resposta != 'N')
    {
    	PlaySound(TEXT("digitoErrado.wav"), NULL, SND_SYNC);
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("\n\nVoc� acha que a D est� correta?envie (s) se voc� acha que � verdadeiro e (n) se acha que n�o\n");
        resposta = getchar();

        if(resposta == 's' && r3 == 0 || resposta == 'S' && r3 == 0)
        {
            r3 =0;
        }
        if(resposta == 'n' || resposta == 'N')
        {
            r3=1;
        }
        if(resposta == 'n' && r3 == 0 || resposta == 'N' && r3 == 0)
        {
            r3 =1;
        }
    }
    printf("e)	A mem�ria cache possui 3 n�veis de mem�ria, � n�o vol�til e est� localizada dentro do processador. \n\n");

     limpar_buffer();
    printf("\n\nVoc� acha que a E est� correta?envie (s) se voc� acha que � verdadeiro e (n) se acha que n�o\n");
    resposta = getchar();

    if(resposta == 's' && r3 == 0 || resposta == 'S' && r3 == 0)
    {
        r3=1;
    }
    while (resposta != 's' && resposta != 'n' && resposta != 'S' && resposta != 'N')
    {
    	PlaySound(TEXT("digitoErrado.wav"), NULL, SND_SYNC);
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("\n\nVoc� acha que a E est� correta?envie (s) se voc� acha que � verdadeiro e (n) se acha que n�o\n");
        resposta = getchar();

        if(resposta == 's' && r3 == 0 || resposta == 'S' && r3 == 0)
        {
            r3=1;
        }
    }

    printf("f)	A mem�ria cache possui 3 n�veis de mem�ria, � vol�til e est� localizada fora do processador. \n\n");

     limpar_buffer();
    printf("\n\nVoc� acha que a F est� correta?envie (s) se voc� acha que � verdadeiro e (n) se acha que n�o\n");
    resposta = getchar();

    if(resposta == 's' && r3 == 0 || resposta == 'S' && r3 == 0)
    {
        r3=1;
    }
    while (resposta != 's' && resposta != 'n' && resposta != 'S' && resposta != 'N')
    {
    	PlaySound(TEXT("digitoErrado.wav"), NULL, SND_SYNC);
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("\n\nVoc� acha que a F est� correta?envie (s) se voc� acha que � verdadeiro e (n) se acha que n�o\n");
        resposta = getchar();

        if(resposta == 's' && r3 == 0 || resposta == 'S' && r3 == 0)
        {
            r3=1;
        }
    }

    printf("g)	A mem�ria cache possui 4 n�veis de mem�ria, � vol�til e est� localizada dentro do processador. \n\n");

     limpar_buffer();
    printf("\n\nVoc� acha que a G est� correta?envie (s) se voc� acha que � verdadeiro e (n) se acha que n�o\n");
    resposta = getchar();

    if(resposta == 's' && r3 == 0 || resposta == 'S' && r3 == 0)
    {
        r3=1;
    }
    while (resposta != 's' && resposta != 'n' && resposta != 'S' && resposta != 'N')
    {
    	PlaySound(TEXT("digitoErrado.wav"), NULL, SND_SYNC);
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("\n\nVoc� acha que a G est� correta?envie (s) se voc� acha que � verdadeiro e (n) se acha que n�o\n");
        resposta = getchar();

        if(resposta == 's' && r3 == 0 || resposta == 'S' && r3 == 0)
        {
            r3=1;
        }
    }

  printf("h)    A mem�ria cache possui 3 n�veis de mem�ria, � vol�til e est� localizada dentro do processador.   \n");

     limpar_buffer();
    printf("\n\nVoc� acha que a H est� correta?envie (s) se voc� acha que � verdadeiro e (n) se acha que n�o\n");
    resposta = getchar();

    if(resposta == 's' && r3 == 0 || resposta == 'S' && r3 == 0)
    {
        r3 =0;
    }
    if(resposta == 'n' || resposta == 'N')
    {
        r3=1;
    }
    if(resposta == 'n' && r3 == 0 || resposta == 'N' && r3 == 0)
    {
        r3 =1;
    }
    while (resposta != 's' && resposta != 'n' && resposta != 'S' && resposta != 'N')
    {
    	PlaySound(TEXT("digitoErrado.wav"), NULL, SND_SYNC);
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("\n\nVoc� acha que a H est� correta?envie (s) se voc� acha que � verdadeiro e (n) se acha que n�o\n");
        resposta = getchar();


        if(resposta == 's' && r3 == 0 || resposta == 'S' && r3 == 0)
        {
            r3 =0;
        }
        if(resposta == 'n' || resposta == 'N')
        {
            r3=1;
        }
        if(resposta == 'n' && r3 == 0 || resposta == 'N' && r3 == 0)
        {
            r3 =1;
        }
    }


    if(r3==1)
    {
    	PlaySound(TEXT("errou.wav"), NULL, SND_SYNC);
        erros+=1;
        system("color 4");
    }
    if(r3==0)
    {
    	PlaySound(TEXT("acertou.wav"), NULL, SND_SYNC);
        acertos+=1;
        system("color 2");
    }

    printf("acertos: %0.00f\n", acertos);
}

void pergunta3()
{
    r3=0;
    printf("Pergunta n�mero 3: Marque a alternativa(s) correta(s)\n\n");

    printf("a) A mem�ria principal s�o os hardwares de armazenamento n�o vol�teis como HD, SSD, Pendrive, entre outros. \n");

    limpar_buffer();
    printf("\n\nVoc� acha que a A est� correta?envie (s) se voc� acha que � verdadeiro e (n) se acha que n�o\n");
    resposta = getchar();

    if(resposta == 's' && r3 == 0 || resposta == 'S' && r3 == 0)
    {
        r3 = 1;
    }
    while (resposta != 's' && resposta != 'n' && resposta != 'S' && resposta != 'N')
    {
    	PlaySound(TEXT("digitoErrado.wav"), NULL, SND_SYNC);
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("\n\nVoc� acha que a A est� correta?envie (s) se voc� acha que � verdadeiro e (n) se acha que n�o\n");
        resposta = getchar();

        if(resposta == 's' && r3 == 0 || resposta == 'S' && r3 == 0)
        {
            r3 = 1;
        }
    }
    printf("b) Os equipamentos de entrada e sa�da s�o todos os componentes que conectados ao computador para enviar ou retornar dados como monitor, mouse, teclado, entre outros. ");

    limpar_buffer();
    printf("\n\nVoc� acha que a B est� correta?envie (s) se voc� acha que � verdadeiro e (n) se acha que n�o\n");
    resposta = getchar();

    if(resposta == 's' && r3 == 0 || resposta == 'S' && r3 == 0)
    {
        r3 =0;
    }
    if(resposta == 'n' || resposta == 'N')
    {
        r3=1;
    }
    if(resposta == 'n' && r3 == 0 || resposta == 'N' && r3 == 0)
    {
        r3 =1;
    }
    while (resposta != 's' && resposta != 'n' && resposta != 'S' && resposta != 'N')
    {
    	PlaySound(TEXT("digitoErrado.wav"), NULL, SND_SYNC);
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("\n\nVoc� acha que a B est� correta?envie (s) se voc� acha que � verdadeiro e (n) se acha que n�o\n");
        resposta = getchar();


        if(resposta == 's' && r3 == 0 || resposta == 'S' && r3 == 0)
        {
            r3 =0;
        }
        if(resposta == 'n' || resposta == 'N')
        {
            r3=1;
        }
        if(resposta == 'n' && r3 == 0 || resposta == 'N' && r3 == 0)
        {
            r3 =1;
        }
    }

    printf("c) UC � a parte da CPU que controla e instrui a ULA a fazer os c�lculos sendo assim comandando e fornecendo o que vai para ULA. ");

    limpar_buffer();
    printf("\n\nVoc� acha que a C est� correta?envie (s) se voc� acha que � verdadeiro e (n) se acha que n�o\n");
    resposta = getchar();


    if(resposta == 's' && r3 == 0 || resposta == 'S' && r3 == 0)
    {
        r3 =0;
    }
    if(resposta == 'n' || resposta == 'N')
    {
        r3=1;
    }
    if(resposta == 'n' && r3 == 0 || resposta == 'N' && r3 == 0)
    {
        r3 =1;
    }
    while (resposta != 's' && resposta != 'n' && resposta != 'S' && resposta != 'N')
    {
    	PlaySound(TEXT("digitoErrado.wav"), NULL, SND_SYNC);
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("\n\nVoc� acha que a C est� correta?envie (s) se voc� acha que � verdadeiro e (n) se acha que n�o\n");
        resposta = getchar();


        if(resposta == 's' && r3 == 0 || resposta == 'S' && r3 == 0)
        {
            r3 =0;
        }
        if(resposta == 'n' || resposta == 'N')
        {
            r3=1;
        }
        if(resposta == 'n' && r3 == 0 || resposta == 'N' && r3 == 0)
        {
            r3 =1;
        }
    }

    printf("d) A mem�ria principal trabalha em conjunto com o processador armazenando dados que est�o em constante uso em seu computador e n�o se perde esses dados ao se desligar ou fech�-los. ");

     limpar_buffer();
    printf("\n\nVoc� acha que a D est� correta?envie (s) se voc� acha que � verdadeiro e (n) se acha que n�o\n");
    resposta = getchar();

    if(resposta == 's' && r3 == 0 || resposta == 'S' && r3 == 0)
    {
        r3=1;
    }

    while (resposta != 's' && resposta != 'n' && resposta != 'S' && resposta != 'N')
    {
    	PlaySound(TEXT("digitoErrado.wav"), NULL, SND_SYNC);
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("\n\nVoc� acha que a D est� correta?envie (s) se voc� acha que � verdadeiro e (n) se acha que n�o\n");
        resposta = getchar();

        if(resposta == 's' && r3 == 0 || resposta == 'S' && r3 == 0)
        {
            r3 =1;
        }
    }
    printf("e) CPU � o componente onde � processado toda a parte gr�fica/visual do seu computador a Unidade de processamento gr�fico.");

     limpar_buffer();
    printf("\n\nVoc� acha que a E est� correta?envie (s) se voc� acha que � verdadeiro e (n) se acha que n�o\n");
    resposta = getchar();

    if(resposta == 's' && r3 == 0 || resposta == 'S' && r3 == 0)


    {
        r3=1;
    }
    while (resposta != 's' && resposta != 'n' && resposta != 'S' && resposta != 'N')
    {
    	PlaySound(TEXT("digitoErrado.wav"), NULL, SND_SYNC);
        printf("apenas (s) ou (n)\n");

        limpar_buffer();
        printf("\n\nVoc� acha que a E est� correta?envie (s) se voc� acha que � verdadeiro e (n) se acha que n�o\n");
        resposta = getchar();

        if(resposta == 's' && r3 == 0 || resposta == 'S' && r3 == 0)
        {
            r3=1;
        }
    }

    if(r3==1)
    {
    	PlaySound(TEXT("errou.wav"), NULL, SND_SYNC);
        erros+=1;
        system("color 4");
    }
    if(r3==0)
    {
    	PlaySound(TEXT("acertou.wav"), NULL, SND_SYNC);
        acertos+=1;
        system("color 2");
    }

    printf("acertos: %0.00f\n", acertos);
}

void pergunta4()
{

   printf("Pergunta n�mero 4: Como � formado o ciclo de instru��o e quais os seus componentes envolvidos?\n\n");
//alternativas
    printf("a) Atrav�s do armazenamento de dados na mem�ria externa auxiliar que manda informa��es para ULA\n");
    printf("b) Come�a com output de dados,depois armazenamento na Bios \n");
    printf("c) Busca da instru��o,Incrementa o Contador de Instru��o,Decodifica��o do c�digo da opera��o,Se a instru��o tiver operandos, a UC dever� busc�-los,sen�o passa diretamente para o pr�ximo passo.\n");
    printf("d) Todas est�o erradas(incorreta) pois existe somente uma resposta correta que descreve exatamente todos os processos e componentes do ciclo de intru��o.\n\n");

limpar_buffer();

resposta = getchar();

//caso o usuario digite algo q nao seja abcd ou ABCD
while (resposta != 'a' && resposta != 'A' && resposta != 'b' && resposta != 'B' && resposta != 'c' && resposta != 'C' && resposta != 'd' && resposta != 'D')
{
	PlaySound(TEXT("digitoErrado.wav"), NULL, SND_SYNC);
printf("Digito inv�lido.\n\n");

    printf("a) Atrav�s do armazenamento de dados na mem�ria externa auxiliar que manda informa��es para ULA\n");
    printf("b) Come�a com output de dados,depois armazenamento na Bios \n");
    printf("c) Busca da instru��o,Incrementa o Contador de Instru��o,Decodifica��o do c�digo da opera��o,Se a instru��o tiver operandos, a UC dever� busc�-los,sen�o passa diretamente para o pr�ximo passo.\n");
    printf("d) Todas est�o erradas\n\n");

limpar_buffer();

resposta = getchar();
}

if (resposta == 'a' || resposta == 'A')
{
	PlaySound(TEXT("errou.wav"), NULL, SND_SYNC);
    system("color 4");
    limpar_buffer();
    printf("A sua resposta infelizmente est� incorreta!\n");
    printf("pois o componente descreve HD e n�o come�a pelo armazenamento.\n");
    erros +=1;
    printf("acertos: %.00f\n\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if (resposta == 'b' || resposta == 'B')
{
	PlaySound(TEXT("errou.wav"), NULL, SND_SYNC);
    system("color 4");
    limpar_buffer();
    printf("A sua resposta infelizmente est� incorreta.\n");
    printf("pois descreve uma sa�da de dados, exemplo via monitor e tamb�m descreve a mem�ria Bios como processo comum,quando na realidade ela tem seu uso espec�fico inicializa��o do sistema.\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if(resposta == 'c' || resposta == 'C')
{
	PlaySound(TEXT("acertou.wav"), NULL, SND_SYNC);
    system("color 2");
    printf("A sua resposta felizmente est� correta.\n");
    acertos +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

if(resposta == 'd' || resposta == 'D')
{
	PlaySound(TEXT("errou.wav"), NULL, SND_SYNC);
    system("color 4");
    printf("A sua resposta infelizmente est� incorreta.\n");
    printf("pois existe somente uma resposta correta que descreve exatamente todos os processos e componentes do ciclo de intru��o. \n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
}

void pergunta5()
{
    printf("Pergunta n�mero 5: O modelo de arquitetura de computadores foi sugerido por quem e em que ano?\n\n");
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
	PlaySound(TEXT("digitoErrado.wav"), NULL, SND_SYNC);
printf("Digito inv�lido.\n\n");

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
	PlaySound(TEXT("errou.wav"), NULL, SND_SYNC);
    system("color 4");
    limpar_buffer();
    printf("A sua resposta infelizmente est� incorreta!\n");
    erros +=1;
    printf("acertos: %.00f\n\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if (resposta == 'b' || resposta == 'B')
{
	PlaySound(TEXT("acertou.wav"), NULL, SND_SYNC);
    system("color 2");
    limpar_buffer();
    printf("A sua resposta felizmente est� correta.\n");
    acertos +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if(resposta == 'c' || resposta == 'C')
{
	PlaySound(TEXT("errou.wav"), NULL, SND_SYNC);
    system("color 4");
    printf("A sua resposta infelizmente est� incorreta!\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

if(resposta == 'd' || resposta == 'D')
{
	PlaySound(TEXT("errou.wav"), NULL, SND_SYNC);
    system("color 4");
    printf("A sua resposta infelizmente est� incorreta.\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

if(resposta == 'e' || resposta == 'E')
{
	PlaySound(TEXT("errou.wav"), NULL, SND_SYNC);
    system("color 4");
    printf("A sua resposta infelizmente est� incorreta.\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
}

void pergunta6()
{
    printf("Pergunta n�mero 6: O que � clock?\n\n");
//alternativas
    printf("a) � a parte respons�vel pelo rel�gio do computador.\n");
    printf("b) � como uma biblioteca de acesso r�pido que existe dentro de computadores e dispositivos m�veis. Ela tem o objetivo de guardar dados, informa��es e processos tempor�rios acessados com frequ�ncia. \n");
    printf("c) � quem faz os c�lculos l�gicos e aritm�tica no computador.\n");
    printf("d) � a velocidade q um processador processa suas tarefas em Hertz e ciclos de processamento.\n\n");

limpar_buffer();

resposta = getchar();

while (resposta != 'a' && resposta != 'A' && resposta != 'b' && resposta != 'B' && resposta != 'c' && resposta != 'C' && resposta != 'd' && resposta != 'D')
{
	PlaySound(TEXT("digitoErrado.wav"), NULL, SND_SYNC);
printf("Digito inv�lido.\n\n");

    printf("a) � a parte respons�vel pelo rel�gio do computador.\n");
    printf("b) � como uma biblioteca de acesso r�pido que existe dentro de computadores e dispositivos m�veis. Ela tem o objetivo de guardar dados, informa��es e processos tempor�rios acessados com frequ�ncia. \n");
    printf("c) � quem faz os c�lculos l�gicos e aritm�tica no computador.\n");
    printf("d) � a velocidade q um processador processa suas tarefas em Hertz e ciclos de processamento.\n\n");

limpar_buffer();

resposta = getchar();
}
if (resposta == 'a' || resposta == 'A')
{
	PlaySound(TEXT("errou.wav"), NULL, SND_SYNC);
    system("color 4");
    limpar_buffer();
    printf("A sua resposta infelizmente est� incorreta!\n");
    printf("quem faz isso � a bateria de l�tio acoplada � placa-m�e n�o o clock");
    erros +=1;
    printf("acertos: %.00f\n\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if (resposta == 'b' || resposta == 'B')
{
	PlaySound(TEXT("errou.wav"), NULL, SND_SYNC);
    system("color 4");
    limpar_buffer();
    printf("A sua resposta infelizmente est� incorreta!\n");
    printf("A alternativa se refere a memoria cache");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if(resposta == 'c' || resposta == 'C')
{
	PlaySound(TEXT("errou.wav"), NULL, SND_SYNC);
    system("color 4");
    printf("A sua resposta infelizmente est� incorreta!\n");
    printf("A alternativa se refere a ULA unidade logica e aritmetica");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

if(resposta == 'd' || resposta == 'D')
{
	PlaySound(TEXT("acertou.wav"), NULL, SND_SYNC);
    system("color 2");
    printf("A sua resposta felizmente est� correta.\n");
    acertos +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
}

void pergunta7()
{
    printf("Pergunta n�mero 7: Qual a fun��o da mem�ria RAM?\n\n");
//alternativas
    printf("a) a mem�ria RAM � n�o vol�til e � a respons�vel por guardar temporariamente todas as informa��es que est�o em execu��o no computador, garantindo acesso r�pido quando o processador necessita delas.\n");
    printf("b) Sua fun��o � o armazenamento de dados. Isto significa que quando algum arquivo � armazenado, ele n�o se perde com o desligamento da m�quina sendo vol�til. \n");
    printf("c) Sua fun��o � o armazenamento de dados. Isto significa que quando algum arquivo � armazenado, ele n�o se perde com o desligamento da m�quina sendo n�o vol�til.\n");
    printf("d) a mem�ria RAM � vol�til e � a respons�vel por guardar temporariamente todas as informa��es que est�o em execu��o no computador, garantindo acesso r�pido quando o processador necessita delas.\n");
    printf("e) N.D.A\n\n");

limpar_buffer();

resposta = getchar();

while (resposta != 'a' && resposta != 'A' && resposta != 'b' && resposta != 'B' && resposta != 'c' && resposta != 'C' && resposta != 'd' && resposta != 'D' && resposta != 'E' && resposta != 'e')
{
	PlaySound(TEXT("digitoErrado.wav"), NULL, SND_SYNC);
printf("Digito inv�lido.\n\n");

    printf("a) a mem�ria RAM � n�o vol�til e � a respons�vel por guardar temporariamente todas as informa��es que est�o em execu��o no computador, garantindo acesso r�pido quando o processador necessita delas.\n");
    printf("b) Sua fun��o � o armazenamento de dados. Isto significa que quando algum arquivo � armazenado, ele n�o se perde com o desligamento da m�quina sendo vol�til. \n");
    printf("c) Sua fun��o � o armazenamento de dados. Isto significa que quando algum arquivo � armazenado, ele n�o se perde com o desligamento da m�quina sendo n�o vol�til.\n");
    printf("d) a mem�ria RAM � vol�til e � a respons�vel por guardar temporariamente todas as informa��es que est�o em execu��o no computador, garantindo acesso r�pido quando o processador necessita delas.\n");
    printf("e) N.D.A\n\n");

limpar_buffer();

resposta = getchar();
}
if (resposta == 'a' || resposta == 'A')
{
	PlaySound(TEXT("errou.wav"), NULL, SND_SYNC);
    system("color 4");
    limpar_buffer();
    printf("A sua resposta infelizmente est� incorreta!\n");
    printf("A memoria RAM � volatil\n");
    erros +=1;
    printf("acertos: %.00f\n\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if (resposta == 'b' || resposta == 'B')
{
	PlaySound(TEXT("errou.wav"), NULL, SND_SYNC);
    system("color 4");
    limpar_buffer();
    printf("A sua resposta infelizmente est� incorreta!\n");
    printf("Essa quest�o ao que tudo indica se refere a memoria secundaria HD/SSD, por�m diz sendo vol�til e esses componentes n�o s�o vol�teis.\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if(resposta == 'c' || resposta == 'C')
{
	PlaySound(TEXT("errou.wav"), NULL, SND_SYNC);
    system("color 4");
    printf("A sua resposta infelizmente est� incorreta!\n");
    printf("Essa quest�o ao que tudo indica se refere a memoria secundaria HD/SSD.\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

if(resposta == 'd' || resposta == 'D')
{
	PlaySound(TEXT("acertou.wav"), NULL, SND_SYNC);
    system("color 2");
    printf("A sua resposta felizmente est� correta.\n");
    acertos +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

if(resposta == 'e' || resposta == 'E')
{
	PlaySound(TEXT("errou.wav"), NULL, SND_SYNC);
    system("color 4");
    printf("A sua resposta infelizmente est� incorreta.\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
}

void pergunta8()
{
    printf("Pergunta n�mero 8: Qual a diferen�a entre Arquitetura e Organiza��o de computadores?\n\n");
//alternativas
    printf("a) A arquitetura se refere ao comportamento de um sistema computacional vis�vel para o programador, ou seja, aos aspectos relacionados com a execu��o l�gica de um programa. A organiza��o de computadores se refere �s unidades estruturais e seus relacionamentos l�gicos e eletr�nicos.\n");
    printf("b) A organiza��o se refere ao comportamento de um sistema computacional vis�vel para o programador, ou seja, aos aspectos relacionados com a execu��o l�gica de um programa. A arquitetura de computadores se refere �s unidades estruturais e seus relacionamentos l�gicos e eletr�nicos. \n");
    printf("c) A arquitetura engloba as interfaces, implementa��o das instru��es, interconex�es e entre ouros j�, a organiza��o o repert�rio de instru��es, modos de endere�amento, conjunto de registradores e entre outros..\n");
    printf("d) N.D.A\n\n");

limpar_buffer();

resposta = getchar();

while (resposta != 'a' && resposta != 'A' && resposta != 'b' && resposta != 'B' && resposta != 'c' && resposta != 'C' && resposta != 'd' && resposta != 'D')
{
	PlaySound(TEXT("digitoErrado.wav"), NULL, SND_SYNC);
printf("Digito inv�lido.\n\n");

    printf("a) A arquitetura se refere ao comportamento de um sistema computacional vis�vel para o programador, ou seja, aos aspectos relacionados com a execu��o l�gica de um programa. A organiza��o de computadores se refere �s unidades estruturais e seus relacionamentos l�gicos e eletr�nicos.\n");
    printf("b) A organiza��o se refere ao comportamento de um sistema computacional vis�vel para o programador, ou seja, aos aspectos relacionados com a execu��o l�gica de um programa. A arquitetura de computadores se refere �s unidades estruturais e seus relacionamentos l�gicos e eletr�nicos. \n");
    printf("c) A arquitetura engloba as interfaces, implementa��o das instru��es, interconex�es e entre ouros j�, a organiza��o o repert�rio de instru��es, modos de endere�amento, conjunto de registradores e entre outros..\n");
    printf("d) N.D.A\n\n");

limpar_buffer();

resposta = getchar();
}
if (resposta == 'a' || resposta == 'A')
{
	PlaySound(TEXT("acertou.wav"), NULL, SND_SYNC);
    system("color 2");
    limpar_buffer();
    printf("A sua resposta felizmente est� correta.\n");
    acertos +=1;
    printf("acertos: %.00f\n\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if (resposta == 'b' || resposta == 'B')
{
	PlaySound(TEXT("errou.wav"), NULL, SND_SYNC);
    system("color 4");
    limpar_buffer();
    printf("A sua resposta infelizmente est� incorreta!\n");
    printf("a alternativa trocou de lugar arquitetura e organiza��o");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if(resposta == 'c' || resposta == 'C')
{
	PlaySound(TEXT("errou.wav"), NULL, SND_SYNC);
    system("color 4");
    printf("A sua resposta infelizmente est� incorreta!\n");
    printf("a alternativa trocou de lugar arquitetura e organiza��o");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

if(resposta == 'd' || resposta == 'D')
{
	PlaySound(TEXT("errou.wav"), NULL, SND_SYNC);
    system("color 4");
    printf("A sua resposta infelizmente est� incorreta!\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
}

void pergunta9()
{
    printf("Pergunta n�mero 9: Dentre os elementos que comp�em a CPU, Unidade Central de Processamento(Central Processing Unit), aquele que contribui para a realiza��o da fun��o de processamento � o?\n\n");
//alternativas
    printf("a) contador de instru��o..\n");
    printf("b) registrador de endere�o de mem�ria. \n");
    printf("c) clock.\n");
    printf("d) registrador de instru��o.\n");
    printf("e) registrador de dados.\n");
    printf("f) N.D.A\n\n");


limpar_buffer();

resposta = getchar();

while (resposta != 'a' && resposta != 'A' && resposta != 'b' && resposta != 'B' && resposta != 'c' && resposta != 'C' && resposta != 'd' && resposta != 'D' && resposta != 'E' && resposta != 'e' && resposta != 'F' && resposta != 'f')
{
	PlaySound(TEXT("digitoErrado.wav"), NULL, SND_SYNC);
printf("Digito inv�lido.\n\n");

    printf("a) contador de instru��o..\n");
    printf("b) registrador de endere�o de mem�ria. \n");
    printf("c) clock.\n");
    printf("d) registrador de instru��o.\n");
    printf("e) registrador de dados.\n");
    printf("f) N.D.A\n\n");

limpar_buffer();

resposta = getchar();
}
if (resposta == 'a' || resposta == 'A')
{
	PlaySound(TEXT("errou.wav"), NULL, SND_SYNC);
    system("color 4");
    limpar_buffer();
    printf("A sua resposta infelizmente est� incorreta!\n");
    erros +=1;
    printf("acertos: %.00f\n\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if (resposta == 'b' || resposta == 'B')
{
	PlaySound(TEXT("errou.wav"), NULL, SND_SYNC);
    system("color 4");
    limpar_buffer();
    printf("A sua resposta infelizmente est� incorreta!\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if(resposta == 'c' || resposta == 'C')
{
	PlaySound(TEXT("errou.wav"), NULL, SND_SYNC);
    system("color 4");
    printf("A sua resposta infelizmente est� incorreta!\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

if(resposta == 'd' || resposta == 'D')
{
	PlaySound(TEXT("errou.wav"), NULL, SND_SYNC);
    system("color 4");
    printf("A sua resposta infelizmente est� incorreta!\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

if(resposta == 'e' || resposta == 'E')
{
	PlaySound(TEXT("acertou.wav"), NULL, SND_SYNC);
    system("color 2");
    printf("A sua resposta felizmente est� correta.\n");
    acertos +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

if(resposta == 'f' || resposta == 'F')
{
	PlaySound(TEXT("errou.wav"), NULL, SND_SYNC);
    system("color 4");
    printf("A sua resposta infelizmente est� incorreta.\n");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
}

void pergunta10()
{
    printf("Pergunta n�mero 10: A medi��o do clock � feita em hertz (Hz), a unidade padr�o de medidas de frequ�ncia, que indica o n�mero de oscila��es ou ciclos que ocorre dentro de uma determinada medida de tempo, no caso, segundos. Por exemplo, o processador AMD Ryzen 5 5600 com 6 n�cleos , com clock de 3,6 GHz executa(e com turbo ele possui 4.1GHz):\n\n");
//alternativas
    printf("a) 21,6 bilh�es de tarefas por segundo(24,6 bilh�es de tarefas por segundo).\n");
    printf("b) 21,8 bilh�es de tarefas por segundo(24,4 bilh�es de tarefas por segundo). \n");
    printf("c) 7,2 bilh�es de tarefas por segundo(8,2 bilh�es de tarefas por segundo no turbo). \n");
    printf("d) 3,6 bilh�es de tarefas por segundo(4,1 bilh�es de tarefas por segundo no turbo). \n\n");

limpar_buffer();

resposta = getchar();

while (resposta != 'a' && resposta != 'A' && resposta != 'b' && resposta != 'B' && resposta != 'c' && resposta != 'C' && resposta != 'd' && resposta != 'D')
{
	PlaySound(TEXT("digitoErrado.wav"), NULL, SND_SYNC);
printf("Digito inv�lido.\n\n");

    printf("a) 21,6 bilh�es de tarefas por segundo(24,6 bilh�es de tarefas por segundo).\n");
    printf("b) 21,8 bilh�es de tarefas por segundo(24,4 bilh�es de tarefas por segundo). \n");
    printf("c) 7,2 bilh�es de tarefas por segundo(8,2 bilh�es de tarefas por segundo no turbo). \n");
    printf("d) 3,6 bilh�es de tarefas por segundo(4,1 bilh�es de tarefas por segundo no turbo). \n\n");

limpar_buffer();

resposta = getchar();
}
if (resposta == 'a' || resposta == 'A')
{
	PlaySound(TEXT("acertou.wav"), NULL, SND_SYNC);
    system("color 2");
    limpar_buffer();
    printf("A sua resposta felizmente est� correta.\n");
    printf("pois pegamos o clock e multiplicamos pela quantidade de nucleos");
    acertos +=1;
    printf("acertos: %.00f\n\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if (resposta == 'b' || resposta == 'B')
{
	PlaySound(TEXT("errou.wav"), NULL, SND_SYNC);
    system("color 4");
    limpar_buffer();
    printf("A sua resposta infelizmente est� incorreta!\n");
    printf("pois pegamos o clock e multiplicamos pela quantidade de nucleos");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}
if(resposta == 'c' || resposta == 'C')
{
	PlaySound(TEXT("errou.wav"), NULL, SND_SYNC);
    system("color 4");
    printf("A sua resposta infelizmente est� incorreta!\n");
    printf("pois pegamos o clock e multiplicamos pela quantidade de nucleos");
    erros +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

if(resposta == 'd' || resposta == 'D')
{
	PlaySound(TEXT("errou.wav"), NULL, SND_SYNC);
    system("color 2");
    printf("A sua resposta infelizmente est� incorreta!\n");
    printf("pois pegamos o clock e multiplicamos pela quantidade de nucleos");
    acertos +=1;
    printf("acertos: %.00f\n", acertos);

    // mostrar os pontos dps printf("acertos: %.00f\n", acertos);
}

}

void fim()
{
	printf("vamos ver sua pontua��o?!(responder com 's' para SIM e 'n' para N�O se responder n ira sair do Jogo.)\n\n");

    limpar_buffer();

    resposta = getchar();

    if(resposta == 's' || resposta == 'S')
    {
    	limpar_buffer();
    }
    if(resposta == 'n' || resposta == 'N')
    {
        sair();
    }

    while(resposta != 's' && resposta != 'n' && resposta != 'S' && resposta != 'N')
    {
    	limpar_buffer();
        printf("resposta invalida tente novamente\n\n");
        printf("vamos ver sua pontua��o?!(responder com 's' para SIM e 'n' para N�O se responder n ira sair do Jogo.)\n\n");

        limpar_buffer();

        resposta = getchar();

        if(resposta == 'n' || resposta != 'N')
        {
            sair();
        }
    }
	
    system("color 1");
    pf = acertos*1;
    limpar_buffer();
    printf("\n\nObrigado por jogar o jogo do Grupo 2 %s\nquantidade de acertos: %0.00f \nquantidade de erros: %0.00f\npontua��o final: %0.00f\n\n", nome, acertos, erros, pf);
    PlaySound(TEXT("acabou.wav"), NULL, SND_SYNC);
    system("pause");
}

