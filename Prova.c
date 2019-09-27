#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#define s 99//9999
int menuPrimeiro(int x){
    int j = 0;
while(j == 0){
switch(x){
case 1:
    menuSegundo( );
    j = 1;
    break;
case 2:
    j = 1; //1 = SAIR
    break;
default:
    system("cls");
    usleep(s); usleep(s);
    printf("\n\n Dalia:\n - Tudo bem estar com nervosismo, mas voce precisa decidir.\n\n");
    usleep(s); usleep(s);
    printf(" 1 - Estudar.\n 2 - Ir fazer a prova.\n  ");
}
    if (j==1){break;}
    fflush(stdin);
    scanf("%d", &x);
    system("cls");
}
return(7);
}

void menuSegundo(void){


    char y;


        while(1){
                puts("\n");
        printf(" 1 - Instrucionario\n 2 - Festival da colheita\n 3 - Comunhao\n"
                " 4 - Casarao dos Valkron\n 5 - Filosofia de Apso\n 6 - Doencas\n ? - Ir fazer a prova.\n  ");
                fflush(stdin);
                scanf("%c", &y);
                system("cls");

        switch(y){


        case '1':
            puts("\n");
            printf(" Instrucionario: Instituicao educacional-cientifica da Igreja, aliada ao\n ensino religioso.\n");
            break;
        case '2':
            puts("\n");
            printf(" Festival da colheita: Festividade local que ocorre a cada defolhagem do\n outono em Hyalton,"
                   " onde se compartilham entre os habitantes, as\n farturas das colheitas.\n");
            break;
         case '3':
             puts("\n");
            printf(" Comunhao: Momento da partilha da fartura.\n");
            break;
         case '4':
             puts("\n");
            printf(" Casarao dos Valkron: Os Valkron sao uma das familias mais antigas a se mudar\n para Hyalton."
                   " Eles ajudaram a fundar a cidade. Os Valkron vivem em uma\n mansao tao antiga quanto Hyalton."
                   " O lugar mais parece uma velha ruina, mas\n isso que a torna tao resitente pelas eras.\n");
            break;
         case '5':
             puts("\n");
            printf(" Filosofia de Apso:");
            printf(" O grande pensador Chong Apso afirma que tudo sao os atomos.\n");
            printf(" Ele diz que todas as nossas escolhas estao programadas.\n");
            printf(" Para Apso, tudo que voce faz ja foi escrito para ser daquele jeito,\n");
            printf(" pois as suas escolhas possiveis estao escritas no atomo.\n");
            printf(" E ele denomina esse atomo de bytes.\n");
            break;
         case '6':
            puts("\n");
            printf(" Doencas: As doencas sao causadas por criaturas do exilio ou pelas\n madicoes dos Ioruns.");
            break;
         default:
           return(0);
           break;


            }
        }
}

