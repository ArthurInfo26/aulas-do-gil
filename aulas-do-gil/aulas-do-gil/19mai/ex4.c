#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 10

int main() {

    int i, vet[TAM], pos, esc, oco;
    oco = 0;
    srand(time(NULL));

    printf("Numero aleatorio ");
    for(i=0; i < TAM; i++) {
    vet[i] = 10 + rand()%TAM;
    pos = vet[i];
    printf("%i ", vet[i]);
    
    }
    printf("\nnumero para busca ");
    scanf("%i", &esc);

    for(i=0; i<TAM; i++) {
        if(vet[i] == esc) oco++;
        
    }

        if(oco == 0) printf("o valor %i nao foi encontrado", esc);  

        if(oco >= 1) {
            printf("total de ocorrencias %i ", oco);
            printf("\nencontrado no(s) indice(s): ");
            for(i=0; i<TAM; i++) {
                if(vet[i] == esc) {
                    printf("%i ", i);
                }    
            }
        }       


    return 0;
}