#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //Declara e inicializa as variáveis que armazenam dados para cada carta do jogo (carta 1 e carta 2)
  char cod_estado1= 'a', cod_estado2= 'a';            //Variáveis com valores de "A" a "H" para os Estados
  char cod_carta1[4], cod_carta2[4];                  //Variáveis com valores de "01" a "04" para as cidades
  char nome_cidade1[50], nome_cidade2[50];            //Nome da cidade
  int populacao1= 1, populacao2 = 1;                  //Variáveis com a população
  int pts_turisticos1 = 1, pts_turisticos2 = 1;       //Variáveis com os pontos turísticos
  float pib1 = 1.0, pib2 = 1.0;                       //Variáveis com o PIB
  float area1 = 1.0, area2 = 1.0;                     //Variáveis com área

  // Área para entrada de dados
  //Cabeçalho do programa
  printf("===================================================\n");
  printf("|          Bem-vindo ao Super Trunfo 0.1          |\n");
  printf("===================================================\n\n");
    
  printf("Escolha duas cartas da sua mão e insira os valores\nde cada item conforme as instrucões a seguir:\n\n");

  printf("----------------------------------------------------\n");
  printf("* Insira os valores de cada item da primeira carta.\n");
  printf("----------------------------------------------------\n\n");

  //Entrada de dados da Carta 1
  printf("Insira a letra MAIÚSCULA que representa o Estado\n(a parte alfabética de 'A' a 'H'):\n");
  scanf(" %c", &cod_estado1);
  printf("Insira o código da carta (ex.: 'A01' ou 'D04'):\n");
  scanf("%s", cod_carta1);
  printf("Insira o nome da cidade:\n");
  scanf(" %[^\n]", nome_cidade1);
  printf("Insira a quantidade da População:\n");
  scanf("%d", &populacao1);
  printf("Insira o valor da Área (em Km²):\n");
  scanf("%f", &area1);
  printf("Insira o valor do PIB:\n");
  scanf("%f", &pib1);
  printf("Insira a quantidade de pontos turísticos:\n");
  scanf("%d", &pts_turisticos1);

  printf("\n======================================================\n");
  printf(" Parabéns! Você salvou todos dados da primeira carta!\n");
  printf("======================================================\n\n");

  printf("----------------------------------------------------\n");
  printf("* Insira os valores de cada item da segunda carta.\n");
  printf("----------------------------------------------------\n\n");

  //Entrada de dados da Carta 2
  printf("Insira a letra MAIÚSCULA que representa o Estado\n(a parte alfabética de 'A' a 'H'):\n");
  scanf(" %c", &cod_estado2);
  printf("Insira o código da carta (ex.: 'A01' ou 'D04'):\n");
  scanf("%s", cod_carta2);
  printf("Insira o nome da cidade:\n");
  scanf(" %[^\n]", nome_cidade2);
  printf("Insira a quantidade da População:\n");
  scanf("%d", &populacao2);
  printf("Insira o valor da área (em Km²):\n");
  scanf("%f", &area2);
  printf("Insira o valor do PIB:\n");
  scanf("%f", &pib2);
  printf("Insira a quantidade de pontos turísticos:\n");
  scanf("%d", &pts_turisticos2);

  printf("\n======================================================\n");
  printf("  Parabéns! Você salvou todos dados da segunda carta!\n");
  printf("======================================================\n\n");

  printf("\n======================================================\n");
  printf("  Imprimindo na tela os dados salvos das duas cartas\n");
  printf("======================================================\n\n");

  // Área para exibição dos dados da cidade
  printf("Carta:1\nEstado: %c\nCódigo da carta: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de pontos turísticos: %d", cod_estado1, cod_carta1, nome_cidade1, populacao1, area1, pib1, pts_turisticos1);
  printf("\n\n");
  printf("Carta:2\nEstado: %c\nCódigo da carta: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de pontos turísticos: %d", cod_estado2, cod_carta2, nome_cidade2, populacao2, area2, pib2, pts_turisticos2);

return 0;
} 
