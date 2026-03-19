#include <stdio.h>
#include <stdlib.h>

//Struct dos Elementos

typedef struct {
    char nome[10];
    int ID;
}Peca;

#define MAX 5


//Struct da fila

typedef struct {
    Peca itens [MAX];
    int inicio;
    int final;
    int total;
}Fila;


//Inicialização da fila

void inicializarFila(Fila *f) {
    f -> inicio = 0;
    f -> final = 0;
    f -> total = 0;
}

//Verificação se a fila está cheia ou vazia

int filaCheia (Fila *f){
    return f -> total == MAX;
}

int filaVazia (Fila *f){
    return f -> total == 0;
}


//Inserindo e removendo peças

void inserir (Fila *f, Peca p){
    if (f -> total == MAX){
        printf ("Máximo de peças atingido!\n!");
            return;
    }

    f -> itens [f -> final] = p;
    f -> final = (f -> final + 1) % MAX;
    f -> total ++;
}

void jogar (Fila *f, Peca *p){
    if (filaVazia (f)){
        printf ("Não há mais peças!\n");
    }

    *p = f -> itens [f -> inicio];
    f -> inicio = (f -> inicio + 1) % MAX;
    f -> total --;
}

//Mostrando a Fila

void mostrarPecas (Fila *f){
    printf ("Peças:");
    for (int i = 0, idx = f -> inicio; i < f -> total; i++, idx = (idx + 1) % MAX) {
        printf ("[%s, %d]", f -> itens [idx].nome, f -> itens [idx].ID);
    
    }
    printf ("\n");
}
   
//Declaração do main()

int main (){

    Fila f;
    inicializarFila (&f);

        Peca p1 = {"I", 1};
        Peca p2 = {"O", 1};
        Peca p3 = {"T", 1};
        Peca p4 = {"L", 1};
        Peca p5 = {"O", 2};

        inserir (&f, p1);
        inserir (&f, p2);
        inserir (&f, p3);
        inserir (&f, p4);
        inserir (&f, p5);

    int escolha;

    do{
    printf ("==Tetris Stack==\n");
    printf ("----------------\n");
    mostrarPecas (&f);
    printf ("----------------\n");
    printf ("Digite 1 para jogar uma peça\n");
    printf ("Digite 2 para inserir uma peça\n");
    printf ("Digite 0 para sair\n");

    scanf ("%d", &escolha);

    switch (escolha){
        case 1: 
        Peca jogada;

        jogar (&f, &jogada);
        printf ("Peça jogada: %s, %d\n", jogada.nome, jogada.ID); 
        break;

        case 2:
        int pecaAleatoria = (rand () % 100 + 1);
        if (pecaAleatoria < 25){
            int ID = 0;
            int ID = ID++;
            Peca p1 = {"I", ID};
            inserir (&f, p1);
        }else if (pecaAleatoria => 25 && pecaAleatoria =< 50){
            int ID = 0;
            int ID = ID++;
            Peca p2 = {"O", ID};
            inserir (&f, p2);
        }else if (pecaAleatoria > 50 && pecaAleatoria =< 75){
            int ID = 0;
            int ID = ID++;
            Peca p3 = {"T", ID};
            inserir (&f, p3);
        }else{
            int ID = 0;
            int ID = ID++;
            Peca p4 = {"L", ID};
            inserir (&f, p4);
        }
        printf ("Peça inserida\n");
        break;

        case 0:

        printf ("Saindo do jogo\n");
        break;

        Default: 
        printf ("Opção Inválida. Tente novamente.\n");
        return 0;
    }

    }while (escolha != 0);
    
return 0;
}