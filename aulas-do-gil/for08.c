#include <stdio.h>

int main() {

    int val1, val2, soma, aux;

    printf("digite um valor inteiro: ");
    scanf("%i", &val1); 


printf("[");
    for(int i = 1 ;i  < val1; i++ )  {

        
        printf("%i + %i = %i \n", val1, i, soma );
        val1=soma;
       
       if(val1 = soma ){
        printf("   perfeito");
       }
       else {
        printf("   imperfeito");
       }


    }

    

    printf("\n");    
    return 0;
}