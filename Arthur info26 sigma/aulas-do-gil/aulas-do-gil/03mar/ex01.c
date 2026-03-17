#include <stdio.h>

int main() {
   int valor;

   printf("Digite um valor:");
   scanf("%i", &valor);

   if(valor >= 10) {
      printf("Maior ou igual a 10!");
   }
   else {
      printf("Não é maior ou igual a 10!");
   }
  
  
    return 0;
}