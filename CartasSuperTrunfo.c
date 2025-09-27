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
    int populacao1 = 300000;
    float areaemkm1 = 1.000000;
    float pib1 = 700.000000000;
    int pontosturisticos1 = 18;
    float densidadepopulacional1 = 0.0;
    float pibpercapta1 = 0.0;
    float superpoder1 = 0.0;

    int escolha1, escolha2, resultado1, resultado2;
  
  // Variáveis da segunda carta

    char estado2[15] = "batata";
    char codigodacarta2[10] = "batata";
    char nomedacidade2[15] = "batata";
    int populacao2 = 300000;
    float areaemkm2 = 1.000000;
    float pib2 = 700.000000000;
    int pontosturisticos2 = 18;
    float densidadepopulacional2 = 0.0;
    float pibpercapta2 = 0.0;
    float superpoder2 = 0.0;

    printf ("Bem-vindo ao jogo Super Trunfo!\n");
    printf ("================================\n");
    printf ("Cadastre e compare suas cartas!\n");
    printf ("**********************************\n");

  // Área para entrada de dados da primeira carta
  
    printf ("Cadastre sua primeira carta:\n");

    printf ("\nDigite o nome do estado: ");
    scanf ("%s", estado1);

    printf ("\nDigite o código da carta: " );
    scanf ("%s", codigodacarta1);

    printf ("\nDigite o nome da cidade: ");
    scanf ("%s", nomedacidade1);

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

    //Área para cálculo populacional e PIB per capta da primeira carta

    densidadepopulacional1 = (float)populacao1 / areaemkm1;
    pibpercapta1 = (float)pib1 / populacao1;

    printf ("\n A densidade populacional de %s é de: %.2f", nomedacidade1, densidadepopulacional1);
    printf ("\n O PIB per capta de %s é de: %.2f\n", nomedacidade1, pibpercapta1);

    //Cálculo de Super Poder Carta 1

    superpoder1 = populacao1 + areaemkm1 + pib1 + pibpercapta1 + (1 / densidadepopulacional1);

    printf ("\nSuper Poder..........: %.2f\n", superpoder1);

    // Área para entrada de dados da segunda carta
  
    printf ("\nCadastre sua segunda carta:\n");

    printf ("\nDigite o nome do estado: ");
    scanf ("%s", estado2);

    printf ("\nDigite o código da carta: " );
    scanf ("%s", codigodacarta2);

    printf ("\nDigite o nome da cidade: ");
    scanf ("%s", nomedacidade2);

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

    //Área para cálculo populacional e PIB per capta da sefunda carta

    densidadepopulacional2 = (float)populacao2 / areaemkm2;
    pibpercapta2 = (float)pib2 / populacao2;

    printf ("\n A densidade populacional de %s é de: %.2f", nomedacidade2, densidadepopulacional2);
    printf ("\n O PIB per capta de %s é de: %.2f", nomedacidade2, pibpercapta2);

    //Cálculo de Super Poder Carta 2

    superpoder2 = populacao2 + areaemkm2 + pib2 + pibpercapta2 + (1 / densidadepopulacional2);

    printf ("\nSuper Poder..........: %.2f", superpoder2);
    printf ("\n----------------------------------\n");

    printf ("Escolha o primeiro atributo que você deseja comparar (de 1 a 7): \n");
    printf ("1 = População\n");
    printf ("2 = Área em Km²\n");
    printf ("3 = PIB\n");
    printf ("4 = Pontos Turísticos\n");
    printf ("5 = Densidade Populacional\n");
    printf ("6 = PIB percapta\n");
    printf ("7 = Super Poder\n");
    scanf ("%d", &escolha1);

    //área para comparar as cartas usando switch de acordo com a escolha do Usuário na variável escolha1
        
      switch (escolha1) {
      case 1:
        resultado1 == populacao1 > populacao2 ? 1 : 0;
        break;
      case 2:
      resultado1 == areaemkm1 > areaemkm2 ? 1 : 0;
      break;
      case 3:
      resultado1 == pib1 > pib2 ? 1 : 0;
      break;
      case 4:
      resultado1 == pontosturisticos1 > pontosturisticos2 ? 1 : 0;
      break;
      case 5:
      resultado1 == densidadepopulacional1 < densidadepopulacional2 ? 1 : 0;
      break;
      case 6:
      resultado1 == pibpercapta1 > pibpercapta2 ? 1 : 0;
      break;
      case 7:
      resultado1 == superpoder1 > superpoder2 ? 1 : 0;
      break;
      default: 
        printf ("Escolha inválida.\n");
      break; 
        }

    printf ("Escolha o segundo atributo que você deseja comparar (de 1 a 7): \n");
    printf ("1 = População\n");
    printf ("2 = Área em Km²\n");
    printf ("3 = PIB\n");
    printf ("4 = Pontos Turísticos\n");
    printf ("5 = Densidade Populacional\n");
    printf ("6 = PIB percapta\n");
    printf ("7 = Super Poder\n");
    scanf ("%d", &escolha2);

        if (escolha1 == escolha2) {
          printf ("Opção igual à anterior\n");
        }else {
      switch (escolha2) {
      case 1:
        resultado2 == populacao1 > populacao2 ? 1 : 0;
        break;
      case 2:
      resultado2 == areaemkm1 > areaemkm2 ? 1 : 0;
      break;
      case 3:
      resultado2 == pib1 > pib2 ? 1 : 0;
      break;
      case 4:
      resultado2 == pontosturisticos1 > pontosturisticos2 ? 1 : 0;
      break;
      case 5:
      resultado2 == densidadepopulacional1 < densidadepopulacional2 ? 1 : 0;
      break;
      case 6:
      resultado2 == pibpercapta1 > pibpercapta2 ? 1 : 0;
      break;
      case 7:
      resultado2 == superpoder1 > superpoder2 ? 1 : 0;
      break;
      default: 
        printf ("Escolha inválida.\n");
      break;}
        }

        if (resultado1 && resultado2) {
          printf ("%s Venceu!\n", nomedacidade1);
        }else if (resultado1 != resultado2) {
          printf ("Empate!\n");
        }else {
          printf ("%s Venceu!\n", nomedacidade2);
        }
    return 0;

      }