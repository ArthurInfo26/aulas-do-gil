#include <stdio.h>

int main() {

     float media; 


   printf("digite sua média: ");
   scanf("%f", &media);

   if(media >= 9.0) {
      printf("(A)");
   }
   else if(media >= 8.0) {
      printf("(B)");
   }
   else if(media >= 6.0) {
      printf("(C)");
   }
   else {
      printf("(D)");
   }

    return 0;
}