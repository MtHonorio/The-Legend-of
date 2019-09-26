#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <locale.h>



#define UP 72
#define DOWN 80
#define ENTER 13
#define s 99//9999 //FUNÇÃO UNSLEEP (Tira as barras para voltar ao normal)

int respInt, respInt2, select, key, respPrimeiraPergunta;
const char Nome[15];
char aspas = '"';
int vinganca=0; //OPTOU PELO CAMINHO DA VINGANÇA
int ansiedade=0;//PREFERIU FAZER TAL ATIVIDADE
int indiferenca;// DEIXOU DE RESPONDER TAL COISA
int paiProtetor=0;//PAIPROTETOR = SE AVISOU OS PAIS SOBRE OS FILHOS DO WALKRON
int NaoBuscouIrmao = 0; //BUSCOU O IRMAO
int avisar=0; //AVISOU QUE ASHA ESTAVA A PROCURA DE TRITSKA


//INCIAÇÃO DO JOGO
void Tutorial (){
char aspas = '"', loopDoTutorial=2;

while(loopDoTutorial == 2){
        select = 1;
        system("cls");
        while (1){
puts("\n\n\t\t\t          COMO JOGAR?\n\n\t\t\t             (1/4)");usleep(s);
puts("\n O JOGO PERMITE VÁRIAS OPÇÕES DE ENTRADA. ");usleep(s);usleep(s);
puts(" PARA ESCOLHER UMA OPÇÃO, SELECIONE A ENTRADA QUE VOCÊ QUER E APERTE ENTER.\n");usleep(s);usleep(s);
printf("\n %s TUDO BEM\n", (select == 1) ? "=>" : "  ");
printf(" %s ENTENDI \n", (select == 2) ? "=>" : "  ");
printf(" %s :D\n", (select == 3) ? "=>" : "  ");

key = getch();
    if(key == DOWN) select+= 1;
    if(key == UP) select-= 1;
    if (select > 3) select = 1;
    if (select < 1) select = 3;
    system("cls");
    if(key == ENTER){break;}

fflush(stdin);
        }

select = 1;
puts("\n\n\t\t\t          COMO JOGAR?\n\n\t\t\t             (2/4)");usleep(s);
printf("\n VOCÊ TAMBÉM TEM A OPÇÃO %c?%c, QUE PODE SER ESCOLHIDA AO DIGITAR UMA\n", aspas, aspas);usleep(s);usleep(s);
puts(" ENTRADA QUE NÃO ESTÁ NAS OPÇÕES.\n");usleep(s);usleep(s);
printf("\n => Ok\n  ");
fflush(stdin);
scanf("%*c");
system("cls");

select = 1;
puts("\n\n\t\t\t          COMO JOGAR?\n\n\t\t\t             (3/4)");usleep(s);
printf("\n EM ALGUNS CASOS VOCÊ PODE PERMANECER SEM FALAR NADA,\n", aspas, aspas);usleep(s);usleep(s);
printf(" BASTA APENAS INSERIR UMA ENTRADA QUE TENHA %c...%c COMO OPÇÃO.\n", aspas, aspas);usleep(s);usleep(s);
printf(" AS OPÇÕES QUE SIGNIFICAM %cFICAR EM SILENCIO%c SERÃO REPRESENTADAS ASSIM:\n", aspas, aspas);usleep(s);usleep(s);
printf("\n => OPÇÃO ...\n  ");
fflush(stdin);
scanf("%*c");
system("cls");


select = 1;
while (1){
puts("\n\n\t\t\t          COMO JOGAR?\n\n\t\t\t             (4/4)");usleep(s);
printf("\n AS SUAS ESCOLHAS ALTERAM A HISTORIA AO LONGO DO JOGO,\n", aspas, aspas);usleep(s);usleep(s);
printf(" PORTANTO, ESCOLHA SABIAMENTE...\n\n");usleep(s);usleep(s);
 puts("   --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * ---* ---");
printf("\n\n\n\n O TUTORIAL ESTA CONCLUÍDO. DESEJA JOGAR AGORA OU VER O TUTORIAL NOVAMENTE?\n", aspas, aspas);usleep(s);usleep(s);
printf("\n %s IR JOGAR!\n", (select == 1) ? "=>" : "  ");
printf(" %s VER TUTORIAL NOVAMENTE\n", (select == 2) ? "=>" : "  ");

fflush(stdin);
key = getch();
    if(key == DOWN) select+= 1;
    if(key == UP) select-= 1;
    if (select > 2) select = 1;
    if (select < 1) select = 2;
    system("cls");
    if(key == ENTER){break;}

fflush(stdin);
}
loopDoTutorial = select;
if(loopDoTutorial != 2) break;

}

}

//TIRAR O BARRA N DA STRING "NOME"
void TiraBarra(char *Nome){

int i;
for(i=0; Nome[i] != '\0';i++){
    if(Nome[i] == '\n'){
        Nome[i] = '\0';
    }
}

}