int Prova(void){
int menu1, menu2, resultado=0;
int z;
char alternativa;
char a1='a', b1='b', c1='c', a2='a', b2='b', c2='c', a3='a', b3='b', c3='c';
char a4='a', b4='b', c4='c', a5='a', b5='b', c5='c';
puts("\n");
usleep(s); usleep(s);
printf(" Dalia:\n - O que voce quer fazer?\n");usleep(s); usleep(s);
printf("\n 1 - Estudar.\n 2 - Ir fazer a prova.\n ? - ...\n  ");
while(1){
 fflush(stdin);
scanf("%d", &menu1);
system("cls");
menuPrimeiro(menu1);
puts("\n");
printf(" Dalia:\n - Boa sorte\n");
break;

}
 puts("   --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * ---* ---");                 //--------------//
              puts("\n\n\n\n\n\n");                                                                     //              //
              puts("\t\t(Pressione qualquer tecla para continuar...)");                                 //   FINAL DE   //
              fflush(stdin);                                                                            //     SEÇÃO    //
              getch();                                                                                  //              //
              system("cls");                                                                            //--------------//
              usleep(s); usleep(s); usleep(s);

puts("\n    Quarta prova de conhecimentos gerais");
puts("\n    Instrucionario Matriz de Hyalton");
puts("\n    Professor: H. Guido");
printf("\n    Aluno(a): Insira o nome aqui");
printf("\n\n Questao 1: Quem foi Chong Apso?\n");
printf("\n\t%c) Um mercador  %c) Um pensador  %c) Um alquimista\n  \t ", a1, b1, c1);
fflush(stdin);
scanf("%c", &alternativa);
system("cls");
alternativa = toupper(alternativa);
if(alternativa == 'B'){resultado++;}
if(alternativa== 'A'){a1 = 'x';} //***************************//
if(alternativa== 'B'){b1 = 'x';} // ALTERNATIVAS   ESCOLHIDAS //
if(alternativa== 'C'){c1 = 'x';} //***************************//
//printf("%c", alternativa);
//printf("%d", resultado);


system("cls");
puts("\n    Quarta prova de conhecimentos gerais");
puts("\n    Instrucionario Matriz de Hyalton");
puts("\n    Professor: H. Guido");
printf("\n    Aluno(a): Insira o nome aqui");
printf("\n\n Questao 1: Quem foi Chong Apso?\n");
printf("\n\t%c) Um mercador  %c) Um pensador  %c) Um alquimista\n  \t ", a1, b1, c1);

printf("\n\n Questao 2: Quando ocorre o festival da colheita?\n");
printf("\n\t%c) Outono  %c) Primavera  %c) Inverno\n  \t ", a2, b2, c2);
fflush(stdin);
scanf("%c", &alternativa);
alternativa = toupper(alternativa);
if(alternativa == 'A'){resultado++;}
if(alternativa== 'A'){a2 = 'x';} //***************************//
if(alternativa== 'B'){b2 = 'x';} // ALTERNATIVAS   ESCOLHIDAS //
if(alternativa== 'C'){c2 = 'x';} //***************************//
system("cls");



printf("\n\n Questao 3: O que e a Comunhao?\n");
printf("\n  %c) Evento para partilhar farturas  %c) Evento de pesca  %c) Evento esportivo\n  \t ", a3, b3, c3);
fflush(stdin);
scanf("%c", &alternativa);
alternativa = toupper(alternativa);
if(alternativa == 'A'){resultado++;}
if(alternativa== 'A'){a3 = 'x';} //***************************//
if(alternativa== 'B'){b3 = 'x';} // ALTERNATIVAS   ESCOLHIDAS //
if(alternativa== 'C'){c3 = 'x';} //***************************//


system("cls");
printf("\n\n Questao 3: O que e a Comunhao?\n");
printf("\n  %c) Evento para partilhar farturas  %c) Evento de pesca  %c) Evento esportivo\n  \t ", a3, b3, c3);

printf("\n\n Questao 4: Quais desses eventos nao ocorre no festival da colheita?\n", a4, b4, c4);
printf("\n\t%c) Cavalaria  %c) Arquearia  %c) Pesca\n  \t ");
fflush(stdin);
scanf("%c", &alternativa);
alternativa = toupper(alternativa);
if(alternativa == 'C'){resultado++;}
if(alternativa== 'A'){a4 = 'x';} //***************************//
if(alternativa== 'B'){b4 = 'x';} // ALTERNATIVAS   ESCOLHIDAS //
if(alternativa== 'C'){c4 = 'x';} //***************************//

system("cls");
printf("\n\n Questao 3: O que e a Comunhao?\n");
printf("\n  %c) Evento para partilhar farturas  %c) Evento de pesca  %c) Evento esportivo\n  \t ", a3, b3, c3);
printf("\n\n Questao 4: Quais desses eventos nao ocorre no festival da colheita?\n", a4, b4, c4);
printf("\n\t%c) Cavalaria  %c) Arquearia  %c) Pesca\n  \t ");


printf("\n\n Questao 5: Quem causa as doencas?\n");
printf("\n\t%c) Os exilados e os Ioruns %c) Comidas vermelhas  %c) Animais noturnos\n  \t ", a5, b5, c5);
fflush(stdin);
scanf("%c", &alternativa);
alternativa = toupper(alternativa);
if(alternativa == 'A'){resultado++;}
if(alternativa == 'C'){resultado++;}
if(alternativa== 'A'){a5 = 'x';} //***************************//
if(alternativa== 'B'){b5 = 'x';} // ALTERNATIVAS   ESCOLHIDAS //
if(alternativa== 'C'){c5 = 'x';} //***************************//

system("cls");

puts("\n Suas respostas:");
printf("\n Questao 1: Quem foi Chong Apso?");
printf("\n\t%c) Um mercador  %c) Um pensador  %c) Um alquimista\n  \t ", a1, b1, c1);

printf("\n Questao 2: Quando ocorre o festival da colheita?");
printf("\n\t%c) Outono  %c) Primavera  %c) Inverno\n  \t ", a2, b2, c2);

printf("\n Questao 3: O que e a Comunhao?");
printf("\n  %c) Evento para partilhar farturas  %c) Evento de pesca  %c) Evento esportivo\n  \t ", a3, b3, c3);

printf("\n Questao 4: Quais desses eventos nao ocorre no festival da colheita?", a4, b4, c4);
printf("\n\t%c) Cavalaria  %c) Arquearia  %c) Pesca\n  \t ");

printf("\n Questao 5: Quem causa as doencas?");
printf("\n\t%c) Os exilados e os Ioruns %c) Comidas vermelhas  %c) Animais noturnos\n", a5, b5, c5);

    puts("\n   --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * ---* ---");   //--------------//
    puts("\n\n");                                                                              //              //
    puts("\t\t(Pressione qualquer tecla para continuar...)");                                  //   FINAL DE   //
    fflush(stdin);                                                                             //     SEÇÃO    //
    getch(); system("cls");                                                                    //              //
    usleep(s); usleep(s); usleep(s);                                                           //--------------//





usleep(s); usleep(s);
resultado = resultado*2;
system("cls");
usleep(s); usleep(s);
printf("\n Prof. Guido:\n - Voce tirou %d.0,", resultado);
if(resultado>=6){
        usleep(s); usleep(s);
        puts(" parabens, voce passou!");
        return(1);
} else{
    usleep(s); usleep(s);
    puts(" sinto muito, voce nao passou.");
    return(2);
}



}




int main ( ){
    int x = 2;
while(x==2) {
x = Prova();
puts("   --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * ---* ---");
}



return(0);
}
