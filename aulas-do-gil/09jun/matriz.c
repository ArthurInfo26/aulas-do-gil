#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>

#define NL 8
#define NC 8
int main() {

    int l, c; 
    int mat[NL][NC];

    srand(time(NULL));

    for(l=0; l<NL; l++) {
        for(c=0; c<NC; c++) {
            mat[l][c] = 10 + rand()%90;
            printf("%i ", mat[l][c]);   
        }
        printf("\n");
    }



    printf("\n");
    return 0;
}