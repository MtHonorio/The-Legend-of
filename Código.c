/*
Projeto final para a cadeira de Introdução à Programação
Ministrada por Lincoln David Nery e Silva
Centro de Informática - UFPB


Grupo:
Diego Luis
Matheus Honório
Miguel Elias

*/





#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#define UP 72
#define DOWN 80
#define ENTER 13
#define s 999999 //FUNÇÃO UNSLEEP (Tira as barras para voltar ao normal)



int respInt, respInt2, respPrimeiraPergunta;
const char Nome[15];
char aspas = '"';

typedef struct
{
    int select;// SETA
    int key; // TECLA
} OpSetas;

OpSetas atual;

typedef struct
{
    int ansiedade;//PREFERIU FAZER TAL ATIVIDADE
    int indiferenca;// DEIXOU DE RESPONDER TAL COISA
    int paiProtetor;//PAIPROTETOR = SE AVISOU OS PAIS SOBRE OS FILHOS DO WALKRON
    int NaoBuscouIrmao; //BUSCOU O IRMAO
    int avisar; //AVISOU QUE ASHA ESTAVA A PROCURA DE TRITSKA
} Cap1Var; //VARIÁVEIS DO CAP1


Cap1Var escolhas;



void Opcoes (int max)
{

    atual.key = getch();
    if(atual.key == DOWN) atual.select+= 1;
    if(atual.key == UP) atual.select-= 1;
    if (atual.select > max) atual.select = 1;
    if (atual.select < 1) atual.select = max;
    system("cls");


}



//INCIAÇÃO DO JOGO
void Tutorial ()
{
    char aspas = '"', loopDoTutorial=2;

    while(loopDoTutorial == 2)
    {
        atual.select = 1;
        system("cls");

            puts("\n\n\t\t\t          COMO JOGAR?\n\n\t\t\t             (1/4)");
            usleep(s);
            puts("\n O JOGO PERMITE VARIAS OPCOES DE ENTRADA. ");
            usleep(s);
            usleep(s);
            puts(" PARA ESCOLHER UMA OPCAO, SELECIONE A ENTRADA QUE VOCE QUER E APERTE ENTER.\n");
            usleep(s);
            usleep(s);

        while (1)
        {

            printf("\n %s TUDO BEM\n", (atual.select == 1) ? "=>" : "  ");
            printf(" %s ENTENDI \n", (atual.select == 2) ? "=>" : "  ");
            printf(" %s :D\n", (atual.select == 3) ? "=>" : "  ");

            Opcoes(3);
            if(atual.key == ENTER)
            {
                break;
            }

            puts("\n\n\t\t\t          COMO JOGAR?\n\n\t\t\t             (1/4)");
            puts("\n O JOGO PERMITE VARIAS OPCOES DE ENTRADA. ");
            puts(" PARA ESCOLHER UMA OPCAO, SELECIONE A ENTRADA QUE VOCE QUER E APERTE ENTER.\n");


            fflush(stdin);
        }

        atual.select = 1;
        puts("\n\n\t\t\t          COMO JOGAR?\n\n\t\t\t             (2/4)");
        usleep(s);
        printf("\n VOCE TAMBEM TEM A OPCAO %c?%c, QUE PODE SER ESCOLHIDA AO DIGITAR UMA\n", aspas, aspas);
        usleep(s);
        usleep(s);
        puts(" ENTRADA QUE NAO ESTA NAS OPCOES.\n");
        usleep(s);
        usleep(s);
        printf("\n => Ok\n  ");
        fflush(stdin);
        scanf("%*c");
        system("cls");

        atual.select = 1;
        puts("\n\n\t\t\t          COMO JOGAR?\n\n\t\t\t             (3/4)");
        usleep(s);
        printf("\n EM ALGUNS CASOS VOCE PODE PERMANECER SEM FALAR NADA,\n", aspas, aspas);
        usleep(s);
        usleep(s);
        printf(" BASTA APENAS INSERIR UMA ENTRADA QUE TENHA %c...%c COMO OPCAO.\n", aspas, aspas);
        usleep(s);
        usleep(s);
        printf(" AS OPCOES QUE SIGNIFICAM %cFICAR EM SILENCIO%c SERAO REPRESENTADAS ASSIM:\n", aspas, aspas);
        usleep(s);
        usleep(s);
        printf("\n => OPCAO ...\n  ");
        fflush(stdin);
        scanf("%*c");
        system("cls");


        atual.select = 1;

            puts("\n\n\t\t\t          COMO JOGAR?\n\n\t\t\t             (4/4)");
            usleep(s);
            printf("\n AS SUAS ESCOLHAS ALTERAM A HISTORIA AO LONGO DO JOGO,\n", aspas, aspas);
            usleep(s);
            usleep(s);
            printf(" PORTANTO, ESCOLHA SABIAMENTE...\n\n");
            usleep(s);
            usleep(s);
            puts("   --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * ---* ---");
            printf("\n\n\n\n O TUTORIAL ESTA CONCLUIDO. DESEJA JOGAR AGORA OU VER O TUTORIAL NOVAMENTE?\n", aspas, aspas);
            usleep(s);
            usleep(s);

        while (1)
        {

            printf("\n %s IR JOGAR!\n", (atual.select == 1) ? "=>" : "  ");
            printf(" %s VER TUTORIAL NOVAMENTE\n", (atual.select == 2) ? "=>" : "  ");

            fflush(stdin);
            Opcoes(2);
            if(atual.key == ENTER)
            {
                break;
            }

            puts("\n\n\t\t\t          COMO JOGAR?\n\n\t\t\t             (4/4)");
            printf("\n AS SUAS ESCOLHAS ALTERAM A HISTORIA AO LONGO DO JOGO,\n", aspas, aspas);
            printf(" PORTANTO, ESCOLHA SABIAMENTE...\n\n");
            puts("   --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * ---* ---");
            printf("\n\n\n\n O TUTORIAL ESTA CONCLUIDO. DESEJA JOGAR AGORA OU VER O TUTORIAL NOVAMENTE?\n", aspas, aspas);

            fflush(stdin);
        }
        loopDoTutorial = atual.select;
        if(loopDoTutorial != 2) break;

    }

}

//TIRAR O BARRA N DA STRING "NOME"
void TiraBarra(char *Nome)
{

    int i;
    for(i=0; Nome[i] != '\0'; i++)
    {
        if(Nome[i] == '\n')
        {
            Nome[i] = '\0';
        }
    }

}