void EndChap1(){
system("cls");
printf("\n\t\t CAPITULO I: \n");
printf("\n");
  if(ansiedade==0) printf("\t Você não respondeu a Dalia sobre o que queria ver primeiro.\n");
  else{
  printf("\t Você disse para Dalia que queria ver\n");
  if(ansiedade==1) printf("\t  o Campeonato de Cavalaria primeiro.\n");
  if(ansiedade==2) printf("\t  o Campeonato de Arquearia primeiro.\n");
  if(ansiedade==3) printf("\t  o Duelo de Espadachins primeiro.\n");
  if(ansiedade==4) printf("\t  a Comunhão primeiro.\n"); }


  if(paiProtetor!=0) printf("\t Você alertou a seu pai sobre os filhos de Wangeryoran .\n");

  if(NaoBuscouIrmao == 1) printf("\n\t Você desistiu de ir buscar seu irmão.\n");
  if(NaoBuscouIrmao == 0) printf("\n\t Você foi ao Rio vermelho e buscou seu irmão.\n");

  if(avisar == 1) printf("\n\t Voce deu o aviso de Asha para Tritska.\n");

  if(indiferenca == 0) {printf("\n\t Você respondeu todas as vezes.\n");}
  if(indiferenca > 1) {printf("\n\t Você deixou de responder %d vezes", indiferenca);}
  if(indiferenca == 1){printf("\n\t Você deixou de responder %d vez", indiferenca);}



  printf("\n\n\n\n\t The Legend of %s\n", Nome);
  printf("\t Um jogo por Matheus Honorio, Diego Luís e Miguel Elias");
  printf("\n\t Graduandos em Eng. de Computação, Centro de Informática - UFPB\n\n\n\n\n ");
}

int SW1 (int respPrimeiraPergunta){

    int respInt;
    select = 1;
        switch(respPrimeiraPergunta){//SWITCH PARA CHECAR SE O JOGADOR ESTÁ ANSIOSO OU NÃO
            case 1:
                while (1){
            printf("\n Dalia:\n - Sim, mas o que vai querer ver primeiro?\n\n"); usleep(s); usleep(s);
            printf(" %s Campeonato de Cavalaria\n", (select == 1) ? "=>" : "  ");
            printf(" %s Campeonato de Arquearia\n", (select == 2) ? "=>" : "  ");
            printf(" %s Duelo de Espadachins\n", (select == 3) ? "=>" : "  ");
            printf(" %s A Comunhão\n", (select == 4) ? "=>" : "  ");
            printf(" %s ...\n ", (select == 5) ? "=>" : "  ");

                    key = getch();
            if(key == DOWN) select+= 1;
            if(key == UP) select-= 1;
            if (select > 5) select = 1;
            if (select < 1) select = 5;
            system("cls");
            if(key == ENTER){break;}

            fflush(stdin);
                }
            respInt = select;
            system("cls"); usleep(s);

                switch(respInt){ //SWITCH PARA CASO O JOGADOR ESTEJA ANSIOSO

                            //SE ELE ESTÁ ANSIOSO:
                            case 1:
                            usleep(s); usleep(s);
                            printf("\n Dalia:\n- Os duelos são bem mais emocionantes...\n Eu queria ter uma espada, não um cavalo.\n"); usleep(s); usleep(s);
                            printf("\n (Dalia vai lembrar de sua escolha...)\n");
                            ansiedade=1;
                            break;
                            case 2:
                            printf("\n Dalia:\n- Gosta de arcos? Com a tua mira? - Ela começou a rir. - Mas eu queria uma\n espada, não um arco, acho que eu me daria bem com uma espada.\n"); usleep(s); usleep(s);
                            printf("\n (Dalia vai lembrar de sua escolha...)\n");
                            ansiedade=2;
                            break;
                            case 3:
                            printf("\n Dalia:\n - A Lady Guida vai fatiar o Mestre Odwin esse ano.\n"); usleep(s); usleep(s);
                            printf("\n (Dalia vai lembrar de sua escolha...)\n");
                            ansiedade=3;
                            break;
                            case 4:
                            printf("\n Dalia:\n- Ah, é a segunda coisa que estou mais ansiosa. Soube que os Ulvin\n vão preparar um bolo para todos esse ano, não só pros Valkron.\n"); usleep(s); usleep(s);
                            printf("\n (Dalia vai lembrar de sua escolha...)\n");
                            ansiedade=4;
                            break;
                            default:
                            printf("\n Dalia:\n - Não quer falar comigo, entendi...\n"); usleep(s); usleep(s);
                            printf("\n (Dalia vai lembrar disso...)\n");
                            indiferenca++;
                            break;
                            }
                            break;
                            //SE ELE NÃO ESTÁ ANSIOSO:
                            case 2:
                            usleep(s); usleep(s);
                            printf("\n Dalia:\n - Ah, mas eu estou. Voce não tem ideia do que é esperar um ano para ver\nLady Guida e o Mestre Odwin duelando.\n"); usleep(s); usleep(s);
                            printf("\n (Dalia vai lembrar disso...)\n");
                            ansiedade=0;
                            break;

                            //SE ELE É INDIFERENTE:
                            default:
                                printf("\n Dalia:\n - Não quer falar comigo, entendi...\n"); usleep(s); usleep(s);
                                printf("\n (Dalia vai lembrar disso...)\n");
                                indiferenca++;

            } //FIM DO SWITCH
            select = 1;
        return 0;
}

