#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Variáveis da primeira carta

    char estado1[15] = "batata";
    char codigodacarta1[10] = "batata";
    char nomedacidade1[15] = "batata";
    int populacao1 = 300.000;
    float areaemkm1 = 1.000000;
    float pib1 = 700.000000000;
    int pontosturisticos1 = 18;
  
  // Variáveis da segunda carta

    char estado2[15] = "batata";
    char codigodacarta2[10] = "batata";
    char nomedacidade2[15] = "batata";
    int populacao2 = 300.000;
    float areaemkm2 = 1.000000;
    float pib2 = 700.000000000;
    int pontosturisticos2 = 18;

  // Área para entrada de dados da primeira carta
  
    printf ("Cadastre sua carta:\n");

    printf ("\nDigite o nome do estado: ");
    scanf ("%s", &estado1);

    printf ("\nDigite o código da carta: " );
    scanf ("%s", &codigodacarta1);

    printf ("\nDigite o nome da cidade: ");
    scanf ("%s", &nomedacidade1);

    printf ("\nDigite a população da cidade: ");
    scanf ("%d", &populacao1);

    printf ("\nDigite a área em Km²: ");
    scanf ("%f", &areaemkm1);

    printf ("\nDigite o PIB da cidade: ");
    scanf ("%f", &pib1);

    printf ("\nDigite o número de Pontos turísticos: ");
    scanf ("%d", &pontosturisticos1);

  // Área de montagem da primeira carta

    printf ("\n* %s -- %s -- %s", codigodacarta1, nomedacidade1, estado1);
    printf ("\n----------------------------------------");

    printf ("\n* População..........: %d", populacao1);

    printf ("\n* Área em Km²........: %.2f", areaemkm1);

    printf ("\n* PIB................: %.2f", pib1);

    printf ("\n* Pontos turísticos..: %d\n", pontosturisticos1);

    // Área para entrada de dados da segunda carta
  
    printf ("\nCadastre sua carta:\n");

    printf ("\nDigite o nome do estado: ");
    scanf ("%s", &estado2);

    printf ("\nDigite o código da carta: " );
    scanf ("%s", &codigodacarta2);

    printf ("\nDigite o nome da cidade: ");
    scanf ("%s", &nomedacidade2);

    printf ("\nDigite a população da cidade: ");
    scanf ("%d", &populacao2);

    printf ("\nDigite a área em Km²: ");
    scanf ("%f", &areaemkm2);

    printf ("\nDigite o PIB da cidade: ");
    scanf ("%f", &pib2);

    printf ("\nDigite o número de Pontos turísticos: ");
    scanf ("%d", &pontosturisticos2);

  // Área de montagem da segunda carta

    printf ("\n* %s -- %s -- %s", codigodacarta2, nomedacidade2, estado2);
    printf ("\n----------------------------------------");

    printf ("\n* População..........: %d", populacao2);

    printf ("\n* Área em Km²........: %.2f", areaemkm2);

    printf ("\n* PIB................: %.2f", pib2);

    printf ("\n* Pontos turísticos..: %d\n", pontosturisticos2);
return 0;
} 