void EndChap1()
{
    system("cls");
    printf("\n\t\t CAPITULO I: \n");
    printf("\n");
    if(escolhas.ansiedade==0) printf("\t Voce nao respondeu a Dalia sobre o que queria ver primeiro.\n");
    else
    {
        printf("\t Voce disse para Dalia que queria ver\n");
        if(escolhas.ansiedade==1) printf("\t  o Campeonato de Cavalari a primeiro.\n\n");
        if(escolhas.ansiedade==2) printf("\t  o Campeonato de Arquearia primeiro.\n\n");
        if(escolhas.ansiedade==3) printf("\t  o Duelo de Espadachins primeiro.\n\n");
        if(escolhas.ansiedade==4) printf("\t  a Comunhao primeiro.\n\n");
    }


    if(escolhas.paiProtetor!=0) printf("\t Voce alertou a seu pai sobre os filhos de Wangeryoran .\n");

    if(escolhas.NaoBuscouIrmao == 1) printf("\n\t Voce desistiu de ir buscar seu irmao.\n");
    if(escolhas.NaoBuscouIrmao == 0) printf("\n\t Voce foi ao Rio vermelho e buscou seu irmao.\n");

    if(escolhas.avisar == 1) printf("\n\t Voce deu o aviso de Asha para Tritska.\n");

    if(escolhas.indiferenca == 0)
    {
        printf("\n\t Voce respondeu todas as vezes.\n");
    }
    if(escolhas.indiferenca > 1)
    {
        printf("\n\t Voce deixou de responder %d vezes", escolhas.indiferenca);
    }
    if(escolhas.indiferenca == 1)
    {
        printf("\n\t Voce deixou de responder %d vez", escolhas.indiferenca);
    }



    printf("\n\n\n\n\t The Legend of %s\n", Nome);
    printf("\t Um jogo por Diego Luis, Matheus Honorio e Miguel Elias");
    printf("\n\t Graduandos em Eng. de Computacao, Centro de Informatica - UFPB\n\n\n\n\n ");
}

int SW1 (int respPrimeiraPergunta)
{

    int respInt;
    atual.select = 1;
    switch(respPrimeiraPergunta) //SWITCH PARA CHECAR SE O JOGADOR ESTÁ ANSIOSO OU NÃO
    {
    case 1:

         printf("\n Dalia:\n - Sim, mas o que vai querer ver primeiro?\n\n");
            usleep(s);
            usleep(s);
        while (1)
        {

            printf(" %s Campeonato de Cavalaria\n", (atual.select == 1) ? "=>" : "  ");
            printf(" %s Campeonato de Arquearia\n", (atual.select == 2) ? "=>" : "  ");
            printf(" %s Duelo de Espadachins\n", (atual.select == 3) ? "=>" : "  ");
            printf(" %s A Comunhao\n", (atual.select == 4) ? "=>" : "  ");
            printf(" %s ...\n ", (atual.select == 5) ? "=>" : "  ");

            Opcoes(5);
            if(atual.key == ENTER)
            {
                break;
            }

            printf("\n Dalia:\n - Sim, mas o que vai querer ver primeiro?\n\n");
            fflush(stdin);
        }
        respInt = atual.select;
        system("cls");
        usleep(s);

        switch(respInt)  //SWITCH PARA CASO O JOGADOR ESTEJA ANSIOSO
        {

        //SE ELE ESTÁ ANSIOSO:
        case 1:
            usleep(s);
            usleep(s);
            printf("\n Dalia:\n- Os duelos sao bem mais emocionantes...\n Eu queria ter uma espada, nao um cavalo.\n");
            usleep(s);
            usleep(s);
            printf("\n (Dalia vai lembrar de sua escolha no dia...)\n");
            escolhas.ansiedade=1;
            break;
        case 2:
            printf("\n Dalia:\n- Com a tua mira? - Ela comecou a rir. - Mas eu queria uma\n espada, nao um arco, acho que eu me daria bem com uma espada.\n");
            usleep(s);
            usleep(s);
            printf("\n (Dalia vai lembrar de sua escolha no dia...)\n");
            escolhas.ansiedade=2;
            break;
        case 3:
            printf("\n Dalia:\n - A Lady Guida vai fatiar o Mestre Odwin esse ano.\n");
            usleep(s);
            usleep(s);
            printf("\n (Dalia vai lembrar de sua escolha no dia...)\n");
            escolhas.ansiedade=3;
            break;
        case 4:
            printf("\n Dalia:\n - Ah, e a segunda coisa que estou mais ansiosa. Soube que os Ulvin\n vao preparar um bolo para todos esse ano, nao so pros Valkron.\n");
            usleep(s);
            usleep(s);
            printf("\n (Dalia vai lembrar de sua escolha no dia...)\n");
            escolhas.ansiedade=4;
            break;
        default:
            printf("\n Dalia:\n - Nao quer falar comigo, entendi...\n");
            usleep(s);
            usleep(s);
            printf("\n (Dalia vai lembrar disso...)\n");
            escolhas.indiferenca++;
            break;
        }
        break;
    //SE ELE NÃO ESTÁ ANSIOSO:
    case 2:
        usleep(s);
        usleep(s);
        printf("\n Dalia:\n - Ah, mas eu estou. Voce nao tem ideia do que eh esperar um ano para ver\nLady Guida e o Mestre Odwin duelando.\n");
        usleep(s);
        usleep(s);
        printf("\n (Dalia vai lembrar disso...)\n");
        escolhas.ansiedade=0;
        break;

    //SE ELE É INDIFERENTE:
    default:
        printf("\n Dalia:\n - Nao quer falar comigo, entendi...\n");
        usleep(s);
        usleep(s);
        printf("\n (Dalia vai lembrar disso...)\n");
        escolhas.indiferenca++;

    } //FIM DO SWITCH
    atual.select = 1;
    return 0;
}

