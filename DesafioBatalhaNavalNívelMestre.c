#include <stdio.h>

#define LINHA 10
#define COLUNA 10

int main() {

    //Declaração de variáveis

    char linha [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int tabuleiro [COLUNA][LINHA];
    
    printf ("Tabuleiro Batalha Naval\n");
    printf ("-----------------------\n");
    printf ("|   ");
    printf ("|");

    //Inicializando variável tabuleiro

    for (int coluna = 0; coluna < COLUNA; coluna++) {
            for (int linha = 0; linha < LINHA; linha++){
                    tabuleiro [coluna][linha] = 0;
            }
    }

    // imprimindo a primeira forma geométrica - cone

    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
         if (i == 0){
			if (j == 4){
				tabuleiro [i][j] = 3;
			}
		}
		
		if (i == 1){ 
			if (j > 2 && j < 6){
				tabuleiro [i][j] = 3;
			}
		}
		
		if (i == 2){
			if (j > 1 && j < 7){
			tabuleiro [i][j] = 3;
			}
		}   
        }
    }

    // imprimindo a segunda forma geométrica - cruz

    for (int i = 0; i < LINHA; i++){
	for (int j = 0; j < COLUNA; j++){
		if (i == 5){
			if (j == 7){
				tabuleiro [i][j] = 2;
			}
		}
		
		if (i == 6){ 
			if (j > 5 && j < 9){
				tabuleiro [i][j] = 2;
			}
		}
		
		if ( i == 7){
			if (j == 7){
			tabuleiro [i][j] = 2;
            }
        }
    }
}

    // imprimindo a terceira forma geométrica - octaedro

    for (int i = 0; i < LINHA; i++){
	    for (int j = 0; j < COLUNA; j++){
            if (i == 5){
			    if (j == 2){
				tabuleiro [i][j] = 1;
			}
		}
		
		if (i == 6){ 
			if (j >= 0 && j < 5){
				tabuleiro [i][j] = 1;
			}
		}
		
		if ( i == 7){
			if (j == 2){
			tabuleiro [i][j] = 1;
			}
		}
        }
    }
    
    //Montando o tabuleiro 

    for (int i = 0; i < 10; i++) {
        printf (" %c |", linha [i]);
    }

    printf ("\n"); 

    for (int coluna = 0; coluna < COLUNA; coluna++) {
        printf ("| %d |", coluna+1);
        for (int linha = 0; linha < LINHA; linha++) {
            printf (" %d", tabuleiro [coluna][linha]);
            printf (" |");
        }
        
        printf ("\n"); 
    }
    return 0;

    }