#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 10
int main() {

    int vet[TAM], inisoma = 0, fim = 0, ini = 0;

    srand(time(NULL));

    printf("Vetor  Aleatorio: ");
    for(int i = 0; i < TAM; i++){
        vet[i] = (rand()%11) - 5;
    }
    for(int i = 0; i < TAM; i++){
        printf("%i ", vet[i]);
    }

    int maior = vet[0], somatu = vet[0];
    
    for(int i = 1; i < TAM; i ++){
        if((somatu + vet[i])< vet[i]){
            somatu = vet[i];
            inisoma = i;
        }
        else{
            somatu+=vet[i];
        }
        if(somatu > maior){
            maior = somatu;
            ini = inisoma;
            fim = i;
        }
    }
    printf("\nA maior soma de uma subsequencia contigua: %i ", somatu);
    printf("\nA subsequecia comeca no indice %i e termina no indice %i", ini, fim);
    printf("\nElementos da subsequencia sao: ");
    for(int i = ini; i <= fim; i++){
        printf("%i ", vet[i]);
    }
    return 0;
}