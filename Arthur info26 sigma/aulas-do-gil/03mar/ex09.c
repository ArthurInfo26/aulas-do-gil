<<<<<<< HEAD
#include <stdio.h>

int main() {

    float nota, freq, n1, n2, n3, n4;

    printf("Digite a sua frequencia: ");
    scanf("%f", &freq);

    if(freq < 75) {
        printf("Inapto por faltas!");
    }
    else {
        printf("Digite a sua nota: ");
        scanf("%f %f %f %f" , &n1, &n2, &n3, &n4 );
        nota=(n1 + n2 + n3 + n4)/4;
      if(nota >= 6) {
            printf("APTO (%.1f)", nota);
        }
        else if(nota <= 6) {
            printf("INAPTO por nota! (%.1f)", nota);
        }
    }


=======
#include <stdio.h>

int main() {

    float nota, freq, n1, n2, n3, n4;

    printf("Digite a sua frequencia: ");
    scanf("%f", &freq);

    if(freq < 75) {
        printf("Inapto por faltas!");
    }
    else {
        printf("Digite a sua nota: ");
        scanf("%f %f %f %f" , &n1, &n2, &n3, &n4 );
        nota=(n1 + n2 + n3 + n4)/4;
      if(nota >= 6) {
            printf("APTO (%.1f)", nota);
        }
        else if(nota <= 6) {
            printf("INAPTO por nota! (%.1f)", nota);
        }
    }


>>>>>>> ee9d3ae6229e6f973318905c4e577ef898cc614f
}