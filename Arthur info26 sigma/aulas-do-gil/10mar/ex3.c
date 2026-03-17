#include <stdio.h>

int main() {

    int valor, resto, cem, cinq, vinte, dez, cinco, dois;
    

    printf("Valor do saque: ");
    scanf("%i", &valor);

    if(valor <= 0){
        printf("Valor do saque inexistente");
    }
    else if(valor == 1){
        printf("Valor indisponivel para as notas atuais.");
    }
    else if(valor == 3){
        printf("Valor indisponivel para as notas atuais.");
    }
    else{
        resto = valor;

        cem = resto / 100;
        resto = resto % 100;

        cinq = resto / 50;
        resto = resto % 50;

        vinte = resto / 20;
        resto = resto % 20;

        dez = resto / 10;
        resto = resto % 10;

        cinco = resto /5;
        resto = resto % 5;

        dois = resto /2;
        resto = resto % 2;

        printf("[OK] notas:");
        printf("\n- %i de 100", cem);
        printf("\n- %i de 50", cinq);
        printf("\n- %i de 20", vinte);
        printf("\n- %i de 10", dez);
        printf("\n- %i de 5", cinco);
        printf("\n- %i de 2", dois);
    }
   
    return 0;
}