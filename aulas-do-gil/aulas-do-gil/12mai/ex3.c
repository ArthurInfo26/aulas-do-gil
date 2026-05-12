#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20
#define BLACK printf("\033[0;30m");
#define RED printf("\033[0;31m");
#define GREEN printf("\033[0;32m");
#define YELLOW printf("\033[0;33m");
#define BLUE printf("\033[0;34m");
#define PURPLE printf("\033[0;35m");
#define CYAN printf("\033[0;36m");
#define WHITE printf("\033[0;37m");

int main() {

    int i, pos, vet[TAM], fim = 0;

    srand(time(NULL));

    for(i=0; i<TAM; i++) {
        vet[i] = 10;
    }

    for(i=0; i<3; i++) {
        pos = rand()%TAM;
        if(vet[pos] == 10) {
            vet[pos] = 11;
        }
        else {
            i--;
        }
    }

    while(fim < 2) {
        system("clear");
        YELLOW
        printf("|");
        for(i=0; i<TAM; i++) {
            printf("%02i|", i);
        }
        WHITE
        printf("\n|");
        for(i=0; i<TAM; i++) {
            if(vet[i] >= 10) {
                printf("??|");
            }
            else {
                GREEN
                printf("%02i", vet[i]);
                WHITE
                printf("|");
            }
        }

        if(fim == 0) {
            printf("\nPosição: ");
            scanf("%i", &pos);
            vet[pos] -= 10;

            if(vet[pos] == 1) {
                fim = 1;
            }
        }
        else {
            fim = 2;
        }
    }

    printf("\n");
    return 0;
}