#include <stdio.h>
#include <stdio_ext.h>

int main() {


    int idade;

    
    printf("Digite sua idade: ");
    scanf("%i", &idade);

    if(idade >= 18 && idade < 60) {
        printf("ADULTO");
    }
    else if(idade > 60 && idade < 140) {
        printf("IDOSO");
    }
    else if(idade >= 12 && idade < 18) {
        printf("ADOLESCENTE");
    }
    else if(idade >= 0 && idade < 12) {
        printf("CRIANÇA");
    }
    else {
        printf("IDADE INVALIDA");
    }


    return 0;
}