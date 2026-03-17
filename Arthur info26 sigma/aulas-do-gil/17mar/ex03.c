#include <stdio.h>
#include <stdio_ext.h>

int main() {

    int dia1, dia2;


    printf("Digite os dias: ");
    scanf("%i %i", &dia1, &dia2);

    printf("[");

    if(dia1 == 1) printf("Domingo");
    else if(dia1 == 2) printf("Segunda");
    else if(dia1 == 3) printf("Terça");
    else if(dia1 == 4) printf("Quarta");
    else if(dia1 == 5) printf("Quinta");
    else if(dia1 == 6) printf("Sexta");
    else if(dia1 == 7) printf("Sabado");

    if(dia1 >= 1 && dia1 <= 7 && dia2 >= 1 && dia2 <= 7) printf(",");

    if(dia2 == 1) printf("Domingo");
    else if(dia2 == 2) printf("Segunda");
    else if(dia2 == 3) printf("Terça");
    else if(dia2 == 4) printf("Quarta");
    else if(dia2 == 5) printf("Quinta");
    else if(dia2 == 6) printf("Sexta");
    else if(dia2 == 7) printf("Sabado");

    printf("]");

    

    return 0;
}