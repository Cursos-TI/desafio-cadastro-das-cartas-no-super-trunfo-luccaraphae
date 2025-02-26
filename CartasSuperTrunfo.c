#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {

    //Variaveis Carta 1
    char estado1= ' ';
    char codCarta1[3] = "";
    char nomeCidade1[20] = "";
    int populacao1 = 0;
    float areaHabitacao1 = 0.0;
    float pib1 = 0.0;
    int pontosturisticos1 = 0;
    float densidadePopulacao1 = 0.0;
    float pibPercapta1 = 0.0;

    //Varíaveis Carta2
    char estado2= ' ';
    char codCarta2[3] = "";
    char nomeCidade2[20] = "";
    int populacao2 = 0;
    float areaHabitacao2 = 0.0;
    float pib2 = 0.0;
    int pontosturisticos2 = 0;
    float densidadePopulacao2 = 0.0;
    float pibPercapta2 = 0.0;

    
    // Cadastro das Cartas:
    //Solicitando ao usuario que forneca as informacões e armazenando em suas variaveis
    printf("Seja bem vindo ao Super Trunfo - Paises! Cadastre as duas primeiras cartas do jogo.\n");
    printf("\nCarta1");

    printf("\nInsira uma letra para o Estado correspondente a 1a carta: ");
    scanf(" %c", &estado1);

    printf("\nInsira um código de 3 dígitos para o Estado correspondente a 1a carta: ");
    scanf(" %s", &codCarta1);

    printf("\nInsira o nome correspondente a cidade da 1a carta: ");
    scanf("%s", &nomeCidade1);

    printf("\nInsira o tamanho da populacao correspondente a 1a carta: ");
    scanf("%i", &populacao1);

    printf("\nInsira a area habitacional correspondente a 1a carta: ");
    scanf("%f", &areaHabitacao1);

    printf("\nInsira o PIB (Produto interno Bruto) correspondente a 1a carta: ");
    scanf("%f", &pib1);

    printf("\nInsira um numero de pontos turisticos correspondente a 1a carta: ");
    scanf("%i", &pontosturisticos1);

    //Calculando a densidade populacional da carta 1
    densidadePopulacao1 = (float) populacao1 / areaHabitacao1;

    //Calculando PIB PerCapta da carta 1
    pibPercapta1 = pib1 / areaHabitacao1;



    //Solicitando ao usuario que forneca as informacões da 2a carta e armazenando em suas variaveis
    printf("\nAgora digite os dados da 2a carta.\n");
    printf("\nCarta2");

    printf("\nInsira uma letra para o Estado correspondente a 2a carta: ");
    scanf(" %c", &estado2);

    printf("\nInsira um código de 3 dígitos para o Estado correspondente a 2a carta: ");
    scanf(" %s", &codCarta2);

    printf("\nInsira o nome correspondente  a cidade da 2a carta: ");
    scanf("%s", &nomeCidade2);

    printf("\nInsira o tamanho da populacao correspondente a 2a carta: ");
    scanf("%i", &populacao2);

    printf("\nInsira a area habitacional correspondente a 2a carta: ");
    scanf("%f", &areaHabitacao2);

    printf("\nInsira o PIB (Produto interno Bruto) correspondente a 2a carta: ");
    scanf("%f", &pib2);

    printf("\nInsira um numero de pontos turisticos correspondente a 2a carta: ");
    scanf("%i", &pontosturisticos2);


    //Calculando a densidade populacional da carta 2
    densidadePopulacao2 = populacao2 / areaHabitacao2;

    //Calculando PIB PerCapta da carta 1
    pibPercapta2 = pib2 / areaHabitacao2;


    //Mostrando as informacões da carta 1 para o usuario
    printf("\n************************************\n"
        "*               Carta 1            *\n"
        "************************************\n"
        "Estado: %c\n"
        "Código: %s\n"
        "Nome da cidade: %s\n"
        "Populacao: %d de habitantes\n"
        "Area habitacional: %.2f km\n"
        "PIB: R$ %.2f \n"
        "Pontos turisticos: %d\n"
        "Densidade Populacional: %2f hab/km\n"
        "PIB per Capita: %2f reais\n",
        estado1, codCarta1, nomeCidade1, populacao1, areaHabitacao1, pib1, pontosturisticos1, densidadePopulacao1, pibPercapta1);


    //Mostrando as informacões da carta 2 para o usuario
    printf("\n************************************\n"
        "*               Carta 2            *\n"
        "************************************\n"
        "Estado: %c\n"
        "Código: %s\n"
        "Nome da cidade: %s\n"
        "Populacao: %d de habitantes\n"
        "Area habitacional: %.2f km\n"
        "PIB: R$ %.2f \n"
        "Pontos turisticos: %d\n"
        "Densidade Populacional: %2f hab/km\n"
        "PIB per Capita: %2f reais\n",
        estado2, codCarta2, nomeCidade2, populacao2, areaHabitacao2, pib2, pontosturisticos2, densidadePopulacao2, pibPercapta2);

    return 0;
}
