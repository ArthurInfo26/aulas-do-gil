#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>


int main() {

    int n, *pn;
    char l, *pl, *pl2, *pl3;

    printf("Inteiro: ");
    scanf("%i", &n);
    printf("Caractere: ");
    scanf(" %c", &l);
    
    pn = &n;
    pl = &l;
    
    printf("\n[%p - %i]", pn, *pn);
    printf("\n[%p - %c]", pl, *pl);
    
    printf("\n");
    return 0;
    


    printf("\n");
    return 0;
}