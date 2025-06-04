// including libraries
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n        Welcome to the    \n");
    printf("     |_|_|nnnn nnnn|_|_|        Guessing Game !   \n");
    printf("    |\" \"  |  |_|  |\"  \" |                     \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");

    // declarando variaveis que serao usadas mais a frente
    int shot;
    int got_it_right;
    int level;
    int totalofattempts;

    // definindo a quantidade de pontos inicial
    double points = 1000;

    // gerando um numero secreto aleatorio
    srand(time(0));
    int secretnumber = rand() % 100;

    // escolhendo o nivel de dificuldade
    printf("What is the difficulty level?\n");
    printf("(1) Easy (2) Medium (3) Hard \n\n");
    printf("Choose: ");

    scanf("%d", &level);

    switch(level) {
        case 1: 
            totalofattempts = 20;
            break;
        case 2:
            totalofattempts = 15;
            break;
        case 3:
            totalofattempts = 6;
            break;
        default:
            printf("\n Number Error... let's use Easy Mode");
            totalofattempts = 20;
    }



    for(int i = 1; i <= totalofattempts; i++) {
        if(level == 4) {
            while (1)
        }

        printf("-> Attempt %d of %d\n", i, totalofattempts);

        printf("Guess a number: ");
        scanf("%d", &shot);


        if(shot < 0) {
            printf("You can't guess a negative number\n");
            i--;
            continue;
        }

        got_it_right = shot == secretnumber;

        if(got_it_right) {
            break;
        } else if(shot > secretnumber) {
            printf("\nYour guess was higher than secret number!\n\n");
        } else {
            printf("\nYour guess was lower than the secret number!\n\n");
        }


        double pontosperdidos = abs(shot - secretnumber) / 2.0;
        points = points - pontosperdidos;
    }


    printf("\n");
    if(got_it_right) {
        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("Congratulations! Get it right!\n");
        printf("You did %.2f points. Until meet you!\n\n", points);
    } else {

        printf("       \\|/ ____ \\|/    \n");   
        printf("        @~/ ,. \\~@      \n");   
        printf("       /_( \\__/ )_\\    \n");   
        printf("          \\__U_/        \n");

        printf("\nYou lost! Try Again!\n\n");
    }


}