int SW2(int respInt){
    int respInt2;

    switch(respInt){
                    case 2:
                    default:
                        usleep(s); usleep(s);
                        while (1){
                        printf("\n Setvik:\n - VENHA AQUI AGORA. NÃO ESTA ME OUVINDO?"); usleep(s); usleep(s);
                        indiferenca++;
                        printf("\n\n O grito foi tao alto que Hanne e Dalia se espantaram.\n\n");usleep(s); usleep(s);
                        printf(" %s Ir até ele\n", (select == 1) ? "=>" : "  ");
                        printf(" %s Ir até ele\n", (select == 2) ? "=>" : "  ");
                        printf(" %s Ir até ele\n", (select == 3) ? "=>" : "  ");

                        key = getch();
                        if(key == DOWN) select+= 1;
                        if(key == UP) select-= 1;
                        if (select > 3) select = 1;
                        if (select < 1) select = 3;
                        system("cls");
                        if(key == ENTER){break;}

                        fflush(stdin);
                        }
                        system("cls");
                        usleep(s); usleep(s);
                        select = 1;
                        printf(" Setvik:\n - Você pode fazer um favor?\n");



                    break;
                    case 1:
                        usleep(s); usleep(s);
                        system("cls");
                        while (1){
                        printf("\n Setvik:\n - Como foi seu dia?\n\n"); usleep(s); usleep(s);
                        printf(" %s Foi legal\n", (select == 1) ? "=>" : "  ");
                        printf(" %s Foi um saco\n", (select == 2) ? "=>" : "  ");
                        printf(" %s ...\n", (select == 3) ? "=>" : "  ");

                        key = getch();
                        if(key == DOWN) select+= 1;
                        if(key == UP) select-= 1;
                        if (select > 3) select = 1;
                        if (select < 1) select = 3;
                        system("cls");
                        if(key == ENTER){break;}
                        }
                        fflush(stdin);
                        respInt2 = select;
                        system("cls");
                        switch (respInt2){
                            case 1:
                            printf(" %s:\n", Nome);
                            printf(" - Foi legal. Aprendi que a febre vem das maldições que os Ioruns nos jogam\n"); usleep(s); usleep(s);
                            printf(" para roubar nossa energia espiritual, e que as doenças são causadas por\n"); usleep(s); usleep(s);
                            printf(" por pequenos animaizinhos que escapam do exílio pra nos prejudicar.\n"); usleep(s); usleep(s);
                            printf("\n Setvik:\n - Isso mesmo! Por isso, mantenha-se longe do exílio.\n");usleep(s); usleep(s);
                            printf("\n Você pode fazer um favor?\n");usleep(s); usleep(s);
                            break;

                            case 2:
                            printf(" %s:\n", Nome);
                            printf(" - Foi um saco.  Os filhos de Wangeryoran continuam implicando comigo.\n"); usleep(s); usleep(s);
                            printf("\n Setvik:\n - Não se preocupe. Vou resolver isso com o Wangeryoran");;usleep(s); usleep(s);
                            printf("\n (Setvik vai lembrar disso...)\n\n");usleep(s); usleep(s);
                            printf(" Você pode fazer um favor?\n");usleep(s); usleep(s);
                            paiProtetor++;
                            break;

                         default:
                         indiferenca++;
                         printf("\n Setvik:\n - Por que o silêncio?"); usleep(s); usleep(s);
                         printf("\n Os filhos de Wangeryoran continuam implicando com você, certo?"); usleep(s); usleep(s);
                         printf("\n Não se preocupe. Vou resolver isso com o Wangeryoran.");usleep(s); usleep(s);
                         printf("\n (Setvik vai lembrar disso...)\n\n");usleep(s); usleep(s);
                         printf("\n Você pode fazer um favor?\n");usleep(s); usleep(s);
                         paiProtetor++;

                        }

                        usleep(s); usleep(s);
            }
        select = 1;
    return 0;
}

int SW3(int respInt){
    int respInt2;
    switch(respInt){
    case 1:
        while (1){
        printf("\n Hotnor:\n - Vai querer milho como sempre? Mais verde ou maduro?\n ");usleep(s); usleep(s);
        printf("\n\n %s Dizer que na verdade você está procurando Otskel e Yurin\n", (select == 1) ? "=>" : "  ");
        printf(" %s Dizer que na verdade você está procurando Otskel e Yurin\n", (select == 2) ? "=>" : "  ");

        key = getch();
        if(key == DOWN) select+= 1;
        if(key == UP) select-= 1;
        if (select > 2) select = 1;
        if (select < 1) select = 2;
        system("cls");
        if(key == ENTER){break;}
        fflush(stdin);
        }
        system("cls");
        select = 1;
        usleep(s); usleep(s);
        printf("\n Hotnor:\n -  Eles foram até o Rio Vermelho com Tristska, mas ainda não voltaram. \n");
        Lot2();
        RioVermelho();
        break;
    case 2:
         while (1){
         printf("\n Hotnor:\n - Tudo bem, então. Se precisar de algo me avisa.");
         printf("\n\n %s Continuar procurando sozinho\n", (select == 1) ? "=>" : "  ");
         printf(" %s Dizer que na verdade você está procurando Otskel e Yurin\n", (select == 2) ? "=>" : "  ");
         printf(" %s Continuar procurando sozinho\n", (select == 3) ? "=>" : "  ");
         key = getch();
        if(key == DOWN) select+= 1;
        if(key == UP) select-= 1;
        if (select > 3) select = 1;
        if (select < 1) select = 3;
        system("cls");
        if(key == ENTER){break;}
    }
         fflush(stdin);
         respInt2 = select;
         select = 1;
         usleep(s); usleep(s);
         switch(respInt2){
            case 1:
                ProcurarSozinho();
                break;
            case 2:
               printf("\n Hotnor:\n -  Eles foram até o Rio Vermelho com Tristska, mas ainda não voltaram. ");
               Lot2();
               RioVermelho();
                break;

            default:
                ProcurarSozinho();
                break;
                }

         break;

    default:

            while(respInt2 != 2 || respInt2 != 1){
            while (1){
            indiferenca++;
            printf("\n Hotnor:\n - Você sempre tao calado. Procura pelo seu irmão?\n ");
            printf("\n\n %s Sim\n", (select == 1) ? "=>" : "  ");
            printf(" %s Nao\n", (select == 2) ? "=>" : "  ");

            key = getch();
            if(key == DOWN) select+= 1;
            if(key == UP) select-= 1;
            if (select > 2) select = 1;
            if (select < 1) select = 2;
            system("cls");
            if(key == ENTER){break;}
            }
            fflush(stdin);
            respInt2 = select;
            select = 1;

                switch(respInt2){
            case 1:
                printf("\n Hotnor:\n - Eles foram até o Rio Vermelho com Tristska, mas ainda não voltaram.\n ");
                break;
            case 2:
                printf("\n Hotnor:\n - Tudo bem, então. Se precisar de algo me avisa.\n  ");
                ProcurarSozinho();
                break;

            default:
                system("cls");
                }
               if( respInt2 == 2 || respInt2 == 1){break;}
            usleep(s); usleep(s);




    }

    }
}

