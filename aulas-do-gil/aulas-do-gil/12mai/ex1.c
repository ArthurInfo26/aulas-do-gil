#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20

int main() {

    int i, vet[TAM];

    srand(time(NULL));

    for(i=0; i<TAM; i++) {
        vet[i] = 10 + (rand()%90);
        printf("%i ", vet[i]);
    }

    printf("\n");
    return 0;
}