int SW2(int respInt)
{
    int respInt2;

    switch(respInt)
    {
    case 2:
    default:
        usleep(s);
        usleep(s);

            printf("\n Setvik:\n - VENHA AQUI AGORA. NAO ESTA ME OUVINDO?");
            usleep(s);
            usleep(s);
            escolhas.indiferenca++;
            printf("\n\n O grito foi tao alto que Hanne e Dalia se espantaram.\n\n");
            usleep(s);
            usleep(s);
        while (1)
        {

            printf(" %s Ir ate ele\n", (atual.select == 1) ? "=>" : "  ");
            Opcoes(1);
            if(atual.key == ENTER)
            {
                break;
            }

            fflush(stdin);
        }
        system("cls");
        usleep(s);
        usleep(s);
        atual.select = 1;
        printf("\n Setvik:\n - Voce pode fazer um favor?\n");



        break;
    case 1:
        usleep(s);
        usleep(s);
        system("cls");

            printf("\n Setvik:\n - Como foi seu dia?\n\n");
            usleep(s);
            usleep(s);
        while (1)
        {

            printf(" %s Foi legal\n", (atual.select == 1) ? "=>" : "  ");
            printf(" %s Foi um saco\n", (atual.select == 2) ? "=>" : "  ");
            printf(" %s ...\n", (atual.select == 3) ? "=>" : "  ");

            Opcoes(3);
            if(atual.key == ENTER)
            {
                break;
            }
            printf("\n Setvik:\n - Como foi seu dia?\n\n");


        }
        fflush(stdin);
        respInt2 = atual.select;
        system("cls");
        switch (respInt2)
        {
        case 1:
            printf(" %s:\n", Nome);
            printf(" - Foi legal. Aprendi que a febre vem das maldicoes que os Ioruns nos jogam\n");
            usleep(s);
            usleep(s);
            printf(" para roubar nossa energia espiritual, e que as doencas sao causadas por\n");
            usleep(s);
            usleep(s);
            printf(" por pequenos animaizinhos que escapam do exilio pra nos prejudicar.\n");
            usleep(s);
            usleep(s);
            printf("\n Setvik:\n - Isso mesmo! Por isso, mantenha-se longe do exilio.\n");
            usleep(s);
            usleep(s);
            printf("\n Voce pode fazer um favor?\n");
            usleep(s);
            usleep(s);
            break;

        case 2:
            printf("\n %s:\n", Nome);
            printf(" - Foi um saco. Os filhos de Wangeryoran continuam implicando comigo.\n");
            usleep(s);
            usleep(s);
            printf("\n Setvik:\n - Nao se preocupe. Vou resolver isso com o Wangeryoran");;
            usleep(s);
            usleep(s);
            printf("\n (Setvik vai lembrar disso...)\n\n");
            usleep(s);
            usleep(s);
            printf(" Voce pode fazer um favor?\n");
            usleep(s);
            usleep(s);
            escolhas.paiProtetor++;
            break;

        default:
            escolhas.indiferenca++;
            printf("\n Setvik:\n - Por que o silencio?");
            usleep(s);
            usleep(s);
            printf("\n Os filhos de Wangeryoran continuam implicando com voce, certo?");
            usleep(s);
            usleep(s);
            printf("\n Nao se preocupe. Vou resolver isso com o Wangeryoran.");
            usleep(s);
            usleep(s);
            printf("\n (Setvik vai lembrar disso...)\n\n");
            usleep(s);
            usleep(s);
            printf("\n Voce pode fazer um favor?\n");
            usleep(s);
            usleep(s);
            escolhas.paiProtetor++;

        }

        usleep(s);
        usleep(s);
    }
    atual.select = 1;
    return 0;
}

int SW3(int respInt)
{
    int respInt2;
    switch(respInt)
    {
    case 1:
	   printf("\n Hotnor:\n - Vai querer milho como sempre? Mais verde ou maduro?\n ");
            usleep(s);
            usleep(s);
        while (1)
        {

            printf("\n\n %s Dizer que na verdade voce esta procurando Otskel e Yurin\n", (atual.select == 1) ? "=>" : "  ");
            Opcoes(1);
            if(atual.key == ENTER)
            {
                break;
            }
  	    printf("\n Hotnor:\n - Vai querer milho como sempre? Mais verde ou maduro?\n ");
            fflush(stdin);
        }
        system("cls");
        atual.select = 1;
        usleep(s);
        usleep(s);
        printf("\n Hotnor:\n -  Eles foram ate o Rio Vermelho com Tristska, mas ainda nao voltaram. \n");
        Lot2();
        RioVermelho();
        break;
    case 2:
        while (1)
        {
            printf("\n Hotnor:\n - Tudo bem, entao. Se precisar de algo me avisa.");
            printf("\n\n %s Continuar procurando sozinho\n", (atual.select == 1) ? "=>" : "  ");
            printf(" %s Dizer que na verdade voce esta procurando Otskel e Yurin\n", (atual.select == 2) ? "=>" : "  ");
            printf(" %s Continuar procurando sozinho\n", (atual.select == 3) ? "=>" : "  ");

            Opcoes(3);
            if(atual.key == ENTER)
            {
                break;
            }
        }
        fflush(stdin);
        respInt2 = atual.select;
        atual.select = 1;
        usleep(s);
        usleep(s);
        switch(respInt2)
        {
        case 1:
            ProcurarSozinho();
            break;
        case 2:
            printf("\n Hotnor:\n -  Eles foram ate o Rio Vermelho com Tristska, mas ainda nao voltaram.\n ");
            Lot2();
            RioVermelho();
            break;

        default:
            ProcurarSozinho();
            break;
        }

        break;

    default:

        escolhas.indiferenca++;

        while(respInt2 != 2 || respInt2 != 1)
        {
            while (1)
            {

                printf("\n Hotnor:\n - Voce sempre tao calado. Procura pelo seu irmao?\n ");
                printf("\n\n %s Sim\n", (atual.select == 1) ? "=>" : "  ");
                printf(" %s Nao\n", (atual.select == 2) ? "=>" : "  ");

                Opcoes(2);
                if(atual.key == ENTER)
                {
                    break;
                }
            }
            fflush(stdin);
            respInt2 = atual.select;
            atual.select = 1;

            switch(respInt2)
            {
            case 1:
                printf("\n Hotnor:\n - Eles foram ate o Rio Vermelho com Tristska, mas ainda nao voltaram.\n ");
                break;
            case 2:
                printf("\n Hotnor:\n - Tudo bem, entao. Se precisar de algo me avisa.\n  ");
                ProcurarSozinho();
                break;

            default:
                system("cls");
            }
            if( respInt2 == 2 || respInt2 == 1)
            {
                break;
            }
            usleep(s);
            usleep(s);




        }

    }
}