int AttackSystem (int x){

    switch(x){
        case 1:
            return 1;
            break;
        case 2:
            return 2;
            break;

        case 3:
            return 3;
            break;
        case 4:
            return 4;
            break;
        default:
            return 0;
            break;
    }
}


char Name(void){

    char resp;
    int loopDoNome;


        select = 1;
        while(1){
        system("cls");
        printf("\n  THE LEGEND OF...\n\n");
        printf("\n 1 - Sinais\n\n");
        //CHECAR O NOME-----------------------------------------------------------------------------------------------------------------
        printf("\n Qual o seu nome?\n  ");
        fflush(stdin);
        fgets(&Nome, 16, stdin); //MÁXIMO DE 15 CARACTERES
        TiraBarra(&Nome);
        system("cls");



        usleep(s); usleep(s); usleep(s);

            while(1){
           printf("\n %s eh mesmo o teu nome?\n", Nome);
            printf(" %s Sim.\n", (select == 1) ? "=>" : "  ");
            printf(" %s Nao.\n", (select == 2) ? "=>" : "  ");


            fflush(stdin);
            key = getch();
            if(key == DOWN) select+= 1;
            if(key == UP) select-= 1;
            if (select > 2) select = 1;
            if (select < 1) select = 2;
            system("cls");
            if(key == ENTER){loopDoNome = select; break;}
            }

     if(loopDoNome == 1) {break;}
     fflush(stdin);
      system("cls");
    }


    }







void Lot1 (void){
        while (1){
        printf("\n\t\t\t\tThe Legend Of %s\n\n", Nome);
        printf("  O céu estava cinzento em Hyalton e Dalia caminhava ao seu lado, segurando os\n livros que se assemelhavam a tijolos.\n"); usleep(s); usleep(s); usleep(s); usleep(s);
        printf(" Você sente que ela está cansada, mas ainda assim expressa uma feição de leveza."); usleep(s); usleep(s); usleep(s); usleep(s);
        printf( "\nOs dois estavam a caminho de casa, passando pela enorme estrutura do Casarão dos Valkron.\n"); usleep(s); usleep(s); usleep(s);
        printf( "\n Naquele momento, sua irmã te lança um olhar e pergunta: \n"); usleep(s); usleep(s); usleep(s); usleep(s);
        printf(" -E então, já está com muita ansiedade para o festival? \n\n"); usleep(s); usleep(s); usleep(s);

        printf(" %s Claro.\n", (select == 1) ? "=>" : "  ");
        printf(" %s Nem tanto.\n", (select == 2) ? "=>" : "  ");
        printf(" %s ...\n", (select == 3) ? "=>" : "  ");

        key = getch();
        if(key == DOWN) select+= 1;
        if(key == UP) select-= 1;
        if (select > 3) select = 1;
        if (select < 1) select = 3;
        system("cls");
        if(key == ENTER){break;}
        fflush(stdin);
        }
    respPrimeiraPergunta = select;
    select = 1;
}

void Lot2 (void){
    puts("   --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * ---* ---");    //--------------//
    puts("\n\n\n\n\n\n");                                                                     //              //
    puts("\t\t(Pressione qualquer tecla para continuar...)");                                 //   FINAL DE   //
    fflush(stdin);                                                                            //     SEÇÃO    //
    getch(); system("cls");                                                                   //              //
    usleep(s); usleep(s); usleep(s);                                                          //--------------//
}

void Lot3 (void){
        while (1){
        printf("\n Chegando em casa, você se depara com Hanne, sua mãe, que está cuidando de uma\n "); usleep(s); usleep(s);
        printf("pequena plantação ao lado de sua casa.\n"); usleep(s); usleep(s);
        printf("\n Hanne:\n - Dalia, venha me ajudar!\n"); usleep(s); usleep(s);
        printf("\n E então você ouve um grito...\n ");usleep(s);
        printf(" %c%s, venha aqui!%c\n", aspas, Nome, aspas);usleep(s);usleep(s);
        printf("\n Era Setvik, seu pai.\n");usleep(s);usleep(s);
        printf(" %s Ir até ele\n", (select == 1) ? "=>" : "  ");
        printf(" %s Ignorar\n", (select == 2) ? "=>" : "  ");
        printf(" %s ...\n", (select == 3) ? "=>" : "  ");

            key = getch();
        if(key == DOWN) select+= 1;
        if(key == UP) select-= 1;
        if (select > 3) select = 1;
        if (select < 1) select = 3;
        system("cls");
        if(key == ENTER){break;}
        }
    respInt = select;
    select = 1;
}

void Lot4 (void){
                printf(" Vé em busca de seu irmão que está com os filhos dos Hotnor na feira.\n");

                  puts("   --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * ---* ---");    //--------------//
                  puts("\n\n\n\n\n\n");                                                                     //              //
                  puts("\t\t(Pressione qualquer tecla para continuar...)");                                 //   FINAL DE   //
                  fflush(stdin);                                                                            //     SEÇÃO    //
                  getch(); system("cls");                                                                   //              //
                  usleep(s); usleep(s); usleep(s);                                                          //--------------//
                  fflush(stdin);
}

