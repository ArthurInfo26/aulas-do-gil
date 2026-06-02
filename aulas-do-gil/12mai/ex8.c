#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 10

int main() {

    int i, vet[TAM], pos, fim=0;

    srand(time(NULL));
    for(i=0; i<1; i++) {
        pos = rand()%TAM;
        if(vet[pos] == 10) {
            vet[pos] = 11;
        }
    }
    while(fim < 2) {
        system("clear");
        printf("|");
        for(i=0; i<TAM; i++) {
            printf("%02i|", i);
        }

        printf("\n|");
        for(i=0; i<TAM; i++) {
            if(vet[i] >= 10) {
                printf("??|");
            }
            else {
                printf("%02i|", vet[i]);
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

    




    return 0;
}