#include <stdio.h>

int main() {
   float temp;

   printf("Temperatura:");
   scanf("%f", &temp);

   if(temp < 18) {
      printf("Clima frio");
   }
   else if(temp > 25) {
      printf("Clima Quente");
   }
   else {
      printf("Clima Agradável");
   }
   
  
  
    return 0;
}