#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 12

int main() {

    int i, vet[TAM], maior=0,maiori=0,menor=100,menori=100;

    srand(time(NULL));
    printf("|");
    for(i=0; i<TAM; i++) {
        printf("%02i|", i);
    }
    printf("\n|");
    for(i=0; i<TAM; i++) {
        vet[i] =  10 +rand()%90;
        printf("%i|", vet[i]);
    }
    for(i=0; i<TAM; i++) {
        if(vet[i] >= maior) {
            maior = vet[i];
            maiori = i;
        }
    }

    for(i=0; i<TAM; i++) {
        if(vet[i] <= menor) {
            menor = vet[i];
            menori = i;
        }
    }
    printf("\n- Maior = %i / posiçao %i", maior, maiori);
    printf("\n- Menor = %i / posiçao %i", menor, menori);

    




    return 0;
}