char Name(void)
{

    char resp;
    int loopDoNome;


    atual.select = 1;
    while(1)
    {
        system("cls");
        printf("\n  THE LEGEND OF...\n\n");
        printf("\n 1 - Sinais\n\n");
        //CHECAR O NOME-----------------------------------------------------------------------------------------------------------------
        printf("\n Qual o seu nome?\n  ");
        fflush(stdin);
        fgets(&Nome, 16, stdin); //MÁXIMO DE 15 CARACTERES
        TiraBarra(&Nome);
        system("cls");



        usleep(s);
        usleep(s);
        usleep(s);

        while(1)
        {
            printf("\n %s eh mesmo o teu nome?\n\n", Nome);
            printf(" %s Sim.\n", (atual.select == 1) ? "=>" : "  ");
            printf(" %s Nao.\n", (atual.select == 2) ? "=>" : "  ");


            fflush(stdin);
            Opcoes(2);
            if(atual.key == ENTER)
            {
                loopDoNome = atual.select;
                break;
            }
        }

        if(loopDoNome == 1)
        {
            break;
        }
        fflush(stdin);
        system("cls");
    }


}







void Lot1 (void)
{

        printf("\n\t\t\t\tThe Legend Of %s\n\n", Nome);
        printf("  O ceu estava cinzento em Hyalton, e Dalia caminhava ao seu lado, segurando os\n livros que se assemelhavam a tijolos.\n");
        usleep(s);
        usleep(s);
        usleep(s);
        usleep(s);
        printf(" Voce sente que ela esta cansada, mas ainda assim expressa uma feicao de\n leveza.");
        usleep(s);
        usleep(s);
        usleep(s);
        usleep(s);
        printf( "\n\n  Os dois estavam a caminho de casa, passando pela enorme estrutura do Casarao\n dos Valkron.\n");
        usleep(s);
        usleep(s);
        usleep(s);
        printf( "\n Naquele momento, sua irma te lanca um olhar e pergunta: \n");
        usleep(s);
        usleep(s);
        usleep(s);
        usleep(s);
        printf(" -E entao, ja esta com muita ansiedade para o festival? \n\n");
        usleep(s);
        usleep(s);
        usleep(s);

    while (1)
    {
        printf(" %s Claro.\n", (atual.select == 1) ? "=>" : "  ");
        printf(" %s Nem tanto.\n", (atual.select == 2) ? "=>" : "  ");
        printf(" %s ...\n", (atual.select == 3) ? "=>" : "  ");

        Opcoes(3);
        if(atual.key == ENTER)
        {
            break;
        }
        fflush(stdin);
         printf("\n\t\t\t\tThe Legend Of %s\n\n"
        "  O ceu estava cinzento em Hyalton, e Dalia caminhava ao seu lado, segurando os\n livros que se assemelhavam a tijolos.\n"
        " Voce sente que ela esta cansada, mas ainda assim expressa uma feicao de\n leveza."
         "\n\n  Os dois estavam a caminho de casa, passando pela enorme estrutura do Casarao\n dos Valkron.\n"
         "\n Naquele momento, sua irma te lanca um olhar e pergunta: \n"
        " -E entao, ja esta com muita ansiedade para o festival? \n\n", Nome);
    }
    respPrimeiraPergunta = atual.select;
    atual.select = 1;
}

void Lot2 (void)
{
    puts("   --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * ---* ---");    //--------------//
    puts("\n\n\n\n\n\n");                                                                     //              //
    puts("\t\t(Pressione qualquer tecla para continuar...)");                                 //   FINAL DE   //
    fflush(stdin);                                                                            //     SEÇÃO    //
    getch();                                                                                  //              //
    system("cls");                                                                             //--------------//
    usleep(s);
    usleep(s);
}

void Lot3 (void)
{
        printf("\n Chegando em casa, voce se depara com Hanne, sua mae, que esta cuidando de uma\n ");
        usleep(s);
        usleep(s);
        printf("pequena plantacao ao lado de sua casa.\n");
        usleep(s);
        usleep(s);
        printf("\n Hanne:\n - Dalia, venha me ajudar!\n");
        usleep(s);
        usleep(s);
        printf("\n E entao voce ouve um grito...\n ");
        usleep(s);
        printf(" %c%s, venha aqui!%c\n", aspas, Nome, aspas);
        usleep(s);
        usleep(s);
        printf("\n Era Setvik, seu pai.\n\n");
        usleep(s);
        usleep(s);

    while (1)
    {

        printf(" %s Ir ate ele\n", (atual.select == 1) ? "=>" : "  ");
        printf(" %s Ignorar\n", (atual.select == 2) ? "=>" : "  ");
        printf(" %s ...\n", (atual.select == 3) ? "=>" : "  ");

        Opcoes(3);
        if(atual.key == ENTER)
        {
            break;
        }
        printf("\n Chegando em casa, voce se depara com Hanne, sua mae, que esta cuidando de uma\n "

        "pequena plantacao ao lado de sua casa.\n"

        "\n Hanne:\n - Dalia, venha me ajudar!\n"

        "\n E entao voce ouve um grito...\n "

        " %c%s, venha aqui!%c\n"

        "\n Era Setvik, seu pai.\n\n", aspas, Nome, aspas);
    }
    respInt = atual.select;
    atual.select = 1;
}

void Lot4 (void)
{
    printf("\n Va em busca de seu irmao que esta com os filhos dos Hotnor na feira.\n");

    puts("   --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * ---* ---");    //--------------//
    puts("\n\n\n\n\n\n");                                                                     //              //
    puts("\t\t(Pressione qualquer tecla para continuar...)");                                 //   FINAL DE   //
    fflush(stdin);                                                                            //     SEÇÃO    //
    getch();                                                                                  //              //
    system("cls");                                                                            //--------------//
    usleep(s);
    usleep(s);
    usleep(s);
    fflush(stdin);
}

