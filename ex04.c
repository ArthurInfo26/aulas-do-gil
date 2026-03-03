#include <stdio.h>

int main() {

   int op;
   double saldo, valor;
   
   printf("Saldo: ");
   scanf("%lf", &saldo);

   printf("\nO que deseja efetuar: ");
   printf("\n\t1 - Saque\n\t2 - Depósito\n\t");
   scanf("%i", &op);

   if(op == 1) {
      printf("valor do saque: ");
      scanf("%lf", &valor);

      if (valor <= saldo) {
         saldo = saldo - valor;
         printf("Novo saldo %.2lf", saldo);
      }
   }
   else if(op == 2) {
      printf("Valor do depósito: ");
      scanf("%lf", &valor);
      saldo = saldo + valor;
      printf("Novo Saldo: %.2lf", saldo);
   }
   else {
      printf("Opção inválida!");
   }
  
    return 0;
}