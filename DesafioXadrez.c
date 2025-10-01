#include <stdio.h>
int main (){

    // declaração das variáveis

    int movimentoTorre = 0, movimentoBispo = 0, movimentoRainha = 0;
    int direcaoTorre = 0, direcaoBispo = 0, direcaoRainha = 0;

    // Movimentos da Torre

    printf ("Em qual direção você deseja mover a Torre? \n");
    printf ("======================================================\n");
    printf ("1. À direita \n");
    printf ("2. À esquerda\n");
    printf ("3. Para cima\n");
    printf ("4. Para baixo\n");
    scanf("%d", &direcaoTorre);

    printf ("Quantas casas você deseja mover a Torre? \n");
    scanf ("%d", &movimentoTorre);

    // Estrutura de repetição

    for (movimentoTorre >= 0; movimentoTorre--;){
        switch (direcaoTorre){
        case 1:
        printf ("Direita\n");
        break;
        case 2:
        printf ("Esquerda\n");
        break;
        case 3:
        printf ("Para cima\n");
        break;
        case 4:
        printf ("Para baixo\n");
        break;
        default:
        printf ("Movimento inválido\n");
        }
    }

    // Movimentos do Bispo

    printf ("******************************************************\n");
    printf ("Em qual direção você deseja mover o Bispo? \n");
    printf ("======================================================\n");
    printf ("1. À direita para cima \n");
    printf ("2. À esquerda para cima\n");
    printf ("3. À direita para baixo\n");
    printf ("4. À esquerda para baixo\n");
    scanf("%d", &direcaoBispo);

    printf ("Quantas casas você deseja mover o Bispo? \n");
    scanf ("%d", &movimentoBispo);
    
    // Estrutura de repetição

    do {
        switch (direcaoBispo){
            case 1:
            printf ("À direta para cima\n");
            break;
            case 2: ("À esquerda para cima\n");
            break;
            case 3:
            printf ("À direita para baixo\n");
            break;
            case 4:
            printf ("À esquerda para baixo\n");
            default:
            ("Opção inválida.\n");
        }
        movimentoBispo--;

    }while (movimentoBispo > 0);

    // Movimentos da Rainha

    printf ("******************************************************\n");
    printf ("Em qual direção você deseja mover a Rainha? \n");
    printf ("======================================================\n");
    printf ("1. À direita para cima \n");
    printf ("2. À esquerda para cima\n");
    printf ("3. À direita para baixo\n");
    printf ("4. À esquerda para baixo\n");
    printf ("5. Para a direita\n");
    printf ("6. Para baixo\n");
    printf ("7. Para a esquerda\n");
    printf ("8. Para cima\n");
    scanf("%d", &direcaoRainha);

    printf ("Quantas casas você deseja mover a Rainha? \n");
    scanf ("%d", &movimentoRainha);

    // Estrutura de repetição

    while (movimentoRainha > 0) {
        switch (direcaoRainha){
            case 1:
            printf ("À direita para cima.\n");
            break;
            case 2:
            printf ("À esquerda para cima.\n");
            break;
            case 3:
            printf ("À esquerda para baixo.\n");
            break;
            case 4:
            printf ("À esquerda para baixo.\n");
            break;
            case 5:
            printf ("Para a direita.\n");
            break;
            case 6:
            printf ("Para baixo\n");
            break;
            case 7: 
            printf ("Para a esquerda.\n");
            break;
            case 8:
            printf ("Para cima\n");
            break;
            default:
            ("Movimento inválido.\n");
            }
            movimentoRainha--;
        }

return 0;
}