void Lot5 (void){
                usleep(s); usleep(s); usleep(s); usleep(s);
                while (1){
                printf("\n Chegando na feira você percebe que ela está sendo decorada por várias pessoas.\n"); usleep(s); usleep(s);
                printf(" Há enfeites  por todas as partes para preparação do festival.\n"); usleep(s); usleep(s);
                printf("\n Você se aproxima de Hotnor, um dos mercadores da feira. \n"); usleep(s); usleep(s);
                printf(" Hotnor é o pai de Otskel, amigo de Yurin, seu irmao.  \n"); usleep(s); usleep(s);

                printf("\n Hotnor:\n - Ola, %s, quer alguma coisa?\n\n", Nome); usleep(s); usleep(s);
                printf(" %s Sim\n", (select == 1) ? "=>" : "  ");
                printf(" %s Nao\n", (select == 2) ? "=>" : "  ");
                printf(" %s ...\n", (select == 3) ? "=>" : "  ");
                        key = getch();
                if(key == DOWN) select+= 1;
                if(key == UP) select-= 1;
                if (select > 3) select = 1;
                if (select < 1) select = 3;
                system("cls");
                if(key == ENTER){break;}
                }
                        fflush(stdin);
                        respInt = select;
                        select = 1;
}

void ProcurarSozinho(){
char x = '0';
int d;
system("cls");
printf("\n Ao ir para praça você avistou Asha e Pascal. Os dois ajudavam a decorar\n a praça");usleep(s); usleep(s);
printf(" com enfeites coloridos nos postes e casas. Ahnmeri, Sammuel e\n Nyara Valkron");usleep(s); usleep(s);
printf(" observavam tudo com um olhar desmotivado, sob os olhares\n de Treviss Valkron e Eileen Valkron, lordes de Hyalton.\n");usleep(s); usleep(s);
printf(" Você pensa em ir cumprimentar os seus amigos do instrucionário, mas percebe\n que suas roupas não estão %ca carater%c para a presença dos Valkron.", aspas, aspas);
usleep(s); usleep(s);

        system("cls");
        while (1){
        printf("\n Ao ir para praca você avistou Asha e Pascal. Os dois ajudavam a decorar\n a praça");
        printf(" com enfeites coloridos nos postes e casas. Ahnmeri, Sammuel e\n Nyara Valkron");
        printf(" observavam tudo com um olhar desmotivado, sob os olhares\n de Treviss Valkron e Eileen Valkron, lordes de Hyalton.\n");
        printf(" Você pensa em ir cumprimentar os amigos do instrucionário, mas percebe\n que suas roupas não estão %ca carater%c para a presença dos Valkron.", aspas, aspas);
        printf("\n\n %s Ir mesmo assim\n", (select == 1) ? "=>" : "  ");
        printf(" %s Voltar para casa sem o irmão\n", (select == 2) ? "=>" : "  ");


        key = getch();
        if(key == DOWN) select+= 1;
        if(key == UP) select-= 1;
        if (select > 2) select = 1;
        if (select < 1) select = 2;
        system("cls");
        if(key == ENTER){break;}
        }
        fflush(stdin);
        select = 1;
        if(select==1)
        {   x='1';
        }else if(select==2){
            x='2';
        }

        switch(x){
        case '1':
            system("cls");
            usleep(s); usleep(s);
            while (1){
            printf("\n Os Valkron se afastam na mesma hora pra olhar outra coisa e nem o percebem lá. ");
            printf(" Em seguida, Asha o abraça e Pascal iria cumprimentá-lo se nao estivesse sujo de tinta azul e branca.");usleep(s); usleep(s);
            printf("\n Pascal:\n -  Veio ajudar só pra receber comida depois?");usleep(s); usleep(s);
            printf("\n\n %s Não, tô procurando por Otskel e Yurin. Viu eles por aí?\n", (select == 1) ? "=>" : "  ");
            printf(" %s Claro.\n", (select == 2) ? "=>" : "  ");
            printf(" %s Claro.\n", (select == 3) ? "=>" : "  ");

            key = getch();
            if(key == DOWN) select+= 1;
            if(key == UP) select-= 1;
            if (select > 3) select = 1;
            if (select < 1) select = 3;
            system("cls");
            if(key == ENTER){break;}
            }
             fflush(stdin);
             d = select;
             select = 1;

                switch(d){
            case 1:
                system("cls");
                printf("\n Pascal:\n -  Ah, eu vi os dois. Eles foram com a Tritska lá para o Rio Vermelho.\n");usleep(s); usleep(s);
                avisar = 0;
                Lot2();
                RioVermelho();
                break;

            case 2:

            default:
                system("cls");
                usleep(s); usleep(s);
                while (1){
                printf("\n\n %s:\n -  Claro, não e por isso que você tá aqui tambêm?", Nome);usleep(s); usleep(s);
                printf("\n\n Pascal soltou uma risada e quase caiu da escada na qual estava suspenso.");usleep(s); usleep(s);
                printf("\n\n Asha:\n - Você viu a Tritska? Ela saiu com o Yurin essa tarde pra o Rio Vermelho,\n mas ainda nao voltou.");usleep(s); usleep(s);
                printf("\n\n %s Não.\n", (select == 1) ? "=>" : "  ");
                printf(" %s Não.\n", (select == 2) ? "=>" : "  ");

                key = getch();
                if(key == DOWN) select+= 1;
                if(key == UP) select-= 1;
                if (select > 2) select = 1;
                if (select < 1) select = 2;
                system("cls");
                if(key == ENTER){break;}
                }
                usleep(s); usleep(s);
                system("cls");
                printf("\n\n %s:\n - Ah, não. Na verdade estou procurando por eles.", Nome);usleep(s); usleep(s);
                printf("\n\n Asha:\n - Quando os encontrar, avisa a Tritska que já passou da hora de ir pra casa.\n");usleep(s); usleep(s);
                avisar = 1;
                Lot2();
                RioVermelho();

                }

            break;
        case '2':
            system("cls");
            usleep(s); usleep(s);usleep(s); usleep(s);
            printf("\n Ao chegar em casa você descobre que seu irmão já estava em casa.");usleep(s); usleep(s);
            printf("\n Ele estava com roupas molhadas e com o joelho sangrando.\n\n");usleep(s); usleep(s);
            NaoBuscouIrmao++;
            Lot2();

            break;
        default:
            puts("Cc");

        }
}

