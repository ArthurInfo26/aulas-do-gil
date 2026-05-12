#include <stdio.h>

int main() {

    int fim, jogador, qj, qja; 
    char a, b, c, d, e, f, g, h, i, jogada, resp;

    do {
        a = b = c = d = e = f = g = h = i = ' ';
        fim = 0;
        jogador = 1;
        qj = qja = 0;
        do {
            system("clear");
            printf("==================");
            printf("\n= JOGO DA VELHA =");
            printf("\n==================");
            printf("\n   A|B|C");
            printf("\n   -----");
            printf("\n   D|E|F");
            printf("\n   -----");
            printf("\n   G|H|I");
            printf("\n");
            printf("\n   %c|%c|%c", a, b, c);
            printf("\n   -----");
            printf("\n   %c|%c|%c", d, e, f);
            printf("\n   -----");
            printf("\n   %c|%c|%c", g, h, i);
            printf("\n==================");
            if(jogador == 1) {
                printf("\nJodador 0%i [X]: ", jogador);
            }
            else {
                printf("\nJodador 0%i [O]: ", jogador);
            }
            scanf(" %c", &jogada);

            switch(jogada) {
                case 'a':
                        if(a == ' ') {
                            if(jogador == 1)a = 'X';
                            else a = 'O';
                            qj++;
                        }
                    break;
                
                case 'b':
                        if(b == ' ') {
                            if(jogador == 1) b = 'X';
                            else b = 'O';
                            qj++;
                        }
                    break;
                
                case 'c':
                        if(c == ' ') {
                            if(jogador == 1) c = 'X';
                            else c = 'O';
                            qj++;
                        }
                    break;
                
                case 'd':
                        if(d == ' ') {
                            if(jogador == 1) d = 'X';
                            else d = 'O';
                            qj++;
                        }
                    break;

                case 'e':
                        if(e == ' ') {
                            if(jogador == 1) e = 'X';
                            else e = 'O';
                            qj++;
                        }
                    break;
                
                case 'f':
                        if(f == ' ') {
                            if(jogador == 1) f = 'X';
                            else f = 'O';
                            qj++;
                        }
                    break;
                
                case 'g':
                        if(g == ' ') {
                            if(jogador == 1) g = 'X';
                            else g = 'O';
                            qj++;
                        }
                    break;
                
                case 'h':
                        if(h == ' ') {
                            if(jogador == 1) h = 'X';
                            else h = 'O';
                            qj++;
                        }
                    break;
                
                case 'i':
                        if(i == ' ') {
                            if(jogador == 1) i = 'X';
                            else i = 'O';
                            qj++;
                        }
                    break;
            }

            if(qj > qja) {
                if(jogador == 1) jogador = 2;
                else jogador = 1;
                qja = qj;
            }
            if(qj == 9) {
                fim = 1;
            printf("\n   %c|%c|%c", a, b, c);
            printf("\n   -----");
            printf("\n   %c|%c|%c", d, e, f);
            printf("\n   -----");
            printf("\n   %c|%c|%c", g, h, i);
            printf("\n==================\n");
            printf("empate");
            }
            
            if( (a == 'X' && b == 'X' && c == 'X') || 
                (a == 'X' && d == 'X' && g == 'X') ||
                (a == 'X' && e == 'X' && i == 'X') ||
                (b == 'X'&& e == 'X' && h == 'X' ) ||
                (c == 'X'&& f == 'X'&& i == 'X' )  ||
                (c == 'X'&& e == 'X' && g == 'X')  ||
                (d == 'X'&& e == 'X' && f == 'X')  ||
                (g == 'X' && h == 'X'&& i == 'X')  
            ) {
                printf("\n   %c|%c|%c", a, b, c);
            printf("\n   -----");
            printf("\n   %c|%c|%c", d, e, f);
            printf("\n   -----");
            printf("\n   %c|%c|%c", g, h, i);
            printf("\n==================\n");
                printf("Jogador 1 ganha:");
                fim = 1;
            }
             if((a == 'O' && b == 'O' && c == 'O') ||
            (a == 'O' && d == 'O' && g == 'O') ||
            (a == 'O' && e == 'O' && i == 'O') ||
            (b == 'O'&& e == 'O' && h == 'O') ||
            (c == 'O'&& f == 'O'&& i == 'O' ) ||
            (c == 'O'&& e == 'O' && g == 'O') ||
            (d == 'O'&& e == 'O' && f == 'O') ||
            (g == 'O' && h == 'O'&& i == 'O') 
            ) {
                printf("\n   %c|%c|%c", a, b, c);
            printf("\n   -----");
            printf("\n   %c|%c|%c", d, e, f);
            printf("\n   -----");
            printf("\n   %c|%c|%c", g, h, i);
            printf("\n==================\n");
                printf("Jogador 2 ganha:");
                fim = 1;
            }

            
            




        }while (fim == 0);

        

    
        printf("\nDeseja continuar? ");
        scanf(" %c", &resp);
        

    }while(resp == 's' || resp == 'S');
    

    printf("\n");    
    return 0;
}