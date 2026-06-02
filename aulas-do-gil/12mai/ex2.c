#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20

int main() {

    int i, vet[TAM];

    // INDÍCES DO VETOR
    printf("|");
    for(i=0; i<TAM; i++) {
        printf("%02i|", i);
        vet[i] = 10 + (rand()%90);
    }

    // CONTEÚDO DO VETOR
    printf("\n|");
    for(i=0; i<TAM; i++) {
        printf("%i|", vet[i]);
    }

    printf("\n");
    return 0;
}