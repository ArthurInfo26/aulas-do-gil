#include <stdio.h>

int main() {
    int v1, v2, res, op;

     printf("Digite dois valores: ");
        scanf("%i %i", &v1, &v2);
    printf("escolha uma opção");
    printf("\n1 - soma");
     printf("\n2 - subtrair");
     printf("\n3 - multiplicar");
     printf("\n4 - dividir");
     printf("\n>");
     scanf("%i", &op);

     if(op == 1) {
        res = v1 + v2;
        printf("Soma = %i", res);
     }
     else if(op == 2) {
        res = v1 - v2;
        printf("Subtração = %i", res);
     }
     else if(op == 3) {
        res = v1 * v2;
        printf("multiplicação = %i", res);
     }
     else if(op == 4) {
        res = v1 / v2;
        printf("divisão = %i", res);
     }
     else {
        printf("\nOpção invalida!");
     }

   
   


    return 0;
}