void Lot5 (void)
{
    usleep(s);
    usleep(s);
    usleep(s);
    usleep(s);

        printf("\n Chegando na feira voce percebe que ela esta sendo decorada por varias pessoas.\n");
        usleep(s);
        usleep(s);
        printf(" Ha enfeites  por todas as partes para preparacao do festival.\n");
        usleep(s);
        usleep(s);
        printf("\n Voce se aproxima de Hotnor, um dos mercadores da feira. \n");
        usleep(s);
        usleep(s);
        printf(" Hotnor e pai de Otskel, amigo de Yurin, seu irmao.  \n");
        usleep(s);
        usleep(s);
	printf("\n Hotnor:\n - Ola, %s, quer alguma coisa?\n\n", Nome);
        usleep(s);
        usleep(s);



    while (1)
    {


        printf(" %s Sim\n", (atual.select == 1) ? "=>" : "  ");
        printf(" %s Nao\n", (atual.select == 2) ? "=>" : "  ");
        printf(" %s ...\n", (atual.select == 3) ? "=>" : "  ");

        Opcoes(3);
        if(atual.key == ENTER)
        {
            break;
        }

        printf("\n Chegando na feira voce percebe que ela esta sendo decorada por varias pessoas.\n"

        " Ha enfeites  por todas as partes para preparacao do festival.\n"

        "\n Voce se aproxima de Hotnor, um dos mercadores da feira. \n"

        " Hotnor e pai de Otskel, amigo de Yurin, seu irmao.  \n"

	"\n Hotnor:\n - Ola, %s, quer alguma coisa?\n\n", Nome);


    }
    fflush(stdin);
    respInt = atual.select;
    atual.select = 1;
}

void ProcurarSozinho()
{
    char x = '0';
    int d;
    system("cls");
    printf("\n Ao ir para praca voce avistou Asha e Pascal. Os dois ajudavam a decorar\n a praca");
    usleep(s);
    usleep(s);
    printf(" com enfeites coloridos nos postes e casas. Ahnmeri, Sammuel e\n Nyara Valkron");
    usleep(s);
    usleep(s);
    printf(" observavam tudo com um olhar desmotivado, sob os olhares\n de Treviss Valkron e Eileen Valkron, lordes de Hyalton.\n");
    usleep(s);
    usleep(s);
    printf(" Voce pensa em ir cumprimentar os amigos do instrucionario, mas percebe\n que suas roupas nao estao %ca carater%c para a presenca dos Valkron.", aspas, aspas);
    usleep(s);
    usleep(s);

    system("cls");
    while (1)
    {
        printf("\n Ao ir para praca voce avistou Asha e Pascal. Os dois ajudavam a decorar\n a praca");
        printf(" com enfeites coloridos nos postes e casas. Ahnmeri, Sammuel e\n Nyara Valkron");
        printf(" observavam tudo com um olhar desmotivado, sob os olhares\n de Treviss Valkron e Eileen Valkron, lordes de Hyalton.\n");
        printf(" Voce pensa em ir cumprimentar os amigos do instrucionario, mas percebe\n que suas roupas nao estao %ca carater%c para a presenca dos Valkron.", aspas, aspas);
        printf("\n\n %s Ir mesmo assim\n", (atual.select == 1) ? "=>" : "  ");
        printf(" %s Voltar para casa sem o irmao\n", (atual.select == 2) ? "=>" : "  ");


        Opcoes(2);
        if(atual.key == ENTER)
        {
            break;
        }
    }
    fflush(stdin);
    if(atual.select==1)
    {
        x='1';
    }
    else if(atual.select==2)
    {
        x='2';
    }
    atual.select = 1;

    switch(x)
    {
    case '1':
        system("cls");
        usleep(s);
        usleep(s);
	printf("\n Os Valkron se afastam na mesma hora pra olhar outra coisa e nem o percebem la. ");
            printf(" Em seguida, Asha o abraca e Pascal iria cumprimenta-lo se nao estivesse sujo de tinta azul e branca.");
            usleep(s);
            usleep(s);
            printf("\n Pascal:\n -  Veio ajudar so pra receber comida depois ne?");
            usleep(s);
            usleep(s);

        while (1)
        {

            printf("\n\n %s Nao, to procurando por Otskel e Yurin, sabe onde estao?\n", (atual.select == 1) ? "=>" : "  ");
            printf(" %s Claro.\n", (atual.select == 2) ? "=>" : "  ");
            printf(" %s Claro.\n", (atual.select == 3) ? "=>" : "  ");

            Opcoes(3);
            if(atual.key == ENTER)
            {
                break;
            }

	    printf("\n Os Valkron se afastam na mesma hora pra olhar outra coisa e nem o percebem la. ");
            printf(" Em seguida, Asha o abraca e Pascal iria cumprimenta-lo se nao estivesse sujo de tinta azul e branca.");
            printf("\n Pascal:\n -  Veio ajudar so pra receber comida depois ne?");
        }
        fflush(stdin);
        d = atual.select;
        atual.select = 1;

        switch(d)
        {
        case 1:
            system("cls");
            printf("\n Pascal:\n -  Ah, eu vi os dois. Eles foram com a Tritska la para o Rio Vermelho.\n");
            usleep(s);
            usleep(s);
            escolhas.avisar = 0;
            Lot2();
            RioVermelho();
            break;

        case 2:
        default:
            system("cls");
            usleep(s);
            usleep(s);

		printf("\n\n %s:\n -  Claro, nao e por isso que voce ta aqui tambem?", Nome);
                usleep(s);
                usleep(s);
                printf("\n\n Pascal soltou uma risada e quase caiu da escada na qual estava suspenso.");
                usleep(s);
                usleep(s);
                printf("\n\n Asha:\n - Voce viu a Tritska? Ela saiu com o Yurin essa tarde pra o Rio Vermelho,\n mas ainda nao voltou.");
                usleep(s);
                usleep(s);

            while (1)
            {

                printf("\n\n %s Nao.\n", (atual.select == 1) ? "=>" : "  ");
                Opcoes(1);
                if(atual.key == ENTER)
                {
                    break;
                }
		printf("\n\n %s:\n -  Claro, nao e por isso que voce ta aqui tambem?"

                "\n\n Pascal soltou uma risada e quase caiu da escada na qual estava suspenso."

                "\n\n Asha:\n - Voce viu a Tritska? Ela saiu com o Yurin essa tarde pra o Rio Vermelho,\n mas ainda nao voltou.", Nome);

            }
            usleep(s);
            usleep(s);
            system("cls");
            printf("\n\n %s:\n - Ah, nao. Na verdade estou procurando por eles.", Nome);
            usleep(s);
            usleep(s);
            printf("\n\n Asha:\n - Quando os encontrar, avisa a Tritska que ja passou da hora de ir pra casa.\n");
            usleep(s);
            usleep(s);
            escolhas.avisar = 1;
            Lot2();
            RioVermelho();

        }

        break;
    case '2':
        system("cls");
        usleep(s);
        usleep(s);
        usleep(s);
        usleep(s);
        printf("\n Ao chegar em casa voce descobre que seu irmao ja estava em casa.");
        usleep(s);
        usleep(s);
        printf("\n Ele estava com roupas molhadas e com o joelho sangrando.\n\n");
        usleep(s);
        usleep(s);
        escolhas.NaoBuscouIrmao++;
        Lot2();

        break;
        default:
        puts("Cc");

    }
}

