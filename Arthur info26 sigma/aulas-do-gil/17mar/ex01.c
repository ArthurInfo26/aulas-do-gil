#include <stdio.h>
#include <stdio_ext.h>

int main() {

    int val;

    printf("Valor: ");
    scanf("%i", &val);

    if(val < 10 || val > 99) {
        printf(" nao tem 2 digitos");
    }
    else {
        printf("tem 2 digitos");
    }
    



    return 0;
}