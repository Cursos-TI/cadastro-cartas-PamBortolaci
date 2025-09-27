#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
    int jogador, computador;
    int resultado;
    char opcao;

    srand (time(0));
    computador = rand() % 100 + 1;
    printf ("Bem vindo ao jogo Maior, Menor ou Igual!\n");
    printf ("Você pode tentar adivinhar o número que estou pensando entre 1 e 100.\n");
    printf ("=======================================================\n");
    printf ("Primeiro, escolha a opcão: \n");
    printf ("M - Para Maior\n");
    printf ("N - Para Menor\n");
    printf ("I - Para Igual\n");
    scanf ("%c", &opcao);
    printf ("Ótimo! Agora, tente adivinhar o número que estou pensando.\n");
    printf ("=====================================================\n");
    printf ("Digite um número entre 1 e 100: \n");
    scanf ("%d", &jogador);
    printf ("=======================================================\n");
    printf ("O número que eu pensei foi: %d\n", computador);

    switch (opcao){
        case 'M':
        case 'm':
        printf ("Você escolheu Maior.\n");
        resultado = jogador > computador ? 1 : 0;
        break;
        case 'N':
        case 'n':
        printf ("Você escolheu Menor.\n");
        resultado = jogador < computador ? 1 :0;
        break;
        case 'I':
        case 'i':
        printf ("Você escolheu Igual.\n");
        resultado = jogador == computador ? 1 : 0;
        break;
        default:
        printf ("Opção inválida! Por favor, escolha M, N ou I.\n");

        printf ("Eu escolhi o número %d.\n", computador);
        printf ("Você escolheu o número %d.\n", jogador);

        if (resultado == 1) {
        printf ("Você me venceu!\n");
        }else{
        printf ("Eu venci! Tente novamente.\n");
        }
        return 0;
    }