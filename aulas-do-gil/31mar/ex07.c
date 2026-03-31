#include <stdio.h>

int main() {

    int  v1, cent, dez, unit, resto;

    printf("Lados dos triangulos: ");
    scanf("%i", &v1);
    if(v1 >= 111 && v1 <= 999){
        resto = v1;
    
        cent = resto /100;
        dez = (resto %100) /10;
        unit = (resto %100) %10;

        if(dez == 0 || unit == 0){
            printf("nao existe lado com valor [0]");
        }
    
    
        else if(cent == dez && dez == unit){
            printf("Equilatero");
    
        }
    
        else if(cent != dez && dez != unit && unit != cent){
            printf("Escaleno");
        
        }
        else if(cent != dez && cent == unit || cent != unit && cent == dez || dez!= cent && dez == unit){
            printf("Isosceles");
    
        }
    }
    else{
        printf("bota valor certo");
    }

    return 0;
}