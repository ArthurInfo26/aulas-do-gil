#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>


int main() {

     int i, tam;
    char *p1, *p2;
    
    printf("Tamanho: ");
    scanf("%i", &tam);

    p1 = malloc(tam * sizeof(char));
    p2 = malloc(tam * sizeof(char));

    printf("Palavra: ");
    scanf(" %[^\n]", p1);
   
    for(i=0; p1[i] != '\0'; i++) {
        p2[i] = p1[i];
    }
    p2[i] = '\0';

    printf("Copiado: %s", p2);
    


    printf("\n");
    return 0;
}