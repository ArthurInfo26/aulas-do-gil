#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>


int main() {

     int tam, t1, t2;
    char *p1, *p2;
    
    printf("Tamanho: ");
    scanf("%i", &tam);

    p1 = malloc(tam * sizeof(char));
    p2 = malloc(tam * sizeof(char));

    printf("Palavras/%:\n");
    scanf(" %[^\n]", p1);
    scanf(" %[^\n]", p2);

    for(t1=0; p1[t1] != '\0'; t1++) { }
    for(t2=0; p2[t2] != '\0'; t2++) { }

    printf("%i + %i = %i", t1, t2, (t1 + t2));
    


    printf("\n");
    return 0;
}