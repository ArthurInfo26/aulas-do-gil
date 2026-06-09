#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>

#define NL 5
#define NC 5
int main() {

    int l, c; 
    int mat[NL][NC];

    srand(time(NULL));

    for(l=0; l<NL; l++) {
        for(c=0; c<NC; c++) {
            mat[l][c] = 10 + rand()%41;
            printf("%i ", mat[l][c]); 
        
        }
        printf("\n");
    }
    printf("Matriz transporta\n");
    for(c=0; c<NC; c++) {
        for(l=0; l<NL; l++) {
            printf("%i ", mat[l][c]);
        }
        printf("\n");
    }



    printf("\n");
    return 0;
}