void RioVermelho(){


    int  respo3, contraataque, fruta[20];
    char respo2, respo1,  arremessavel;

    printf("\n Chegando no Rio...\n");
    printf("\n Você finalmente está além dos limites da cidade de Hyalton.\n");
    printf(" Um córrego de cerca de cinco metros de largura paira na sua frente.\n"); usleep(s); usleep(s); usleep(s);
    printf(" Diversas pétalas das roseiras que ali repousavam, agora pairavam\n na superfície da água que fluia levemente naquele local.\n"); usleep(s); usleep(s); usleep(s);
    printf(" A vegetação cor laranja esverdeada ficava cada vez mais densa, a medida que\n se distanciava de Hyalton.\n"); usleep(s); usleep(s); usleep(s);
    printf(" Apenas moitas balancando ao vento. Era tudo o que tinha ali, ate...\n"); usleep(s);usleep(s);usleep(s);usleep(s); usleep(s);

            puts("   --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * ---* ---");
            puts("\n");
            puts("\t\t(Pressione qualquer tecla para continuar...)\n");
            fflush(stdin);
            puts("   --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * ---* ---");                                                                            //     SEÇÃO    //
            getch(); system("cls");
            usleep(s); usleep(s); usleep(s);
            system("cls");

    while (1){
    printf("\n VOCÊ SENTE ALGO AGARRAR O SEU TORNOZELO.\n");
    printf(" Uma mão penquena e molhada o agarra forte, até ficar uma marca vermelha dos\n dedos e, enfim");
    printf(" o puxa em direção a moita que estava inocentemente do seu lado,\n fazendo-o cair em sua direção.\n");
    printf(" Era o seu irmão. E não só ele. Otskel e Tritska o acompanhavam,\n ambos com o dedo indicador pressionando os lábios em sinal de silêncio.\n");
    printf(" Os três estavam com as mãos e pernas molhadas, mas não parecia que tinham\n se banhado ali.\n Perto deles, havia uma sacola de pano velha e desfiada.\n\n");
    printf(" %s Que diabos?!\n", (select == 1) ? "=>" : "  ");
    printf(" %s O que estão fazendo?!\n", (select == 2) ? "=>" : "  ");
    printf(" %s Está na hora de ir pra casa! Os três.\n", (select == 3) ? "=>" : "  ");

    key = getch();
    if(key == DOWN) select+= 1;
    if(key == UP) select-= 1;
    if (select > 3) select = 1;
    if (select < 1) select = 3;
    system("cls");
    if(key == ENTER){break;}

    }
    fflush(stdin);
    respo1 = select;
    system("cls");
    select = 1;

    switch(respo1){

    case 1:
        system("cls");
        usleep(s);usleep(s);
        while (1){
        printf("\n Yurin:\n - Shh! Vai estragar o plano!\n\n");usleep(s);usleep(s);
        printf(" %s Que Plano?!!\n", (select == 1) ? "=>" : "  ");
        printf(" %s Que Plano?!!\n", (select == 2) ? "=>" : "  ");

        key = getch();
        if(key == DOWN) select+= 1;
        if(key == UP) select-= 1;
        if (select > 2) select = 1;
        if (select < 1) select = 2;
        system("cls");
        if(key == ENTER){break;}
        }
        fflush(stdin);
        respo2 = select;

        switch(respo2){

        case 1:
        default:
            system("cls");
            usleep(s);usleep(s);
            while (1){
            printf("\n Tritska:\n - Vingança!\n\n"); usleep(s);usleep(s);
            printf(" Otskel:\n - Victor Wangeryoran está vindo até aqui. E nós estamos preparados.\n"); usleep(s);usleep(s);
            printf(" Ele implíca com todo mundo e deve ter o que merece.\n"); usleep(s);usleep(s);
            printf(" Você sabe disse mais que ninguém. Não quer nos ajudar?\n"); usleep(s);usleep(s);
            printf("\n %s Victor Wangeryoran não me interessa mais. Vocês precisam ir pra casa.\n", (select == 1) ? "=>" : "  ");
            printf(" %s Tudo bem, vou ajudar. O que iremos fazer?\n", (select == 2) ? "=>" : "  ");

            key = getch();
            if(key == DOWN) select+= 1;
            if(key == UP) select-= 1;
            if (select > 2) select = 1;
            if (select < 1) select = 2;
            system("cls");
            if(key == ENTER){break;}
            }
            respo3 = select;
            select = 1;
            if(respo3==1)
                respo3=0;
            else
                respo3=1;
            break;
        }
        break;

        case 2:
        system("cls");
        usleep(s);usleep(s);
        while (1){
        printf("\n Yurin:\n - Colocando o plano em prática.\n\n");usleep(s);usleep(s);
        printf(" %s Que Plano?!!\n", (select == 1) ? "=>" : "  ");
        printf(" %s Que Plano?!!\n", (select == 2) ? "=>" : "  ");

        key = getch();
        if(key == DOWN) select+= 1;
        if(key == UP) select-= 1;
        if (select > 2) select = 1;
        if (select < 1) select = 2;
        system("cls");
        if(key == ENTER){break;}
        }
        fflush(stdin);
        if (select == 1){
            respo2 = '1';}
        else{
            respo2 = '2';}
        select = 1;
        switch(respo2){

        case 1:

        default:
            system("cls");
            usleep(s);usleep(s);
            while (1){
            printf("\n Tritska:\n - Vingança!\n\n");
            printf(" Otskel:\n - Victor Wangeryoran está vindo até aqui. E nós estamos preparados.\n");usleep(s);usleep(s);
            printf(" Ele implica com todo mundo, agora ele vai ter o que merece.\n"); usleep(s);usleep(s);
            printf(" Você sabe disso mais que ninguém. Não quer nos ajudar?\n"); usleep(s);usleep(s);
            printf("\n %s Victor Wangeryoran não me interessa mais. Vocês precisam ir pra casa.\n", (select == 1) ? "=>" : "  ");
            printf(" %s Tudo bem, vou ajudar, o que iremos fazer?\n", (select == 2) ? "=>" : "  ");

            key = getch();
            if(key == DOWN) select+= 1;
            if(key == UP) select-= 1;
            if (select > 2) select = 1;
            if (select < 1) select = 2;
            system("cls");
            if(key == ENTER){break;}
            }

            fflush(stdin);
            respo3 = select;
            select = 1;
            if(respo3==1)
                respo3=0;
            else
                respo3=1;
            break;

    }
        break;
        case 3:
            system("cls");
            usleep(s);usleep(s);
            while (1){
            printf("\n Yurin:\n - Estamos em um plano de vingança contra o Victor Wangeryoran.\n Não quer nem ouvir?\n");usleep(s);usleep(s);
            printf(" Ele implica com todo mundo, ele tem que pagar por isso.\n"); usleep(s);usleep(s);
            printf("\n %s Não me interessa, ele é um animal, mas eu não.\n", (select == 1) ? "=>" : "  ");
            printf(" %s Tá, eu quero. Qual o plano?\n", (select == 2) ? "=>" : "  ");

            key = getch();
            if(key == DOWN) select+= 1;
            if(key == UP) select-= 1;
            if (select > 2) select = 1;
            if (select < 1) select = 2;
            system("cls");
            if(key == ENTER){break;}
            }

            fflush(stdin);
            respo3 = select;
            select = 1;
            if(respo3==1)
                respo3=0;
            else
                respo3=1;
        break;
    }
        if(respo3==0){
            system("cls");

            if(avisar==1){printf("\n Mesmo sem a vontade deles, você os leva de volta a Hyalton, deixando Tritska\n com Asha na volta pela feira e Otskel volta para encontrar Hotnor.\n"); usleep(s); usleep(s);}
            if(avisar==0){printf("\n Mesmo sem a vontade deles, você os leva de volta a Hyalton.\n"); usleep(s); usleep(s);}

            printf("\n Você leva seu irmão de volta para casa e ele não fala com você\n o percurso todo. Você sente medo que algo como aquilo aconteça novamente,\n mas não acontece.\n");usleep(s);usleep(s);
            printf("\n O seu pai, ao vê-lo com o seu irmão, faz um aceno com a cabeça, mas não\n diz mais nada. Talvez aquilo significasse algo.\n");usleep(s); usleep(s);
            printf("\n\n\n\tFIM\n");
        }else{
            system("cls");
            printf("\n Yurin, por algum motivo o abraçou; pareceu estranho no começo,\n mas você sentiu uma ligação de irmandade com o mesmo.\n");usleep(s);usleep(s);usleep(s);
            if(paiProtetor==1){
            printf("\n Yurin:\n  - Valeu. Eu não podia deixar aquele babaca impune, você é o meu irmão.\n\n"); usleep(s);usleep(s);usleep;
            }


            printf(" Otskel então abre a sacola que estava jogada perto deles e um intenso odor\n emerge, e assim você consegue ver diversos vegetais e frutas podres.\n\n"); usleep(s);usleep(s);usleep(s);
            printf(" Otskel:\n -  Peguei isso do lixo que meu pai ia jogar fora.\n\n");
            printf(" Yurin:\n - Fizemos uma carta falsa e dissemos que quem mandou foi a Asha.\n\n Tritska diz:\n - Lembra que ele ja tentou namorar com minha irmã? Então...\n");usleep(s);usleep(s);usleep(s);
            puts("   --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * ---* ---");
            puts("\n");
            puts("\t\t(Pressione qualquer tecla para continuar...)\n");
            fflush(stdin);
            puts("   --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * ---* ---");                                                                            //     SEÇÃO    //
            getch(); system("cls");
            usleep(s); usleep(s); usleep(s);
            system("cls");
            printf("\n Otskel:\n - A gente falou na carta que a Asha queria, se encontrar com ele\n aqui, no pôr do sol.\n\n"); usleep(s);usleep(s);usleep(s);
            printf(" Yurin:\n - Então estamos esperando aqui, ele deve aparecer logo.\n\n");usleep(s);usleep(s);usleep(s);



            printf(" Os quatro esperaram, então, por cerca de dez minutos, antes que o plano\n fosse pôsto em prática.\n\n");usleep(s);usleep(s);usleep(s);
            printf(" Enfim, Victor aparece, mas algo o surpreende: ele não estava sozinho.\n");usleep(s);usleep(s);usleep(s);
            printf(" Não era algo que impedisse o plano, mas ele conseguia ser estúpido\n ao ponto de levar os outros dois pra uma ocasião daquelas.\n");usleep(s);usleep(s);
            puts("   --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * ---* ---");
            puts("\n");
            puts("\t\t(Pressione qualquer tecla para continuar...)\n");
            fflush(stdin);
            puts("   --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * ---* ---");                                                                            //     SEÇÃO    //
            getch(); system("cls");
            usleep(s); usleep(s); usleep(s);
            system("cls");

            while (1){
            printf("\n Victor estava com Frord e Ikaro, por algum motivo. Os três andavam juntos\n na escola e não desgrudavam fora dela.\n Mas Yurin não achou que ele fosse trazer os dois para lá.\n");usleep(s);usleep(s);usleep(s);
            printf("\n Otskel:\n - Muito bem, peguem alguma coisa da sacola.\n\n");usleep(s);usleep(s);usleep(s);
            printf(" %s Banana podre\n", (select == 1) ? "=>" : "  ");
            printf(" %s Mamão molenga\n", (select == 2) ? "=>" : "  ");
            printf(" %s Laranja com larvas\n", (select == 3) ? "=>" : "  ");
            printf(" %s Tomate esbagaçado\n", (select == 4) ? "=>" : "  ");

            key = getch();
            if(key == DOWN) select+= 1;
            if(key == UP) select-= 1;
            if (select > 3) select = 1;
            if (select < 1) select = 3;
            system("cls");
            if(key == ENTER){break;}
            }

            while(1){

            fflush(stdin);
            if (select == 1){
                arremessavel = '1';}
            else if (select == 2){
                arremessavel = '2';}
            else if (select == 3){
                arremessavel = '3';}
            else if (select == 4){
                arremessavel = '4';}

            if(arremessavel == '1' || arremessavel == '2' || arremessavel == '3' || arremessavel == '4'){break;}
            system("cls");
            while (1){
            printf("\n Victor estava com Frord e Ikaro, por algum motivo. Os três andavam juntos\n na escola e não desgrudavam fora dela.\n Mas Yurin não achou que ele fosse trazer os dois para lá.\n");usleep(s);usleep(s);usleep(s);
            printf("\n Otskel:\n - Muito bem, peguem alguma coisa da sacola.\n\n");usleep(s);usleep(s);usleep(s);
            printf(" %s Banana podre\n", (select == 1) ? "=>" : "  ");
            printf(" %s Mamão molenga\n", (select == 2) ? "=>" : "  ");
            printf(" %s Laranja com larvas\n", (select == 3) ? "=>" : "  ");
            printf(" %s Tomate esbagaçado\n", (select == 4) ? "=>" : "  ");

            key = getch();
            if(key == DOWN) select+= 1;
            if(key == UP) select-= 1;
            if (select > 3) select = 1;
            if (select < 1) select = 3;
            system("cls");
            if(key == ENTER){break;}
            }
            break;
            }



            switch(arremessavel){

            case '1':
                fruta[20] = "banana";
                break;
            case '2':
                fruta[20] = "mamão";
                break;
            case '3':
                fruta[20] = "laranja";
                break;
            case '4':
                fruta[20] = "tomate";
                break;
            }
                printf(" Você pega então a %s molenga e podre, segurando-a com um certo grau de nojo.\n", fruta[20]);
                printf(" Os três agarram alguma coisa e quando finalmente tem algo em mãos, Otskel começa a contagem.\n"); usleep(s);usleep(s);usleep(s);
                system("cls"); usleep(s);
                printf("3..."); usleep(s);usleep(s);
                system("cls");
                printf("2..."); usleep(s);usleep(s);
                system("cls");
                printf("1...\n"); usleep(s);usleep(s);
                system("cls");
                printf("\n Yurin foi o primeiro a se levantar da moita, jogando um ovo\n na cabeca de Victor Wangeryoran.\n");usleep(s);usleep(s);usleep(s);
                printf(" Você, em seguida, atira %s podre neles, acertando em cheio no tórax\n de Victor, que estava sentado na beira do rio com os outros dois.\n\n");usleep(s);usleep(s);usleep(s);
                printf(" Os quatro começaram a jogar mais coisas neles enquanto eles\n se debruçavam em frutas podres, tentando se proteger, inutilmente.\n\n"); usleep(s);usleep(s);usleep(s);
                printf(" Um espetaculo de cores, insetos e larvas estava bem ali na sua frente.\n Eles estavam cobertos com insetos e moscas, como os vegetais podres que eram.\n"); usleep(s);usleep(s);
                printf("\n Victor:\n - EU VOU PEGAR TODOS VOCÊS!\n\n");usleep(s);usleep(s);
                printf(" Tritska gritou algo, mas voce não entendeu, pois estava correndo com os demais de volta para Hyalton.\n\n");usleep(s);usleep(s);
                vinganca = 1;

    puts("   --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * ---* ---");    //--------------//
    puts("\n");
    puts("\t\t(Pressione qualquer tecla para continuar...)");                                 //   FINAL DE   //
    fflush(stdin);                                                                            //     SEÇÃO    //
    getch(); system("cls");                                                                   //              //
    usleep(s); usleep(s); usleep(s);                                                          //--------------

        }



}




int main(){

    char NomePrevio[100], Inimigo[50]="Victor";
    char resp;
    int hp=10, inihp=15, i;
    setlocale(LC_ALL, "Portuguese");
    void delay(unsigned int);
        Tutorial();
        usleep(s); usleep(s);
        Name(); // Função da Escolha do Nome do Personagem.

        //COMEÇO DO JOGO--------------------------------------------------------------------------------------------------------------

        Lot1(); //Função do 1º Lot de Texto.
             fflush(stdin);
            system("cls");
            usleep(s); usleep(s);

            SW1 (respPrimeiraPergunta);

        Lot2(); //Função do 2º Lot de Texto.

        //AO CHEGAR EM CASA-------------------------------------------------------------------------------------
            usleep(s); usleep(s); usleep(s); usleep(s);

        Lot3();
        //FINAL DE SEÇÃO----------------------------------------------------------------------------------------
            fflush(stdin);
            system("cls");
            usleep(s); usleep(s);

        SW2(respInt);

        Lot4();


        //NA FEIRA-------------------------------------------------------------------------------------

         Lot5();
            fflush(stdin);
            system("cls");
            usleep(s); usleep(s);
            SW3(respInt);
           // scanf("%d", &respInt);


        EndChap1();


return 0;
}
