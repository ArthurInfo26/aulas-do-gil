#include <stdio.h>

int main() {

    int fim, jogador, qj, qja; 
    char a, b, c, d, e, f, g, h, i, jogada, resp, nv, nb;
    


    do {
        a = b = c = d = e = f = g = h = i = ' ';
        fim = 0;
        jogador = 1;
        qj = qja = 0;
        do {

            printf("🔴", nv);
            nv = jogada;
            system("clear");	
	printf ("🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱");
	printf ("\n🧱🧱🧱🧱🧱🧱  JOGO DA VELHA 🧱🧱🧱🧱🧱🧱");	
	printf ("\n🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱");
	printf ("\n");   
	printf ("\n               🇦 🧱🇧 🧱🇨 ");      
	printf ("\n               🧱🧱🧱🧱🧱   ");            
	printf ("\n               🇩 🧱🇪 🧱🇫 ");                
	printf ("\n               🧱🧱🧱🧱🧱   ");             
	printf ("\n               🇬 🧱🇭 🧱🇮 ");              
	printf ("\n");              
	printf ("\n               %c🧱%c🧱%c", a, b, c);
	printf ("\n               🧱🧱🧱🧱🧱");
	printf ("\n               %c🧱%c🧱%c", d, e, f);
	printf ("\n               🧱🧱🧱🧱🧱");
	printf ("\n               %c🧱%c🧱%c", g, h, i);
	printf ("\n\n🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱");
	printf ("\n Jogador 01-> [🔴]    Jogador 02-> [⚪]");
	printf ("\n🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱");
            if(jogador == 1) {
                printf("\nJodador 0%i [🔴]: ", jogador);
            }
            else {
                printf("\nJodador 0%i [⚪]: ", jogador);
            }
            scanf(" %c", &jogada);

            switch(jogada) {
                case 'a':
                        if(a == ' ') {
                            if(jogador == 1)a = 'X';
                            else a = '⚪';
                            qj++;
                        }
                    break;
                
                case 'b':
                        if(b == ' ') {
                            if(jogador == 1) b = 'X';
                            else b = '⚪';
                            qj++;
                        }
                    break;
                
                case 'c':
                        if(c == ' ') {
                            if(jogador == 1) c = 'X';
                            else c = '⚪';
                            qj++;
                        }
                    break;
                
                case 'd':
                        if(d == ' ') {
                            if(jogador == 1) d = '🔴';
                            else d = '⚪';
                            qj++;
                        }
                    break;

                case 'e':
                        if(e == ' ') {
                            if(jogador == 1) e = '🔴';
                            else e = '⚪';
                            qj++;
                        }
                    break;
                
                case 'f':
                        if(f == ' ') {
                            if(jogador == 1) f = '🔴';
                            else f = '⚪';
                            qj++;
                        }
                    break;
                
                case 'g':
                        if(g == ' ') {
                            if(jogador == 1) g = '🔴';
                            else g = '⚪';
                            qj++;
                        }
                    break;
                
                case 'h':
                        if(h == ' ') {
                            if(jogador == 1) h = '🔴';
                            else h = '⚪';
                            qj++;
                        }
                    break;
                
                case 'i':
                        if(i == ' ') {
                            if(jogador == 1) i = '🔴';
                            else i = '⚪';
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
    printf ("\n               %c🧱%c🧱%c", a, b, c);
	printf ("\n               🧱🧱🧱🧱🧱");
	printf ("\n               %c🧱%c🧱%c", d, e, f);
	printf ("\n               🧱🧱🧱🧱🧱");
	printf ("\n               %c🧱%c🧱%c", g, h, i);
	printf ("\n\n🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱");
	printf ("\n Jogador 01-> [🔴]    Jogador 02-> [⚪]");
	printf ("\n🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱\n");
            printf("empate");
            }
            
            if( (a == 'nv' && b == 'nv' && c == 'nv') || 
                (a == '🔴' && d == '🔴' && g == '🔴') ||
                (a == '🔴' && e == '🔴' && i == '🔴') ||
                (b == '🔴'&& e == '🔴' && h == '🔴' ) ||
                (c == '🔴'&& f == '🔴'&& i == '🔴' )  ||
                (c == '🔴'&& e == '🔴' && g == '🔴')  ||
                (d == '🔴'&& e == '🔴' && f == '🔴')  ||
                (g == '🔴' && h == '🔴'&& i == '🔴')  
            ) {
    printf ("\n               %c🧱%c🧱%c", a, b, c);
	printf ("\n               🧱🧱🧱🧱🧱");
	printf ("\n               %c🧱%c🧱%c", d, e, f);
	printf ("\n               🧱🧱🧱🧱🧱");
	printf ("\n               %c🧱%c🧱%c", g, h, i);
	printf ("\n\n🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱");
	printf ("\n Jogador 01-> [🔴]    Jogador 02-> [⚪]");
	printf ("\n🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱\n");
                printf("Jogador 1 ganha:");
                fim = 1;
            }
             if((a == '⚪' && b == '⚪' && c == '⚪') ||
            (a == '⚪' && d == '⚪' && g == '⚪') ||
            (a == '⚪' && e == '⚪' && i == '⚪') ||
            (b == '⚪'&& e == '⚪' && h == '⚪') ||
            (c == '⚪'&& f == '⚪'&& i == '⚪' ) ||
            (c == '⚪'&& e == '⚪' && g == '⚪') ||
            (d == '⚪'&& e == '⚪' && f == '⚪') ||
            (g == '⚪' && h == '⚪'&& i == '⚪') 
            ) {
    printf ("\n               %c🧱%c🧱%c"), a, b, c;
	printf ("\n               🧱🧱🧱🧱🧱");
	printf ("\n               %c🧱%c🧱%c"), d, e, f;
	printf ("\n               🧱🧱🧱🧱🧱");
	printf ("\n               %c🧱%c🧱%c", g, h, i);
	printf ("\n\n🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱");
	printf ("\n Jogador 01-> [🔴]    Jogador 02-> [⚪]");
	printf ("\n🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱🧱\n");
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