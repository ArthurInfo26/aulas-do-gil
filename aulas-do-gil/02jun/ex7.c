#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

#define COR_VERMELHO printf("\33[31m");
#define COR_VERDE printf("\33[32m");
#define COR_LARANJA printf("\33[33m");
#define COR_AZUL printf("\33[34m");
#define COR_ROXO printf("\33[35m");
#define COR_BRANCO printf("\33[37m");

#define TAM 50

int main() {

    int i;
    char c, nome[TAM];

    printf("Nome: ");     
    scanf("%[^\n]", nome);
    printf("Letra: ");
    __fpurge(stdin);
    scanf("%c", &c);
    
    // |0|1|2|3|4|5|6|7 |8|...
    // |E|d|u|a|r|d|o|\0|.....
    
    for(i=0; nome[i] != '\0'; i++) {
        COR_BRANCO
        if(nome[i] == c) {
            COR_LARANJA
        }   
        printf("%c", nome[i]);
    }

    printf("\nTamanho: %i", i);

    printf("\n");
    return 0;
}