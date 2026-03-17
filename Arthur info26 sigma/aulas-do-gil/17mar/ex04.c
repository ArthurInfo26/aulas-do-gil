#include <stdio.h>
#include <stdio_ext.h>

int main() {

    char r1, r2;

    printf("Voce pratica atividade fisica: ");
    scanf(" %c", &r1 );
    printf("Voce possui uma alimentaçao saudavel: ");
    scanf(" %c", &r2 );

    if(r1 == 's' && r2 =='s') {
        printf("vida saudavel!! ");
    }
    else if(r1 == 's' || r2 == 's') {
        printf("pode melhorar!!");
    }
    else {
        printf("hora de melhorar!!");
    }


    

    



    return 0;
}