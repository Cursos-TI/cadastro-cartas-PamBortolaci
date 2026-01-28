// inclusão das bibliotecas

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max_caracteres 100

// criação da struct

struct Dominio {
    char nome [max_caracteres];
    char cor [max_caracteres];
    char tropas [max_caracteres];
};

// função principal

int main () {
    struct Dominio Territorio[max_caracteres];
    int territorio [5] = {0, 1, 2, 3, 4};

    printf ("Cadastrando os cinco territórios iniciais do mundo: \n");
    printf ("--------------------------------------------------------\n");

// uso de loop for para registro dos territórios

    for (int i = 0; i < 5; i++) {
        printf ("Digite o nome do território: \n");
        fgets (Territorio[territorio[i]].nome, max_caracteres, stdin);

        printf ("Defina a cor do exército: \n");
        fgets (Territorio[territorio[i]].cor, max_caracteres, stdin);

        printf ("Digite o número de tropas: \n");
        fgets (Territorio[territorio[i]].tropas, max_caracteres, stdin);

    
       Territorio[territorio[i]].nome[strcspn(Territorio[territorio[i]].nome, "\n")] = '\0';
       Territorio[territorio[i]].cor[strcspn(Territorio[territorio[i]].cor, "\n")] = '\0';
       Territorio[territorio[i]].tropas[strcspn(Territorio[territorio[i]].tropas, "\n")] = '\0';
       printf ("\n\n");
    }

    printf ("Lista de territórios:\n");
    printf ("--------------------------------------------------\n");

// uso do loop for para imprimir os territórios

    for (int i = 0; i < 5; i++) {
        printf ("Território %d\n", i+1);
        printf ("Nome do território: %s\n", Territorio[territorio[i]].nome);
        printf ("Cor do exército: %s\n", Territorio[territorio[i]].cor);
        printf ("Número de tropas: %s\n", Territorio[territorio[i]].tropas);
        printf ("--------------------------------------------------\n");
    }


return 0;
}