#include <stdio.h>

int main() {

    int val, atu, ant, prox;

    printf("digite o numero de termos: ");
    scanf("%i", &val);

    ant = 1;
    atu = 1;

    printf("fibonacci(%i) = %i %i ", val, ant, atu);
    val -= 2;
    for(int i=1; i <= val; i++ )  {

    prox=ant + atu;
        ant=atu;
        atu=prox;
        printf("%i ", atu);
    }

    

    printf("\n");    
    return 0;
}