void RioVermelho()
{


    int  respo3, contraataque, fruta[20];
    char respo2, respo1,  arremessavel;

    printf("\n Chegando no Rio...\n");
    printf("\n Voce finalmente esta alem dos limites da cidade de Hyalton.\n");
    printf(" Um corrego de cerca de cinco metros de largura paira na sua frente.\n");
    usleep(s);
    usleep(s);
    usleep(s);
    printf(" Diversas petalas das roseiras que ali repousavam, agora pairavam\n na superficie da agua que fluia levemente naquele local.\n");
    usleep(s);
    usleep(s);
    usleep(s);
    printf(" A vegetacao cor laranja esverdeada ficava cada vez mais densa, a medida que\n se distanciava de Hyalton.\n");
    usleep(s);
    usleep(s);
    usleep(s);
    printf(" Apenas moitas balancando ao vento. Era tudo o que tinha ali, ate...\n");
    usleep(s);
    usleep(s);
    usleep(s);
    usleep(s);
    usleep(s);

    system("cls");


    while (1)
    {
        printf("\n VOCE SENTE ALGO AGARRAR O SEU TORNOZELO.\n");
        printf(" Uma mao penquena e molhada o agarra forte, ate ficar uma marca vermelha dos\n dedos e, enfim");
        printf(" o puxa em direcao a moita que estava inocentemente do seu lado,\n fazendo-o cair em sua direcao.\n");
        printf(" Era o seu irmao. E nao so ele, Otskel e Tritska o acompanhavam,\n ambos com o dedo indicador pressionando os labios em sinal de silencio.\n");
        printf(" Os tres estavam com as maos e pernas molhadas, mas nao parecia que tinham\n se banhado ali.\n Perto deles, havia uma sacola velha e desfiada.\n\n");
        printf(" %s Que diabos?!\n", (atual.select == 1) ? "=>" : "  ");
        printf(" %s O que estao fazendo?!\n", (atual.select == 2) ? "=>" : "  ");
        printf(" %s Esta na hora de ir pra casa! Os tres.\n", (atual.select == 3) ? "=>" : "  ");

        Opcoes(3);
        if(atual.key == ENTER)
        {
            break;
        }

    }
    fflush(stdin);
    respo1 = atual.select;
    system("cls");
    atual.select = 1;

    switch(respo1)
    {

    case 1:
        system("cls");
        usleep(s);
        usleep(s);
        while (1)
        {
            printf("\n Yurin:\n - Shh! Vai estragar o plano!\n\n");
            printf(" %s Que Plano?!!\n", (atual.select == 1) ? "=>" : "  ");
            Opcoes(1);
            if(atual.key == ENTER)
            {
                break;
            }
        }
        fflush(stdin);
        respo2 = atual.select;

        switch(respo2)
        {

        case 1:
        default:
            system("cls");
            usleep(s);
            usleep(s);

                printf("\n Tritska:\n - Vinganca!\n\n");
                usleep(s);
                usleep(s);
                printf(" Otskel:\n - Victor Wangeryoran esta vindo ate aqui. E nos estamos preparados.\n");
                usleep(s);
                usleep(s);
                printf(" Ele implica com todo mundo e deve ter o que merece.\n");
                usleep(s);
                usleep(s);
                printf(" Voce sabe disse mais que ninguem. Nao quer nos ajudar?\n");
                usleep(s);
                usleep(s);

            while (1)
            {
                printf("\n %s Victor Wangeryoran nao me interessa mais. Voces precisam ir pra casa.\n", (atual.select == 1) ? "=>" : "  ");
                printf(" %s Tudo bem, vou ajudar. O que iremos fazer?\n", (atual.select == 2) ? "=>" : "  ");

                Opcoes(2);
                if(atual.key == ENTER)
                {
                    break;
                }

                printf("\n Tritska:\n - Vinganca!\n\n"
                " Otskel:\n - Victor Wangeryoran esta vindo ate aqui. E nos estamos preparados.\n"
                " Ele implica com todo mundo e deve ter o que merece.\n"
                " Voce sabe disse mais que ninguem. Nao quer nos ajudar?\n");

            }
            respo3 = atual.select;
            atual.select = 1;
            if(respo3==1)
                respo3=0;
            else
                respo3=1;
            break;
        }
        break;

    case 2:
        system("cls");
        usleep(s);
        usleep(s);

        while (1)
        {
            printf("\n Yurin:\n - Colocando o plano em pratica.\n\n");
            printf(" %s Que Plano?!!\n", (atual.select == 1) ? "=>" : "  ");
            Opcoes(1);
            if(atual.key == ENTER)
            {
                break;
            }
        }
        fflush(stdin);
        if (atual.select == 1)
        {
            respo2 = '1';
        }
        else
        {
            respo2 = '2';
        }
        atual.select = 1;
        switch(respo2)
        {

        case 1:

        default:
            system("cls");
            usleep(s);
            usleep(s);

                printf("\n Tritska:\n - Vinganca!\n\n");
                printf(" Otskel:\n - Victor Wangeryoran esta vindo ate aqui. E nos estamos preparados.\n");
                usleep(s);
                usleep(s);
                printf(" Ele implica com todo mundo, agora ele vai ter o que merece.\n");
                usleep(s);
                usleep(s);
                printf(" Voce sabe disse mais que ninguem. Nao quer nos ajudar?\n");
                usleep(s);
                usleep(s);

            while (1)
            {


                printf("\n %s Victor Wangeryoran nao me interessa mais. Voces precisam ir pra casa.\n", (atual.select == 1) ? "=>" : "  ");
                printf(" %s Tudo bem, vou ajudar, o que iremos fazer?\n", (atual.select == 2) ? "=>" : "  ");

                Opcoes(2);
                if(atual.key == ENTER)
                {
                    break;
                }

                printf("\n Tritska:\n - Vinganca!\n\n");
                printf(" Otskel:\n - Victor Wangeryoran esta vindo ate aqui. E nos estamos preparados.\n");
                printf(" Ele implica com todo mundo, agora ele vai ter o que merece.\n");
                printf(" Voce sabe disse mais que ninguem. Nao quer nos ajudar?\n");

            }

            fflush(stdin);
            respo3 = atual.select;
            atual.select = 1;
            if(respo3==1)
                respo3=0;
            else
                respo3=1;
            break;

        }
        break;
    case 3:
        system("cls");
        usleep(s);
        usleep(s);

            printf("\n Yurin:\n - Estamos em um plano de vinganca contra o Victor Wangeryoran.\n Nao quer nem ouvir?\n");
            usleep(s);
            usleep(s);
            printf(" Ele implica com todo mundo, ele tem que pagar por isso.\n");
            usleep(s);
            usleep(s);

        while (1)
        {

            printf("\n %s Nao me interessa, ele e um animal, mas eu nao.\n", (atual.select == 1) ? "=>" : "  ");
            printf(" %s Ta, eu quero. Qual o plano?\n", (atual.select == 2) ? "=>" : "  ");

            Opcoes(2);
            if(atual.key == ENTER)
            {
                break;
            }

            printf("\n Yurin:\n - Estamos em um plano de vinganca contra o Victor Wangeryoran.\n Nao quer nem ouvir?\n");
            printf(" Ele implica com todo mundo, ele tem que pagar por isso.\n");

        }

        fflush(stdin);
        respo3 = atual.select;
        atual.select = 1;
        if(respo3==1)
            respo3=0;
        else
            respo3=1;
        break;
    }
    if(respo3==0)
    {
        system("cls");

        if(escolhas.avisar==1)
        {
            printf("\n Mesmo sem a vontade deles, voce os leva de volta a Hyalton, deixando Tritska\n com Asha na volta pela feira e Otskel volta para encontrar Hotnor.\n");
            usleep(s);
            usleep(s);
        }
        if(escolhas.avisar==0)
        {
            printf("\n Mesmo sem a vontade deles, voce os leva de volta a Hyalton.\n");
            usleep(s);
            usleep(s);
        }

        printf("\n Voce leva seu irmao de volta para casa e ele nao fala com voce\n o percurso todo. Voce sente medo que algo como aquilo aconteca novamente,\n mas nao acontece.\n");
        usleep(s);
        usleep(s);
        printf("\n O seu pai, ao ve-lo com o seu irmao, faz um aceno com a cabeca, mas nao\n diz mais nada. Talvez aquilo significasse algo.\n");
        usleep(s);
        usleep(s);

    }
    else
    {
        system("cls");
        printf("\n Yurin, por algum motivo o abracou; pareceu estranho no comeco,\n mas voce sentiu uma ligacao de irmandade com o mesmo.\n");
        usleep(s);
        usleep(s);
        usleep(s);
        if(escolhas.paiProtetor==1)
        {
            printf("\n Yurin:\n  - Valeu. Eu nao podia deixar aquele babaca impune, voce e meu irmao.\n\n");
            usleep(s);
            usleep(s);
            usleep;
        }


        printf(" Otskel entao abre a sacola que  estava jogada perto deles e um intenso odor\n emerge, e assim voce consegue ver diversos vegetais e frutas podres.\n\n");
        usleep(s);
        usleep(s);
        usleep(s);
        printf(" Otskel:\n -  Peguei isso do lixo que meu pai ia jogar fora.\n\n");
        printf(" Yurin:\n - Fizemos uma carta falsa e dissemos que quem mandou foi a Asha.\n\n Tritska diz:\n - Lembra que ele ja tentou namorar com minha irma? Entao...\n");
        usleep(s);
        usleep(s);
        usleep(s);
        puts("   --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * ---* ---");
        puts("\n");
        puts("\t\t(Pressione qualquer tecla para continuar...)\n");
        fflush(stdin);
        puts("   --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * ---* ---");                                                                            //     SEÇÃO    //
        getch();
        system("cls");
        usleep(s);
        usleep(s);
        usleep(s);
        system("cls");
        printf("\n Otskel:\n - A gente falou na carta que a Asha queria, se encontrar com ele\n aqui no por do sol.\n\n");
        usleep(s);
        usleep(s);
        usleep(s);
        printf(" Yurin:\n - Entao estamos esperando aqui, ele deve aparecer logo.\n\n");
        usleep(s);
        usleep(s);
        usleep(s);



        printf(" Os quatro esperaram, entao, por cerca de dez minutos, antes que o plano\n fosse posto em pratica.\n\n");
        usleep(s);
        usleep(s);
        usleep(s);
        printf(" Enfim, Victor aparece, mas algo o surpreende: ele nao estava sozinho.\n");
        usleep(s);
        usleep(s);
        usleep(s);
        printf(" Nao era algo que impedisse o plano, mas ele conseguia ser estupido\n ao ponto de levar os outros dois pra uma ocasiao daquelas.\n");
        usleep(s);
        usleep(s);
        puts("   --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * ---* ---");
        puts("\n");
        puts("\t\t(Pressione qualquer tecla para continuar...)\n");
        fflush(stdin);
        puts("   --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * ---* ---");                                                                            //     SEÇÃO    //
        getch();
        system("cls");
        usleep(s);
        usleep(s);
        usleep(s);
        system("cls");

            printf("\n Victor estava com Frord e Ikaro, por algum motivo. Os tres andavam juntos\n na escola e nao desgrudavam fora dela.\n Mas Yurin nao achou que ele fosse trazer os dois para la.\n");
            usleep(s);
            usleep(s);
            usleep(s);
            printf("\n Otskel:\n - Muito bem, peguem alguma coisa da sacola.\n\n");
            usleep(s);
            usleep(s);
            usleep(s);

        while (1)
        {

            printf(" %s Banana podre\n", (atual.select == 1) ? "=>" : "  ");
            printf(" %s Mamao molenga\n", (atual.select == 2) ? "=>" : "  ");
            printf(" %s Laranja com larvas\n", (atual.select == 3) ? "=>" : "  ");
            printf(" %s Tomate esbagacado\n", (atual.select == 4) ? "=>" : "  ");

            Opcoes(4);
            if(atual.key == ENTER)
            {
                break;
            }

            printf("\n Victor estava com Frord e Ikaro, por algum motivo. Os tres andavam juntos\n na escola e nao desgrudavam fora dela.\n Mas Yurin nao achou que ele fosse trazer os dois para la.\n");
            printf("\n Otskel:\n - Muito bem, peguem alguma coisa da sacola.\n\n");

        }

        while(1)
        {

            fflush(stdin);
            if (atual.select == 1)
            {
                arremessavel = '1';
            }
            else if (atual.select == 2)
            {
                arremessavel = '2';
            }
            else if (atual.select == 3)
            {
                arremessavel = '3';
            }
            else if (atual.select == 4)
            {
                arremessavel = '4';
            }

            if(arremessavel == '1' || arremessavel == '2' || arremessavel == '3' || arremessavel == '4')
            {
                break;
            }
            system("cls");

                printf("\n Victor estava com Frord e Ikaro, por algum motivo. Os tres andavam juntos\n na escola e nao desgrudavam fora dela.\n Mas Yurin nao achou que ele fosse trazer os dois para la.\n");
                usleep(s);
                usleep(s);
                usleep(s);
                printf("\n Otskel:\n - Muito bem, peguem alguma coisa da sacola.\n\n");
                usleep(s);
                usleep(s);
                usleep(s);

            while (1)
            {

                printf(" %s Banana podre\n", (atual.select == 1) ? "=>" : "  ");
                printf(" %s Mamao molenga\n", (atual.select == 2) ? "=>" : "  ");
                printf(" %s Laranja com larvas\n", (atual.select == 3) ? "=>" : "  ");
                printf(" %s Tomate esbagacado\n", (atual.select == 4) ? "=>" : "  ");

                Opcoes(4);
                if(atual.key == ENTER)
                {
                    break;
                }

                printf("\n Victor estava com Frord e Ikaro, por algum motivo. Os tres andavam juntos\n na escola e nao desgrudavam fora dela.\n Mas Yurin nao achou que ele fosse trazer os dois para la.\n");
                printf("\n Otskel:\n - Muito bem, peguem alguma coisa da sacola.\n\n");
            }
            break;
        }



        switch(arremessavel)
        {

        case '1':
            fruta[20] = "banana";
            break;
        case '2':
            fruta[20] = "mamao";
            break;
        case '3':
            fruta[20] = "laranja";
            break;
        case '4':
            fruta[20] = "tomate";
            break;
        }
        printf(" Voce pega entao a %s molenga e podre, segurando-a com um certo grau de nojo.\n", fruta[20]);
        printf(" Os tres agarram alguma coisa e quando finalmente tem algo em maos, Otskel comeca a contagem.\n");
        usleep(s);
        usleep(s);
        usleep(s);
        system("cls");
        usleep(s);
        printf("3...");
        usleep(s);
        usleep(s);
        system("cls");
        printf("2...");
        usleep(s);
        usleep(s);
        system("cls");
        printf("1...\n");
        usleep(s);
        usleep(s);
        system("cls");
        printf("\n Yurin foi o primeiro a se levantar da moita, jogando ovo\n na cabeca de Victor Wangeryoran.\n");
        usleep(s);
        usleep(s);
        usleep(s);
        printf(" Voce atira %s podre neles, acertando em cheio no torax\n de Victor, que estava sentado na beira do rio com os outros dois.\n\n");
        usleep(s);
        usleep(s);
        usleep(s);
        printf(" Os quatro comecaram a jogar mais coisas neles enquanto eles\n se debrucavam em frutas podres, tentando se proteger, inutilmente.\n\n");
        usleep(s);
        usleep(s);
        usleep(s);
        printf(" Um espetaculo de cores, insetos e larvas estava bem ali na sua frente.\n Eles estavam cobertos com insetos e moscas, como vegetais podres que eram.\n");
        usleep(s);
        usleep(s);
        printf("\n Victor:\n - EU VOU PEGAR TODOS VOCES!\n\n");
        usleep(s);
        usleep(s);
        printf(" Tritska gritou algo, mas voce nao entendeu, pois estava correndo com os\n demais de volta para Hyalton.\n\n");
        usleep(s);
        usleep(s);

        puts("   --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * ---* ---");
        puts("\n");                                                                                //--------------//
        puts("\t\t(FIM DO CAPITULO I)");                                                           //              //
        puts("\t\t(Pressione qualquer tecla para continuar...)");                                  //   FINAL DE   //
        fflush(stdin);                                                                             //     SEÇÃO    //
        getch();                                                                                   //              //
        system("cls");                                                                             //--------------//
        usleep(s);
        usleep(s);
        usleep(s);

    }



}

