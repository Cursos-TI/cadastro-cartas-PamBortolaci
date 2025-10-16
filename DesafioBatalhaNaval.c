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

    //Registrando valor do primeiro navio

    for (int coluna = 0; coluna < COLUNA; coluna++) {
        if (coluna == 1 || coluna == 2 || coluna == 3) {
            for (int linha = 0; linha < LINHA; linha++) {
                if (linha == 1){
                    tabuleiro [coluna][linha] = 3;
                }
            }
        }
    }

    //Registrando valor do segundo navio

     for (int coluna = 0; coluna < COLUNA; coluna++) {
        if (coluna == 7) {
            for (int linha = 0; linha < LINHA; linha++) {
                if (linha == 6 || linha == 7 || linha == 8){
                    tabuleiro [coluna][linha] = 3;
                }
            }
        }
    }

     //Registrando valor do terceiro navio na diagonal da direita para a esquerda

    for (int coluna = 0; coluna < COLUNA; coluna++) {
        for (int linha = 0; linha < LINHA; linha++) {
                if (coluna + linha == 11){
                    if (coluna < 5 && coluna > 1){
                        tabuleiro [linha][coluna] = 3;
                    }
                }
            }
    }

    //Registrando valor do quarto navio na diagonal da esquerda para a direita

    for (int coluna = 0; coluna < COLUNA; coluna++) {
        for (int linha = 0; linha < LINHA; linha++) {
                if (coluna == linha){
                    if (coluna < 5 && coluna > 1){
                        tabuleiro [linha][coluna] = 3;
                    
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