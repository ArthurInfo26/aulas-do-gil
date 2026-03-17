#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double x1, x2;

    printf("Digite os coeficientes (a) (b) e (c): ");
    scanf("%i %i %i", &a, &b, &c);

    x1= (- b + sqrt(pow(b, 2)- 4 * a * c))/2;
    x2= (- b - sqrt(pow(b, 2)- 4 * a * c))/2;

    printf("Raizes %.1lf, %.1lf", x1, x2);

    return 0;
}
