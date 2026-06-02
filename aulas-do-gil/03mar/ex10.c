<<<<<<< HEAD
#include <stdio.h>

int main() {

int dia, mes;

    printf("Digite dia e mes: ");
    scanf("%i %i", &dia, &mes);

    if(mes == 1) {
        if(dia <= 0) {
            printf("dia invalido");
        }
        else if(dia <= 31) {
            printf("- Data: %i/Jan", dia, mes);

        }
        

    }
    else if(mes == 2) {
        if(dia <= 0) {
            printf("dia invalido");
        }   
        else if(dia <= 28) {
            printf("- Data: %i/Fev", dia, mes);
        }
        else if(dia > 28){
            printf("dia invalido");
        }
        
    }
    else if(mes == 3) {
        if(dia <= 0) {
            printf("dia invalido");
        }
        else if(dia <= 31) {
            printf("- Data: %i/Mar", dia, mes);
        }
        
    }
    else if(mes == 4) {
        if(dia <= 0) {
            printf("dia invalido");
        }
        else if(dia <= 30) {
            printf("- Data: %i/Abr", dia, mes);
        }
         else if(dia > 30) {
            printf("dia invalido");
        }
        
        
    }
    else if(mes == 5) {
        if(dia <= 0) {
            printf("dia invalido");
        }
        else if(dia <= 31) {
            printf("- Data: %i/Mai", dia, mes);
        }
        
        
    }
    else if(mes == 6) {
        if(dia <= 0) {
            printf("dia invalido");
        }
        else if(dia <= 30) {
            printf("- Data: %i/Jun", dia, mes);
        }
         else if(dia > 30) {
            printf("dia invalido");
        }
     
    }
    else if(mes == 7) {
        if(dia <= 0) {
            printf("dia invalido");
        }
        else if(dia <= 31) {
            printf("- Data: %i/Jul", dia, mes);
        }
        
    }
    else if(mes == 8) {
         if(dia <= 0) {
            printf("dia invalido");
        }
        else if(dia <= 31) {
            printf("- Data: %i/Ago", dia, mes);
        } 
    }
    else if(mes == 9) {
        if(dia <= 0) {
            printf("dia invalido");
        }
        else if(dia <= 30) {
            printf("- Data: %i/Set", dia, mes);
        }
         else if(dia > 30) {
            printf("dia invalido");
        }
        
    }
    else if(mes == 10) {
        if(dia <= 0) {
            printf("dia invalido");
        }
        else if(dia <= 31) {
            printf("- Data: %i/Out", dia, mes);
        }
        
    }
    else if(mes == 11) {
         if(dia <= 0) {
            printf("dia invalido");
        }
        else if(dia <= 30) {
            printf("- Data: %i/Nov", dia, mes);
        }
        else if(dia > 30) {
            printf("dia invalido");
        }
        
    }
    else if(mes == 12) {
        if(dia <= 0) {
            printf("dia invalido");
        }
        if(dia <= 31) {
            printf("- Data: %i/Dez", dia, mes);
        }
    }
    else if(mes > 12) {
        printf("Mes invalido !");
    }
    else if(mes <= 0) {
        printf("mes invalido");
    }
    
=======
#include <stdio.h>

int main() {

int dia, mes;

    printf("Digite dia e mes: ");
    scanf("%i %i", &dia, &mes);

    if(mes == 1) {
        if(dia <= 0) {
            printf("dia invalido");
        }
        else if(dia <= 31) {
            printf("- Data: %i/Jan", dia, mes);

        }
        

    }
    else if(mes == 2) {
        if(dia <= 0) {
            printf("dia invalido");
        }   
        else if(dia <= 28) {
            printf("- Data: %i/Fev", dia, mes);
        }
        else if(dia > 28){
            printf("dia invalido");
        }
        
    }
    else if(mes == 3) {
        if(dia <= 0) {
            printf("dia invalido");
        }
        else if(dia <= 31) {
            printf("- Data: %i/Mar", dia, mes);
        }
        
    }
    else if(mes == 4) {
        if(dia <= 0) {
            printf("dia invalido");
        }
        else if(dia <= 30) {
            printf("- Data: %i/Abr", dia, mes);
        }
         else if(dia > 30) {
            printf("dia invalido");
        }
        
        
    }
    else if(mes == 5) {
        if(dia <= 0) {
            printf("dia invalido");
        }
        else if(dia <= 31) {
            printf("- Data: %i/Mai", dia, mes);
        }
        
        
    }
    else if(mes == 6) {
        if(dia <= 0) {
            printf("dia invalido");
        }
        else if(dia <= 30) {
            printf("- Data: %i/Jun", dia, mes);
        }
         else if(dia > 30) {
            printf("dia invalido");
        }
     
    }
    else if(mes == 7) {
        if(dia <= 0) {
            printf("dia invalido");
        }
        else if(dia <= 31) {
            printf("- Data: %i/Jul", dia, mes);
        }
        
    }
    else if(mes == 8) {
         if(dia <= 0) {
            printf("dia invalido");
        }
        else if(dia <= 31) {
            printf("- Data: %i/Ago", dia, mes);
        } 
    }
    else if(mes == 9) {
        if(dia <= 0) {
            printf("dia invalido");
        }
        else if(dia <= 30) {
            printf("- Data: %i/Set", dia, mes);
        }
         else if(dia > 30) {
            printf("dia invalido");
        }
        
    }
    else if(mes == 10) {
        if(dia <= 0) {
            printf("dia invalido");
        }
        else if(dia <= 31) {
            printf("- Data: %i/Out", dia, mes);
        }
        
    }
    else if(mes == 11) {
         if(dia <= 0) {
            printf("dia invalido");
        }
        else if(dia <= 30) {
            printf("- Data: %i/Nov", dia, mes);
        }
        else if(dia > 30) {
            printf("dia invalido");
        }
        
    }
    else if(mes == 12) {
        if(dia <= 0) {
            printf("dia invalido");
        }
        if(dia <= 31) {
            printf("- Data: %i/Dez", dia, mes);
        }
        
    }
    else if(mes > 12) {
        printf("Mes invalido !");
        if(dia > 31) {
            printf("Dia invalido !");
        }
    }
    else if(mes <= 0) {
        printf("mes invalido");
    }
    
>>>>>>> ee9d3ae6229e6f973318905c4e577ef898cc614f
}