#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 15
int main() {

    int vet[TAM], num = 10, tam = 10;

    srand(time(NULL));

    printf("Vetor Aleatorio (com repeticao -> %i)\n", TAM);
    for(int i = 0; i < TAM; i++){
        vet[i] = 10 + (rand()%11);
        printf("%i ", vet[i]);
    }
    for(int i = 0; i < tam; i++){
        for(int j = i + 1; j < tam;){
            if(vet[i] == vet[j]){
                for(int k = j; k < tam - 1; k++){
                    vet[k]= vet[k+1];
                }
                tam--;
                num--;
            }
            else{
                j++;
            }
        }
    }
    printf("\nVetor Aleatorio (sem repeticao ->%i)\n", num);
    for(int i = 0; i < tam; i++){
        printf("%i ", vet[i]);
    }

    return 0;
}