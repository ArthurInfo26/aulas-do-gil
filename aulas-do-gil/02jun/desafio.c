#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20
#define COR_LARANJA printf("\33[33m");
#define COR_BRANCO printf("\33[37m");

int main() {

    int i, j, flag, tp;
    char vetor[TAM], aux[TAM], plv[5];

    COR_BRANCO
    srand(time(NULL));

    // |0|1|2|3|4|5|
    // |A|S|G|F|T|Y| -> VETOR
    // |0|0|0|0|0|0| -> AUX

    printf("Vetor Aleatório: ");
    for(i=0; i<TAM; i++) {
        aux[i] = 0;
        vetor[i] = 'A' + (rand()% 26);
        printf("%c ", vetor[i]);
    }

    printf("\nPalavra: ");
    scanf("%s", plv);
    
    for(tp=0; plv[tp] != '\0'; tp++) {}

    // Percorre o vetor aleatório
    for(i=0; vetor[i] != '\0'; i++) {
        // Verifica se a posição do vetor aleatório é
        // igual a primeira posição da palavra
        if(vetor[i] == plv[0]) {
            // Condidera que achou a palavra no vetor   
            flag = 1;
            // Comparo as letras a seguir do vetor com
            // as letras a seguir da palavra, até o final da
            // palavra
            for(int ai=i, ap=0; plv[ap] != '\0'; ai++, ap++) {
                // [ai] = posição inicial no vetor
                // [ap] = posiçao incial da palavra

                // Se uma letra não for igual, sai do laço de 
                // comparação
                if(vetor[ai] != plv[ap]) {
                    flag = 0;
                    break;
                }
            }
            // Se achou a palavra no vetor - grifa
            if(flag == 1) {
                for(int ai=i, cont=0; cont<tp ; ai++, cont++) {
                    aux[ai] = 1;
                }
            }
        }
    }

    printf("\nVetor Achou: ");
    for(i=0; i<TAM; i++) {
        COR_BRANCO
        if(aux[i] == 1) COR_LARANJA
        printf("%c ", vetor[i]);
    }

    printf("\n");
    return 0;
}