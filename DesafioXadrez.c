#include <stdio.h>

    void jogo (int parajogar){
    int peca = 0, parajogar = 1;
    if (parajogar > 0){
        printf ("Qual peça você deseja mover?\n");
        printf ("1. Torre\n");
        printf ("2. Bispo\n");
        printf ("3. Rainha\n");
        printf ("4. Cavalo\n");
        scanf ("%d", &peca);

        escolha (peca);

        printf ("Deseja continuar jogando?\n");
        printf ("Digite 1 para continuar\n");
        printf ("Digite 0 para sair\n");
        acanf ("%d", &parajogar);

        jogo (parajogar);
    }else{
        printf ("Saindo do jogo...\n");
    }


}

    // Recursividade da Torre
    
	void torre (int direcao, int casa){
	for (casa >= 0; casa--;){
        switch (direcao){
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
	}

    // Recursividade do Bispo

	void bispo (int direcao, int casa){
	do {
        switch (direcao){
            case 1:
            printf ("À direta para cima\n");
            break;
            case 2: 
            printf ("À esquerda para cima\n");
            break;
            case 3:
            printf ("À direita para baixo\n");
            break;
            case 4:
            printf ("À esquerda para baixo\n");
            default:
            ("Opção inválida.\n");
        }
        casa--;

    }while (casa > 0);
	}

    // Recursividade da Rainha

	void rainha (int direcao, int casa){
	 while (casa > 0) {
        switch (direcao){
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
           casa--;
        }
	}

    // Recursividade do Cavalo

	void cavalo (int direcao, int cardinal){
	if (direcao < 5 && cardinal < 5){
		int movimentoCavalo = 1;
    while (movimentoCavalo--){
        for (int i = 0; i < 2; i++) {
            switch (cardinal){
            case 1:
            printf ("Cima\n");
            break;
            case 2:
            printf ("Baixo\n");
            break;
            case 3:
            printf ("Direita\n");
            break;
            case 4:
            printf ("Esquerda\n");
            break;
            default:
            printf ("Opção inválida\n");
            }
        }
        switch (direcao){
            case 1:
            printf ("Esquerda\n");
            break;
            case 2:
            printf ("Direita\n");
            break;
            case 3:
            printf ("Cima\n");
            break;
            case 4:
            printf ("Baixo\n");
            break;
            default:
            printf ("Opção inválida\n");
        }
    }
    }else {
    printf ("Opção Inválida\n");
}
	}
	
    void escolha (int peca){
        int movimentoTorre = 0, movimentoBispo = 0, movimentoRainha = 0;
        int direcaoTorre = 0, direcaoBispo = 0, direcaoRainha = 0;
        int movimentoCavalo = 1, opcaocardinal, opcaodirecional;

    switch (peca){
    case 1:
    // Movimento da Torre
    printf ("Em qual direção você deseja mover a Torre? \n");
    printf ("======================================================\n");
    printf ("1. À direita \n");
    printf ("2. À esquerda\n");
    printf ("3. Para cima\n");
    printf ("4. Para baixo\n");
    scanf("%d", &direcaoTorre);

    printf ("Quantas casas você deseja mover a Torre? \n");
    scanf ("%d", &movimentoTorre);

    // Função para a estrututa de repetição da Torre

    torre (direcaoTorre, movimentoTorre);
    break;
    case 2:
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
    
    // Função para a estrututa de repetição do Bispo

    bispo (direcaoBispo, movimentoBispo);
    break;
    case 3:
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

    // Função para a estrututa de repetição da Rainha

	 rainha (direcaoRainha, movimentoRainha);
     break;
     case 4:
        // Movimentos do Cavalo

    printf ("******************************************************\n");
    printf ("Em qual direção você deseja mover o Cavalo? \n");
    printf ("======================================================\n");
    printf ("1. Para cima \n");
    printf ("2. Para Baixo \n");
    printf ("3. À direita \n");
    printf ("4. À esquerda \n");
    scanf("%d", &opcaocardinal);

    // Função para a estrututa de repetição do Cavalo

    if (opcaocardinal == 1 || opcaocardinal == 2){
        printf ("Qual a direção você deseja posicioná-lo? \n");
        printf ("1. À esquerda.\n");
        printf ("2. À direita.\n");
        scanf ("%d", &opcaodirecional);
    }else if (opcaocardinal == 3 || opcaocardinal == 4){
    printf ("Qual direção você deseja posicioná-lo?\n");
    printf ("3. Para cima.\n");
    printf ("4. Para baixo.\n");
    scanf ("%d", &opcaodirecional);

    }else {
        printf ("Opção inválida.\n");
    }
	cavalo (opcaodirecional, opcaocardinal);
    break;
    default:
    printf ("Escolha inválida.\n");
    }
}

int main (){
    int parajogar = 1;

    jogo (parajogar);
    return 0;
}