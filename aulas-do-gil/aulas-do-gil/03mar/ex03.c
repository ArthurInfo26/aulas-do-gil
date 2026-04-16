#include <stdio.h>

int main() {
   double saldo, saque;
   printf("Digite o seu Saldo: ");
   scanf("%lf", &saldo);


   if(saldo > 0) {
      printf("valor do saque:");
      scanf("%lf", &saque);

      if(saque <= saldo) {
            saldo = saldo - saque;
            printf("Novo saldo: %.2lf", saldo);
      }
      else {
         printf("saldo insuficiente");                     // aura
      }
   }
   else {
      printf("saldo insuficiente!");
   }

   
   
  
  
    return 0;
}