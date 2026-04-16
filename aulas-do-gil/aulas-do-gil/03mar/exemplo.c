#include <stdio.h>

int main() {

    int v1, v2, soma, sub, mult, div;
    printf("Digite dois valores: ");
    scanf("%i %i", &v1, &v2);

    soma = v1 + v2;
    printf("soma = %i", soma);

    sub = v1 - v2;
    printf("\nsubtração = %i", sub);

    mult = v1 * v2;
    printf("\nmultiplicação = %i", mult);

    div = v1/v2;
    printf("\ndivisão = %i",div);


    return 0;
}