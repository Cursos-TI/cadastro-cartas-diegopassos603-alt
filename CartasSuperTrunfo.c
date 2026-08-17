#include <stdio.h>

int main() {
    
    // Área para definição das variáveis para armazenar as propriedades das cidades
    
    // Declaração de variáveis da carta 1
    char estado1;
    char cidade1[50], codigo1[50];
    int populacao1, ponto_turistico1;
    float area1, pib1;
    float densidade1, capita1;

    // Declaração de variáveis da carta 2
    char estado2;
    char cidade2[50], codigo2[50];
    int populacao2, ponto_turistico2;
    float area2, pib2;
    float densidade2, capita2;

    // Área para entrada de dados

    // Entrada de dados para a carta 1
    printf("\n--- Carta 1 ---\n");

    printf("Estado: \n");
    scanf(" %c", &estado1);

    printf("Codigo: \n");
    scanf(" %s", codigo1);
    
    printf("Nome da Cidade: \n");
    scanf(" %[^\n]", cidade1);
    

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &ponto_turistico1);

    // Cálculo da densidade populacional e do PIB per capita

    densidade1 = populacao1 / area1;
    capita1 = (float) pib1 / populacao1;



    // Entrada de dados para a carta 2
    printf("\n--- Carta 2 ---\n");

    printf("Estado: \n");
    scanf(" %c", &estado2);

    printf("Codigo: \n");
    scanf(" %s", codigo2);

    printf("Nome da Cidade: \n");
    scanf(" %[^\n]", cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área: \n");
    scanf(" %f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &ponto_turistico2);

    // Cálculo da densidade populacional e do PIB per capita

    densidade2 = populacao2 / area2;
    capita2 = (float) pib2 / populacao2;

    // Área para exibição dos dados da cidade carta 1

    printf("\n--- Carta 1 ---\n");

    printf("Estado: %c\n", estado1);
    printf("Codígo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", ponto_turistico1);
    printf("Densidade Populacional: %.2f hab/km\n", densidade1);
    printf("PIB per Capita: %f reais\n", capita1);


    printf("\n--- Carta 2 ---\n");

    printf("Estado: %c\n", estado2);
    printf("Codígo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", ponto_turistico2);
    printf("Densidade Populacional: %.2f hab/km\n", densidade2);
    printf("PIB per Capita: %f reais\n", capita2);
    

    return 0;
}