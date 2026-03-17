#include <stdio.h>

int main() {

    int ano;

    printf("Digite um ano para saber se ele e bissexto: ");
    scanf("%i", &ano);

    printf("ANO: %i", ano);

    if(ano < 0){
        printf("\n- Ano inexistente");
    }
    else if(ano %4 == 0){
        printf("\n- Ano Bissexto ");
    }
    else if(ano %400 == 0){
        printf("\n- Ano Bissexto ");
    }
    else{
        printf("\n- NAO e Bissexto ");
    }
    return 0;
}