int main()
{

    escolhas.ansiedade = 0;
    escolhas.paiProtetor = 0;
    escolhas.NaoBuscouIrmao = 0;
    escolhas.avisar = 0;

    char NomePrevio[10];
    char resp;
    int hp, hpDalia, hpHanne, hpSetvik, hpYurin, i;
    void delay(unsigned int);
    Tutorial();
    usleep(s);
    usleep(s);
    Name(); // Função da Escolha do Nome do Personagem.

    //COMEÇO DO JOGO--------------------------------------------------------------------------------------------------------------

    Lot1(); //Função do 1º Lot de Texto.
    fflush(stdin);
    system("cls");
    usleep(s);
    usleep(s);

    SW1 (respPrimeiraPergunta);

    Lot2(); //Função do 2º Lot de Texto.

    //AO CHEGAR EM CASA-------------------------------------------------------------------------------------
    usleep(s);
    usleep(s);
    usleep(s);
    usleep(s);

    Lot3();
    //FINAL DE SEÇÃO----------------------------------------------------------------------------------------
    fflush(stdin);
    system("cls");
    usleep(s);
    usleep(s);

    SW2(respInt);

    Lot4();


    //NA FEIRA-------------------------------------------------------------------------------------

    Lot5();
    fflush(stdin);
    system("cls");
    usleep(s);
    usleep(s);
    SW3(respInt);
    // scanf("%d", &respInt);

    //FIM DO CAP 1---------------------------------------------------------------------------------

    EndChap1();


    return 0;
}
