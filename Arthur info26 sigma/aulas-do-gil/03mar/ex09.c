#include <stdio.h>

int main() {

    float x, freq, n1, n2, n3, n4;

    printf("Digite a sua frequencia: ");
    scanf("%f", &freq);

    if(freq < 75) {
        printf("Inapto por faltas!");
    }
    else {
        printf("Digite a sua nota: ");
        scanf("%f %f %f %f" , &n1, &n2, &n3, &n4 );
        x=(n1 + n2 + n3 + n4)/4;
      if(x >= 6) {
            printf("APTO (%.1f)", x);
        }
        else if(x <= 6) {
            printf("INAPTO por nota! (%.1f)", x);
        }
    }


}