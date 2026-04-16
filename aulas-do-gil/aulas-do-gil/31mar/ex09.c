#include <stdio.h>

int main() {

    char peso, altura, expec, peloc;

    printf("Possui pelagem curta? [s][n] ");
    scanf(" %c", &peloc);
    printf("Possui o peso maior ou igual a 30kg? [s][n] ");
    scanf(" %c", &peso);
     printf("Possui a altura maior ou igual a 80cm? [s][n] ");
    scanf(" %c", &altura);
     printf("Possui expectativa de vida maior ou igual a 14 anos? [s][n] ");
    scanf(" %c", &expec);

    if(peloc == 's' || peloc == 'S'){ 

        if(peso == 'n' || peso == 'N' && altura == 's' || altura == 'S' && expec == 's' || expec == 'S') {
            printf("Dalmata");
        }
        else if(peso == 's' || peso == 'S' && altura == 'n' || altura == 'N' && expec == 'n' || expec == 'N') {
            printf("Bulldog ingles");
        }
        else if(peso == 'n' || peso == 'N' && altura == 'n' || altura == 'N'&& expec == 'n' || expec == 'N' ) {
            printf("Bull terrier");
        }

    }
    else {
        if(peloc == 'n' || peloc == 'N' ) {
            if(peso == 'n' || peso == 'N' && altura == 's' || altura == 'S' && expec == 's' || expec == 'S') {
            printf("Pastor alemao");
        }
        if(peso == 's' || peso == 'S' && altura == 'n' || altura == 'N' && expec == 's' || expec == 'S') {
            printf("labrador");
        }
        if(peso == 's' || peso == 'S' && altura == 's' || altura == 'S' && expec == 'n' || expec == 'N') {
            printf("sao bernardo");
        }
        if(peso == 's' || peso == 'S' && altura == 'n' || altura == 'N' && expec == 'n' || expec == 'N') {
            printf("chow chow");
        }
        if(peso == 'n' || peso == 'N' && altura == 'n' || altura == 'N' && expec == 'n' || expec == 'N') {
            printf("pequines");
        }
        if(peso == 'n' || peso == 'N' && altura == 'n' || altura == 'N' && expec == 's' || expec == 'S') {
            printf("cocker ingles");
        }
        }
        printf("raça nao encontrada");
    }



    

    return 0;
}