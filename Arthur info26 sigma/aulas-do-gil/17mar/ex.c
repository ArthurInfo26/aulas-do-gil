#include <stdio.h>
#include <stdio_ext.h>

int main() {

    char pai;
    char mae;

    printf("pai, posso sair (s) ou (n)? ");
    __fpurge(stdin);
    scanf("%c", &pai);

    printf("mae, posso sair (s) ou (n)? ");
    __fpurge(stdin);
    scanf("%c", &mae);

    if(pai == 's' || mae == 's') {
        printf("pode sair");
    }
    else {
        printf("Nao vai sair");
    }

    



    return 0;
}