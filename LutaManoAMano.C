#include <stdio.h>
#include <conio.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include <time.h>
#include <string.h>

#define k 999999

int Luta1x1(char nome[], char inimigo[], int hp, int inihp){

    int esc, r, s, p, t;


    printf("\t\tVoce se ve numa situacao sem saida. Sua unica opcao eh lutar com %s.\n", inimigo);
    while(inihp>0&&hp>0){

        srand(time(NULL));
        r = rand() % 100;
        srand(time(NULL));
        s = rand() % 100;
        srand(time(NULL));
        p = rand() % 100;
        srand(time(NULL));
        t = rand() % 100;

        printf("O que voce faz?\n");
        printf("1 - Dar um soco.\n");
        printf("2 - Chuta-lo.\n");
        printf("? - Tentar fugir.\n");

        scanf("%d", &esc);

        switch(esc){

            case 1:
                if(r%2==0){
                    if(s%2==0){
                        printf("Voce tenta socar %s e acerta seu queixo, deixando-o tonto por alguns instantes.\n", inimigo);
                        inihp=inihp-3;
                    }
                    if(s%2!=0){
                        printf("Voce tenta socar %s e acerta sua barriga, fazendo-o recuar e ficar mais furioso.", inimigo);
                        inihp=inihp-2;
                    }
                }else{
                    if(s%2!=0){
                        printf("Voce tenta socar mas acaba tropecando nos proprios pes e caindo de peito ao chao.\n");
                        hp--;
                    }
                    if(s%2==0){
                        printf("Voce tenta socar mas %s desvia rapidamente do golpe.\n", inimigo);
                    }
                }
                break;
            case 2:
                if(r%2==0){
                    if(s%2==0){
                        printf("Voce tenta chutar lateralmente %s e acerta seu rosto em um movimento circular quase perfeito,\n deixando-o tonto por alguns instantes.\n", inimigo);
                        inihp=inihp-4;
                    }
                    if(s%2!=0){
                        printf("Voce tenta chutar %s e acerta seu braco quando %s tenta se defender, fazendo-o recuar e ficar mais furioso.", inimigo, inimigo);
                        inihp=inihp-1;
                    }
                }else{
                    if(s%2!=0){
                        printf("Voce tenta chuta-lo mas acaba se desequilibrando e caindo de bunda no chao.\n");
                        hp--;
                    }
                    if(s%2==0){
                        printf("Voce tenta chutar mas %s desvia habilmente do golpe.\n", inimigo);
                    }
                }
                break;
            default:
                    if(s%2==0){
                        printf("Voce tenta fugir, correndo dele mas %s o alcanca, puxando-o no meio\nda corrida mas sem conseguir derruba-lo.\n", inimigo);
                    }
                    else{
                        printf("%s o alcanca no meio da tentativa de fuga e o faz parecer uma marionete,\n jogando-o no chao como um brinquedo.\n", inimigo);
                        hp=hp-2;
                    }
                    break;
        }
            if(p%2==0){
                if(t%2==0){
                    printf("%s tenta atingi-lo com um chute, mas falha.\n", inimigo);
                }
                if(t%2!=0&&t<50){
                    printf("%s tenta atingi-lo com  um chute e acerta-o no quadril.\n", inimigo);
                    hp=hp-2;
                }
                if(t%2!=0&&t>50){
                    printf("%s tenta atingi-lo com um chute e acerta-o bem no seu torax.\n", inimigo);
                    hp=hp-4;
                }
            }
            if(p%2!=0){
                if(t%2==0){
                    printf("%s tenta atingi-lo com um soco mas falha.\n", inimigo);
                }
                if(t%2!=0&&t<50){
                    printf("%s acerta um soco em seu rosto, fazendo-o cuspir uma volumosa gosma de saliva e sangue.\n", inimigo);
                    hp = hp - 3;
                }
                if(t%2!=0&&t>50){
                    printf("%s acerta um soco em seu estomago, fazendo-o perder ar por um momento.\n", inimigo);
                    hp = hp - 2;
                }
            }
   
    printf("\nSeu HP: %d\nHP de %s: %d\n\n\n", hp, inimigo, inihp);
    puts("   --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * --- * ---* ---");    
    puts("\n");                                                                           
    puts("\t\t(Pressione qualquer tecla para continuar...)");                                 
    fflush(stdin);                                                                            
    getch(); system("cls");                                                                   
    usleep(k);                                                         

    system("cls");

    }


    if(inihp<=0)
        return 1;
    if(inihp>0)
        return 2;
}

int main(void)
{
    int hp, inihp, var;
    char Nome[10], IniNome[10];

    printf("Qual o seu nome?\n");
    scanf("%s", &Nome);
    printf("Quanto e o seu HP?\n");
    scanf("%d", &hp);
    system("cls");

    printf("Como se chama o seu inimigo?\n");
    scanf("%s", &IniNome);
    printf("Quanto e o HP do inimigo?\n");
    scanf("%d", &inihp);
    system("cls");

    var = Luta1x1(Nome, IniNome, hp, inihp);
    
    if(var==1)
        printf("PARABENS! %s Ganhou!\n", Nome);
    if(var==2)
        printf("QUE PENA! %s Ganhou!\n", IniNome);

    return 0;
}
