#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 5


int main() {

    int i, va[TAM], vb[TAM], vc[10], a = 0, b = 0 ;
    srand(time(NULL));

    printf("Vetor A: ");
    for(i=0; i< TAM; i++) {
        va[i] = 10 + (rand()%90);
        printf("%i ", va[i]);
    }
    printf("\nVetor B: ");
    for(i=0; i< TAM; i++) {
        vb[i] = 10 + (rand()%90);
        printf("%i ", vb[i]);
    }
    printf("\nVetor C: ");
    for(i=0; i<10; i++) {
        if(i%2 == 0) {
            vc[i] = va[a];
            a++;
        }
        if(i%2 == 1) {
            vc[i] = vb[b];
            b++;
        }
        
    }
    for(i=0; i<10; i++) {
            printf("%i ", vc[i]);
        }




    return 0;
}